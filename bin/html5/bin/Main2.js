(function () { "use strict";
var $hxClasses = {},$estr = function() { return js.Boot.__string_rec(this,''); };
function $extend(from, fields) {
	function Inherit() {} Inherit.prototype = from; var proto = new Inherit();
	for (var name in fields) proto[name] = fields[name];
	if( fields.toString !== Object.prototype.toString ) proto.toString = fields.toString;
	return proto;
}
var ApplicationMain = function() { };
$hxClasses["ApplicationMain"] = ApplicationMain;
ApplicationMain.__name__ = ["ApplicationMain"];
ApplicationMain.loadEmbed = function(o) {
	ApplicationMain.embeds++;
	var f = null;
	f = function(_) {
		o.removeEventListener("load",f);
		if(--ApplicationMain.embeds == 0) ApplicationMain.preload();
	};
	o.addEventListener("load",f);
};
ApplicationMain.main = function() {
	if(ApplicationMain.embeds == 0) ApplicationMain.preload();
};
ApplicationMain.preload = function() {
	ApplicationMain.completed = 0;
	ApplicationMain.loaders = new haxe.ds.StringMap();
	ApplicationMain.urlLoaders = new haxe.ds.StringMap();
	ApplicationMain.total = 0;
	flash.Lib.get_current().loaderInfo = flash.display.LoaderInfo.create(null);
	flash.Lib.get_stage().set_frameRate(60);
	flash.Lib.get_current().addChild(ApplicationMain.preloader = new com.haxepunk.Preloader());
	ApplicationMain.preloader.onInit();
	ApplicationMain.loadFile("graphics/debug/console_debug.png");
	ApplicationMain.loadFile("graphics/debug/console_hidden.png");
	ApplicationMain.loadFile("graphics/debug/console_logo.png");
	ApplicationMain.loadFile("graphics/debug/console_output.png");
	ApplicationMain.loadFile("graphics/debug/console_pause.png");
	ApplicationMain.loadFile("graphics/debug/console_play.png");
	ApplicationMain.loadFile("graphics/debug/console_step.png");
	ApplicationMain.loadFile("graphics/debug/console_visible.png");
	ApplicationMain.loadFile("graphics/preloader/haxepunk.png");
	ApplicationMain.loadFile("font/04B_03__.ttf.png");
	ApplicationMain.loadFile("graphics/block1.png");
	ApplicationMain.loadFile("graphics/block2.png");
	ApplicationMain.loadFile("graphics/magic.png");
	ApplicationMain.loadFile("graphics/player.png");
	var resourcePrefix = "NME_:bitmap_";
	var _g = 0;
	var _g1 = haxe.Resource.listNames();
	while(_g < _g1.length) {
		var resourceName = _g1[_g];
		++_g;
		if(StringTools.startsWith(resourceName,resourcePrefix)) {
			var type = Type.resolveClass(StringTools.replace(resourceName.substring(resourcePrefix.length),"_","."));
			if(type != null) {
				ApplicationMain.total++;
				var instance = Type.createInstance(type,[0,0,true,16777215,ApplicationMain.bitmapClass_onComplete]);
			}
		}
	}
	if(ApplicationMain.total != 0) {
		ApplicationMain.loaderStack = [];
		var $it0 = ApplicationMain.loaders.keys();
		while( $it0.hasNext() ) {
			var p = $it0.next();
			ApplicationMain.loaderStack.push(p);
		}
		ApplicationMain.urlLoaderStack = [];
		var $it1 = ApplicationMain.urlLoaders.keys();
		while( $it1.hasNext() ) {
			var p1 = $it1.next();
			ApplicationMain.urlLoaderStack.push(p1);
		}
		var _g2 = 0;
		while(_g2 < 8) {
			var i = _g2++;
			ApplicationMain.nextLoader();
		}
	} else ApplicationMain.begin();
};
ApplicationMain.nextLoader = function() {
	if(ApplicationMain.loaderStack.length != 0) {
		var p = ApplicationMain.loaderStack.shift();
		var o = ApplicationMain.loaders.get(p);
		o.contentLoaderInfo.addEventListener("complete",ApplicationMain.loader_onComplete);
		o.load(new flash.net.URLRequest(p));
	} else if(ApplicationMain.urlLoaderStack.length != 0) {
		var p1 = ApplicationMain.urlLoaderStack.shift();
		var o1 = ApplicationMain.urlLoaders.get(p1);
		o1.addEventListener("complete",ApplicationMain.loader_onComplete);
		o1.load(new flash.net.URLRequest(p1));
	}
};
ApplicationMain.loadFile = function(p) {
	var value = new flash.display.Loader();
	ApplicationMain.loaders.set(p,value);
	ApplicationMain.total++;
};
ApplicationMain.loadBinary = function(p) {
	var o = new flash.net.URLLoader();
	o.set_dataFormat(0);
	ApplicationMain.urlLoaders.set(p,o);
	ApplicationMain.total++;
};
ApplicationMain.loadSound = function(p) {
	return;
	var i = p.lastIndexOf(".");
	var c = flash.media.Sound;
	var s;
	var o;
	var m = flash.Lib.get_mobile();
	var f = null;
	var q = "canplaythrough";
	if(i == -1) return;
	if(!c.canPlayType || !c.canPlayType(HxOverrides.substr(p,i + 1,null))) return;
	s = HxOverrides.substr(p,0,i) + ".mp3";
	if(c.library.exists(s)) return;
	ApplicationMain.total++;
	c.library.set(s,o = new Audio(p));
	f = function(_) {
		if(!m) o.removeEventListener(q,f);
		ApplicationMain.preloader.onUpdate(++ApplicationMain.completed,ApplicationMain.total);
		if(ApplicationMain.completed == ApplicationMain.total) ApplicationMain.begin();
	};
	if(m) f(null); else o.addEventListener(q,f);
};
ApplicationMain.begin = function() {
	ApplicationMain.preloader.addEventListener("complete",ApplicationMain.preloader_onComplete);
	ApplicationMain.preloader.onLoaded();
};
ApplicationMain.bitmapClass_onComplete = function(instance) {
	ApplicationMain.completed++;
	var classType = Type.getClass(instance);
	classType.preload = instance;
	if(ApplicationMain.completed == ApplicationMain.total) ApplicationMain.begin();
};
ApplicationMain.loader_onComplete = function(event) {
	ApplicationMain.completed++;
	ApplicationMain.preloader.onUpdate(ApplicationMain.completed,ApplicationMain.total);
	if(ApplicationMain.completed == ApplicationMain.total) ApplicationMain.begin(); else ApplicationMain.nextLoader();
};
ApplicationMain.preloader_onComplete = function(event) {
	ApplicationMain.preloader.removeEventListener("complete",ApplicationMain.preloader_onComplete);
	flash.Lib.get_current().removeChild(ApplicationMain.preloader);
	ApplicationMain.preloader = null;
	if(Main.main == null) {
		var o = new DocumentClass();
		if(js.Boot.__instanceof(o,flash.display.DisplayObject)) flash.Lib.get_current().addChild(o);
	} else Main.main();
};
var flash = {};
flash.events = {};
flash.events.IEventDispatcher = function() { };
$hxClasses["flash.events.IEventDispatcher"] = flash.events.IEventDispatcher;
flash.events.IEventDispatcher.__name__ = ["flash","events","IEventDispatcher"];
flash.events.IEventDispatcher.prototype = {
	addEventListener: null
	,removeEventListener: null
	,dispatchEvent: null
	,__class__: flash.events.IEventDispatcher
};
flash.events.EventDispatcher = function() {
	this.eventList = new haxe.ds.StringMap();
};
$hxClasses["flash.events.EventDispatcher"] = flash.events.EventDispatcher;
flash.events.EventDispatcher.__name__ = ["flash","events","EventDispatcher"];
flash.events.EventDispatcher.__interfaces__ = [flash.events.IEventDispatcher];
flash.events.EventDispatcher.prototype = {
	eventList: null
	,addEventListener: function(type,listener,useCapture,priority,weak) {
		if(weak == null) weak = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		var o;
		if(!this.eventList.exists(type)) {
			var value = o = [];
			this.eventList.set(type,value);
		} else o = this.eventList.get(type);
		o.push(listener);
	}
	,removeEventListener: function(type,listener,useCapture,priority,weak) {
		if(weak == null) weak = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		if(this.eventList.exists(type)) {
			var r = this.eventList.get(type);
			var _g = 0;
			while(_g < r.length) {
				var o = r[_g];
				++_g;
				if(Reflect.compareMethods(o,listener)) {
					HxOverrides.remove(r,o);
					break;
				}
			}
			if(r.length == 0) this.eventList.remove(type);
		}
	}
	,hasEventListener: function(type) {
		return this.eventList.exists(type);
	}
	,dispatchEvent: function(event) {
		if(event.get_target() == null) event.set_target(this);
		var t = event.type;
		if(this.eventList.exists(t)) {
			var _g = 0;
			var _g1 = this.eventList.get(t);
			while(_g < _g1.length) {
				var o = _g1[_g];
				++_g;
				o(event);
			}
		}
		return true;
	}
	,__class__: flash.events.EventDispatcher
};
flash.events.EventWrapper = function() {
	flash.events.EventDispatcher.call(this);
	this.eventMap = new haxe.ds.ObjectMap();
};
$hxClasses["flash.events.EventWrapper"] = flash.events.EventWrapper;
flash.events.EventWrapper.__name__ = ["flash","events","EventWrapper"];
flash.events.EventWrapper.__super__ = flash.events.EventDispatcher;
flash.events.EventWrapper.prototype = $extend(flash.events.EventDispatcher.prototype,{
	component: null
	,eventMap: null
	,addEventListener: function(type,listener,useCapture,priority,weak) {
		if(weak == null) weak = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		var _g = this;
		flash.events.EventDispatcher.prototype.addEventListener.call(this,type,listener,useCapture,priority,weak);
		var f;
		var wrapper = function(e) {
			if(e.get_target() == _g.component) e.set_target(_g);
			e.set_currentTarget(_g);
			listener(e);
		};
		f = wrapper;
		if(!(this.eventMap.h.__keys__[listener.__id__] != null)) this.eventMap.set(listener,f);
		this.component.addEventListener(type,f,useCapture);
	}
	,removeEventListener: function(type,listener,useCapture,priority,weak) {
		if(weak == null) weak = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		flash.events.EventDispatcher.prototype.removeEventListener.call(this,type,listener,useCapture,priority,weak);
		if(this.eventMap.h.__keys__[listener.__id__] != null) {
			this.component.removeEventListener(type,this.eventMap.h[listener.__id__],useCapture);
			this.eventMap.remove(listener);
		}
	}
	,__class__: flash.events.EventWrapper
});
flash.display = {};
flash.display.DisplayObject = function() {
	this.y = 0;
	this.x = 0;
	this.rotation = 0;
	this.scaleY = 1;
	this.scaleX = 1;
	this.alpha = 1;
	this.visible = true;
	flash.events.EventWrapper.call(this);
	this.eventRemap = new haxe.ds.StringMap();
	if(this.component == null) this.component = flash.Lib.jsNode("div");
	this.component.node = this;
	this.transform = new flash.geom.Transform(this);
};
$hxClasses["flash.display.DisplayObject"] = flash.display.DisplayObject;
flash.display.DisplayObject.__name__ = ["flash","display","DisplayObject"];
flash.display.DisplayObject.__super__ = flash.events.EventWrapper;
flash.display.DisplayObject.prototype = $extend(flash.events.EventWrapper.prototype,{
	name: null
	,visible: null
	,alpha: null
	,scaleX: null
	,scaleY: null
	,rotation: null
	,x: null
	,y: null
	,parent: null
	,scrollRect: null
	,mask: null
	,transform: null
	,filters: null
	,loaderInfo: null
	,mouseX: null
	,mouseY: null
	,_stage: null
	,qWidth: null
	,qHeight: null
	,broadcastEvent: function(e) {
		this.dispatchEvent(e);
	}
	,invalidate: function() {
	}
	,_syncMtx_set: null
	,syncMtx: function() {
		var s = this.component.style;
		var v;
		var n;
		if(this._syncMtx_set != true) {
			this._syncMtx_set = true;
			flash.Lib.setCSSProperties(s,"transform-origin","0% 0%",31);
		}
		v = "";
		if(this.x != 0 || this.y != 0) v += "translate(" + this.x + "px, " + this.y + "px) ";
		if(this.scaleX != 1 || this.scaleY != 1) v += "scale(" + this.scaleX + ", " + this.scaleY + ") ";
		if(this.rotation != 0) v += "rotate(" + this.rotation + "deg) ";
		if(this.transform != null) {
			var m = this.transform.get_matrix();
			if(m != null && !m.isIdentity()) v += "matrix(" + m.a + ", " + m.b + ", " + m.c + ", " + m.d + ", " + m.tx + ", " + m.ty + ")" + " ";
		}
		n = "transform";
		s.setProperty(n,v,null);
		s.setProperty("-o-" + n,v,null);
		s.setProperty("-ms-" + n,v,null);
		s.setProperty("-moz-" + n,v,null);
		s.setProperty("-webkit-" + n,v,null);
	}
	,set_x: function(v) {
		if(this.x != v) {
			this.x = v;
			this.syncMtx();
		}
		return v;
	}
	,set_y: function(v) {
		if(this.y != v) {
			this.y = v;
			this.syncMtx();
		}
		return v;
	}
	,set_rotation: function(v) {
		if(this.rotation != v) {
			this.rotation = v;
			this.syncMtx();
		}
		return v;
	}
	,set_scaleX: function(v) {
		if(this.scaleX != v) {
			this.scaleX = v;
			this.syncMtx();
		}
		return v;
	}
	,set_scaleY: function(v) {
		if(this.scaleY != v) {
			this.scaleY = v;
			this.syncMtx();
		}
		return v;
	}
	,get_width: function() {
		return this.qWidth || 0;
	}
	,get_height: function() {
		return this.qHeight || 0;
	}
	,set_width: function(v) {
		var q = this.get_width();
		this.set_scaleX(q == 0 || q == null?1:v / q);
		this.qWidth = v;
		return v;
	}
	,set_height: function(v) {
		var q = this.get_height();
		this.set_scaleY(q == 0 || q == null?1:v / q);
		this.qHeight = v;
		return v;
	}
	,set_alpha: function(v) {
		if(v != this.alpha) this.component.style.opacity = (this.alpha = v).toFixed(4);
		return v;
	}
	,set_visible: function(v) {
		if(this.visible = v) this.component.style.display = null; else this.component.style.display = "none";
		return v;
	}
	,set_scrollRect: function(v) {
		var v1 = Std.string(this) + ".scrollRect = " + Std.string(v);
		null;
		return v;
	}
	,get_stage: function() {
		return this._stage;
	}
	,set_stage: function(v) {
		if(this._stage != v) {
			var z = this._stage != null != (v != null);
			this._stage = v;
			if(z) this.dispatchEvent(new flash.events.Event(v != null?"addedToStage":"removedFromStage"));
		}
		return v;
	}
	,getBounds: function(o) {
		var m = this.getGlobalMatrix();
		var r = new flash.geom.Rectangle(0,0,this.get_width(),this.get_height());
		if(o == null) o = this;
		if(o != this) {
			r.transform(m);
			if(o != null) {
				m = o.getGlobalMatrix();
				m.invert();
				r.transform(m);
			}
		}
		return r;
	}
	,getRect: function(o) {
		return this.getBounds(o);
	}
	,concatTransform: function(m) {
		if(!this.transform.get_matrix().isIdentity()) m.concat(this.transform.get_matrix());
		if(this.rotation != 0) m.rotate(this.rotation * Math.PI / 180);
		if(this.scaleX != 1 || this.scaleY != 1) m.scale(this.scaleX,this.scaleY);
		if(this.x != 0 || this.y != 0) m.translate(this.x,this.y);
	}
	,getGlobalMatrix: function(m) {
		if(m == null) m = new flash.geom.Matrix();
		var o = this;
		while(o != null) {
			o.concatTransform(m);
			o = o.parent;
		}
		return m;
	}
	,globalToLocal: function(q,r) {
		if(r == null) r = new flash.geom.Point();
		var m = flash.display.DisplayObject.convMatrix;
		var u = q.x;
		var v = q.y;
		if(m == null) m = flash.display.DisplayObject.convMatrix = new flash.geom.Matrix();
		m.identity();
		m = this.getGlobalMatrix(m);
		m.invert();
		r.x = u * m.a + v * m.c + m.tx;
		r.y = u * m.b + v * m.d + m.ty;
		return r;
	}
	,localToGlobal: function(q,r) {
		if(r == null) r = new flash.geom.Point();
		var m = flash.display.DisplayObject.convMatrix;
		var u = q.x;
		var v = q.y;
		if(m == null) m = flash.display.DisplayObject.convMatrix = new flash.geom.Matrix();
		m.identity();
		m = this.getGlobalMatrix(m);
		r.x = u * m.a + v * m.c + m.tx;
		r.y = u * m.b + v * m.d + m.ty;
		return r;
	}
	,get_mouseX: function() {
		return (flash.display.DisplayObject.convPoint = this.globalToLocal(flash.Lib.get_current().get_stage().mousePos,flash.display.DisplayObject.convPoint)).x;
	}
	,get_mouseY: function() {
		return (flash.display.DisplayObject.convPoint = this.globalToLocal(flash.Lib.get_current().get_stage().mousePos,flash.display.DisplayObject.convPoint)).y;
	}
	,hitTestPoint: function(x,y,p) {
		if(p == null) p = false;
		flash.display.DisplayObject.convPoint.x = x;
		flash.display.DisplayObject.convPoint.y = y;
		this.globalToLocal(flash.display.DisplayObject.convPoint,flash.display.DisplayObject.convPoint);
		return this.hitTestLocal(flash.display.DisplayObject.convPoint.x,flash.display.DisplayObject.convPoint.y,p);
	}
	,hitTestLocal: function(x,y,p,v) {
		return (!v || this.visible) && x >= 0 && y >= 0 && x <= this.get_width() && y <= this.get_height();
	}
	,eventRemap: null
	,addEventListener: function(type,listener,useCapture,priority,weak) {
		if(weak == null) weak = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		flash.events.EventWrapper.prototype.addEventListener.call(this,type,listener,useCapture,priority,weak);
	}
	,broadcastMouse: function(h,e,ms,mc) {
		if(!this.visible) return false;
		var o;
		var t = e.type;
		var m;
		var m2;
		var d = h.length;
		var l;
		var x;
		var y;
		if(this.hasEventListener(t) || t == "mouseMove" && (this.hasEventListener(t = "mouseOver") || this.hasEventListener(t = "mouseOut"))) {
			h.push(this);
			if(mc.length > 0) m = mc.pop(); else m = new flash.geom.Matrix();
			l = ms.length;
			while(l <= d) {
				o = h[l];
				m.identity();
				o.concatTransform(m);
				m.invert();
				if(mc.length > 0) m2 = mc.pop(); else m2 = new flash.geom.Matrix();
				if(l > 0) m2.copy(ms[l - 1]); else m2.identity();
				m2.concat(m);
				ms.push(m2);
				l++;
			}
			m.copy(ms[d]);
			x = e.stageX * m.a + e.stageY * m.c + m.tx;
			y = e.stageX * m.b + e.stageY * m.d + m.ty;
			mc.push(m);
			h.pop();
			if(this.hitTestLocal(x,y,true,true)) {
				if(e.relatedObject == null) {
					e.localX = x;
					e.localY = y;
					e.relatedObject = this;
				}
				if(t == e.type) {
					this.dispatchEvent(e);
					return true;
				}
			}
		}
		return false;
	}
	,dispatchEvent: function(event) {
		var r = flash.events.EventWrapper.prototype.dispatchEvent.call(this,event);
		if(r && flash.display.DisplayObject.routedEvents.exists(event.type) && event.bubbles) {
			var o = this.parent;
			if(o != null) o.dispatchEvent(event);
		}
		return r;
	}
	,toString: function() {
		return Type.getClassName(Type.getClass(this));
	}
	,__class__: flash.display.DisplayObject
	,__properties__: {get_mouseY:"get_mouseY",get_mouseX:"get_mouseX",set_scrollRect:"set_scrollRect",set_height:"set_height",get_height:"get_height",set_width:"set_width",get_width:"get_width",set_y:"set_y",set_x:"set_x",set_rotation:"set_rotation",set_scaleY:"set_scaleY",set_scaleX:"set_scaleX",set_alpha:"set_alpha",set_visible:"set_visible",set_stage:"set_stage",get_stage:"get_stage"}
});
flash.display.InteractiveObject = function() {
	flash.display.DisplayObject.call(this);
	this.tabEnabled = false;
	this.tabIndex = 0;
	this.mouseEnabled = this.doubleClickEnabled = true;
};
$hxClasses["flash.display.InteractiveObject"] = flash.display.InteractiveObject;
flash.display.InteractiveObject.__name__ = ["flash","display","InteractiveObject"];
flash.display.InteractiveObject.__super__ = flash.display.DisplayObject;
flash.display.InteractiveObject.prototype = $extend(flash.display.DisplayObject.prototype,{
	doubleClickEnabled: null
	,focusRect: null
	,mouseEnabled: null
	,tabEnabled: null
	,tabIndex: null
	,giveFocus: function() {
		this.component.focus();
	}
	,__class__: flash.display.InteractiveObject
});
flash.display.DisplayObjectContainer = function() {
	flash.display.InteractiveObject.call(this);
	this.children = [];
	this.mouseChildren = true;
};
$hxClasses["flash.display.DisplayObjectContainer"] = flash.display.DisplayObjectContainer;
flash.display.DisplayObjectContainer.__name__ = ["flash","display","DisplayObjectContainer"];
flash.display.DisplayObjectContainer.__super__ = flash.display.InteractiveObject;
flash.display.DisplayObjectContainer.prototype = $extend(flash.display.InteractiveObject.prototype,{
	children: null
	,numChildren: null
	,mouseChildren: null
	,get_numChildren: function() {
		return this.children.length;
	}
	,addChild: function(o) {
		if(o.parent != null) o.parent.removeChild(o);
		o.parent = this;
		o.set_stage(this.get_stage());
		this.children.push(o);
		this.component.appendChild(o.component);
		var e = new flash.events.Event("added");
		o.dispatchEvent(e);
		this.dispatchEvent(e);
		return o;
	}
	,removeChild: function(o) {
		o.parent = null;
		o.set_stage(null);
		HxOverrides.remove(this.children,o);
		this.component.removeChild(o.component);
		var e = new flash.events.Event("removed");
		o.dispatchEvent(e);
		this.dispatchEvent(e);
		return o;
	}
	,addChildAt: function(o,v) {
		if(v < this.children.length) {
			if(o.parent != null) o.parent.removeChild(o);
			o.parent = this;
			o.set_stage(this.get_stage());
			this.component.insertBefore(o.component,this.children[v].component);
			this.children.splice(v,0,o);
			return o;
		} else return this.addChild(o);
	}
	,removeChildAt: function(v) {
		return this.removeChild(this.children[v]);
	}
	,removeChildren: function(b,e) {
		if(b == null) b = 0;
		if(e == null) e = this.children.length;
		var i = e - b;
		while(--i >= 0) this.removeChild(this.children[b]);
	}
	,getChildAt: function(v) {
		return this.children[v];
	}
	,getChildIndex: function(v) {
		var i = -1;
		var l = this.children.length;
		while(++i < l) if(this.children[i] == v) return i;
		return -1;
	}
	,contains: function(v) {
		var _g = 0;
		var _g1 = this.children;
		while(_g < _g1.length) {
			var o = _g1[_g];
			++_g;
			if(o == v) return true;
		}
		return false;
	}
	,broadcastEvent: function(e) {
		this.dispatchEvent(e);
		var _g = 0;
		var _g1 = this.children;
		while(_g < _g1.length) {
			var o = _g1[_g];
			++_g;
			o.broadcastEvent(e);
		}
	}
	,broadcastMouse: function(h,e,ms,mc) {
		if(!this.visible) return false;
		var r = false;
		var l = this.children.length;
		var i = this.children.length;
		if(this.mouseChildren) {
			h.push(this);
			while(--i >= 0) r = r || this.children[i].broadcastMouse(h,e,ms,mc);
			h.pop();
		}
		r = r || flash.display.InteractiveObject.prototype.broadcastMouse.call(this,h,e,ms,mc);
		while(ms.length > h.length) mc.push(ms.pop());
		return r;
	}
	,hitTestLocal: function(x,y,p,v) {
		if(!v || this.visible) {
			var i = this.children.length;
			var m;
			var o;
			if(i > 0) {
				m = flash.geom.Matrix.create();
				while(--i >= 0) {
					m.identity();
					o = this.children[i];
					o.concatTransform(m);
					m.invert();
					if(o.hitTestLocal(x * m.a + y * m.c + m.tx,x * m.b + y * m.d + m.ty,p,v)) return true;
				}
				flash.geom.Matrix.pool.push(m);
			}
		}
		return false;
	}
	,set_stage: function(v) {
		flash.display.InteractiveObject.prototype.set_stage.call(this,v);
		var _g = 0;
		var _g1 = this.children;
		while(_g < _g1.length) {
			var o = _g1[_g];
			++_g;
			o.set_stage(v);
		}
		return v;
	}
	,__class__: flash.display.DisplayObjectContainer
	,__properties__: $extend(flash.display.InteractiveObject.prototype.__properties__,{get_numChildren:"get_numChildren"})
});
flash.display.IBitmapDrawable = function() { };
$hxClasses["flash.display.IBitmapDrawable"] = flash.display.IBitmapDrawable;
flash.display.IBitmapDrawable.__name__ = ["flash","display","IBitmapDrawable"];
flash.display.IBitmapDrawable.prototype = {
	drawToSurface: null
	,__class__: flash.display.IBitmapDrawable
};
flash.display.Sprite = function() {
	flash.display.DisplayObjectContainer.call(this);
};
$hxClasses["flash.display.Sprite"] = flash.display.Sprite;
flash.display.Sprite.__name__ = ["flash","display","Sprite"];
flash.display.Sprite.__interfaces__ = [flash.display.IBitmapDrawable];
flash.display.Sprite.__super__ = flash.display.DisplayObjectContainer;
flash.display.Sprite.prototype = $extend(flash.display.DisplayObjectContainer.prototype,{
	graphics: null
	,_graphics: null
	,useHandCursor: null
	,buttonMode: null
	,get_graphics: function() {
		if(this._graphics == null) {
			var o = new flash.display.Graphics();
			var q = o.component;
			o.set_displayObject(this);
			if(this.children.length == 0) this.component.appendChild(q); else this.component.insertBefore(q,this.children[0].component);
			this._graphics = o;
		}
		return this._graphics;
	}
	,set_stage: function(v) {
		var z = this.get_stage() == null && v != null;
		var r = flash.display.DisplayObjectContainer.prototype.set_stage.call(this,v);
		if(z && this._graphics != null) this._graphics.invalidate();
		return r;
	}
	,set_useHandCursor: function(o) {
		if(o) this.component.style.cursor = "pointer"; else this.component.style.cursor = null;
		return this.useHandCursor = o;
	}
	,drawToSurface: function(cnv,ctx,mtx,ctr,blendMode,clipRect,smoothing) {
		this.get_graphics().drawToSurface(cnv,ctx,mtx,ctr,blendMode,clipRect,smoothing);
	}
	,hitTestLocal: function(x,y,p,v) {
		var g;
		return (!v || this.visible) && (flash.display.DisplayObjectContainer.prototype.hitTestLocal.call(this,x,y,p,v) || (g = this._graphics) != null && g.hitTestLocal(x,y,p));
	}
	,__class__: flash.display.Sprite
	,__properties__: $extend(flash.display.DisplayObjectContainer.prototype.__properties__,{set_useHandCursor:"set_useHandCursor",get_graphics:"get_graphics"})
});
var com = {};
com.haxepunk = {};
com.haxepunk.Engine = function(width,height,frameRate,fixed,renderMode) {
	if(fixed == null) fixed = false;
	if(frameRate == null) frameRate = 60;
	if(height == null) height = 0;
	if(width == null) width = 0;
	this._scenes = new List();
	this._scene = new com.haxepunk.Scene();
	flash.display.Sprite.call(this);
	com.haxepunk.HXP.bounds = new flash.geom.Rectangle(0,0,width,height);
	com.haxepunk.HXP.assignedFrameRate = frameRate;
	com.haxepunk.HXP.fixed = fixed;
	com.haxepunk.HXP.engine = this;
	com.haxepunk.HXP.width = width;
	com.haxepunk.HXP.height = height;
	if(renderMode != null) {
		com.haxepunk.HXP.renderMode = renderMode;
		if(com.haxepunk.HXP.screen == null) com.haxepunk.HXP.screen = new com.haxepunk.Screen(); else com.haxepunk.HXP.screen.init();
		renderMode;
	} else com.haxepunk.HXP.set_renderMode(com.haxepunk.RenderMode.BUFFER);
	if(com.haxepunk.HXP.randomSeed == 0) com.haxepunk.HXP.set_randomSeed(Std["int"](2147483647 * Math.random()));
	com.haxepunk.HXP.entity = new com.haxepunk.Entity();
	com.haxepunk.HXP.set_time(flash.Lib.getTimer());
	this.paused = false;
	this.maxElapsed = 0.0333;
	this.maxFrameSkip = 5;
	this.tickRate = 4;
	this._frameList = new Array();
	this._systemTime = this._delta = this._frameListSum = 0;
	this._frameLast = 0;
	this.addEventListener("addedToStage",$bind(this,this.onStage));
	flash.Lib.get_current().addChild(this);
};
$hxClasses["com.haxepunk.Engine"] = com.haxepunk.Engine;
com.haxepunk.Engine.__name__ = ["com","haxepunk","Engine"];
com.haxepunk.Engine.__super__ = flash.display.Sprite;
com.haxepunk.Engine.prototype = $extend(flash.display.Sprite.prototype,{
	paused: null
	,maxElapsed: null
	,maxFrameSkip: null
	,tickRate: null
	,init: function() {
	}
	,focusGained: function() {
	}
	,focusLost: function() {
	}
	,update: function() {
		this._scene.updateLists();
		if(this._scene != null && !this._scenes.isEmpty() && this._scenes.first() != this._scene) {
			this._scene.end();
			this._scene.updateLists();
			if(this._scene.autoClear && this._scene.get_hasTween()) this._scene.clearTweens();
			if(this.contains(this._scene.sprite)) this.removeChild(this._scene.sprite);
			this._scene = this._scenes.first();
			this.addChild(this._scene.sprite);
			com.haxepunk.HXP.camera = this._scene.camera;
			this._scene.updateLists();
			this._scene.begin();
			this._scene.updateLists();
		}
		if(com.haxepunk.HXP.tweener.active && com.haxepunk.HXP.tweener.get_hasTween()) com.haxepunk.HXP.tweener.updateTweens();
		if(this._scene.active) {
			if(this._scene.get_hasTween()) this._scene.updateTweens();
			this._scene.update();
		}
		this._scene.updateLists(false);
		com.haxepunk.HXP.screen.update();
	}
	,render: function() {
		if(com.haxepunk.HXP.screen.needsResize) com.haxepunk.HXP.resize(com.haxepunk.HXP.windowWidth,com.haxepunk.HXP.windowHeight);
		var t = flash.Lib.getTimer();
		if(this._frameLast == 0) this._frameLast = t | 0;
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
			com.haxepunk.HXP.screen.swap();
			com.haxepunk.HXP.screen.refresh();
		}
		com.haxepunk.utils.Draw.resetTarget();
		if(this._scene.visible) this._scene.render();
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) com.haxepunk.HXP.screen.redraw();
		t = flash.Lib.getTimer();
		this._frameListSum += this._frameList[this._frameList.length] = t - this._frameLast | 0;
		if(this._frameList.length > 10) this._frameListSum -= this._frameList.shift();
		com.haxepunk.HXP.frameRate = 1000 / (this._frameListSum / this._frameList.length);
		this._frameLast = t;
	}
	,setStageProperties: function() {
		var _g = this;
		com.haxepunk.HXP.stage.set_frameRate(com.haxepunk.HXP.assignedFrameRate);
		com.haxepunk.HXP.stage.align = "TOP_LEFT";
		com.haxepunk.HXP.stage.scaleMode = "NO_SCALE";
		com.haxepunk.HXP.stage.displayState = "NORMAL";
		com.haxepunk.HXP.windowWidth = com.haxepunk.HXP.stage.get_stageWidth();
		com.haxepunk.HXP.windowHeight = com.haxepunk.HXP.stage.get_stageHeight();
		this.resize();
		com.haxepunk.HXP.stage.addEventListener("resize",function(e) {
			_g.resize();
		});
		com.haxepunk.HXP.stage.addEventListener("activate",function(e1) {
			com.haxepunk.HXP.focused = true;
			_g.focusGained();
			_g._scene.focusGained();
		});
		com.haxepunk.HXP.stage.addEventListener("deactivate",function(e2) {
			com.haxepunk.HXP.focused = false;
			_g.focusLost();
			_g._scene.focusLost();
		});
	}
	,resize: function() {
		if(com.haxepunk.HXP.width == 0) com.haxepunk.HXP.width = com.haxepunk.HXP.stage.get_stageWidth();
		if(com.haxepunk.HXP.height == 0) com.haxepunk.HXP.height = com.haxepunk.HXP.stage.get_stageHeight();
		com.haxepunk.HXP.windowWidth = com.haxepunk.HXP.stage.get_stageWidth();
		com.haxepunk.HXP.windowHeight = com.haxepunk.HXP.stage.get_stageHeight();
		com.haxepunk.HXP.screen.set_scaleX(com.haxepunk.HXP.stage.get_stageWidth() / com.haxepunk.HXP.width);
		com.haxepunk.HXP.screen.set_scaleY(com.haxepunk.HXP.stage.get_stageHeight() / com.haxepunk.HXP.height);
		com.haxepunk.HXP.resize(com.haxepunk.HXP.stage.get_stageWidth(),com.haxepunk.HXP.stage.get_stageHeight());
	}
	,onStage: function(e) {
		this.removeEventListener("addedToStage",$bind(this,this.onStage));
		com.haxepunk.HXP.stage = this.get_stage();
		this.setStageProperties();
		com.haxepunk.utils.Input.enable();
		if(this._scene != null && !this._scenes.isEmpty() && this._scenes.first() != this._scene) {
			this._scene.end();
			this._scene.updateLists();
			if(this._scene.autoClear && this._scene.get_hasTween()) this._scene.clearTweens();
			if(this.contains(this._scene.sprite)) this.removeChild(this._scene.sprite);
			this._scene = this._scenes.first();
			this.addChild(this._scene.sprite);
			com.haxepunk.HXP.camera = this._scene.camera;
			this._scene.updateLists();
			this._scene.begin();
			this._scene.updateLists();
		}
		com.haxepunk.utils.Draw.init();
		this.init();
		this._rate = 1000 / com.haxepunk.HXP.assignedFrameRate;
		if(com.haxepunk.HXP.fixed) {
			this._skip = this._rate * (this.maxFrameSkip + 1);
			this._last = this._prev = flash.Lib.getTimer();
			this._timer = new haxe.Timer(this.tickRate);
			this._timer.run = $bind(this,this.onTimer);
		} else {
			this._last = flash.Lib.getTimer();
			this.addEventListener("enterFrame",$bind(this,this.onEnterFrame));
		}
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		} else {
		}
	}
	,onEnterFrame: function(e) {
		this._time = this._gameTime = flash.Lib.getTimer();
		com.haxepunk.HXP._systemTime = this._time - this._systemTime;
		this._updateTime = this._time;
		com.haxepunk.HXP.elapsed = (this._time - this._last) / 1000;
		if(com.haxepunk.HXP.elapsed > this.maxElapsed) com.haxepunk.HXP.elapsed = this.maxElapsed;
		com.haxepunk.HXP.elapsed *= com.haxepunk.HXP.rate;
		this._last = this._time;
		if(!this.paused) this.update();
		if(com.haxepunk.HXP.consoleEnabled()) ((function($this) {
			var $r;
			if(com.haxepunk.HXP._console == null) com.haxepunk.HXP._console = new com.haxepunk.debug.Console();
			$r = com.haxepunk.HXP._console;
			return $r;
		}(this))).update();
		com.haxepunk.utils.Input.update();
		this._time = this._renderTime = flash.Lib.getTimer();
		com.haxepunk.HXP._updateTime = this._time - this._updateTime;
		if(this.paused) this._frameLast = this._time; else this.render();
		this._time = this._systemTime = flash.Lib.getTimer();
		com.haxepunk.HXP._renderTime = this._time - this._renderTime;
		com.haxepunk.HXP._gameTime = this._time - this._gameTime;
	}
	,onTimer: function() {
		this._time = flash.Lib.getTimer();
		this._delta += this._time - this._last;
		this._last = this._time;
		if(this._delta < this._rate) return;
		this._gameTime = this._time | 0;
		com.haxepunk.HXP._systemTime = this._time - this._systemTime;
		if(this._delta > this._skip) this._delta = this._skip;
		while(this._delta >= this._rate) {
			com.haxepunk.HXP.elapsed = this._rate * com.haxepunk.HXP.rate * 0.001;
			this._updateTime = this._time;
			this._delta -= this._rate;
			this._prev = this._time;
			if(!this.paused) this.update();
			if(com.haxepunk.HXP.consoleEnabled()) ((function($this) {
				var $r;
				if(com.haxepunk.HXP._console == null) com.haxepunk.HXP._console = new com.haxepunk.debug.Console();
				$r = com.haxepunk.HXP._console;
				return $r;
			}(this))).update();
			com.haxepunk.utils.Input.update();
			this._time = flash.Lib.getTimer();
			com.haxepunk.HXP._updateTime = this._time - this._updateTime;
		}
		this._renderTime = this._time;
		if(!this.paused) this.render();
		this._time = this._systemTime = flash.Lib.getTimer();
		com.haxepunk.HXP._renderTime = this._time - this._renderTime;
		com.haxepunk.HXP._gameTime = this._time - this._gameTime;
	}
	,checkScene: function() {
		if(this._scene != null && !this._scenes.isEmpty() && this._scenes.first() != this._scene) {
			this._scene.end();
			this._scene.updateLists();
			if(this._scene.autoClear && this._scene.get_hasTween()) this._scene.clearTweens();
			if(this.contains(this._scene.sprite)) this.removeChild(this._scene.sprite);
			this._scene = this._scenes.first();
			this.addChild(this._scene.sprite);
			com.haxepunk.HXP.camera = this._scene.camera;
			this._scene.updateLists();
			this._scene.begin();
			this._scene.updateLists();
		}
	}
	,pushScene: function(value) {
		this._scenes.push(value);
	}
	,popScene: function() {
		return this._scenes.pop();
	}
	,get_scene: function() {
		return this._scene;
	}
	,set_scene: function(value) {
		if(this._scene == value) return value;
		if(this._scenes.length > 0) this._scenes.pop();
		this._scenes.push(value);
		return this._scene;
	}
	,_scene: null
	,_scenes: null
	,_delta: null
	,_time: null
	,_last: null
	,_timer: null
	,_rate: null
	,_skip: null
	,_prev: null
	,_updateTime: null
	,_renderTime: null
	,_gameTime: null
	,_systemTime: null
	,_frameLast: null
	,_frameListSum: null
	,_frameList: null
	,__class__: com.haxepunk.Engine
	,__properties__: $extend(flash.display.Sprite.prototype.__properties__,{set_scene:"set_scene",get_scene:"get_scene"})
});
var Main = function(width,height,frameRate,fixed,renderMode) {
	com.haxepunk.Engine.call(this,width,height,frameRate,fixed,renderMode);
};
$hxClasses["Main"] = Main;
Main.__name__ = ["Main"];
Main.main = function() {
	new Main();
};
Main.__super__ = com.haxepunk.Engine;
Main.prototype = $extend(com.haxepunk.Engine.prototype,{
	init: function() {
		com.haxepunk.HXP.set_scene(new MainScene());
	}
	,__class__: Main
});
var DocumentClass = function() {
	Main.call(this);
};
$hxClasses["DocumentClass"] = DocumentClass;
DocumentClass.__name__ = ["DocumentClass"];
DocumentClass.__super__ = Main;
DocumentClass.prototype = $extend(Main.prototype,{
	get_stage: function() {
		return flash.Lib.get_current().get_stage();
	}
	,__class__: DocumentClass
});
com.haxepunk.Tweener = function() {
	this.active = true;
	this.autoClear = false;
};
$hxClasses["com.haxepunk.Tweener"] = com.haxepunk.Tweener;
com.haxepunk.Tweener.__name__ = ["com","haxepunk","Tweener"];
com.haxepunk.Tweener.prototype = {
	active: null
	,autoClear: null
	,update: function() {
	}
	,addTween: function(t,start) {
		if(start == null) start = false;
		var ft = t;
		if(ft._parent != null) throw "Cannot add a Tween object more than once.";
		ft._parent = this;
		ft._next = this._tween;
		var friendTween = this._tween;
		if(this._tween != null) friendTween._prev = t;
		this._tween = t;
		if(start) this._tween.start(); else this._tween.active = false;
		return t;
	}
	,removeTween: function(t) {
		var ft = t;
		if(ft._parent != this) throw "Core object does not contain Tween.";
		if(ft._next != null) ft._next._prev = ft._prev;
		if(ft._prev != null) ft._prev._next = ft._next; else if(ft._next == null) this._tween = null; else this._tween = js.Boot.__cast(ft._next , com.haxepunk.Tween);
		ft._next = ft._prev = null;
		ft._parent = null;
		t.active = false;
		return t;
	}
	,clearTweens: function() {
		var t;
		var ft = this._tween;
		var fn;
		while(ft != null) {
			fn = ft._next;
			this.removeTween(js.Boot.__cast(ft , com.haxepunk.Tween));
			ft = fn;
		}
	}
	,updateTweens: function() {
		var t;
		var ft = this._tween;
		while(ft != null) {
			t = js.Boot.__cast(ft , com.haxepunk.Tween);
			if(t.active) {
				t.update();
				if(ft._finish) ft.finish();
			}
			ft = ft._next;
		}
	}
	,get_hasTween: function() {
		return this._tween != null;
	}
	,_tween: null
	,__class__: com.haxepunk.Tweener
	,__properties__: {get_hasTween:"get_hasTween"}
};
com.haxepunk.Mask = function() {
	this._parent = com.haxepunk.Entity._EMPTY;
	this._class = Type.getClassName(Type.getClass(this));
	this._check = new haxe.ds.StringMap();
	var key = Type.getClassName(com.haxepunk.Mask);
	this._check.set(key,$bind(this,this.collideMask));
	var key1 = Type.getClassName(com.haxepunk.masks.Masklist);
	this._check.set(key1,$bind(this,this.collideMasklist));
};
$hxClasses["com.haxepunk.Mask"] = com.haxepunk.Mask;
com.haxepunk.Mask.__name__ = ["com","haxepunk","Mask"];
com.haxepunk.Mask.prototype = {
	get_parent: function() {
		if(this._parent != com.haxepunk.Entity._EMPTY) return this._parent; else return null;
	}
	,set_parent: function(value) {
		if(value == null) this._parent = com.haxepunk.Entity._EMPTY; else {
			this._parent = value;
			this.update();
		}
		return value;
	}
	,list: null
	,collide: function(mask) {
		var cbFunc = this._check.get(mask._class);
		if(cbFunc != null) return cbFunc(mask);
		cbFunc = mask._check.get(this._class);
		if(cbFunc != null) return cbFunc(this);
		return false;
	}
	,collideMask: function(other) {
		return this._parent.get_x() - this._parent.originX + this._parent.width > other._parent.get_x() - other._parent.originX && this._parent.get_y() - this._parent.originY + this._parent.height > other._parent.get_y() - other._parent.originY && this._parent.get_x() - this._parent.originX < other._parent.get_x() - other._parent.originX + other._parent.width && this._parent.get_y() - this._parent.originY < other._parent.get_y() - other._parent.originY + other._parent.height;
	}
	,collideMasklist: function(other) {
		return other.collide(this);
	}
	,debugDraw: function(graphics,scaleX,scaleY) {
	}
	,update: function() {
	}
	,project: function(axis,projection) {
		var cur;
		var max = Math.NEGATIVE_INFINITY;
		var min = Math.POSITIVE_INFINITY;
		cur = -this._parent.originX * axis.x - this._parent.originY * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		cur = (-this._parent.originX + this._parent.width) * axis.x - this._parent.originY * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		cur = -this._parent.originX * axis.x + (-this._parent.originY + this._parent.height) * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		cur = (-this._parent.originX + this._parent.width) * axis.x + (-this._parent.originY + this._parent.height) * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		projection.min = min;
		projection.max = max;
	}
	,_class: null
	,_check: null
	,_parent: null
	,__class__: com.haxepunk.Mask
	,__properties__: {set_parent:"set_parent",get_parent:"get_parent"}
};
var Type = function() { };
$hxClasses["Type"] = Type;
Type.__name__ = ["Type"];
Type.getClass = function(o) {
	if(o == null) return null;
	return js.Boot.getClass(o);
};
Type.getClassName = function(c) {
	var a = c.__name__;
	return a.join(".");
};
Type.resolveClass = function(name) {
	var cl = $hxClasses[name];
	if(cl == null || !cl.__name__) return null;
	return cl;
};
Type.resolveEnum = function(name) {
	var e = $hxClasses[name];
	if(e == null || !e.__ename__) return null;
	return e;
};
Type.createInstance = function(cl,args) {
	var _g = args.length;
	switch(_g) {
	case 0:
		return new cl();
	case 1:
		return new cl(args[0]);
	case 2:
		return new cl(args[0],args[1]);
	case 3:
		return new cl(args[0],args[1],args[2]);
	case 4:
		return new cl(args[0],args[1],args[2],args[3]);
	case 5:
		return new cl(args[0],args[1],args[2],args[3],args[4]);
	case 6:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5]);
	case 7:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6]);
	case 8:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]);
	default:
		throw "Too many arguments";
	}
	return null;
};
Type.createEmptyInstance = function(cl) {
	function empty() {}; empty.prototype = cl.prototype;
	return new empty();
};
Type.createEnum = function(e,constr,params) {
	var f = Reflect.field(e,constr);
	if(f == null) throw "No such constructor " + constr;
	if(Reflect.isFunction(f)) {
		if(params == null) throw "Constructor " + constr + " need parameters";
		return f.apply(e,params);
	}
	if(params != null && params.length != 0) throw "Constructor " + constr + " does not need parameters";
	return f;
};
Type.getInstanceFields = function(c) {
	var a = [];
	for(var i in c.prototype) a.push(i);
	HxOverrides.remove(a,"__class__");
	HxOverrides.remove(a,"__properties__");
	return a;
};
Type.getEnumConstructs = function(e) {
	var a = e.__constructs__;
	return a.slice();
};
var js = {};
js.Boot = function() { };
$hxClasses["js.Boot"] = js.Boot;
js.Boot.__name__ = ["js","Boot"];
js.Boot.__unhtml = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
};
js.Boot.__trace = function(v,i) {
	var msg;
	if(i != null) msg = i.fileName + ":" + i.lineNumber + ": "; else msg = "";
	msg += js.Boot.__string_rec(v,"");
	if(i != null && i.customParams != null) {
		var _g = 0;
		var _g1 = i.customParams;
		while(_g < _g1.length) {
			var v1 = _g1[_g];
			++_g;
			msg += "," + js.Boot.__string_rec(v1,"");
		}
	}
	var d;
	if(typeof(document) != "undefined" && (d = document.getElementById("haxe:trace")) != null) d.innerHTML += js.Boot.__unhtml(msg) + "<br/>"; else if(typeof console != "undefined" && console.log != null) console.log(msg);
};
js.Boot.__clear_trace = function() {
	var d = document.getElementById("haxe:trace");
	if(d != null) d.innerHTML = "";
};
js.Boot.isClass = function(o) {
	return o.__name__;
};
js.Boot.isEnum = function(e) {
	return e.__ename__;
};
js.Boot.getClass = function(o) {
	if((o instanceof Array) && o.__enum__ == null) return Array; else {
		var cl = o.__class__;
		if(cl != null) return cl;
		var name = js.Boot.__nativeClassName(o);
		if(name != null) return js.Boot.__resolveNativeClass(name);
		return null;
	}
};
js.Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ || o.__ename__)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__) {
				if(o.length == 2) return o[0];
				var str = o[0] + "(";
				s += "\t";
				var _g1 = 2;
				var _g = o.length;
				while(_g1 < _g) {
					var i = _g1++;
					if(i != 2) str += "," + js.Boot.__string_rec(o[i],s); else str += js.Boot.__string_rec(o[i],s);
				}
				return str + ")";
			}
			var l = o.length;
			var i1;
			var str1 = "[";
			s += "\t";
			var _g2 = 0;
			while(_g2 < l) {
				var i2 = _g2++;
				str1 += (i2 > 0?",":"") + js.Boot.__string_rec(o[i2],s);
			}
			str1 += "]";
			return str1;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			return "???";
		}
		if(tostr != null && tostr != Object.toString && typeof(tostr) == "function") {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str2 = "{\n";
		s += "\t";
		var hasp = o.hasOwnProperty != null;
		for( var k in o ) {
		if(hasp && !o.hasOwnProperty(k)) {
			continue;
		}
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__" || k == "__properties__") {
			continue;
		}
		if(str2.length != 2) str2 += ", \n";
		str2 += s + k + " : " + js.Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str2 += "\n" + s + "}";
		return str2;
	case "function":
		return "<function>";
	case "string":
		return o;
	default:
		return String(o);
	}
};
js.Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0;
		var _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js.Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js.Boot.__interfLoop(cc.__super__,cl);
};
js.Boot.__instanceof = function(o,cl) {
	if(cl == null) return false;
	switch(cl) {
	case Int:
		return (o|0) === o;
	case Float:
		return typeof(o) == "number";
	case Bool:
		return typeof(o) == "boolean";
	case String:
		return typeof(o) == "string";
	case Array:
		return (o instanceof Array) && o.__enum__ == null;
	case Dynamic:
		return true;
	default:
		if(o != null) {
			if(typeof(cl) == "function") {
				if(o instanceof cl) return true;
				if(js.Boot.__interfLoop(js.Boot.getClass(o),cl)) return true;
			} else if(typeof(cl) == "object" && js.Boot.__isNativeObj(cl)) {
				if(o instanceof cl) return true;
			}
		} else return false;
		if(cl == Class && o.__name__ != null) return true;
		if(cl == Enum && o.__ename__ != null) return true;
		return o.__enum__ == cl;
	}
};
js.Boot.__cast = function(o,t) {
	if(js.Boot.__instanceof(o,t)) return o; else throw "Cannot cast " + Std.string(o) + " to " + Std.string(t);
};
js.Boot.__nativeClassName = function(o) {
	var name = js.Boot.__toStr.call(o).slice(8,-1);
	if(name == "Object" || name == "Function" || name == "Math" || name == "JSON") return null;
	return name;
};
js.Boot.__isNativeObj = function(o) {
	return js.Boot.__nativeClassName(o) != null;
};
js.Boot.__resolveNativeClass = function(name) {
	if(typeof window != "undefined") return window[name]; else return global[name];
};
com.haxepunk.masks = {};
com.haxepunk.masks.Hitbox = function(width,height,x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	if(height == null) height = 1;
	if(width == null) width = 1;
	this._y = 0;
	this._x = 0;
	this._height = 0;
	this._width = 0;
	com.haxepunk.Mask.call(this);
	this._width = width;
	this._height = height;
	this._x = x;
	this._y = y;
	var key = Type.getClassName(com.haxepunk.masks.Hitbox);
	this._check.set(key,$bind(this,this.collideHitbox));
};
$hxClasses["com.haxepunk.masks.Hitbox"] = com.haxepunk.masks.Hitbox;
com.haxepunk.masks.Hitbox.__name__ = ["com","haxepunk","masks","Hitbox"];
com.haxepunk.masks.Hitbox.__super__ = com.haxepunk.Mask;
com.haxepunk.masks.Hitbox.prototype = $extend(com.haxepunk.Mask.prototype,{
	collideMask: function(other) {
		var px = this._x + this._parent.get_x();
		var py = this._y + this._parent.get_y();
		var ox = other._parent.originX + other._parent.get_x();
		var oy = other._parent.originY + other._parent.get_y();
		return px + this._width > ox && py + this._height > oy && px < ox + other._parent.width && py < oy + other._parent.height;
	}
	,collideHitbox: function(other) {
		var px = this._x + this._parent.get_x();
		var py = this._y + this._parent.get_y();
		var ox = other._x + other._parent.get_x();
		var oy = other._y + other._parent.get_y();
		return px + this._width > ox && py + this._height > oy && px < ox + other._width && py < oy + other._height;
	}
	,get_x: function() {
		return this._x;
	}
	,set_x: function(value) {
		if(this._x == value) return value;
		this._x = value;
		if(this.list != null) this.list.update(); else if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) this.update();
		return this._x;
	}
	,get_y: function() {
		return this._y;
	}
	,set_y: function(value) {
		if(this._y == value) return value;
		this._y = value;
		if(this.list != null) this.list.update(); else if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) this.update();
		return this._y;
	}
	,get_width: function() {
		return this._width;
	}
	,set_width: function(value) {
		if(this._width == value) return value;
		this._width = value;
		if(this.list != null) this.list.update(); else if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) this.update();
		return this._width;
	}
	,get_height: function() {
		return this._height;
	}
	,set_height: function(value) {
		if(this._height == value) return value;
		this._height = value;
		if(this.list != null) this.list.update(); else if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) this.update();
		return this._height;
	}
	,update: function() {
		if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) {
			this._parent.originX = -this._x;
			this._parent.originY = -this._y;
			this._parent.width = this._width;
			this._parent.height = this._height;
			if(this.list != null) this.list.update();
		}
	}
	,debugDraw: function(graphics,scaleX,scaleY) {
		if(this.list != null && (this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null && this.list.get_count() > 1) graphics.drawRect(((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null).get_x() - com.haxepunk.HXP.camera.x + this.get_x()) * scaleX,((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null).get_y() - com.haxepunk.HXP.camera.y + this.get_y()) * scaleY,this.get_width() * scaleX,this.get_height() * scaleY);
	}
	,project: function(axis,projection) {
		var px = this._x;
		var py = this._y;
		var cur;
		var max = Math.NEGATIVE_INFINITY;
		var min = Math.POSITIVE_INFINITY;
		cur = px * axis.x + py * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		cur = (px + this._width) * axis.x + py * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		cur = px * axis.x + (py + this._height) * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		cur = (px + this._width) * axis.x + (py + this._height) * axis.y;
		if(cur < min) min = cur;
		if(cur > max) max = cur;
		projection.min = min;
		projection.max = max;
	}
	,_width: null
	,_height: null
	,_x: null
	,_y: null
	,__class__: com.haxepunk.masks.Hitbox
	,__properties__: $extend(com.haxepunk.Mask.prototype.__properties__,{set_height:"set_height",get_height:"get_height",set_width:"set_width",get_width:"get_width",set_y:"set_y",get_y:"get_y",set_x:"set_x",get_x:"get_x"})
});
com.haxepunk.masks.Masklist = function(masks) {
	com.haxepunk.masks.Hitbox.call(this);
	this._masks = new Array();
	this._temp = new Array();
	this._count = 0;
	var _g = 0;
	while(_g < masks.length) {
		var m = masks[_g];
		++_g;
		this.add(m);
	}
};
$hxClasses["com.haxepunk.masks.Masklist"] = com.haxepunk.masks.Masklist;
com.haxepunk.masks.Masklist.__name__ = ["com","haxepunk","masks","Masklist"];
com.haxepunk.masks.Masklist.__super__ = com.haxepunk.masks.Hitbox;
com.haxepunk.masks.Masklist.prototype = $extend(com.haxepunk.masks.Hitbox.prototype,{
	collide: function(mask) {
		var _g = 0;
		var _g1 = this._masks;
		while(_g < _g1.length) {
			var m = _g1[_g];
			++_g;
			if(m.collide(mask)) return true;
		}
		return false;
	}
	,collideMasklist: function(other) {
		var _g = 0;
		var _g1 = this._masks;
		while(_g < _g1.length) {
			var a = _g1[_g];
			++_g;
			var _g2 = 0;
			var _g3 = other._masks;
			while(_g2 < _g3.length) {
				var b = _g3[_g2];
				++_g2;
				if(a.collide(b)) return true;
			}
		}
		return true;
	}
	,add: function(mask) {
		this._masks[this._count++] = mask;
		mask.list = this;
		mask.set_parent(this._parent != com.haxepunk.Entity._EMPTY?this._parent:null);
		this.update();
		return mask;
	}
	,remove: function(mask) {
		if(HxOverrides.indexOf(this._masks,mask,0) < 0) return mask;
		this._temp.length = 0;
		var _g = 0;
		var _g1 = this._masks;
		while(_g < _g1.length) {
			var m = _g1[_g];
			++_g;
			if(m == mask) {
				mask.list = null;
				mask.set_parent(null);
				this._count--;
				this.update();
			} else this._temp[this._temp.length] = m;
		}
		var temp = this._masks;
		this._masks = this._temp;
		this._temp = temp;
		return mask;
	}
	,removeAt: function(index) {
		if(index == null) index = 0;
		this._temp.length = 0;
		var i = this._masks.length;
		index %= i;
		while(i-- > 0) if(i == index) {
			this._masks[index].list = null;
			this._count--;
			this.update();
		} else this._temp[this._temp.length] = this._masks[index];
		var temp = this._masks;
		this._masks = this._temp;
		this._temp = temp;
	}
	,removeAll: function() {
		var _g = 0;
		var _g1 = this._masks;
		while(_g < _g1.length) {
			var m = _g1[_g];
			++_g;
			m.list = null;
		}
		this._count = 0;
		this._masks.length = 0;
		this._temp.length = 0;
		this.update();
	}
	,getMask: function(index) {
		if(index == null) index = 0;
		return this._masks[index % this._masks.length];
	}
	,set_parent: function(parent) {
		var _g = 0;
		var _g1 = this._masks;
		while(_g < _g1.length) {
			var m = _g1[_g];
			++_g;
			m.set_parent(parent);
		}
		return com.haxepunk.masks.Hitbox.prototype.set_parent.call(this,parent);
	}
	,update: function() {
		var t;
		var l;
		var r;
		var b;
		var h;
		t = l = 2147483647;
		r = b = -2147483648;
		var h1;
		var p;
		var _g = 0;
		var _g1 = this._masks;
		while(_g < _g1.length) {
			var m = _g1[_g];
			++_g;
			if(js.Boot.__instanceof(m,com.haxepunk.masks.Polygon)) {
				p = m;
				if(p != null) {
					if(p.minX < l) l = p.minX;
					if(p.minY < t) t = p.minY;
					if(p.maxX > r) r = p.maxX;
					if(p.maxY > b) b = p.maxY;
				}
			} else if((h1 = js.Boot.__cast(m , com.haxepunk.masks.Hitbox)) != null) {
				if(h1.get_x() < l) l = h1.get_x();
				if(h1.get_y() < t) t = h1.get_y();
				if(h1.get_x() + h1.get_width() > r) r = h1.get_x() + h1.get_width();
				if(h1.get_y() + h1.get_height() > b) b = h1.get_y() + h1.get_height();
			}
		}
		this._x = l;
		this._y = t;
		this._width = r - l;
		this._height = b - t;
		com.haxepunk.masks.Hitbox.prototype.update.call(this);
	}
	,debugDraw: function(graphics,scaleX,scaleY) {
		var _g = 0;
		var _g1 = this._masks;
		while(_g < _g1.length) {
			var m = _g1[_g];
			++_g;
			m.debugDraw(graphics,scaleX,scaleY);
		}
	}
	,count: null
	,get_count: function() {
		return this._count;
	}
	,_masks: null
	,_temp: null
	,_count: null
	,__class__: com.haxepunk.masks.Masklist
	,__properties__: $extend(com.haxepunk.masks.Hitbox.prototype.__properties__,{get_count:"get_count"})
});
flash.media = {};
flash.media.SoundTransform = function(vol,panning) {
	if(panning == null) panning = 0;
	if(vol == null) vol = 1;
	this.volume = vol;
	this.pan = panning;
};
$hxClasses["flash.media.SoundTransform"] = flash.media.SoundTransform;
flash.media.SoundTransform.__name__ = ["flash","media","SoundTransform"];
flash.media.SoundTransform.prototype = {
	leftToLeft: null
	,leftToRight: null
	,pan: null
	,rightToLeft: null
	,rightToRight: null
	,volume: null
	,__class__: flash.media.SoundTransform
};
flash.geom = {};
flash.geom.Point = function(u,v) {
	if(u != null) this.x = u; else this.x = 0;
	if(v != null) this.y = v; else this.y = 0;
};
$hxClasses["flash.geom.Point"] = flash.geom.Point;
flash.geom.Point.__name__ = ["flash","geom","Point"];
flash.geom.Point.interpolate = function(a,b,f) {
	return new flash.geom.Point(a.x + f * (b.x - a.x),a.y + f * (b.y - a.y));
};
flash.geom.Point.polar = function(l,d) {
	return new flash.geom.Point(Math.cos(d) * l,Math.sin(d) * l);
};
flash.geom.Point.prototype = {
	x: null
	,y: null
	,clone: function() {
		return new flash.geom.Point(this.x,this.y);
	}
	,equals: function(o) {
		return this.x == o.x && this.y == o.y;
	}
	,setTo: function(u,v) {
		this.x = u;
		this.y = v;
	}
	,length: null
	,get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y);
	}
	,toString: function() {
		return "point(" + this.x + ", " + this.y + ")";
	}
	,normalize: function(l) {
		if(this.y == 0) if(this.x < 0) this.x = -l; else this.x = l; else if(this.x == 0) if(this.y < 0) this.y = -l; else this.y = l; else {
			var m = l / Math.sqrt(this.x * this.x + this.y * this.y);
			this.x *= m;
			this.y *= m;
		}
	}
	,offset: function(dx,dy) {
		this.x += dx;
		this.y += dy;
	}
	,add: function(o) {
		return new flash.geom.Point(this.x + o.x,this.y + o.y);
	}
	,subtract: function(o) {
		return new flash.geom.Point(this.x - o.x,this.y - o.y);
	}
	,__class__: flash.geom.Point
	,__properties__: {get_length:"get_length"}
};
var Reflect = function() { };
$hxClasses["Reflect"] = Reflect;
Reflect.__name__ = ["Reflect"];
Reflect.field = function(o,field) {
	try {
		return o[field];
	} catch( e ) {
		return null;
	}
};
Reflect.setField = function(o,field,value) {
	o[field] = value;
};
Reflect.getProperty = function(o,field) {
	var tmp;
	if(o == null) return null; else if(o.__properties__ && (tmp = o.__properties__["get_" + field])) return o[tmp](); else return o[field];
};
Reflect.setProperty = function(o,field,value) {
	var tmp;
	if(o.__properties__ && (tmp = o.__properties__["set_" + field])) o[tmp](value); else o[field] = value;
};
Reflect.fields = function(o) {
	var a = [];
	if(o != null) {
		var hasOwnProperty = Object.prototype.hasOwnProperty;
		for( var f in o ) {
		if(f != "__id__" && f != "hx__closures__" && hasOwnProperty.call(o,f)) a.push(f);
		}
	}
	return a;
};
Reflect.isFunction = function(f) {
	return typeof(f) == "function" && !(f.__name__ || f.__ename__);
};
Reflect.compareMethods = function(f1,f2) {
	if(f1 == f2) return true;
	if(!Reflect.isFunction(f1) || !Reflect.isFunction(f2)) return false;
	return f1.scope == f2.scope && f1.method == f2.method && f1.method != null;
};
Reflect.isObject = function(v) {
	if(v == null) return false;
	var t = typeof(v);
	return t == "string" || t == "object" && v.__enum__ == null || t == "function" && (v.__name__ || v.__ename__) != null;
};
Reflect.deleteField = function(o,field) {
	if(!Object.prototype.hasOwnProperty.call(o,field)) return false;
	delete(o[field]);
	return true;
};
Reflect.makeVarArgs = function(f) {
	return function() {
		var a = Array.prototype.slice.call(arguments);
		return f(a);
	};
};
flash.geom.Matrix = function(a,b,c,d,tx,ty) {
	if(a == null) this.a = 1; else this.a = a;
	if(b == null) this.b = 0; else this.b = b;
	if(c == null) this.c = 0; else this.c = c;
	if(d == null) this.d = 1; else this.d = d;
	if(tx == null) this.tx = 0; else this.tx = tx;
	if(ty == null) this.ty = 0; else this.ty = ty;
};
$hxClasses["flash.geom.Matrix"] = flash.geom.Matrix;
flash.geom.Matrix.__name__ = ["flash","geom","Matrix"];
flash.geom.Matrix.create = function() {
	var m = flash.geom.Matrix.pool;
	if(m.length > 0) return m.pop(); else return new flash.geom.Matrix();
};
flash.geom.Matrix.prototype = {
	a: null
	,b: null
	,c: null
	,d: null
	,tx: null
	,ty: null
	,setTo: function(a,b,c,d,tx,ty) {
		this.a = a;
		this.b = b;
		this.tx = tx;
		this.c = c;
		this.d = d;
		this.ty = ty;
	}
	,clone: function() {
		return new flash.geom.Matrix(this.a,this.b,this.c,this.d,this.tx,this.ty);
	}
	,identity: function() {
		this.a = this.d = 1;
		this.b = this.c = this.tx = this.ty = 0;
	}
	,isIdentity: function() {
		return this.a == 1 && this.d == 1 && this.tx == 0 && this.ty == 0 && this.b == 0 && this.c == 0;
	}
	,copy: function(s) {
		this.a = s.a;
		this.b = s.b;
		this.c = s.c;
		this.d = s.d;
		this.tx = s.tx;
		this.ty = s.ty;
	}
	,invert: function() {
		var t;
		var n = this.a * this.d - this.b * this.c;
		if(n == 0) {
			this.a = this.b = this.c = this.d = 0;
			this.tx = -this.tx;
			this.ty = -this.ty;
		} else {
			n = 1 / n;
			t = this.d * n;
			this.d = this.a * n;
			this.a = t;
			this.b *= -n;
			this.c *= -n;
			t = -this.a * this.tx - this.c * this.ty;
			this.ty = -this.b * this.tx - this.d * this.ty;
			this.tx = t;
		}
	}
	,translate: function(x,y) {
		this.tx += x;
		this.ty += y;
	}
	,rotate: function(o) {
		var ox = Math.cos(o);
		var oy = Math.sin(o);
		var t;
		t = this.a * ox - this.b * oy;
		this.b = this.a * oy + this.b * ox;
		this.a = t;
		t = this.c * ox - this.d * oy;
		this.d = this.c * oy + this.d * ox;
		this.c = t;
		t = this.tx * ox - this.ty * oy;
		this.ty = this.tx * oy + this.ty * ox;
		this.tx = t;
	}
	,scale: function(x,y) {
		this.a *= x;
		this.b *= y;
		this.c *= x;
		this.d *= y;
		this.tx *= x;
		this.ty *= y;
	}
	,concat: function(o) {
		var t;
		t = this.a * o.a + this.b * o.c;
		this.b = this.a * o.b + this.b * o.d;
		this.a = t;
		t = this.c * o.a + this.d * o.c;
		this.d = this.c * o.b + this.d * o.d;
		this.c = t;
		t = this.tx * o.a + this.ty * o.c + o.tx;
		this.ty = this.tx * o.b + this.ty * o.d + o.ty;
		this.tx = t;
	}
	,transformPoint: function(o) {
		return new flash.geom.Point(o.x * this.a + o.y * this.c + this.tx,o.x * this.b + o.y * this.d + this.ty);
	}
	,createBox: function(sx,sy,r,x,y) {
		this.a = sx;
		this.d = sy;
		if(r != null) this.b = r; else this.b = 0;
		if(x != null) this.tx = x; else this.tx = 0;
		if(y != null) this.ty = y; else this.ty = 0;
	}
	,createGradientBox: function(w,h,r,x,y) {
		this.a = w / 1638.4;
		this.d = h / 1638.4;
		if(r != null && r != 0) {
			var rx = Math.cos(r);
			var ry = Math.sin(r);
			this.b = ry * this.d;
			this.c = -ry * this.a;
			this.a *= rx;
			this.d *= rx;
		} else this.b = this.c = 0;
		if(x != null) this.tx = x + w / 2; else this.tx = w / 2;
		if(y != null) this.ty = y + h / 2; else this.ty = h / 2;
	}
	,toString: function() {
		return "matrix(" + this.a + ", " + this.b + ", " + this.c + ", " + this.d + ", " + this.tx + ", " + this.ty + ")";
	}
	,to3dString: function() {
		return "matrix3d(" + this.a + ", " + this.b + ", 0, 0, " + this.c + ", " + this.d + ", 0, 0, 0, 0, 1, 0, " + this.tx + ", " + this.ty + ", 0, 1)";
	}
	,free: function() {
		flash.geom.Matrix.pool.push(this);
	}
	,__class__: flash.geom.Matrix
};
flash.geom.Rectangle = function(a,b,c,d) {
	if(d == null) d = 0;
	if(c == null) c = 0;
	if(b == null) b = 0;
	if(a == null) a = 0;
	this.x = a;
	this.y = b;
	this.width = c;
	this.height = d;
};
$hxClasses["flash.geom.Rectangle"] = flash.geom.Rectangle;
flash.geom.Rectangle.__name__ = ["flash","geom","Rectangle"];
flash.geom.Rectangle.prototype = {
	x: null
	,y: null
	,width: null
	,height: null
	,clone: function() {
		return new flash.geom.Rectangle(this.x,this.y,this.width,this.height);
	}
	,equals: function(o) {
		return this.x == o.x && this.y == o.y && this.width == o.width && this.height == o.height;
	}
	,isEmpty: function() {
		return this.width <= 0 || this.height <= 0;
	}
	,setEmpty: function() {
		this.x = this.y = this.width = this.height = 0;
	}
	,copyFrom: function(o) {
		this.x = o.x;
		this.y = o.y;
		this.width = o.width;
		this.height = o.height;
	}
	,setTo: function(a,b,c,d) {
		this.x = a;
		this.y = b;
		this.width = c;
		this.height = d;
	}
	,setVoid: function() {
		this.width -= 2147483647 - this.x;
		this.x = 2147483647;
		this.width = -2147483648 - this.x;
		-2147483648;
		this.height -= 2147483647 - this.y;
		this.y = 2147483647;
		this.height = -2147483648 - this.y;
		-2147483648;
	}
	,get_left: function() {
		return this.x;
	}
	,set_left: function(v) {
		this.width -= v - this.x;
		return this.x = v;
	}
	,get_top: function() {
		return this.y;
	}
	,set_top: function(v) {
		this.height -= v - this.y;
		return this.y = v;
	}
	,get_right: function() {
		return this.x + this.width;
	}
	,set_right: function(v) {
		this.width = v - this.x;
		return v;
	}
	,get_bottom: function() {
		return this.y + this.height;
	}
	,set_bottom: function(v) {
		this.height = v - this.y;
		return v;
	}
	,get_size: function() {
		return new flash.geom.Point(this.width,this.height);
	}
	,set_size: function(v) {
		this.width = v.x;
		this.height = v.y;
		return v.clone();
	}
	,get_topLeft: function() {
		return new flash.geom.Point(this.x,this.y);
	}
	,set_topLeft: function(v) {
		this.width = v.x;
		this.height = v.y;
		return v.clone();
	}
	,get_bottomRight: function() {
		return new flash.geom.Point(this.x + this.width,this.y + this.height);
	}
	,set_bottomRight: function(v) {
		this.width = v.x - this.x;
		this.height = v.y - this.y;
		return v.clone();
	}
	,contains: function(u,v) {
		return (u -= this.x) >= 0 && (v -= this.y) >= 0 && u < this.width && v < this.height;
	}
	,containsPoint: function(o) {
		return this.contains(o.x,o.y);
	}
	,containsRect: function(o) {
		if(o.width <= 0 || o.height <= 0) return o.x > this.x && o.y > this.y && o.x + o.width < this.x + this.width && o.y + o.height < this.y + this.height; else return o.x >= this.x && o.y >= this.y && o.x + o.width <= this.x + this.width && o.y + o.height <= this.y + this.height;
	}
	,intersection: function(o) {
		var x0;
		var x1;
		var y0;
		var y1;
		var a;
		var b;
		if(((a = this.x) < (b = o.x)?x0 = b:x0 = a) <= ((a += this.width) > (b += o.width)?x1 = b:x1 = a) && ((a = this.y) < (b = o.y)?y0 = b:y0 = a) <= ((a += this.height) > (b += o.height)?y1 = b:y1 = a)) return new flash.geom.Rectangle(x0,y0,x1 - x0,y1 - y0); else return new flash.geom.Rectangle();
	}
	,intersects: function(o) {
		var x0;
		var x1;
		var y0;
		var y1;
		if((this.x < (x0 = o.x)?x0 = x0:x0 = this.x) <= (this.x + this.width > (x1 = o.x + o.width)?x1 = x1:x1 = this.x + this.width)) return false; else return (this.y < (y0 = o.y)?y0 = y0:y0 = this.y) <= (this.y + this.height > (y1 = o.y + o.height)?y1 = y1:y1 = this.y);
	}
	,join: function(o) {
		var v;
		if((v = o.x - this.x) < 0) {
			this.x += v;
			this.width -= v;
		}
		if((v = o.y - this.y) < 0) {
			this.y += v;
			this.height -= v;
		}
		if((v = o.x + o.width - (this.x + this.width)) > 0) this.width += v;
		if((v = o.y + o.height - (this.y + this.height)) > 0) this.height += v;
	}
	,union: function(o) {
		var a;
		var b;
		var c;
		var d;
		return new flash.geom.Rectangle((a = this.x) < (c = o.x)?a:c,(b = this.y) < (d = o.y)?b:d,(a += this.width) > (c += o.width)?a:c,(b += this.height) > (d += o.height)?b:d);
	}
	,inflate: function(u,v) {
		this.x -= u;
		this.y -= v;
		this.width += u * 2;
		this.height += v * 2;
	}
	,inflatePoint: function(v) {
		this.inflate(v.x,v.y);
	}
	,offset: function(u,v) {
		this.x += u;
		this.y += v;
	}
	,offsetPoint: function(o) {
		this.x += o.x;
		this.y += o.y;
	}
	,transform: function(m) {
		var v;
		var l;
		var t;
		var r;
		var b;
		r = l = m.a * this.x + m.c * this.y;
		b = t = m.b * this.x + m.d * this.y;
		v = m.a * (this.x + this.width) + m.c * this.y;
		if(v < l) l = v;
		if(v > r) r = v;
		v = m.b * (this.x + this.width) + m.d * this.y;
		if(v < t) t = v;
		if(v > b) b = v;
		v = m.a * this.x + m.c * (this.y + this.height);
		if(v < l) l = v;
		if(v > r) r = v;
		v = m.b * this.x + m.d * (this.y + this.height);
		if(v < t) t = v;
		if(v > b) b = v;
		v = m.a * (this.x + this.width) + m.c * (this.y + this.height);
		if(v < l) l = v;
		if(v > r) r = v;
		v = m.b * (this.x + this.width) + m.d * (this.y + this.height);
		if(v < t) t = v;
		if(v > b) b = v;
		this.x = l + m.tx;
		this.width = r - l;
		this.y = t + m.ty;
		this.height = b - t;
	}
	,toString: function() {
		return "Rectangle(" + this.x + ", " + this.y + ", " + this.width + ", " + this.height + ")";
	}
	,__class__: flash.geom.Rectangle
	,__properties__: {set_bottomRight:"set_bottomRight",get_bottomRight:"get_bottomRight",set_topLeft:"set_topLeft",get_topLeft:"get_topLeft",set_size:"set_size",get_size:"get_size",set_bottom:"set_bottom",get_bottom:"get_bottom",set_top:"set_top",get_top:"get_top",set_right:"set_right",get_right:"get_right",set_left:"set_left",get_left:"get_left"}
};
var Std = function() { };
$hxClasses["Std"] = Std;
Std.__name__ = ["Std"];
Std["is"] = function(v,t) {
	return js.Boot.__instanceof(v,t);
};
Std.string = function(s) {
	return js.Boot.__string_rec(s,"");
};
Std["int"] = function(x) {
	return x | 0;
};
Std.parseInt = function(x) {
	var v = parseInt(x,10);
	if(v == 0 && (HxOverrides.cca(x,1) == 120 || HxOverrides.cca(x,1) == 88)) v = parseInt(x);
	if(isNaN(v)) return null;
	return v;
};
Std.parseFloat = function(x) {
	return parseFloat(x);
};
Std.random = function(x) {
	if(x <= 0) return 0; else return Math.floor(Math.random() * x);
};
flash.display.Stage = function() {
	this.intervalHandle = null;
	this.touchCount = 0;
	this.isTouchScreen = false;
	this.frameRate = null;
	flash.display.DisplayObjectContainer.call(this);
	var s = this.component.style;
	var o = window;
	var i;
	s.position = "absolute";
	s.overflow = "hidden";
	s.left = s.top = "0";
	s.width = s.height = "100%";
	this.mousePos = new flash.geom.Point();
	o.addEventListener("contextmenu",function(_) {
		_.preventDefault();
	});
	o.addEventListener("click",$bind(this,this.onMouse));
	o.addEventListener("mousedown",$bind(this,this.onMouse));
	o.addEventListener("mouseup",$bind(this,this.onMouse));
	o.addEventListener("mousemove",$bind(this,this.onMouse));
	o.addEventListener("mousewheel",$bind(this,this.onWheel));
	o.addEventListener("touchmove",this.getOnTouch(0));
	o.addEventListener("touchstart",this.getOnTouch(1));
	o.addEventListener("touchend",this.getOnTouch(2));
	o.addEventListener("touchcancel",this.getOnTouch(2));
	this.mouseMtxDepth = [];
	this.mouseMtxStack = [];
	this.mouseMtxCache = [];
	this.mouseTriggered = [];
	this.mouseUntrigger = [];
	i = -1;
	while(++i < 3) {
		this.mouseTriggered[i] = false;
		this.mouseUntrigger[i] = this.getMouseUntrigger(i);
	}
};
$hxClasses["flash.display.Stage"] = flash.display.Stage;
flash.display.Stage.__name__ = ["flash","display","Stage"];
flash.display.Stage.__super__ = flash.display.DisplayObjectContainer;
flash.display.Stage.prototype = $extend(flash.display.DisplayObjectContainer.prototype,{
	align: null
	,quality: null
	,scaleMode: null
	,displayState: null
	,stageWidth: null
	,stageHeight: null
	,showDefaultContextMenu: null
	,frameRate: null
	,mousePos: null
	,isTouchScreen: null
	,touchCount: null
	,intervalHandle: null
	,mouseMtxDepth: null
	,mouseMtxStack: null
	,mouseMtxCache: null
	,mouseOver: null
	,mouseDown: null
	,mouseLastEvent: null
	,mouseTriggered: null
	,mouseUntrigger: null
	,mouseDownTriggered: null
	,mouseUpTriggered: null
	,_broadcastMouseEvent: function(f) {
		var o = this.mouseOver;
		var q;
		f.stageX = this.mousePos.x;
		f.stageY = this.mousePos.y;
		this.broadcastMouse(this.mouseMtxDepth,f,this.mouseMtxStack,this.mouseMtxCache);
		this.mouseOver = q = f.relatedObject;
		if(o != q) {
			if(o != null) o.dispatchEvent(this._alterMouseEvent(f,"mouseOut"));
			if(q != null) q.dispatchEvent(this._alterMouseEvent(f,"mouseOver"));
		}
	}
	,_broadcastTouchEvent: function(f,x,y) {
		f.stageX = x;
		f.stageY = y;
		this.broadcastMouse(this.mouseMtxDepth,f,this.mouseMtxStack,this.mouseMtxCache);
	}
	,getMouseUntrigger: function(i) {
		var _g = this;
		return function() {
			_g.mouseTriggered[i] = false;
		};
	}
	,_alterMouseEvent: function(e,type) {
		var r = new flash.events.MouseEvent(type,e.bubbles,e.cancelable,e.localX,e.localY,e.relatedObject,e.ctrlKey,e.altKey,e.shiftKey,e.buttonDown,e.delta);
		r.stageX = e.stageX;
		r.stageY = e.stageY;
		return r;
	}
	,_translateMouseEvent: function(e,type) {
		return new flash.events.MouseEvent(type,true,false,null,null,null,e.ctrlKey,e.altKey,e.shiftKey);
	}
	,_translateTouchEvent: function(e,o,type) {
		return new flash.events.TouchEvent(type,true,false,o.identifier,false,null,null,o.radiusX,o.radiusY,o.force,null,e.ctrlKey,e.altKey,e.shiftKey);
	}
	,mouseEventPrevent: function(o,x,y) {
		var mp = this.mousePos;
		var q = mp.x == x && mp.y == y;
		if(o >= 0 && q && this.mouseTriggered[o]) return true;
		if(!q) this.mousePos.setTo(x,y);
		if(o >= 0 && !this.mouseTriggered[o]) {
			this.mouseTriggered[o] = true;
			window.setTimeout(this.mouseUntrigger[o],0);
		}
		if(o == 1) {
			if(this.mouseDown) this._broadcastMouseEvent(this._alterMouseEvent(this.mouseLastEvent,"mouseUp")); else this.mouseDown = true;
		} else if(o == 2) {
			if(!this.mouseDown) this._broadcastMouseEvent(new flash.events.MouseEvent("mouseDown")); else this.mouseDown = false;
		}
		return false;
	}
	,getOnTouch: function(i) {
		var _g = this;
		return function(e) {
			_g.onTouch(e,i);
		};
	}
	,onTouch: function(e,m) {
		var lt = e.targetTouches;
		var nt = lt.length;
		var lc = e.changedTouches;
		var nc = lc.length;
		var qt;
		if(nt > 0) qt = lt[0]; else if(nc > 0) qt = lc[0]; else qt = null;
		var i;
		var t;
		var o;
		e.preventDefault();
		this.isTouchScreen = true;
		if(qt != null && (m == 0 || m == 1 && nt == nc || m == 2 && nt == 0 && nc > 0) && !this.mouseEventPrevent(m,qt.pageX,qt.pageY)) {
			this._broadcastMouseEvent(this.mouseLastEvent = new flash.events.MouseEvent(m == 1?"mouseDown":m == 2?"mouseUp":"mouseMove"));
			if(m == 2) this._broadcastMouseEvent(new flash.events.MouseEvent("mouseClick"));
		}
		if(nc > 0) {
			switch(m) {
			case 1:
				t = "touchBegin";
				break;
			case 2:
				t = "touchEnd";
				break;
			default:
				t = "touchMove";
			}
			i = -1;
			while(++i < nc) {
				o = lc[i];
				this._broadcastTouchEvent(this._translateTouchEvent(e,o,t),o.pageX,o.pageY);
			}
		}
	}
	,onWheel: function(e) {
		var f = this._translateMouseEvent(e,"mouseWheel");
		f.delta = Math.round(e.wheelDelta / 40);
		this.mousePos.setTo(e.pageX,e.pageY);
		this._broadcastMouseEvent(f);
	}
	,onMouse: function(e) {
		var t = null;
		var o = -1;
		var b;
		if(e.type == "mousemove") {
			t = "mouseMove";
			o = 0;
		} else {
			b = e.button;
			var _g = e.type;
			switch(_g) {
			case "click":
				if(b == 0) t = "mouseClick"; else if(b == 1) t = "rightClick"; else if(b == 2) t = "middleClick"; else t = t;
				break;
			case "mousedown":
				if(b == 0) t = "mouseDown"; else if(b == 1) t = "middleMouseDown"; else if(b == 2) t = "rightMouseDown"; else t = t;
				o = 1;
				break;
			case "mouseup":
				if(b == 0) t = "mouseUp"; else if(b == 1) t = "middleMouseUp"; else if(b == 2) t = "rightMouseUp"; else t = t;
				o = 2;
				break;
			default:
				return;
			}
		}
		if(!this.mouseEventPrevent(o,e.pageX,e.pageY)) this._broadcastMouseEvent(new flash.events.MouseEvent(t));
	}
	,hitTestLocal: function(x,y,p,v) {
		return !v || this.visible;
	}
	,addEventListener: function(type,listener,useCapture,priority,useWeakReference) {
		if(useWeakReference == null) useWeakReference = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		var o = this.component;
		this.component = window;
		flash.display.DisplayObjectContainer.prototype.addEventListener.call(this,type,listener,useCapture,priority,useWeakReference);
		this.component = o;
	}
	,removeEventListener: function(type,listener,useCapture,priority,useWeakReference) {
		if(useWeakReference == null) useWeakReference = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		var o = this.component;
		this.component = window;
		flash.display.DisplayObjectContainer.prototype.removeEventListener.call(this,type,listener,useCapture,priority,useWeakReference);
		this.component = o;
	}
	,get_focus: function() {
		var o = document.activeElement;
		if(o != null && Std["is"](o = o.node,flash.display.InteractiveObject)) return o; else return null;
	}
	,set_focus: function(v) {
		if(v != null) v.giveFocus(); else this.component.blur();
		return v;
	}
	,get_stageWidth: function() {
		return window.innerWidth;
	}
	,get_stageHeight: function() {
		return window.innerHeight;
	}
	,get_stage: function() {
		return this;
	}
	,set_frameRate: function(v) {
		if(this.frameRate != v) {
			if(this.intervalHandle != null) {
				if(this.frameRate <= 0) window._cancelAnimationFrame(this.intervalHandle); else window.clearInterval(this.intervalHandle);
			}
			if((this.frameRate = v) <= 0) this.intervalHandle = window._requestAnimationFrame($bind(this,this.onTimer)); else this.intervalHandle = window.setInterval($bind(this,this.onTimer),Std["int"](Math.max(0,1000 / v)));
		}
		return v;
	}
	,onTimer: function() {
		var t = flash.Lib.getTimer();
		var f;
		var i = -1;
		while(++i < flash.Lib.schLength) {
			flash.Lib.schList[i]();
			flash.Lib.schList[i] = null;
		}
		flash.Lib.schLength = 0;
		this.broadcastEvent(new flash.events.Event("enterFrame"));
		f = this.frameRate;
		if(f <= 0) this.intervalHandle = window._requestAnimationFrame($bind(this,this.onTimer));
	}
	,__class__: flash.display.Stage
	,__properties__: $extend(flash.display.DisplayObjectContainer.prototype.__properties__,{set_focus:"set_focus",get_focus:"get_focus",set_frameRate:"set_frameRate",get_stageHeight:"get_stageHeight",get_stageWidth:"get_stageWidth"})
});
flash.Lib = function() { };
$hxClasses["flash.Lib"] = flash.Lib;
flash.Lib.__name__ = ["flash","Lib"];
flash.Lib.__properties__ = {get_mobile:"get_mobile",get_stage:"get_stage",get_current:"get_current"}
flash.Lib.get_mobile = function() {
	if(flash.Lib._mobile == null) {
		var o = navigator.userAgent || navigator.vendor || wnd.opera;
		flash.Lib._mobile = /(android|bb\d+|meego).+mobile|avantgo|bada\/|blackberry|blazer|compal|elaine|fennec|hiptop|iemobile|ip(hone|od|ad)|iris|kindle|lge |maemo|midp|mmp|netfront|opera m(ob|in)i|palm( os)?|phone|p(ixi|re)\/|plucker|pocket|psp|series(4|6)0|symbian|treo|up\.(browser|link)|vodafone|wap|windows (ce|phone)|xda|xiino/i.test(o) || /1207|6310|6590|3gso|4thp|50[1-6]i|770s|802s|a wa|abac|ac(er|oo|s\-)|ai(ko|rn)|al(av|ca|co)|amoi|an(ex|ny|yw)|aptu|ar(ch|go)|as(te|us)|attw|au(di|\-m|r |s )|avan|be(ck|ll|nq)|bi(lb|rd)|bl(ac|az)|br(e|v)w|bumb|bw\-(n|u)|c55\/|capi|ccwa|cdm\-|cell|chtm|cldc|cmd\-|co(mp|nd)|craw|da(it|ll|ng)|dbte|dc\-s|devi|dica|dmob|do(c|p)o|ds(12|\-d)|el(49|ai)|em(l2|ul)|er(ic|k0)|esl8|ez([4-7]0|os|wa|ze)|fetc|fly(\-|_)|g1 u|g560|gene|gf\-5|g\-mo|go(\.w|od)|gr(ad|un)|haie|hcit|hd\-(m|p|t)|hei\-|hi(pt|ta)|hp( i|ip)|hs\-c|ht(c(\-| |_|a|g|p|s|t)|tp)|hu(aw|tc)|i\-(20|go|ma)|i230|iac( |\-|\/)|ibro|idea|ig01|ikom|im1k|inno|ipaq|iris|ja(t|v)a|jbro|jemu|jigs|kddi|keji|kgt( |\/)|klon|kpt |kwc\-|kyo(c|k)|le(no|xi)|lg( g|\/(k|l|u)|50|54|\-[a-w])|libw|lynx|m1\-w|m3ga|m50\/|ma(te|ui|xo)|mc(01|21|ca)|m\-cr|me(rc|ri)|mi(o8|oa|ts)|mmef|mo(01|02|bi|de|do|t(\-| |o|v)|zz)|mt(50|p1|v )|mwbp|mywa|n10[0-2]|n20[2-3]|n30(0|2)|n50(0|2|5)|n7(0(0|1)|10)|ne((c|m)\-|on|tf|wf|wg|wt)|nok(6|i)|nzph|o2im|op(ti|wv)|oran|owg1|p800|pan(a|d|t)|pdxg|pg(13|\-([1-8]|c))|phil|pire|pl(ay|uc)|pn\-2|po(ck|rt|se)|prox|psio|pt\-g|qa\-a|qc(07|12|21|32|60|\-[2-7]|i\-)|qtek|r380|r600|raks|rim9|ro(ve|zo)|s55\/|sa(ge|ma|mm|ms|ny|va)|sc(01|h\-|oo|p\-)|sdk\/|se(c(\-|0|1)|47|mc|nd|ri)|sgh\-|shar|sie(\-|m)|sk\-0|sl(45|id)|sm(al|ar|b3|it|t5)|so(ft|ny)|sp(01|h\-|v\-|v )|sy(01|mb)|t2(18|50)|t6(00|10|18)|ta(gt|lk)|tcl\-|tdg\-|tel(i|m)|tim\-|t\-mo|to(pl|sh)|ts(70|m\-|m3|m5)|tx\-9|up(\.b|g1|si)|utst|v400|v750|veri|vi(rg|te)|vk(40|5[0-3]|\-v)|vm40|voda|vulc|vx(52|53|60|61|70|80|81|83|85|98)|w3c(\-| )|webc|whit|wi(g |nc|nw)|wmlb|wonu|x700|yas\-|your|zeto|zte\-/i.test(o.substr(0,4));
	}
	return flash.Lib._mobile;
};
flash.Lib.__init = function() {
	var o;
	flash.Lib.schList = [];
	flash.Lib.schLength = 0;
	var wnd = window;
	var n = "equestAnimationFrame";
	var lrq = flash.Lib.getTimer();
	wnd._requestAnimationFrame = wnd["r" + n] || wnd["webkitR" + n] || wnd["mozR" + n] || wnd["oR" + n] || wnd["msR" + n] || function(o1) {
		return wnd.setTimeout(o1,700 / flash.Lib.get_stage().frameRate | 0);
	};
	n = "ancelAnimationFrame";
	wnd._cancelAnimationFrame = wnd["c" + n] || wnd["webkitC" + n] || wnd["mozC" + n] || wnd["oC" + n] || wnd["msC" + n] || function(o2) {
		return wnd.clearTimeout(o2);
	};
};
flash.Lib.getTimer = function() {
	return Std["int"](new Date() - flash.Lib.qTimeStamp);
};
flash.Lib.getURL = function(url,target) {
	window.open(url.url,target);
};
flash.Lib.jsNode = function(o) {
	var r = document.createElement(o);
	var s = r.style;
	s.position = "absolute";
	switch(o) {
	case "canvas":
		s.setProperty("-webkit-touch-callout","none",null);
		flash.Lib.setCSSProperties(s,"user-select","none",47);
		break;
	case "input":case "textarea":
		s.outline = "none";
		break;
	}
	return r;
};
flash.Lib.jsHelper = function() {
	if(flash.Lib.qHelper == null) {
		var o = flash.Lib.jsNode("div");
		flash.Lib.get_stage().component.appendChild(o);
		o.style.visibility = "hidden";
		o.appendChild(flash.Lib.qHelper = flash.Lib.jsNode("div"));
	}
	return flash.Lib.qHelper;
};
flash.Lib.get_current = function() {
	if(flash.Lib.qCurrent == null) flash.Lib.get_stage().addChild(flash.Lib.qCurrent = new flash.display.MovieClip());
	return flash.Lib.qCurrent;
};
flash.Lib.get_stage = function() {
	if(flash.Lib.qStage == null) document.body.appendChild((flash.Lib.qStage = new flash.display.Stage()).component);
	return flash.Lib.qStage;
};
flash.Lib.schedule = function(m) {
	flash.Lib.schList[flash.Lib.schLength++] = m;
};
flash.Lib.rgba = function(color) {
	return "rgba(" + (color >> 16 & 255) + "," + (color >> 8 & 255) + "," + (color & 255) + "," + ((color >> 24 & 255) / 255).toFixed(4) + ")";
};
flash.Lib.rgbf = function(color,alpha) {
	return "rgba(" + (color >> 16 & 255) + "," + (color >> 8 & 255) + "," + (color & 255) + "," + alpha.toFixed(4) + ")";
};
flash.Lib.setCSSProperties = function(o,k,v,f) {
	if(!f) f = 31;
	if(f & 1) o.setProperty(k,v,null);
	if(f & 2) o.setProperty("-webkit-" + k,v,null);
	if(f & 4) o.setProperty("-moz-" + k,v,null);
	if(f & 8) o.setProperty("-ms-" + k,v,null);
	if(f & 16) o.setProperty("-o-" + k,v,null);
	if(f & 32) o.setProperty("-khtml-" + k,v,null);
};
Math.__name__ = ["Math"];
flash.geom.Transform = function(displayObject) {
	if(displayObject == null) throw "Cannot create Transform with no DisplayObject.";
	this._displayObject = displayObject;
	this._matrix = new flash.geom.Matrix();
	this._fullMatrix = new flash.geom.Matrix();
	this.set_colorTransform(new flash.geom.ColorTransform());
};
$hxClasses["flash.geom.Transform"] = flash.geom.Transform;
flash.geom.Transform.__name__ = ["flash","geom","Transform"];
flash.geom.Transform.prototype = {
	colorTransform: null
	,concatenatedMatrix: null
	,_displayObject: null
	,_fullMatrix: null
	,_matrix: null
	,nmeGetFullMatrix: function(localMatrix) {
		var m;
		if(localMatrix != null) (m = new flash.geom.Matrix(localMatrix.a,localMatrix.b,localMatrix.c,localMatrix.d,localMatrix.tx,localMatrix.ty)).concat(this._fullMatrix); else m = this._fullMatrix.clone();
		return m;
	}
	,nmeSetFullMatrix: function(inValue) {
		this._fullMatrix.copy(inValue);
		return this._fullMatrix;
	}
	,nmeSetMatrix: function(inValue) {
		this._matrix.copy(inValue);
	}
	,set_colorTransform: function(inValue) {
		this.colorTransform = inValue;
		return inValue;
	}
	,get_concatenatedMatrix: function() {
		return this.nmeGetFullMatrix(this._matrix);
	}
	,get_matrix: function() {
		return this._matrix.clone();
	}
	,set_matrix: function(inValue) {
		this._matrix.copy(inValue);
		this._displayObject.syncMtx();
		return this._matrix;
	}
	,get_pixelBounds: function() {
		return this._displayObject.getBounds(null);
	}
	,__class__: flash.geom.Transform
	,__properties__: {get_pixelBounds:"get_pixelBounds",set_matrix:"set_matrix",get_matrix:"get_matrix",get_concatenatedMatrix:"get_concatenatedMatrix",set_colorTransform:"set_colorTransform"}
};
flash.geom.ColorTransform = function(r,g,b,a,ro,go,bo,ao) {
	if(r != null) this.redMultiplier = r; else this.redMultiplier = 1;
	if(g != null) this.greenMultiplier = g; else this.greenMultiplier = 1;
	if(b != null) this.blueMultiplier = b; else this.blueMultiplier = 1;
	if(a != null) this.alphaMultiplier = a; else this.alphaMultiplier = 1;
	if(ro != null) this.redOffset = ro; else this.redOffset = 0;
	if(go != null) this.greenOffset = go; else this.greenOffset = 0;
	if(bo != null) this.blueOffset = bo; else this.blueOffset = 0;
	if(ao != null) this.alphaOffset = ao; else this.alphaOffset = 0;
};
$hxClasses["flash.geom.ColorTransform"] = flash.geom.ColorTransform;
flash.geom.ColorTransform.__name__ = ["flash","geom","ColorTransform"];
flash.geom.ColorTransform.prototype = {
	alphaMultiplier: null
	,alphaOffset: null
	,blueMultiplier: null
	,blueOffset: null
	,greenMultiplier: null
	,greenOffset: null
	,redMultiplier: null
	,redOffset: null
	,concat: function(o) {
		this.redMultiplier += o.redMultiplier;
		this.greenMultiplier += o.greenMultiplier;
		this.blueMultiplier += o.blueMultiplier;
		this.alphaMultiplier += o.alphaMultiplier;
	}
	,isColorSetter: function() {
		return this.redMultiplier == 0 && this.greenMultiplier == 0 && this.blueMultiplier == 0 && (this.alphaMultiplier == 0 || this.alphaOffset == 0);
	}
	,isAlphaMultiplier: function() {
		return this.redMultiplier == 1 && this.greenMultiplier == 1 && this.blueMultiplier == 1 && this.redOffset == 0 && this.greenOffset == 0 && this.blueOffset == 0 && this.alphaOffset == 0;
	}
	,get_color: function() {
		return (this.redOffset | 0) << 16 | (this.greenOffset | 0) << 8 | (this.blueOffset | 0);
	}
	,set_color: function(value) {
		this.redOffset = value >> 16 & 255;
		this.greenOffset = value >> 8 & 255;
		this.blueOffset = value & 255;
		this.redMultiplier = this.greenMultiplier = this.blueMultiplier = 0;
		return this.get_color();
	}
	,__class__: flash.geom.ColorTransform
	,__properties__: {set_color:"set_color",get_color:"get_color"}
};
var IMap = function() { };
$hxClasses["IMap"] = IMap;
IMap.__name__ = ["IMap"];
var haxe = {};
haxe.ds = {};
haxe.ds.ObjectMap = function() {
	this.h = { };
	this.h.__keys__ = { };
};
$hxClasses["haxe.ds.ObjectMap"] = haxe.ds.ObjectMap;
haxe.ds.ObjectMap.__name__ = ["haxe","ds","ObjectMap"];
haxe.ds.ObjectMap.__interfaces__ = [IMap];
haxe.ds.ObjectMap.prototype = {
	h: null
	,set: function(key,value) {
		var id = key.__id__ || (key.__id__ = ++haxe.ds.ObjectMap.count);
		this.h[id] = value;
		this.h.__keys__[id] = key;
	}
	,remove: function(key) {
		var id = key.__id__;
		if(this.h.__keys__[id] == null) return false;
		delete(this.h[id]);
		delete(this.h.__keys__[id]);
		return true;
	}
	,__class__: haxe.ds.ObjectMap
};
com.haxepunk.HXP = function() { };
$hxClasses["com.haxepunk.HXP"] = com.haxepunk.HXP;
com.haxepunk.HXP.__name__ = ["com","haxepunk","HXP"];
com.haxepunk.HXP.__properties__ = {get_RAD:"get_RAD",get_DEG:"get_DEG",set_time:"set_time",get_console:"get_console",get_random:"get_random",set_randomSeed:"set_randomSeed",set_pan:"set_pan",get_pan:"get_pan",set_volume:"set_volume",get_volume:"get_volume",set_fullscreen:"set_fullscreen",get_fullscreen:"get_fullscreen",set_scene:"set_scene",get_scene:"get_scene",set_world:"set_world",get_world:"get_world",get_choose:"get_choose",set_renderMode:"set_renderMode",get_NUMBER_MAX_VALUE:"get_NUMBER_MAX_VALUE"}
com.haxepunk.HXP.get_NUMBER_MAX_VALUE = function() {
	return 179 * Math.pow(10,306);
};
com.haxepunk.HXP.set_renderMode = function(value) {
	com.haxepunk.HXP.renderMode = value;
	if(com.haxepunk.HXP.screen == null) com.haxepunk.HXP.screen = new com.haxepunk.Screen(); else com.haxepunk.HXP.screen.init();
	return value;
};
com.haxepunk.HXP.get_choose = function() {
	return Reflect.makeVarArgs(com.haxepunk.HXP._choose);
};
com.haxepunk.HXP._choose = function(objs) {
	if(objs == null || objs.length == 0) throw "Can't choose a random element on an empty array";
	if((objs[0] instanceof Array) && objs[0].__enum__ == null) {
		var c;
		c = js.Boot.__cast(objs[0] , Array);
		if(c.length != 0) return c[(function($this) {
			var $r;
			com.haxepunk.HXP._seed = com.haxepunk.HXP._seed * 16807.0 % 2147483647 | 0;
			$r = com.haxepunk.HXP._seed / 2147483647 * c.length | 0;
			return $r;
		}(this))]; else throw "Can't choose a random element on an empty array";
	} else return objs[(function($this) {
		var $r;
		com.haxepunk.HXP._seed = com.haxepunk.HXP._seed * 16807.0 % 2147483647 | 0;
		$r = com.haxepunk.HXP._seed / 2147483647 * objs.length | 0;
		return $r;
	}(this))];
};
com.haxepunk.HXP.get_world = function() {
	return com.haxepunk.HXP.engine._scene;
};
com.haxepunk.HXP.set_world = function(value) {
	return com.haxepunk.HXP.engine.set_scene(value);
};
com.haxepunk.HXP.get_scene = function() {
	return com.haxepunk.HXP.engine._scene;
};
com.haxepunk.HXP.set_scene = function(value) {
	return com.haxepunk.HXP.engine.set_scene(value);
};
com.haxepunk.HXP.resize = function(width,height) {
	width = width / com.haxepunk.HXP.screen.fullScaleX | 0;
	height = height / com.haxepunk.HXP.screen.fullScaleY | 0;
	com.haxepunk.HXP.width = width;
	com.haxepunk.HXP.height = height;
	com.haxepunk.HXP.halfWidth = width / 2;
	com.haxepunk.HXP.halfHeight = height / 2;
	com.haxepunk.HXP.bounds.width = width;
	com.haxepunk.HXP.bounds.height = height;
	com.haxepunk.HXP.screen.resize();
};
com.haxepunk.HXP.clear = function(array) {
	array.length = 0;
};
com.haxepunk.HXP.setCamera = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	com.haxepunk.HXP.camera.x = x;
	com.haxepunk.HXP.camera.y = y;
};
com.haxepunk.HXP.resetCamera = function() {
	com.haxepunk.HXP.camera.x = com.haxepunk.HXP.camera.y = 0;
};
com.haxepunk.HXP.get_fullscreen = function() {
	return com.haxepunk.HXP.stage.displayState == "FULL_SCREEN";
};
com.haxepunk.HXP.set_fullscreen = function(value) {
	if(value) com.haxepunk.HXP.stage.displayState = "FULL_SCREEN"; else com.haxepunk.HXP.stage.displayState = "NORMAL";
	return value;
};
com.haxepunk.HXP.get_volume = function() {
	return com.haxepunk.HXP._volume;
};
com.haxepunk.HXP.set_volume = function(value) {
	if(value < 0) value = 0;
	if(com.haxepunk.HXP._volume == value) return value;
	com.haxepunk.HXP._soundTransform.volume = com.haxepunk.HXP._volume = value;
	return com.haxepunk.HXP._volume;
};
com.haxepunk.HXP.get_pan = function() {
	return com.haxepunk.HXP._pan;
};
com.haxepunk.HXP.set_pan = function(value) {
	if(value < -1) value = -1;
	if(value > 1) value = 1;
	if(com.haxepunk.HXP._pan == value) return value;
	com.haxepunk.HXP._soundTransform.pan = com.haxepunk.HXP._pan = value;
	return com.haxepunk.HXP._pan;
};
com.haxepunk.HXP.sign = function(value) {
	if(value < 0) return -1; else if(value > 0) return 1; else return 0;
};
com.haxepunk.HXP.approach = function(value,target,amount) {
	if(value < target - amount) return value + amount; else if(value > target + amount) return value - amount; else return target;
};
com.haxepunk.HXP.lerp = function(a,b,t) {
	if(t == null) t = 1;
	return a + (b - a) * t;
};
com.haxepunk.HXP.colorLerp = function(fromColor,toColor,t) {
	if(t == null) t = 1;
	if(t <= 0) return fromColor; else if(t >= 1) return toColor; else {
		var a = fromColor >> 24 & 255;
		var r = fromColor >> 16 & 255;
		var g = fromColor >> 8 & 255;
		var b = fromColor & 255;
		var dA = (toColor >> 24 & 255) - a;
		var dR = (toColor >> 16 & 255) - r;
		var dG = (toColor >> 8 & 255) - g;
		var dB = (toColor & 255) - b;
		a += dA * t | 0;
		r += dR * t | 0;
		g += dG * t | 0;
		b += dB * t | 0;
		return a << 24 | r << 16 | g << 8 | b;
	}
};
com.haxepunk.HXP.stepTowards = function(object,x,y,distance) {
	if(distance == null) distance = 1;
	com.haxepunk.HXP.point.x = x - object.x;
	com.haxepunk.HXP.point.y = y - object.y;
	if(com.haxepunk.HXP.point.get_length() <= distance) {
		object.x = x;
		object.y = y;
		return;
	}
	com.haxepunk.HXP.point.normalize(distance);
	var _g = object;
	_g.x = _g.x + com.haxepunk.HXP.point.x;
	var _g1 = object;
	_g1.y = _g1.y + com.haxepunk.HXP.point.y;
};
com.haxepunk.HXP.anchorTo = function(object,anchor,distance) {
	if(distance == null) distance = 0;
	com.haxepunk.HXP.point.x = object.x - anchor.x;
	com.haxepunk.HXP.point.y = object.y - anchor.y;
	if(com.haxepunk.HXP.point.get_length() > distance) com.haxepunk.HXP.point.normalize(distance);
	object.x = anchor.x + com.haxepunk.HXP.point.x;
	object.y = anchor.y + com.haxepunk.HXP.point.y;
};
com.haxepunk.HXP.angle = function(x1,y1,x2,y2) {
	var a = Math.atan2(y2 - y1,x2 - x1) * (-180 / Math.PI);
	if(a < 0) return a + 360; else return a;
};
com.haxepunk.HXP.angleXY = function(object,angle,length,x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	if(length == null) length = 1;
	angle *= Math.PI / -180;
	var value = Math.cos(angle) * length + x;
	object.x = value;
	var value1 = Math.sin(angle) * length + y;
	object.y = value1;
};
com.haxepunk.HXP.angleDifference = function(angle1,angle2) {
	var diff = angle2 - angle1;
	while(diff < -180) diff += 360;
	while(diff > 180) diff -= 360;
	return diff;
};
com.haxepunk.HXP.rotateAround = function(object,anchor,angle,relative) {
	if(relative == null) relative = true;
	if(angle == null) angle = 0;
	if(relative) angle += com.haxepunk.HXP.angle(anchor.x,anchor.y,object.x,object.y);
	com.haxepunk.HXP.angleXY(object,angle,com.haxepunk.HXP.distance(anchor.x,anchor.y,object.x,object.y),anchor.x,anchor.y);
};
com.haxepunk.HXP.round = function(num,precision) {
	var exp = Math.pow(10,precision);
	return Math.round(num * exp) / exp;
};
com.haxepunk.HXP.distance = function(x1,y1,x2,y2) {
	if(y2 == null) y2 = 0;
	if(x2 == null) x2 = 0;
	return Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
};
com.haxepunk.HXP.distanceSquared = function(x1,y1,x2,y2) {
	if(y2 == null) y2 = 0;
	if(x2 == null) x2 = 0;
	return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
};
com.haxepunk.HXP.distanceRects = function(x1,y1,w1,h1,x2,y2,w2,h2) {
	if(x1 < x2 + w2 && x2 < x1 + w1) {
		if(y1 < y2 + h2 && y2 < y1 + h1) return 0;
		if(y1 > y2) return y1 - (y2 + h2);
		return y2 - (y1 + h1);
	}
	if(y1 < y2 + h2 && y2 < y1 + h1) {
		if(x1 > x2) return x1 - (x2 + w2);
		return x2 - (x1 + w1);
	}
	if(x1 > x2) {
		if(y1 > y2) return com.haxepunk.HXP.distance(x1,y1,x2 + w2,y2 + h2);
		return com.haxepunk.HXP.distance(x1,y1 + h1,x2 + w2,y2);
	}
	if(y1 > y2) return com.haxepunk.HXP.distance(x1 + w1,y1,x2,y2 + h2);
	return com.haxepunk.HXP.distance(x1 + w1,y1 + h1,x2,y2);
};
com.haxepunk.HXP.distanceRectPoint = function(px,py,rx,ry,rw,rh) {
	if(px >= rx && px <= rx + rw) {
		if(py >= ry && py <= ry + rh) return 0;
		if(py > ry) return py - (ry + rh);
		return ry - py;
	}
	if(py >= ry && py <= ry + rh) {
		if(px > rx) return px - (rx + rw);
		return rx - px;
	}
	if(px > rx) {
		if(py > ry) return com.haxepunk.HXP.distance(px,py,rx + rw,ry + rh);
		return com.haxepunk.HXP.distance(px,py,rx + rw,ry);
	}
	if(py > ry) return com.haxepunk.HXP.distance(px,py,rx,ry + rh);
	return Math.sqrt((rx - px) * (rx - px) + (ry - py) * (ry - py));
};
com.haxepunk.HXP.clamp = function(value,min,max) {
	if(max > min) {
		if(value < min) return min; else if(value > max) return max; else return value;
	} else if(value < max) return max; else if(value > min) return min; else return value;
};
com.haxepunk.HXP.clampInRect = function(object,x,y,width,height,padding) {
	if(padding == null) padding = 0;
	var value = com.haxepunk.HXP.clamp(object.x,x + padding,x + width - padding);
	object.x = value;
	var value1 = com.haxepunk.HXP.clamp(object.y,y + padding,y + height - padding);
	object.y = value1;
};
com.haxepunk.HXP.scale = function(value,min,max,min2,max2) {
	return min2 + (value - min) / (max - min) * (max2 - min2);
};
com.haxepunk.HXP.scaleClamp = function(value,min,max,min2,max2) {
	value = min2 + (value - min) / (max - min) * (max2 - min2);
	if(max2 > min2) {
		if(value < max2) value = value; else value = max2;
		if(value > min2) return value; else return min2;
	}
	if(value < min2) value = value; else value = min2;
	if(value > max2) return value; else return max2;
};
com.haxepunk.HXP.set_randomSeed = function(value) {
	com.haxepunk.HXP._seed = Std["int"](com.haxepunk.HXP.clamp(value,1.0,2147483646));
	com.haxepunk.HXP.randomSeed = com.haxepunk.HXP._seed;
	return com.haxepunk.HXP._seed;
};
com.haxepunk.HXP.randomizeSeed = function() {
	com.haxepunk.HXP.set_randomSeed(Std["int"](2147483647 * Math.random()));
};
com.haxepunk.HXP.get_random = function() {
	com.haxepunk.HXP._seed = com.haxepunk.HXP._seed * 16807.0 % 2147483647 | 0;
	return com.haxepunk.HXP._seed / 2147483647;
};
com.haxepunk.HXP.rand = function(amount) {
	com.haxepunk.HXP._seed = com.haxepunk.HXP._seed * 16807.0 % 2147483647 | 0;
	return com.haxepunk.HXP._seed / 2147483647 * amount | 0;
};
com.haxepunk.HXP.indexOf = function(arr,v) {
	return HxOverrides.indexOf(arr,v,0);
};
com.haxepunk.HXP.next = function(current,options,loop) {
	if(loop == null) loop = true;
	if(loop) return options[(HxOverrides.indexOf(options,current,0) + 1) % options.length]; else return options[Std["int"](Math.min(HxOverrides.indexOf(options,current,0) + 1,options.length - 1))];
};
com.haxepunk.HXP.prev = function(current,options,loop) {
	if(loop == null) loop = true;
	if(loop) return options[(HxOverrides.indexOf(options,current,0) - 1 + options.length) % options.length]; else return options[Std["int"](Math.max(HxOverrides.indexOf(options,current,0) - 1,0))];
};
com.haxepunk.HXP.swap = function(current,a,b) {
	if(current == a) return b; else return a;
};
com.haxepunk.HXP.insertSortedKey = function(list,key,compare) {
	var result = 0;
	var mid = 0;
	var min = 0;
	var max = list.length - 1;
	while(max >= min) {
		mid = min + ((max - min) / 2 | 0);
		result = compare(list[mid],key);
		if(result > 0) max = mid - 1; else if(result < 0) min = mid + 1; else return;
	}
	list.splice(result > 0?mid:mid + 1,0,key);
};
com.haxepunk.HXP.getColorRGB = function(R,G,B) {
	if(B == null) B = 0;
	if(G == null) G = 0;
	if(R == null) R = 0;
	return R << 16 | G << 8 | B;
};
com.haxepunk.HXP.getColorHSV = function(h,s,v) {
	h = h * 360 | 0;
	var hi = Math.floor(h / 60) % 6;
	var f = h / 60 - Math.floor(h / 60);
	var p = v * (1 - s);
	var q = v * (1 - f * s);
	var t = v * (1 - (1 - f) * s);
	switch(hi) {
	case 0:
		return (v * 255 | 0) << 16 | (t * 255 | 0) << 8 | (p * 255 | 0);
	case 1:
		return (q * 255 | 0) << 16 | (v * 255 | 0) << 8 | (p * 255 | 0);
	case 2:
		return (p * 255 | 0) << 16 | (v * 255 | 0) << 8 | (t * 255 | 0);
	case 3:
		return (p * 255 | 0) << 16 | (q * 255 | 0) << 8 | (v * 255 | 0);
	case 4:
		return (t * 255 | 0) << 16 | (p * 255 | 0) << 8 | (v * 255 | 0);
	case 5:
		return (v * 255 | 0) << 16 | (p * 255 | 0) << 8 | (q * 255 | 0);
	default:
		return 0;
	}
	return 0;
};
com.haxepunk.HXP.getColorHue = function(color) {
	var h = color >> 16 & 255;
	var s = color >> 8 & 255;
	var v = color & 255;
	var max = Std["int"](Math.max(h,Math.max(s,v)));
	var min = Std["int"](Math.min(h,Math.min(s,v)));
	var hue = 0;
	if(max == min) hue = 0; else if(max == h) hue = (60 * (s - v) / (max - min) + 360) % 360; else if(max == s) hue = 60 * (v - h) / (max - min) + 120; else if(max == v) hue = 60 * (h - s) / (max - min) + 240;
	return hue / 360;
};
com.haxepunk.HXP.getColorSaturation = function(color) {
	var h = color >> 16 & 255;
	var s = color >> 8 & 255;
	var v = color & 255;
	var max = Std["int"](Math.max(h,Math.max(s,v)));
	if(max == 0) return 0; else {
		var min = Std["int"](Math.min(h,Math.min(s,v)));
		return (max - min) / max;
	}
};
com.haxepunk.HXP.getColorValue = function(color) {
	var h = color >> 16 & 255;
	var s = color >> 8 & 255;
	var v = color & 255;
	return Std["int"](Math.max(h,Math.max(s,v))) / 255;
};
com.haxepunk.HXP.getRed = function(color) {
	return color >> 16 & 255;
};
com.haxepunk.HXP.getGreen = function(color) {
	return color >> 8 & 255;
};
com.haxepunk.HXP.getBlue = function(color) {
	return color & 255;
};
com.haxepunk.HXP.getBitmap = function(name) {
	if(com.haxepunk.HXP._bitmap.exists(name)) return com.haxepunk.HXP._bitmap.get(name);
	var data = openfl.Assets.getBitmapData(name,false);
	if(data != null) com.haxepunk.HXP._bitmap.set(name,data);
	return data;
};
com.haxepunk.HXP.overwriteBitmapCache = function(name,data) {
	com.haxepunk.HXP.removeBitmap(name);
	com.haxepunk.HXP._bitmap.set(name,data);
};
com.haxepunk.HXP.removeBitmap = function(name) {
	if(com.haxepunk.HXP._bitmap.exists(name)) {
		var bitmap = com.haxepunk.HXP._bitmap.get(name);
		bitmap.dispose();
		bitmap = null;
		return com.haxepunk.HXP._bitmap.remove(name);
	}
	return false;
};
com.haxepunk.HXP.createBitmap = function(width,height,transparent,color) {
	if(color == null) color = 0;
	if(transparent == null) transparent = false;
	return new flash.display.BitmapData(width,height,transparent,color);
};
com.haxepunk.HXP.timeFlag = function() {
	var t = haxe.Timer.stamp();
	var e = t - com.haxepunk.HXP._time;
	com.haxepunk.HXP._time = t;
	return e;
};
com.haxepunk.HXP.get_console = function() {
	if(com.haxepunk.HXP._console == null) com.haxepunk.HXP._console = new com.haxepunk.debug.Console();
	return com.haxepunk.HXP._console;
};
com.haxepunk.HXP.consoleEnabled = function() {
	return com.haxepunk.HXP._console != null;
};
com.haxepunk.HXP.tween = function(object,values,duration,options) {
	if(options != null && Object.prototype.hasOwnProperty.call(options,"delay")) {
		var delay = options.delay;
		Reflect.deleteField(options,"delay");
		com.haxepunk.HXP.alarm(delay,function(o) {
			com.haxepunk.HXP.tween(object,values,duration,options);
		});
		return null;
	}
	var type = com.haxepunk.TweenType.OneShot;
	var complete = null;
	var ease = null;
	var tweener = com.haxepunk.HXP.tweener;
	if(js.Boot.__instanceof(object,com.haxepunk.Tweener)) tweener = js.Boot.__cast(object , com.haxepunk.Tweener);
	if(options != null) {
		if(Object.prototype.hasOwnProperty.call(options,"type")) type = options.type;
		if(Object.prototype.hasOwnProperty.call(options,"complete")) complete = options.complete;
		if(Object.prototype.hasOwnProperty.call(options,"ease")) ease = options.ease;
		if(Object.prototype.hasOwnProperty.call(options,"tweener")) tweener = options.tweener;
	}
	var tween = new com.haxepunk.tweens.misc.MultiVarTween(complete,type);
	tween.tween(object,values,duration,ease);
	tweener.addTween(tween);
	return tween;
};
com.haxepunk.HXP.alarm = function(delay,complete,type,tweener) {
	if(type == null) type = com.haxepunk.TweenType.OneShot;
	if(tweener == null) tweener = com.haxepunk.HXP.tweener;
	var alarm = new com.haxepunk.tweens.misc.Alarm(delay,complete,type);
	tweener.addTween(alarm,true);
	return alarm;
};
com.haxepunk.HXP.frames = function(from,to,skip) {
	if(skip == null) skip = 0;
	var a = new Array();
	skip++;
	if(from < to) while(from <= to) {
		a.push(from);
		from += skip;
	} else while(from >= to) {
		a.push(from);
		from -= skip;
	}
	return a;
};
com.haxepunk.HXP.shuffle = function(a) {
	var i = a.length;
	var j;
	var t;
	while(--i > 0) {
		t = a[i];
		a[i] = a[(function($this) {
			var $r;
			com.haxepunk.HXP._seed = com.haxepunk.HXP._seed * 16807.0 % 2147483647 | 0;
			$r = j = com.haxepunk.HXP._seed / 2147483647 * (i + 1) | 0;
			return $r;
		}(this))];
		a[j] = t;
	}
};
com.haxepunk.HXP.resizeStage = function(width,height) {
};
com.haxepunk.HXP.set_time = function(value) {
	com.haxepunk.HXP._time = value;
	return com.haxepunk.HXP._time;
};
com.haxepunk.HXP.get_DEG = function() {
	return -180 / Math.PI;
};
com.haxepunk.HXP.get_RAD = function() {
	return Math.PI / -180;
};
com.haxepunk.Entity = function(x,y,graphic,mask) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	com.haxepunk.Tweener.call(this);
	this.visible = true;
	this.collidable = true;
	this.followCamera = false;
	this.x = x;
	this.y = y;
	this.originX = this.originY = 0;
	this.width = this.height = 0;
	this._moveX = this._moveY = 0;
	this._type = "";
	this._name = "";
	this.HITBOX = new com.haxepunk.Mask();
	this._point = com.haxepunk.HXP.point;
	this._camera = com.haxepunk.HXP.point2;
	this.set_layer(0);
	if(graphic != null) this.set_graphic(graphic);
	if(mask != null) this.set_mask(mask);
	this.HITBOX.set_parent(this);
	this._class = Type.getClassName(Type.getClass(this));
};
$hxClasses["com.haxepunk.Entity"] = com.haxepunk.Entity;
com.haxepunk.Entity.__name__ = ["com","haxepunk","Entity"];
com.haxepunk.Entity.__super__ = com.haxepunk.Tweener;
com.haxepunk.Entity.prototype = $extend(com.haxepunk.Tweener.prototype,{
	visible: null
	,collidable: null
	,x: null
	,get_x: function() {
		if(this.followCamera) return this.x + com.haxepunk.HXP.camera.x; else return this.x;
	}
	,set_x: function(v) {
		return this.x = v;
	}
	,y: null
	,get_y: function() {
		if(this.followCamera) return this.y + com.haxepunk.HXP.camera.y; else return this.y;
	}
	,set_y: function(v) {
		return this.y = v;
	}
	,followCamera: null
	,width: null
	,height: null
	,originX: null
	,originY: null
	,renderTarget: null
	,added: function() {
	}
	,removed: function() {
	}
	,update: function() {
	}
	,render: function() {
		if(this._graphic != null && this._graphic._visible) {
			if(this._graphic.relative) {
				if(this.followCamera) this._point.x = this.x + com.haxepunk.HXP.camera.x; else this._point.x = this.x;
				if(this.followCamera) this._point.y = this.y + com.haxepunk.HXP.camera.y; else this._point.y = this.y;
			} else this._point.x = this._point.y = 0;
			if(this._scene == null) this._camera.x = com.haxepunk.HXP.camera.x; else this._camera.x = this._scene.camera.x;
			if(this._scene == null) this._camera.y = com.haxepunk.HXP.camera.y; else this._camera.y = this._scene.camera.y;
			if(this._graphic.blit) this._graphic.render(this.renderTarget != null?this.renderTarget:com.haxepunk.HXP.buffer,this._point,this._camera); else this._graphic.renderAtlas(this._layer,this._point,this._camera);
		}
	}
	,collide: function(type,x,y) {
		if(this._scene == null) return null;
		var entities = this._scene.entitiesForType(type);
		if(!this.collidable || entities == null) return null;
		if(this.followCamera) this._x = this.x + com.haxepunk.HXP.camera.x; else this._x = this.x;
		if(this.followCamera) this._y = this.y + com.haxepunk.HXP.camera.y; else this._y = this.y;
		this.x = x;
		this.y = y;
		if(this._mask == null) {
			var $it0 = entities.iterator();
			while( $it0.hasNext() ) {
				var e = $it0.next();
				if(e.collidable && e != this && x - this.originX + this.width > (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX && y - this.originY + this.height > (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY && x - this.originX < (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX + e.width && y - this.originY < (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY + e.height) {
					if(e._mask == null || e._mask.collide(this.HITBOX)) {
						this.x = this._x;
						this.y = this._y;
						return e;
					}
				}
			}
		} else {
			var $it1 = entities.iterator();
			while( $it1.hasNext() ) {
				var e1 = $it1.next();
				if(e1.collidable && e1 != this && x - this.originX + this.width > (e1.followCamera?e1.x + com.haxepunk.HXP.camera.x:e1.x) - e1.originX && y - this.originY + this.height > (e1.followCamera?e1.y + com.haxepunk.HXP.camera.y:e1.y) - e1.originY && x - this.originX < (e1.followCamera?e1.x + com.haxepunk.HXP.camera.x:e1.x) - e1.originX + e1.width && y - this.originY < (e1.followCamera?e1.y + com.haxepunk.HXP.camera.y:e1.y) - e1.originY + e1.height) {
					if(this._mask.collide(e1._mask != null?e1._mask:e1.HITBOX)) {
						this.x = this._x;
						this.y = this._y;
						return e1;
					}
				}
			}
		}
		this.x = this._x;
		this.y = this._y;
		return null;
	}
	,collideTypes: function(types,x,y) {
		if(this._scene == null) return null;
		{
			var _g = types;
			switch(_g[1]) {
			case 0:
				var s = _g[2];
				return this.collide(s,x,y);
			case 1:
				var a = _g[2];
				var e;
				var _g1 = 0;
				while(_g1 < a.length) {
					var type = a[_g1];
					++_g1;
					e = this.collide(type,x,y);
					if(e != null) return e;
				}
				break;
			}
		}
		return null;
	}
	,collideWith: function(e,x,y) {
		if(this.followCamera) this._x = this.x + com.haxepunk.HXP.camera.x; else this._x = this.x;
		if(this.followCamera) this._y = this.y + com.haxepunk.HXP.camera.y; else this._y = this.y;
		this.x = x;
		this.y = y;
		if(this.collidable && e.collidable && x - this.originX + this.width > (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX && y - this.originY + this.height > (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY && x - this.originX < (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX + e.width && y - this.originY < (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY + e.height) {
			if(this._mask == null) {
				if(e._mask == null || e._mask.collide(this.HITBOX)) {
					this.x = this._x;
					this.y = this._y;
					return e;
				}
				this.x = this._x;
				this.y = this._y;
				return null;
			}
			if(this._mask.collide(e._mask != null?e._mask:e.HITBOX)) {
				this.x = this._x;
				this.y = this._y;
				return e;
			}
		}
		this.x = this._x;
		this.y = this._y;
		return null;
	}
	,collideRect: function(x,y,rX,rY,rWidth,rHeight) {
		if(x - this.originX + this.width >= rX && y - this.originY + this.height >= rY && x - this.originX <= rX + rWidth && y - this.originY <= rY + rHeight) {
			if(this._mask == null) return true;
			if(this.followCamera) this._x = this.x + com.haxepunk.HXP.camera.x; else this._x = this.x;
			if(this.followCamera) this._y = this.y + com.haxepunk.HXP.camera.y; else this._y = this.y;
			this.x = x;
			this.y = y;
			com.haxepunk.HXP.entity.x = rX;
			com.haxepunk.HXP.entity.y = rY;
			com.haxepunk.HXP.entity.width = rWidth | 0;
			com.haxepunk.HXP.entity.height = rHeight | 0;
			if(this._mask.collide(com.haxepunk.HXP.entity.HITBOX)) {
				this.x = this._x;
				this.y = this._y;
				return true;
			}
			this.x = this._x;
			this.y = this._y;
			return false;
		}
		return false;
	}
	,collidePoint: function(x,y,pX,pY) {
		if(pX >= x - this.originX && pY >= y - this.originY && pX < x - this.originX + this.width && pY < y - this.originY + this.height) {
			if(this._mask == null) return true;
			if(this.followCamera) this._x = this.x + com.haxepunk.HXP.camera.x; else this._x = this.x;
			if(this.followCamera) this._y = this.y + com.haxepunk.HXP.camera.y; else this._y = this.y;
			this.x = x;
			this.y = y;
			com.haxepunk.HXP.entity.x = pX;
			com.haxepunk.HXP.entity.y = pY;
			com.haxepunk.HXP.entity.width = 1;
			com.haxepunk.HXP.entity.height = 1;
			if(this._mask.collide(com.haxepunk.HXP.entity.HITBOX)) {
				this.x = this._x;
				this.y = this._y;
				return true;
			}
			this.x = this._x;
			this.y = this._y;
			return false;
		}
		return false;
	}
	,collideInto: function(type,x,y,array) {
		if(this._scene == null) return;
		var entities = this._scene.entitiesForType(type);
		if(!this.collidable || entities == null) return;
		if(this.followCamera) this._x = this.x + com.haxepunk.HXP.camera.x; else this._x = this.x;
		if(this.followCamera) this._y = this.y + com.haxepunk.HXP.camera.y; else this._y = this.y;
		this.x = x;
		this.y = y;
		var n = array.length;
		if(this._mask == null) {
			var $it0 = entities.iterator();
			while( $it0.hasNext() ) {
				var e = $it0.next();
				e = e;
				if(e.collidable && e != this && x - this.originX + this.width > (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX && y - this.originY + this.height > (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY && x - this.originX < (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX + e.width && y - this.originY < (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY + e.height) {
					if(e._mask == null || e._mask.collide(this.HITBOX)) array[n++] = e;
				}
			}
		} else {
			var $it1 = entities.iterator();
			while( $it1.hasNext() ) {
				var e1 = $it1.next();
				e1 = e1;
				if(e1.collidable && e1 != this && x - this.originX + this.width > (e1.followCamera?e1.x + com.haxepunk.HXP.camera.x:e1.x) - e1.originX && y - this.originY + this.height > (e1.followCamera?e1.y + com.haxepunk.HXP.camera.y:e1.y) - e1.originY && x - this.originX < (e1.followCamera?e1.x + com.haxepunk.HXP.camera.x:e1.x) - e1.originX + e1.width && y - this.originY < (e1.followCamera?e1.y + com.haxepunk.HXP.camera.y:e1.y) - e1.originY + e1.height) {
					if(this._mask.collide(e1._mask != null?e1._mask:e1.HITBOX)) array[n++] = e1;
				}
			}
		}
		this.x = this._x;
		this.y = this._y;
	}
	,collideTypesInto: function(types,x,y,array) {
		if(this._scene == null) return;
		var _g = 0;
		while(_g < types.length) {
			var type = types[_g];
			++_g;
			this.collideInto(type,x,y,array);
		}
	}
	,onCamera: null
	,get_onCamera: function() {
		if(this._scene == null) return false; else return this.collideRect(this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x,this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y,this._scene.camera.x,this._scene.camera.y,com.haxepunk.HXP.width,com.haxepunk.HXP.height);
	}
	,get_world: function() {
		return this._scene;
	}
	,get_scene: function() {
		return this._scene;
	}
	,halfWidth: null
	,get_halfWidth: function() {
		return this.width / 2;
	}
	,halfHeight: null
	,get_halfHeight: function() {
		return this.height / 2;
	}
	,centerX: null
	,get_centerX: function() {
		return (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX + this.width / 2;
	}
	,centerY: null
	,get_centerY: function() {
		return (this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY + this.height / 2;
	}
	,left: null
	,get_left: function() {
		return (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX;
	}
	,right: null
	,get_right: function() {
		return (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX + this.width;
	}
	,top: null
	,get_top: function() {
		return (this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY;
	}
	,bottom: null
	,get_bottom: function() {
		return (this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY + this.height;
	}
	,get_layer: function() {
		return this._layer;
	}
	,set_layer: function(value) {
		if(this._layer == value) return this._layer;
		if(this._scene == null) {
			this._layer = value;
			return this._layer;
		}
		this._scene.removeRender(this);
		this._layer = value;
		this._scene.addRender(this);
		return this._layer;
	}
	,get_type: function() {
		return this._type;
	}
	,set_type: function(value) {
		if(this._type == value) return this._type;
		if(this._scene == null) {
			this._type = value;
			return this._type;
		}
		if(this._type != "") this._scene.removeType(this);
		this._type = value;
		if(value != "") this._scene.addType(this);
		return this._type;
	}
	,get_mask: function() {
		return this._mask;
	}
	,set_mask: function(value) {
		if(this._mask == value) return value;
		if(this._mask != null) this._mask.set_parent(null);
		this._mask = value;
		if(value != null) this._mask.set_parent(this);
		return this._mask;
	}
	,get_graphic: function() {
		return this._graphic;
	}
	,set_graphic: function(value) {
		if(this._graphic == value) return value;
		this._graphic = value;
		return this._graphic;
	}
	,get_name: function() {
		return this._name;
	}
	,set_name: function(value) {
		if(this._name == value) return this._name;
		if(this._scene == null) {
			this._name = value;
			return this._name;
		}
		if(this._name != "") this._scene._entityNames.remove(this._name);
		this._name = value;
		if(value != "") this._scene._entityNames.set(this._name,this);
		return this._name;
	}
	,addGraphic: function(g) {
		if(this._graphic == null) this.set_graphic(g); else if(js.Boot.__instanceof(this._graphic,com.haxepunk.graphics.Graphiclist)) (js.Boot.__cast(this._graphic , com.haxepunk.graphics.Graphiclist)).add(g); else {
			var list = new com.haxepunk.graphics.Graphiclist();
			list.add(this._graphic);
			list.add(g);
			this.set_graphic(list);
		}
		return g;
	}
	,setHitbox: function(width,height,originX,originY) {
		if(originY == null) originY = 0;
		if(originX == null) originX = 0;
		if(height == null) height = 0;
		if(width == null) width = 0;
		this.width = width;
		this.height = height;
		this.originX = originX;
		this.originY = originY;
	}
	,setHitboxTo: function(o) {
		this.width = Reflect.getProperty(o,"width");
		this.height = Reflect.getProperty(o,"height");
		if(Object.prototype.hasOwnProperty.call(o,"originX") && Object.prototype.hasOwnProperty.call(o,"originY")) {
			this.originX = Reflect.getProperty(o,"originX");
			this.originY = Reflect.getProperty(o,"originY");
		} else {
			this.originX = Reflect.getProperty(o,"x");
			this.originY = Reflect.getProperty(o,"y");
			this.originX = -this.originX;
			this.originY = -this.originY;
		}
	}
	,setOrigin: function(x,y) {
		if(y == null) y = 0;
		if(x == null) x = 0;
		this.originX = x;
		this.originY = y;
	}
	,centerOrigin: function() {
		this.originX = this.width / 2 | 0;
		this.originY = this.height / 2 | 0;
	}
	,distanceFrom: function(e,useHitboxes) {
		if(useHitboxes == null) useHitboxes = false;
		if(!useHitboxes) return Math.sqrt(((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x)) * ((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x)) + ((this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y)) * ((this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y))); else return com.haxepunk.HXP.distanceRects((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY,this.width,this.height,(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX,(e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY,e.width,e.height);
	}
	,distanceToPoint: function(px,py,useHitbox) {
		if(useHitbox == null) useHitbox = false;
		if(!useHitbox) return Math.sqrt(((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - px) * ((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - px) + ((this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - py) * ((this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - py)); else return com.haxepunk.HXP.distanceRectPoint(px,py,(this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY,this.width,this.height);
	}
	,distanceToRect: function(rx,ry,rwidth,rheight) {
		return com.haxepunk.HXP.distanceRects(rx,ry,rwidth,rheight,(this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY,this.width,this.height);
	}
	,toString: function() {
		return this._class;
	}
	,moveBy: function(x,y,solidType,sweep) {
		if(sweep == null) sweep = false;
		this._moveX += x;
		this._moveY += y;
		x = Math.round(this._moveX);
		y = Math.round(this._moveY);
		this._moveX -= x;
		this._moveY -= y;
		if(solidType != null) {
			var sign;
			var e;
			if(x != 0) {
				if(this.collidable && (sweep || this.collideTypes(solidType,(this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) + x,this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) != null)) {
					if(x > 0) sign = 1; else sign = -1;
					while(x != 0) {
						if((e = this.collideTypes(solidType,(this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) + sign,this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y)) != null) {
							if(this.moveCollideX(e)) break; else {
								var _g = this;
								_g.x = (_g.followCamera?_g.x + com.haxepunk.HXP.camera.x:_g.x) + sign;
							}
						} else {
							var _g1 = this;
							_g1.x = (_g1.followCamera?_g1.x + com.haxepunk.HXP.camera.x:_g1.x) + sign;
						}
						x -= sign;
					}
				} else {
					var _g2 = this;
					_g2.x = (_g2.followCamera?_g2.x + com.haxepunk.HXP.camera.x:_g2.x) + x;
				}
			}
			if(y != 0) {
				if(this.collidable && (sweep || this.collideTypes(solidType,this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) + y) != null)) {
					if(y > 0) sign = 1; else sign = -1;
					while(y != 0) {
						if((e = this.collideTypes(solidType,this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) + sign)) != null) {
							if(this.moveCollideY(e)) break; else {
								var _g3 = this;
								_g3.y = (_g3.followCamera?_g3.y + com.haxepunk.HXP.camera.y:_g3.y) + sign;
							}
						} else {
							var _g4 = this;
							_g4.y = (_g4.followCamera?_g4.y + com.haxepunk.HXP.camera.y:_g4.y) + sign;
						}
						y -= sign;
					}
				} else {
					var _g5 = this;
					_g5.y = (_g5.followCamera?_g5.y + com.haxepunk.HXP.camera.y:_g5.y) + y;
				}
			}
		} else {
			var _g6 = this;
			_g6.x = (_g6.followCamera?_g6.x + com.haxepunk.HXP.camera.x:_g6.x) + x;
			var _g7 = this;
			_g7.y = (_g7.followCamera?_g7.y + com.haxepunk.HXP.camera.y:_g7.y) + y;
		}
	}
	,moveTo: function(x,y,solidType,sweep) {
		if(sweep == null) sweep = false;
		this.moveBy(x - (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x),y - (this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y),solidType,sweep);
	}
	,moveTowards: function(x,y,amount,solidType,sweep) {
		if(sweep == null) sweep = false;
		this._point.x = x - (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x);
		this._point.y = y - (this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y);
		if(this._point.x * this._point.x + this._point.y * this._point.y > amount * amount) this._point.normalize(amount);
		this.moveBy(this._point.x,this._point.y,solidType,sweep);
	}
	,moveAtAngle: function(angle,amount,solidType,sweep) {
		if(sweep == null) sweep = false;
		angle *= Math.PI / -180;
		this.moveBy(Math.cos(angle) * amount,Math.sin(angle) * amount,solidType,sweep);
	}
	,moveCollideX: function(e) {
		return true;
	}
	,moveCollideY: function(e) {
		return true;
	}
	,clampHorizontal: function(left,right,padding) {
		if(padding == null) padding = 0;
		if((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX < left + padding) this.x = left + this.originX + padding;
		if((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - this.originX + this.width > right - padding) this.x = right - this.width + this.originX - padding;
	}
	,clampVertical: function(top,bottom,padding) {
		if(padding == null) padding = 0;
		if((this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY < top + padding) this.y = top + this.originY + padding;
		if((this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - this.originY + this.height > bottom - padding) this.y = bottom - this.height + this.originY - padding;
	}
	,centerGraphicInRect: function() {
		if(this._graphic != null) {
			this._graphic.x = this.width / 2;
			this._graphic.y = this.height / 2;
		}
	}
	,_class: null
	,_scene: null
	,_type: null
	,_layer: null
	,_name: null
	,_recycleNext: null
	,HITBOX: null
	,_mask: null
	,_x: null
	,_y: null
	,_moveX: null
	,_moveY: null
	,_graphic: null
	,_point: null
	,_camera: null
	,__class__: com.haxepunk.Entity
	,__properties__: $extend(com.haxepunk.Tweener.prototype.__properties__,{set_name:"set_name",get_name:"get_name",set_graphic:"set_graphic",get_graphic:"get_graphic",set_mask:"set_mask",get_mask:"get_mask",set_type:"set_type",get_type:"get_type",set_layer:"set_layer",get_layer:"get_layer",get_bottom:"get_bottom",get_top:"get_top",get_right:"get_right",get_left:"get_left",get_centerY:"get_centerY",get_centerX:"get_centerX",get_halfHeight:"get_halfHeight",get_halfWidth:"get_halfWidth",get_scene:"get_scene",get_world:"get_world",get_onCamera:"get_onCamera",set_y:"set_y",get_y:"get_y",set_x:"set_x",get_x:"get_x"})
});
var Block = function(x,y) {
	com.haxepunk.Entity.call(this,x * 10,y * 10);
	var img = new com.haxepunk.graphics.Image(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName("graphics/block1.png",true);
			$r = data;
			return $r;
		}($this))));
		$r = e;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Left(com.haxepunk.HXP.getBitmap("graphics/block1.png"));
		$r = e1;
		return $r;
	}(this)));
	img.smooth = false;
	this.set_graphic(img);
	this.width = 10;
	this.height = 10;
	this.originX = 0;
	this.originY = 0;
	this.set_type("block");
};
$hxClasses["Block"] = Block;
Block.__name__ = ["Block"];
Block.__super__ = com.haxepunk.Entity;
Block.prototype = $extend(com.haxepunk.Entity.prototype,{
	__class__: Block
});
var BlockFlammable = function(x,y) {
	Block.call(this,x,y);
	var img = new com.haxepunk.graphics.Image(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName("graphics/block2.png",true);
			$r = data;
			return $r;
		}($this))));
		$r = e;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Left(com.haxepunk.HXP.getBitmap("graphics/block2.png"));
		$r = e1;
		return $r;
	}(this)));
	img.smooth = false;
	this.set_graphic(img);
	this.set_type("blockFlammable");
	this.fireTime = 0;
	this.fireTicker = 0;
};
$hxClasses["BlockFlammable"] = BlockFlammable;
BlockFlammable.__name__ = ["BlockFlammable"];
BlockFlammable.__super__ = Block;
BlockFlammable.prototype = $extend(Block.prototype,{
	update: function() {
		Block.prototype.update.call(this);
		if(this.onFire) {
			if(this.fireTime < 2) this.fireTime += 0.01;
			this.fireTicker += this.fireTime;
			while(this.fireTicker > 1) {
				this.fireTicker--;
				var magic = new Magic((this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - 1 + Math.random() * 8,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - 1 + Math.random() * 8);
				this._scene.add(magic);
				magic.velocity = new lime.math.Vector2((Math.random() - 0.5) / 2.0,(Math.random() - 0.5) / 2.0);
				magic.lifetime = magic.lifetime / 8 + Math.random() * 10;
				magic.whitelistCollisions.push(this);
			}
		} else if(this.fireTime > 0) this.fireTime -= 0.1;
	}
	,onFire: null
	,fireTime: null
	,fireTicker: null
	,__class__: BlockFlammable
});
var openfl = {};
openfl.AssetLibrary = function() {
};
$hxClasses["openfl.AssetLibrary"] = openfl.AssetLibrary;
openfl.AssetLibrary.__name__ = ["openfl","AssetLibrary"];
openfl.AssetLibrary.prototype = {
	exists: function(id,type) {
		return false;
	}
	,getBitmapData: function(id) {
		return null;
	}
	,getBytes: function(id) {
		return null;
	}
	,getText: function(id) {
		return null;
	}
	,getFont: function(id) {
		return null;
	}
	,getMovieClip: function(id) {
		return null;
	}
	,getMusic: function(id) {
		return this.getSound(id);
	}
	,getPath: function(id) {
		return null;
	}
	,getSound: function(id) {
		return null;
	}
	,isLocal: function(id,type) {
		return true;
	}
	,list: function(type) {
		return null;
	}
	,load: function(h) {
		h(this);
	}
	,loadBitmapData: function(id,h) {
		h(this.getBitmapData(id));
	}
	,loadBytes: function(id,h) {
		h(this.getBytes(id));
	}
	,loadText: function(id,h) {
		h(this.getText(id));
	}
	,loadFont: function(id,h) {
		h(this.getFont(id));
	}
	,loadMovieClip: function(id,h) {
		h(this.getMovieClip(id));
	}
	,loadMusic: function(id,handler) {
		handler(this.getMusic(id));
	}
	,loadSound: function(id,handler) {
		handler(this.getSound(id));
	}
	,__class__: openfl.AssetLibrary
};
var DefaultAssetLibrary = function() {
	this.type = new haxe.ds.StringMap();
	this.path = new haxe.ds.StringMap();
	this.className = new haxe.ds.StringMap();
	openfl.AssetLibrary.call(this);
	this.add("graphics/debug/console_debug.png",openfl.AssetType.IMAGE);
	this.add("graphics/debug/console_hidden.png",openfl.AssetType.IMAGE);
	this.add("graphics/debug/console_logo.png",openfl.AssetType.IMAGE);
	this.add("graphics/debug/console_output.png",openfl.AssetType.IMAGE);
	this.add("graphics/debug/console_pause.png",openfl.AssetType.IMAGE);
	this.add("graphics/debug/console_play.png",openfl.AssetType.IMAGE);
	this.add("graphics/debug/console_step.png",openfl.AssetType.IMAGE);
	this.add("graphics/debug/console_visible.png",openfl.AssetType.IMAGE);
	this.add("graphics/preloader/haxepunk.png",openfl.AssetType.IMAGE);
	this.add("font/04B_03__.ttf",openfl.AssetType.FONT);
	this.add("font/04B_03__.ttf.png",openfl.AssetType.IMAGE);
	this.add("graphics/block1.png",openfl.AssetType.IMAGE);
	this.add("graphics/block2.png",openfl.AssetType.IMAGE);
	this.add("graphics/magic.png",openfl.AssetType.IMAGE);
	this.add("graphics/player.png",openfl.AssetType.IMAGE);
	this.add("font/04B_03__.ttf",openfl.AssetType.FONT);
};
$hxClasses["DefaultAssetLibrary"] = DefaultAssetLibrary;
DefaultAssetLibrary.__name__ = ["DefaultAssetLibrary"];
DefaultAssetLibrary.__super__ = openfl.AssetLibrary;
DefaultAssetLibrary.prototype = $extend(openfl.AssetLibrary.prototype,{
	className: null
	,path: null
	,type: null
	,lastModified: null
	,timer: null
	,add: function(id,t,p) {
		this.type.set(id,t);
		this.path.set(id,p != null?p:id);
	}
	,getPath: function(id) {
		return this.path.get(id);
	}
	,exists: function(id,t) {
		var r = this.type.get(id);
		if(r != null) {
			if(r == t || t == null) return true;
			switch(t[1]) {
			case 5:
				return r == openfl.AssetType.MUSIC;
			case 4:
				return r == openfl.AssetType.SOUND;
			case 0:
				return true;
			default:
				return false;
			}
		}
		return false;
	}
	,getBitmapData: function(id) {
		var q;
		var key = this.path.get(id);
		q = ApplicationMain.loaders.get(key);
		var b = q.contentLoaderInfo.content;
		return b.bitmapData;
	}
	,getFont: function(id) {
		return null;
	}
	,getSound: function(id) {
		return new flash.media.Sound(new flash.net.URLRequest(this.path.get(id)));
	}
	,getMusic: function(id) {
		return new flash.media.Sound(new flash.net.URLRequest(this.path.get(id)));
	}
	,getBytes: function(id) {
		var r = null;
		var p = this.path.get(id);
		var d = ApplicationMain.urlLoaders.get(p).data;
		if(typeof(d) == "string") (r = new flash.utils.ByteArray()).writeUTFBytes(d); else if(js.Boot.__instanceof(d,flash.utils.ByteArray)) r = d; else r = null;
		if(r != null) {
			r.position = 0;
			return r;
		} else return null;
	}
	,getText: function(id) {
		var r = null;
		var p = this.path.get(id);
		var d = ApplicationMain.urlLoaders.get(p).data;
		if(typeof(d) == "string") return d; else if(js.Boot.__instanceof(d,flash.utils.ByteArray)) {
			r = d;
			r.position = 0;
			return r.readUTFBytes(r.length);
		} else return null;
	}
	,list: function(t) {
		var r = [];
		var $it0 = this.type.keys();
		while( $it0.hasNext() ) {
			var id = $it0.next();
			if(t == null || this.exists(id,t)) r.push(id);
		}
		return r;
	}
	,loadBitmapData: function(id,h) {
		if(this.path.exists(id)) {
			var r = new flash.display.Loader();
			var f = null;
			f = function(e) {
				r.contentLoaderInfo.removeEventListener("complete",f);
				var b = e.get_currentTarget().content;
				h(b.bitmapData);
				b = null;
				f = null;
				r = null;
			};
			r.addEventListener("complete",f);
			r.load(new flash.net.URLRequest(this.path.get(id)));
		} else h(this.getBitmapData(id));
	}
	,loadFont: function(id,h) {
		h(this.getFont(id));
	}
	,loadSound: function(id,h) {
		h(this.getSound(id));
	}
	,loadMusic: function(id,h) {
		h(this.getMusic(id));
	}
	,loadBytes: function(id,h) {
		if(this.path.exists(id)) {
			var r = new flash.net.URLLoader();
			var f = null;
			f = function(e) {
				r.removeEventListener("complete",f);
				var b = new flash.utils.ByteArray();
				b.writeUTFBytes(e.get_currentTarget().data);
				b.position = 0;
				h(b);
				b = null;
				f = null;
				r = null;
			};
			r.addEventListener("complete",f);
		} else h(this.getBytes(id));
	}
	,loadText: function(id,h) {
		if(this.path.exists(id)) {
			var r = new flash.net.URLLoader();
			var f = null;
			f = function(e) {
				r.removeEventListener("complete",f);
				h(e.get_currentTarget().data);
				f = null;
				r = null;
			};
			r.addEventListener("complete",f);
		} else h(this.getText(id));
	}
	,__class__: DefaultAssetLibrary
});
var EReg = function(r,opt) {
	opt = opt.split("u").join("");
	this.r = new RegExp(r,opt);
};
$hxClasses["EReg"] = EReg;
EReg.__name__ = ["EReg"];
EReg.prototype = {
	r: null
	,match: function(s) {
		if(this.r.global) this.r.lastIndex = 0;
		this.r.m = this.r.exec(s);
		this.r.s = s;
		return this.r.m != null;
	}
	,matched: function(n) {
		if(this.r.m != null && n >= 0 && n < this.r.m.length) return this.r.m[n]; else throw "EReg::matched";
	}
	,matchedPos: function() {
		if(this.r.m == null) throw "No string matched";
		return { pos : this.r.m.index, len : this.r.m[0].length};
	}
	,replace: function(s,by) {
		return s.replace(this.r,by);
	}
	,__class__: EReg
};
var HxOverrides = function() { };
$hxClasses["HxOverrides"] = HxOverrides;
HxOverrides.__name__ = ["HxOverrides"];
HxOverrides.strDate = function(s) {
	var _g = s.length;
	switch(_g) {
	case 8:
		var k = s.split(":");
		var d = new Date();
		d.setTime(0);
		d.setUTCHours(k[0]);
		d.setUTCMinutes(k[1]);
		d.setUTCSeconds(k[2]);
		return d;
	case 10:
		var k1 = s.split("-");
		return new Date(k1[0],k1[1] - 1,k1[2],0,0,0);
	case 19:
		var k2 = s.split(" ");
		var y = k2[0].split("-");
		var t = k2[1].split(":");
		return new Date(y[0],y[1] - 1,y[2],t[0],t[1],t[2]);
	default:
		throw "Invalid date format : " + s;
	}
};
HxOverrides.cca = function(s,index) {
	var x = s.charCodeAt(index);
	if(x != x) return undefined;
	return x;
};
HxOverrides.substr = function(s,pos,len) {
	if(pos != null && pos != 0 && len != null && len < 0) return "";
	if(len == null) len = s.length;
	if(pos < 0) {
		pos = s.length + pos;
		if(pos < 0) pos = 0;
	} else if(len < 0) len = s.length + len - pos;
	return s.substr(pos,len);
};
HxOverrides.indexOf = function(a,obj,i) {
	var len = a.length;
	if(i < 0) {
		i += len;
		if(i < 0) i = 0;
	}
	while(i < len) {
		if(a[i] === obj) return i;
		i++;
	}
	return -1;
};
HxOverrides.remove = function(a,obj) {
	var i = HxOverrides.indexOf(a,obj,0);
	if(i == -1) return false;
	a.splice(i,1);
	return true;
};
HxOverrides.iter = function(a) {
	return { cur : 0, arr : a, hasNext : function() {
		return this.cur < this.arr.length;
	}, next : function() {
		return this.arr[this.cur++];
	}};
};
var Lambda = function() { };
$hxClasses["Lambda"] = Lambda;
Lambda.__name__ = ["Lambda"];
Lambda.has = function(it,elt) {
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var x = $it0.next();
		if(x == elt) return true;
	}
	return false;
};
var List = function() {
	this.length = 0;
};
$hxClasses["List"] = List;
List.__name__ = ["List"];
List.prototype = {
	h: null
	,q: null
	,length: null
	,add: function(item) {
		var x = [item];
		if(this.h == null) this.h = x; else this.q[1] = x;
		this.q = x;
		this.length++;
	}
	,push: function(item) {
		var x = [item,this.h];
		this.h = x;
		if(this.q == null) this.q = x;
		this.length++;
	}
	,first: function() {
		if(this.h == null) return null; else return this.h[0];
	}
	,last: function() {
		if(this.q == null) return null; else return this.q[0];
	}
	,pop: function() {
		if(this.h == null) return null;
		var x = this.h[0];
		this.h = this.h[1];
		if(this.h == null) this.q = null;
		this.length--;
		return x;
	}
	,isEmpty: function() {
		return this.h == null;
	}
	,remove: function(v) {
		var prev = null;
		var l = this.h;
		while(l != null) {
			if(l[0] == v) {
				if(prev == null) this.h = l[1]; else prev[1] = l[1];
				if(this.q == l) this.q = prev;
				this.length--;
				return true;
			}
			prev = l;
			l = l[1];
		}
		return false;
	}
	,iterator: function() {
		return { h : this.h, hasNext : function() {
			return this.h != null;
		}, next : function() {
			if(this.h == null) return null;
			var x = this.h[0];
			this.h = this.h[1];
			return x;
		}};
	}
	,__class__: List
};
var Magic = function(x,y) {
	com.haxepunk.Entity.call(this,x,y);
	this.magic = new com.haxepunk.graphics.Spritemap(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e = com.haxepunk.ds.Either.Right(new com.haxepunk.graphics.atlas.TileAtlas((function($this) {
			var $r;
			var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName("graphics/magic.png",true);
			$r = data;
			return $r;
		}($this))));
		$r = e;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Left(com.haxepunk.HXP.getBitmap("graphics/magic.png"));
		$r = e1;
		return $r;
	}(this)),3,5);
	this.magic.add("red",[0,1,2,2],15);
	this.magic.add("green",[3,4,5,4],15);
	this.magic.add("blue",[6,7,8,7],15);
	this.magic.add("purple",[9,10,11,10],15);
	this.magic.smooth = false;
	this.magic.play("red");
	this.width = 1;
	this.height = 1;
	this.originX = -1;
	this.originY = -1;
	this.velocity = new lime.math.Vector2(0,0);
	this.set_graphic(this.magic);
	this.lifetime = 60;
	this.inert = false;
	this.whitelistCollisions = new Array();
};
$hxClasses["Magic"] = Magic;
Magic.__name__ = ["Magic"];
Magic.__super__ = com.haxepunk.Entity;
Magic.prototype = $extend(com.haxepunk.Entity.prototype,{
	render: function() {
		var _g = this;
		_g.x = (_g.followCamera?_g.x + com.haxepunk.HXP.camera.x:_g.x) - 1.5;
		var _g1 = this;
		_g1.y = (_g1.followCamera?_g1.y + com.haxepunk.HXP.camera.y:_g1.y) - 1.5;
		com.haxepunk.Entity.prototype.render.call(this);
		var _g2 = this;
		_g2.x = (_g2.followCamera?_g2.x + com.haxepunk.HXP.camera.x:_g2.x) + 1.5;
		var _g3 = this;
		_g3.y = (_g3.followCamera?_g3.y + com.haxepunk.HXP.camera.y:_g3.y) + 1.5;
	}
	,update: function() {
		com.haxepunk.Entity.prototype.update.call(this);
		var collision = this.collideTypes(com.haxepunk._Entity.SolidType_Impl_.fromRight(["block","blockFlammable","player"]),(this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) + this.velocity.x,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) + this.velocity.y);
		if(collision != null && !Lambda.has(this.whitelistCollisions,collision)) {
			if(collision._type == "blockFlammable") {
				var flammable;
				flammable = js.Boot.__cast(collision , BlockFlammable);
				flammable.onFire = true;
			}
			this.velocity = new lime.math.Vector2(0,0);
		} else this.moveBy(this.velocity.x,this.velocity.y);
		this.lifetime--;
		if(this.lifetime <= 0) this._scene.remove(this);
	}
	,magic: null
	,velocity: null
	,lifetime: null
	,inert: null
	,whitelistCollisions: null
	,__class__: Magic
});
com.haxepunk.Scene = function() {
	com.haxepunk.Tweener.call(this);
	this.visible = true;
	this.camera = new flash.geom.Point();
	this.sprite = new flash.display.Sprite();
	this._layerList = new Array();
	this._add = new Array();
	this._remove = new Array();
	this._recycle = new Array();
	this._update = new List();
	this._layerDisplay = new haxe.ds.IntMap();
	this._layers = new haxe.ds.IntMap();
	this._types = new haxe.ds.StringMap();
	this._classCount = new haxe.ds.StringMap();
	this._recycled = new haxe.ds.StringMap();
	this._entityNames = new haxe.ds.StringMap();
};
$hxClasses["com.haxepunk.Scene"] = com.haxepunk.Scene;
com.haxepunk.Scene.__name__ = ["com","haxepunk","Scene"];
com.haxepunk.Scene.squareRects = function(x1,y1,w1,h1,x2,y2,w2,h2) {
	if(x1 < x2 + w2 && x2 < x1 + w1) {
		if(y1 < y2 + h2 && y2 < y1 + h1) return 0;
		if(y1 > y2) return (y1 - (y2 + h2)) * (y1 - (y2 + h2));
		return (y2 - (y1 + h1)) * (y2 - (y1 + h1));
	}
	if(y1 < y2 + h2 && y2 < y1 + h1) {
		if(x1 > x2) return (x1 - (x2 + w2)) * (x1 - (x2 + w2));
		return (x2 - (x1 + w1)) * (x2 - (x1 + w1));
	}
	if(x1 > x2) {
		if(y1 > y2) return com.haxepunk.HXP.distanceSquared(x2 + w2,y2 + h2,x1,y1);
		return com.haxepunk.HXP.distanceSquared(x2 + w2,y2,x1,y1 + h1);
	}
	if(y1 > y2) return com.haxepunk.HXP.distanceSquared(x2,y2 + h2,x1 + w1,y1);
	return com.haxepunk.HXP.distanceSquared(x2,y2,x1 + w1,y1 + h1);
};
com.haxepunk.Scene.squarePointRect = function(px,py,rx,ry,rw,rh) {
	if(px >= rx && px <= rx + rw) {
		if(py >= ry && py <= ry + rh) return 0;
		if(py > ry) return (py - (ry + rh)) * (py - (ry + rh));
		return (ry - py) * (ry - py);
	}
	if(py >= ry && py <= ry + rh) {
		if(px > rx) return (px - (rx + rw)) * (px - (rx + rw));
		return (rx - px) * (rx - px);
	}
	if(px > rx) {
		if(py > ry) return com.haxepunk.HXP.distanceSquared(rx + rw,ry + rh,px,py);
		return com.haxepunk.HXP.distanceSquared(rx + rw,ry,px,py);
	}
	if(py > ry) return com.haxepunk.HXP.distanceSquared(rx,ry + rh,px,py);
	return (px - rx) * (px - rx) + (py - ry) * (py - ry);
};
com.haxepunk.Scene.__super__ = com.haxepunk.Tweener;
com.haxepunk.Scene.prototype = $extend(com.haxepunk.Tweener.prototype,{
	visible: null
	,camera: null
	,begin: function() {
	}
	,end: function() {
	}
	,focusGained: function() {
	}
	,focusLost: function() {
	}
	,update: function() {
		var $it0 = this._update.iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			if(e.active) {
				if(e.get_hasTween()) e.updateTweens();
				e.update();
			}
			if(e._graphic != null && e._graphic.active) e._graphic.update();
		}
	}
	,showLayer: function(layer,show) {
		if(show == null) show = true;
		this._layerDisplay.set(layer,show);
	}
	,layerVisible: function(layer) {
		return !this._layerDisplay.exists(layer) || this._layerDisplay.get(layer);
	}
	,layerSort: function(a,b) {
		return b - a;
	}
	,render: function() {
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
			com.haxepunk.graphics.atlas.AtlasData._scene = this;
			com.haxepunk.graphics.atlas.AtlasData._scene.sprite.get_graphics().clear();
		}
		var _g = 0;
		var _g1 = this._layerList;
		while(_g < _g1.length) {
			var layer = _g1[_g];
			++_g;
			if(!(!this._layerDisplay.exists(layer) || this._layerDisplay.get(layer))) continue;
			var $it0 = this._layers.get(layer).iterator();
			while( $it0.hasNext() ) {
				var e = $it0.next();
				if(e.visible) e.render();
			}
		}
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
			if(com.haxepunk.graphics.atlas.AtlasData.active != null) {
				if(com.haxepunk.graphics.atlas.AtlasData.active != null) com.haxepunk.graphics.atlas.AtlasData.active.flush();
				com.haxepunk.graphics.atlas.AtlasData.active = null;
			}
			null;
		}
	}
	,mouseX: null
	,get_mouseX: function() {
		return Std["int"](com.haxepunk.HXP.screen.get_mouseX() + this.camera.x);
	}
	,mouseY: null
	,get_mouseY: function() {
		return Std["int"](com.haxepunk.HXP.screen.get_mouseY() + this.camera.y);
	}
	,sprite: null
	,add: function(e) {
		this._add[this._add.length] = e;
		return e;
	}
	,remove: function(e) {
		this._remove[this._remove.length] = e;
		return e;
	}
	,removeAll: function() {
		var $it0 = this._update.iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			this._remove[this._remove.length] = e;
		}
	}
	,addList: function(list) {
		var $it0 = $iterator(list)();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			this.add(e);
		}
	}
	,removeList: function(list) {
		var $it0 = $iterator(list)();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			this.remove(e);
		}
	}
	,addGraphic: function(graphic,layer,x,y) {
		if(y == null) y = 0;
		if(x == null) x = 0;
		if(layer == null) layer = 0;
		var e = new com.haxepunk.Entity(x,y,graphic);
		e.set_layer(layer);
		e.active = false;
		return this.add(e);
	}
	,addMask: function(mask,type,x,y) {
		if(y == null) y = 0;
		if(x == null) x = 0;
		var e = new com.haxepunk.Entity(x,y,null,mask);
		if(type != "") e.set_type(type);
		e.active = e.visible = false;
		return this.add(e);
	}
	,create: function(classType,addToScene,constructorsArgs) {
		if(addToScene == null) addToScene = true;
		var className = Type.getClassName(classType);
		var e = this._recycled.get(className);
		if(e != null) {
			this._recycled.set(className,e._recycleNext);
			e._recycleNext = null;
		} else if(constructorsArgs != null) e = Type.createInstance(classType,constructorsArgs); else e = Type.createInstance(classType,[]);
		if(addToScene) return this.add(e); else return e;
	}
	,recycle: function(e) {
		this._recycle[this._recycle.length] = e;
		return this.remove(e);
	}
	,clearRecycled: function(classType) {
		var className = Type.getClassName(classType);
		var e = this._recycled.get(className);
		var n;
		while(e != null) {
			n = e._recycleNext;
			e._recycleNext = null;
			e = n;
		}
		this._recycled.remove(className);
	}
	,clearRecycledAll: function() {
		var e;
		var $it0 = this._recycled.iterator();
		while( $it0.hasNext() ) {
			var e1 = $it0.next();
			this.clearRecycled(Type.getClass(e1));
		}
	}
	,bringToFront: function(e) {
		if(e._scene != this) return false;
		var list = this._layers.get(e._layer);
		list.remove(e);
		list.push(e);
		return true;
	}
	,sendToBack: function(e) {
		if(e._scene != this) return false;
		var list = this._layers.get(e._layer);
		list.remove(e);
		list.add(e);
		return true;
	}
	,bringForward: function(e) {
		if(e._scene != this) return false;
		return true;
	}
	,sendBackward: function(e) {
		if(e._scene != this) return false;
		return true;
	}
	,isAtFront: function(e) {
		return e == this._layers.get(e._layer).first();
	}
	,isAtBack: function(e) {
		return e == this._layers.get(e._layer).last();
	}
	,collideRect: function(type,rX,rY,rWidth,rHeight) {
		if(this._types.exists(type)) {
			var $it0 = this._types.get(type).iterator();
			while( $it0.hasNext() ) {
				var e = $it0.next();
				if(e.collidable && e.collideRect(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x,e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y,rX,rY,rWidth,rHeight)) return e;
			}
		}
		return null;
	}
	,collidePoint: function(type,pX,pY) {
		var result = null;
		if(this._types.exists(type)) {
			var $it0 = this._types.get(type).iterator();
			while( $it0.hasNext() ) {
				var e = $it0.next();
				if(e.collidable && e.collidePoint(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x,e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y,pX,pY)) {
					if(result == null) result = e; else if(e._layer < result._layer) result = e;
				}
			}
		}
		return result;
	}
	,collideLine: function(type,fromX,fromY,toX,toY,precision,p) {
		if(precision == null) precision = 1;
		if(precision < 1) precision = 1;
		if(Math.sqrt((toX - fromX) * (toX - fromX) + (toY - fromY) * (toY - fromY)) < precision) {
			if(p != null) {
				if(fromX == toX && fromY == toY) {
					p.x = toX;
					p.y = toY;
					return this.collidePoint(type,toX,toY);
				}
				return this.collideLine(type,fromX,fromY,toX,toY,1,p);
			} else return this.collidePoint(type,fromX,toY);
		}
		var xDelta = Std["int"](Math.abs(toX - fromX));
		var yDelta = Std["int"](Math.abs(toY - fromY));
		var xSign;
		if(toX > fromX) xSign = precision; else xSign = -precision;
		var ySign;
		if(toY > fromY) ySign = precision; else ySign = -precision;
		var x = fromX;
		var y = fromY;
		var e;
		if(xDelta > yDelta) {
			ySign *= yDelta / xDelta;
			if(xSign > 0) while(x < toX) {
				if((e = this.collidePoint(type,x,y)) != null) {
					if(p == null) return e;
					if(precision < 2) {
						p.x = x - xSign;
						p.y = y - ySign;
						return e;
					}
					return this.collideLine(type,x - xSign | 0,y - ySign | 0,toX,toY,1,p);
				}
				x += xSign;
				y += ySign;
			} else while(x > toX) {
				if((e = this.collidePoint(type,x,y)) != null) {
					if(p == null) return e;
					if(precision < 2) {
						p.x = x - xSign;
						p.y = y - ySign;
						return e;
					}
					return this.collideLine(type,x - xSign | 0,y - ySign | 0,toX,toY,1,p);
				}
				x += xSign;
				y += ySign;
			}
		} else {
			xSign *= xDelta / yDelta;
			if(ySign > 0) while(y < toY) {
				if((e = this.collidePoint(type,x,y)) != null) {
					if(p == null) return e;
					if(precision < 2) {
						p.x = x - xSign;
						p.y = y - ySign;
						return e;
					}
					return this.collideLine(type,x - xSign | 0,y - ySign | 0,toX,toY,1,p);
				}
				x += xSign;
				y += ySign;
			} else while(y > toY) {
				if((e = this.collidePoint(type,x,y)) != null) {
					if(p == null) return e;
					if(precision < 2) {
						p.x = x - xSign;
						p.y = y - ySign;
						return e;
					}
					return this.collideLine(type,x - xSign | 0,y - ySign | 0,toX,toY,1,p);
				}
				x += xSign;
				y += ySign;
			}
		}
		if(precision > 1) {
			if(p == null) return this.collidePoint(type,toX,toY);
			if(this.collidePoint(type,toX,toY) != null) return this.collideLine(type,x - xSign | 0,y - ySign | 0,toX,toY,1,p);
		}
		if(p != null) {
			p.x = toX;
			p.y = toY;
		}
		return null;
	}
	,collideRectInto: function(type,rX,rY,rWidth,rHeight,into) {
		var n = into.length;
		if(this._types.exists(type)) {
			var $it0 = this._types.get(type).iterator();
			while( $it0.hasNext() ) {
				var e = $it0.next();
				if(e.collidable && e.collideRect(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x,e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y,rX,rY,rWidth,rHeight)) into[n++] = e;
			}
		}
	}
	,collideCircleInto: function(type,circleX,circleY,radius,into) {
		if(!this._types.exists(type)) return;
		var n = into.length;
		radius *= radius;
		var $it0 = this._types.get(type).iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			if(com.haxepunk.HXP.distanceSquared(circleX,circleY,e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x,e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) < radius) into[n++] = e;
		}
	}
	,collidePointInto: function(type,pX,pY,into) {
		if(!this._types.exists(type)) return;
		var n = into.length;
		var $it0 = this._types.get(type).iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			if(e.collidable && e.collidePoint(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x,e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y,pX,pY)) into[n++] = e;
		}
	}
	,nearestToRect: function(type,x,y,width,height) {
		if(!this._types.exists(type)) return null;
		var nearDist = 179 * Math.pow(10,306);
		var near = null;
		var dist;
		var $it0 = this._types.get(type).iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			dist = com.haxepunk.Scene.squareRects(x,y,width,height,(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX,(e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY,e.width,e.height);
			if(dist < nearDist) {
				nearDist = dist;
				near = e;
			}
		}
		return near;
	}
	,nearestToEntity: function(type,e,useHitboxes) {
		if(useHitboxes == null) useHitboxes = false;
		if(!this._types.exists(type)) return null;
		if(useHitboxes) return this.nearestToRect(type,(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX,(e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY,e.width,e.height);
		var nearDist = 179 * Math.pow(10,306);
		var near = null;
		var dist;
		var x;
		x = (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX;
		var y;
		y = (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY;
		var $it0 = this._types.get(type).iterator();
		while( $it0.hasNext() ) {
			var n = $it0.next();
			dist = (x - (n.followCamera?n.x + com.haxepunk.HXP.camera.x:n.x)) * (x - (n.followCamera?n.x + com.haxepunk.HXP.camera.x:n.x)) + (y - (n.followCamera?n.y + com.haxepunk.HXP.camera.y:n.y)) * (y - (n.followCamera?n.y + com.haxepunk.HXP.camera.y:n.y));
			if(dist < nearDist) {
				nearDist = dist;
				near = n;
			}
		}
		return near;
	}
	,nearestToClass: function(type,e,classType,useHitboxes) {
		if(useHitboxes == null) useHitboxes = false;
		if(!this._types.exists(type)) return null;
		if(useHitboxes) return this.nearestToRect(type,(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX,(e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY,e.width,e.height);
		var nearDist = 179 * Math.pow(10,306);
		var near = null;
		var dist;
		var x;
		x = (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX;
		var y;
		y = (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY;
		var $it0 = this._types.get(type).iterator();
		while( $it0.hasNext() ) {
			var n = $it0.next();
			dist = (x - (n.followCamera?n.x + com.haxepunk.HXP.camera.x:n.x)) * (x - (n.followCamera?n.x + com.haxepunk.HXP.camera.x:n.x)) + (y - (n.followCamera?n.y + com.haxepunk.HXP.camera.y:n.y)) * (y - (n.followCamera?n.y + com.haxepunk.HXP.camera.y:n.y));
			if(dist < nearDist && js.Boot.__instanceof(e,classType)) {
				nearDist = dist;
				near = n;
			}
		}
		return near;
	}
	,nearestToPoint: function(type,x,y,useHitboxes) {
		if(useHitboxes == null) useHitboxes = false;
		if(!this._types.exists(type)) return null;
		var nearDist = 179 * Math.pow(10,306);
		var near = null;
		var dist;
		if(useHitboxes) {
			var $it0 = this._types.get(type).iterator();
			while( $it0.hasNext() ) {
				var n = $it0.next();
				dist = com.haxepunk.Scene.squarePointRect(x,y,(n.followCamera?n.x + com.haxepunk.HXP.camera.x:n.x) - n.originX,(n.followCamera?n.y + com.haxepunk.HXP.camera.y:n.y) - n.originY,n.width,n.height);
				if(dist < nearDist) {
					nearDist = dist;
					near = n;
				}
			}
		} else {
			var $it1 = this._types.get(type).iterator();
			while( $it1.hasNext() ) {
				var n1 = $it1.next();
				dist = (x - (n1.followCamera?n1.x + com.haxepunk.HXP.camera.x:n1.x)) * (x - (n1.followCamera?n1.x + com.haxepunk.HXP.camera.x:n1.x)) + (y - (n1.followCamera?n1.y + com.haxepunk.HXP.camera.y:n1.y)) * (y - (n1.followCamera?n1.y + com.haxepunk.HXP.camera.y:n1.y));
				if(dist < nearDist) {
					nearDist = dist;
					near = n1;
				}
			}
		}
		return near;
	}
	,get_count: function() {
		return this._update.length;
	}
	,typeCount: function(type) {
		if(this._types.exists(type)) return this._types.get(type).length; else return 0;
	}
	,classCount: function(c) {
		if(this._classCount.exists(c)) return this._classCount.get(c); else return 0;
	}
	,layerCount: function(layer) {
		if(this._layers.exists(layer)) return this._layers.get(layer).length; else return 0;
	}
	,first: null
	,get_first: function() {
		return this._update.first();
	}
	,layers: null
	,get_layers: function() {
		return this._layerList.length;
	}
	,entitiesForType: function(type) {
		if(this._types.exists(type)) return this._types.get(type); else return null;
	}
	,classFirst: function(c) {
		var $it0 = this._update.iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			if(js.Boot.__instanceof(e,c)) return e;
		}
		return null;
	}
	,layerFirst: function(layer) {
		if(this._layers.exists(layer)) return this._layers.get(layer).first(); else return null;
	}
	,layerLast: function(layer) {
		if(this._layers.exists(layer)) return this._layers.get(layer).last(); else return null;
	}
	,farthest: null
	,get_farthest: function() {
		if(this._layerList.length == 0) return null;
		return this._layers.get(this._layerList[this._layerList.length - 1]).last();
	}
	,nearest: null
	,get_nearest: function() {
		if(this._layerList.length == 0) return null;
		return this._layers.get(this._layerList[0]).first();
	}
	,layerFarthest: null
	,get_layerFarthest: function() {
		if(this._layerList.length == 0) return 0;
		return this._layerList[this._layerList.length - 1];
	}
	,layerNearest: null
	,get_layerNearest: function() {
		if(this._layerList.length == 0) return 0;
		return this._layerList[0];
	}
	,uniqueTypes: null
	,get_uniqueTypes: function() {
		var i = 0;
		var $it0 = this._types.iterator();
		while( $it0.hasNext() ) {
			var type = $it0.next();
			i++;
		}
		return i;
	}
	,getType: function(type,into) {
		if(!this._types.exists(type)) return;
		var n = into.length;
		var $it0 = this._types.get(type).iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			into[n++] = e;
		}
	}
	,getClass: function(c,into) {
		var n = into.length;
		var $it0 = this._update.iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			if(js.Boot.__instanceof(e,c)) into[n++] = e;
		}
	}
	,getLayer: function(layer,into) {
		var n = into.length;
		var $it0 = this._layers.get(layer).iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			into[n++] = e;
		}
	}
	,getAll: function(into) {
		var n = into.length;
		var $it0 = this._update.iterator();
		while( $it0.hasNext() ) {
			var e = $it0.next();
			into[n++] = e;
		}
	}
	,getInstance: function(name) {
		return this._entityNames.get(name);
	}
	,updateLists: function(shouldAdd) {
		if(shouldAdd == null) shouldAdd = true;
		var e;
		if(this._remove.length > 0) {
			var _g = 0;
			var _g1 = this._remove;
			while(_g < _g1.length) {
				var e1 = _g1[_g];
				++_g;
				if(e1._scene == null) {
					var idx = HxOverrides.indexOf(this._add,e1,0);
					if(idx >= 0) this._add.splice(idx,1);
					continue;
				}
				if(e1._scene != this) continue;
				e1.removed();
				e1._scene = null;
				this.removeUpdate(e1);
				this.removeRender(e1);
				if(e1._type != "") this.removeType(e1);
				if(e1._name != "") this._entityNames.remove(e1._name);
				if(e1.autoClear && e1.get_hasTween()) e1.clearTweens();
			}
			this._remove.length = 0;
		}
		if(shouldAdd && this._add.length > 0) {
			var _g2 = 0;
			var _g11 = this._add;
			while(_g2 < _g11.length) {
				var e2 = _g11[_g2];
				++_g2;
				if(e2._scene != null) continue;
				e2._scene = this;
				this.addUpdate(e2);
				this.addRender(e2);
				if(e2._type != "") this.addType(e2);
				if(e2._name != "") this._entityNames.set(e2._name,e2);
				e2.added();
			}
			this._add.length = 0;
		}
		if(this._recycle.length > 0) {
			var _g3 = 0;
			var _g12 = this._recycle;
			while(_g3 < _g12.length) {
				var e3 = _g12[_g3];
				++_g3;
				if(e3._scene != null || e3._recycleNext != null) continue;
				e3._recycleNext = this._recycled.get(e3._class);
				this._recycled.set(e3._class,e3);
			}
			this._recycle.length = 0;
		}
	}
	,addUpdate: function(e) {
		this._update.add(e);
		if(this._classCount.get(e._class) != 0) this._classCount.set(e._class,0);
		var value = this._classCount.get(e._class) + 1;
		this._classCount.set(e._class,value);
	}
	,removeUpdate: function(e) {
		this._update.remove(e);
		var value = this._classCount.get(e._class) - 1;
		this._classCount.set(e._class,value);
	}
	,addRender: function(e) {
		var list;
		if(this._layers.exists(e._layer)) list = this._layers.get(e._layer); else {
			list = new List();
			this._layers.set(e._layer,list);
			if(this._layerList.length == 0) this._layerList[0] = e._layer; else com.haxepunk.HXP.insertSortedKey(this._layerList,e._layer,$bind(this,this.layerSort));
		}
		list.add(e);
	}
	,removeRender: function(e) {
		var list = this._layers.get(e._layer);
		list.remove(e);
		if(list.length == 0) {
			HxOverrides.remove(this._layerList,e._layer);
			this._layers.remove(e._layer);
		}
	}
	,addType: function(e) {
		var list;
		if(this._types.exists(e._type)) list = this._types.get(e._type); else {
			list = new List();
			this._types.set(e._type,list);
		}
		list.push(e);
	}
	,removeType: function(e) {
		if(!this._types.exists(e._type)) return;
		var list = this._types.get(e._type);
		list.remove(e);
		if(list.length == 0) this._types.remove(e._type);
	}
	,registerName: function(e) {
		this._entityNames.set(e._name,e);
	}
	,unregisterName: function(e) {
		this._entityNames.remove(e._name);
	}
	,_add: null
	,_remove: null
	,_recycle: null
	,_update: null
	,_layerList: null
	,_layerDisplay: null
	,_layers: null
	,_classCount: null
	,_types: null
	,_recycled: null
	,_entityNames: null
	,__class__: com.haxepunk.Scene
	,__properties__: $extend(com.haxepunk.Tweener.prototype.__properties__,{get_uniqueTypes:"get_uniqueTypes",get_layerNearest:"get_layerNearest",get_layerFarthest:"get_layerFarthest",get_nearest:"get_nearest",get_farthest:"get_farthest",get_layers:"get_layers",get_first:"get_first",get_count:"get_count",get_mouseY:"get_mouseY",get_mouseX:"get_mouseX"})
});
var MainScene = function() {
	com.haxepunk.Scene.call(this);
};
$hxClasses["MainScene"] = MainScene;
MainScene.__name__ = ["MainScene"];
MainScene.__super__ = com.haxepunk.Scene;
MainScene.prototype = $extend(com.haxepunk.Scene.prototype,{
	begin: function() {
		com.haxepunk.HXP.screen.set_scaleX(com.haxepunk.HXP.screen.set_scaleY(4));
		com.haxepunk.HXP.resize(com.haxepunk.HXP.stage.get_stageWidth(),com.haxepunk.HXP.stage.get_stageHeight());
		var player = new Player(5,4);
		var _g = 0;
		while(_g < 10) {
			var i = _g++;
			this.add(new Block(i,5));
		}
		var _g1 = 0;
		while(_g1 < 15) {
			var i1 = _g1++;
			this.add(new Block(i1 + 9,7));
		}
		var _g2 = 0;
		while(_g2 < 4) {
			var i2 = _g2++;
			this.add(new BlockFlammable(15 + i2,6));
		}
		this.add(player);
		this.add(player.magic);
	}
	,__class__: MainScene
});
var NMEPreloader = function() {
	flash.display.Sprite.call(this);
	var backgroundColor = this.getBackgroundColor();
	var r = backgroundColor >> 16 & 255;
	var g = backgroundColor >> 8 & 255;
	var b = backgroundColor & 255;
	var perceivedLuminosity = 0.299 * r + 0.587 * g + 0.114 * b;
	var color = 0;
	if(perceivedLuminosity < 70) color = 16777215;
	var x = 30;
	var height = 9;
	var y = this.getHeight() / 2 - height / 2;
	var width = this.getWidth() - x * 2;
	var padding = 3;
	this.outline = new flash.display.Sprite();
	this.outline.get_graphics().lineStyle(1,color,0.15,true);
	this.outline.get_graphics().drawRoundRect(0,0,width,height,padding * 2,padding * 2);
	this.outline.set_x(x);
	this.outline.set_y(y);
	this.addChild(this.outline);
	this.progress = new flash.display.Sprite();
	this.progress.get_graphics().beginFill(color,0.35);
	this.progress.get_graphics().drawRect(0,0,width - padding * 2,height - padding * 2);
	this.progress.set_x(x + padding);
	this.progress.set_y(y + padding);
	this.progress.set_scaleX(0);
	this.addChild(this.progress);
};
$hxClasses["NMEPreloader"] = NMEPreloader;
NMEPreloader.__name__ = ["NMEPreloader"];
NMEPreloader.__super__ = flash.display.Sprite;
NMEPreloader.prototype = $extend(flash.display.Sprite.prototype,{
	outline: null
	,progress: null
	,getBackgroundColor: function() {
		return 0;
	}
	,getHeight: function() {
		var height = 600;
		if(height > 0) return height; else return flash.Lib.get_current().get_stage().get_stageHeight();
	}
	,getWidth: function() {
		var width = 800;
		if(width > 0) return width; else return flash.Lib.get_current().get_stage().get_stageWidth();
	}
	,onInit: function() {
	}
	,onLoaded: function() {
		this.dispatchEvent(new flash.events.Event("complete"));
	}
	,onUpdate: function(bytesLoaded,bytesTotal) {
		var percentLoaded = bytesLoaded / bytesTotal;
		if(percentLoaded > 1) percentLoaded == 1;
		this.progress.set_scaleX(percentLoaded);
	}
	,__class__: NMEPreloader
});
var Player = function(x,y) {
	com.haxepunk.Entity.call(this,x * 10,y * 10);
	this.width = 4;
	this.height = 9;
	this.originX = -4;
	this.originY = -1;
	this.sprite = new com.haxepunk.graphics.Spritemap(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e = com.haxepunk.ds.Either.Right(new com.haxepunk.graphics.atlas.TileAtlas((function($this) {
			var $r;
			var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName("graphics/player.png",true);
			$r = data;
			return $r;
		}($this))));
		$r = e;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Left(com.haxepunk.HXP.getBitmap("graphics/player.png"));
		$r = e1;
		return $r;
	}(this)),10,10);
	this.sprite.add("idle",[0]);
	this.sprite.add("walk",[1,2,3,2],7);
	this.sprite.add("fall",[4,5,4,5],4);
	this.sprite.add("jump",[6]);
	this.sprite.play("idle");
	this.sprite.smooth = false;
	this.set_graphic(this.sprite);
	this.magic = new Magic(x,y);
	this.magic.inert = true;
	com.haxepunk.utils.Input.define("left",[37,65]);
	com.haxepunk.utils.Input.define("right",[39,68]);
	com.haxepunk.utils.Input.define("jump",[38,32,87]);
	this.velocity = new lime.math.Vector2(0,0);
	this.fireCooldown = 0;
};
$hxClasses["Player"] = Player;
Player.__name__ = ["Player"];
Player.__super__ = com.haxepunk.Entity;
Player.prototype = $extend(com.haxepunk.Entity.prototype,{
	update: function() {
		com.haxepunk.Entity.prototype.update.call(this);
		this.velocity.x = 0;
		if(com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromLeft("left"))) this.velocity.x -= 0.5;
		if(com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromLeft("right"))) this.velocity.x += 0.5;
		if(this.velocity.x == 0) this.sprite.play("idle"); else {
			this.sprite.play("walk");
			this.sprite.set_flipped(this.fireCooldown >= 2?this.sprite._flipped:this.velocity.x < 0);
		}
		this.velocity.y += 0.09;
		this.moveBy(this.velocity.x,this.velocity.y,com.haxepunk._Entity.SolidType_Impl_.fromRight(["block","blockFlammable"]),true);
		var onGround = this.collideTypes(com.haxepunk._Entity.SolidType_Impl_.fromRight(["block","blockFlammable"]),this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) + 1) != null;
		if(onGround) {
			this.velocity.y = 0;
			if(com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromLeft("jump"))) this.velocity.y -= 2.3;
		} else if(this.velocity.y >= 0) this.sprite.play("fall"); else {
			if(this.collideTypes(com.haxepunk._Entity.SolidType_Impl_.fromRight(["block","blockFlammable"]),this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x,(this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - 1) != null) this.velocity.y = 0;
			this.sprite.play("jump");
		}
		this._scene.camera.x = (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) - 100 + 5;
		this._scene.camera.y = (this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - 80 + 5;
		this.magic.lifetime = 10;
		this.magic.x = (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) + 7.5;
		if(this.sprite._flipped) {
			var _g = this.magic;
			_g.x = (_g.followCamera?_g.x + com.haxepunk.HXP.camera.x:_g.x) - 5;
		}
		this.magic.y = (this.followCamera?this.y + com.haxepunk.HXP.camera.y:this.y) - .5;
		this.fireCooldown--;
		if(this.fireCooldown <= 0 && com.haxepunk.utils.Input.mouseDown) {
			var mx = com.haxepunk.HXP.screen.get_mouseX() + this._scene.camera.x;
			var my = com.haxepunk.HXP.screen.get_mouseY() + this._scene.camera.y;
			var _g1 = 1;
			var _g2 = Math.random() * 2 + 3;
			while(_g1 < _g2) {
				var i = _g1++;
				var mag = new Magic(this.magic.get_x(),this.magic.get_y());
				var velocity = new lime.math.Vector2(this.magic.get_x() - mx + 1.5 + (Math.random() - 0.5) * 8,this.magic.get_y() - my + 1.5 + (Math.random() - 0.5) * 8);
				velocity.normalize(-1);
				mag.velocity = velocity;
				mag.lifetime += Math.random() * 10;
				mag.whitelistCollisions.push(this);
				this._scene.add(mag);
			}
			if(mx < (this.followCamera?this.x + com.haxepunk.HXP.camera.x:this.x) + 5) this.sprite.set_flipped(true); else this.sprite.set_flipped(false);
			this.fireCooldown = 5;
		}
	}
	,sprite: null
	,velocity: null
	,magic: null
	,fireCooldown: null
	,__class__: Player
});
var StringBuf = function() {
	this.b = "";
};
$hxClasses["StringBuf"] = StringBuf;
StringBuf.__name__ = ["StringBuf"];
StringBuf.prototype = {
	b: null
	,add: function(x) {
		this.b += Std.string(x);
	}
	,addSub: function(s,pos,len) {
		if(len == null) this.b += HxOverrides.substr(s,pos,null); else this.b += HxOverrides.substr(s,pos,len);
	}
	,__class__: StringBuf
};
var StringTools = function() { };
$hxClasses["StringTools"] = StringTools;
StringTools.__name__ = ["StringTools"];
StringTools.urlEncode = function(s) {
	return encodeURIComponent(s);
};
StringTools.htmlEscape = function(s,quotes) {
	s = s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
	if(quotes) return s.split("\"").join("&quot;").split("'").join("&#039;"); else return s;
};
StringTools.startsWith = function(s,start) {
	return s.length >= start.length && HxOverrides.substr(s,0,start.length) == start;
};
StringTools.replace = function(s,sub,by) {
	return s.split(sub).join(by);
};
StringTools.fastCodeAt = function(s,index) {
	return s.charCodeAt(index);
};
var XmlType = $hxClasses["XmlType"] = { __ename__ : true, __constructs__ : [] };
var Xml = function() {
};
$hxClasses["Xml"] = Xml;
Xml.__name__ = ["Xml"];
Xml.parse = function(str) {
	return haxe.xml.Parser.parse(str);
};
Xml.createElement = function(name) {
	var r = new Xml();
	r.nodeType = Xml.Element;
	r._children = new Array();
	r._attributes = new haxe.ds.StringMap();
	r.set_nodeName(name);
	return r;
};
Xml.createPCData = function(data) {
	var r = new Xml();
	r.nodeType = Xml.PCData;
	r.set_nodeValue(data);
	return r;
};
Xml.createCData = function(data) {
	var r = new Xml();
	r.nodeType = Xml.CData;
	r.set_nodeValue(data);
	return r;
};
Xml.createComment = function(data) {
	var r = new Xml();
	r.nodeType = Xml.Comment;
	r.set_nodeValue(data);
	return r;
};
Xml.createDocType = function(data) {
	var r = new Xml();
	r.nodeType = Xml.DocType;
	r.set_nodeValue(data);
	return r;
};
Xml.createProcessingInstruction = function(data) {
	var r = new Xml();
	r.nodeType = Xml.ProcessingInstruction;
	r.set_nodeValue(data);
	return r;
};
Xml.createDocument = function() {
	var r = new Xml();
	r.nodeType = Xml.Document;
	r._children = new Array();
	return r;
};
Xml.prototype = {
	nodeType: null
	,_nodeName: null
	,_nodeValue: null
	,_attributes: null
	,_children: null
	,_parent: null
	,get_nodeName: function() {
		if(this.nodeType != Xml.Element) throw "bad nodeType";
		return this._nodeName;
	}
	,set_nodeName: function(n) {
		if(this.nodeType != Xml.Element) throw "bad nodeType";
		return this._nodeName = n;
	}
	,set_nodeValue: function(v) {
		if(this.nodeType == Xml.Element || this.nodeType == Xml.Document) throw "bad nodeType";
		return this._nodeValue = v;
	}
	,get: function(att) {
		if(this.nodeType != Xml.Element) throw "bad nodeType";
		return this._attributes.get(att);
	}
	,set: function(att,value) {
		if(this.nodeType != Xml.Element) throw "bad nodeType";
		this._attributes.set(att,value);
	}
	,exists: function(att) {
		if(this.nodeType != Xml.Element) throw "bad nodeType";
		return this._attributes.exists(att);
	}
	,elements: function() {
		if(this._children == null) throw "bad nodetype";
		return { cur : 0, x : this._children, hasNext : function() {
			var k = this.cur;
			var l = this.x.length;
			while(k < l) {
				if(this.x[k].nodeType == Xml.Element) break;
				k += 1;
			}
			this.cur = k;
			return k < l;
		}, next : function() {
			var k1 = this.cur;
			var l1 = this.x.length;
			while(k1 < l1) {
				var n = this.x[k1];
				k1 += 1;
				if(n.nodeType == Xml.Element) {
					this.cur = k1;
					return n;
				}
			}
			return null;
		}};
	}
	,firstElement: function() {
		if(this._children == null) throw "bad nodetype";
		var cur = 0;
		var l = this._children.length;
		while(cur < l) {
			var n = this._children[cur];
			if(n.nodeType == Xml.Element) return n;
			cur++;
		}
		return null;
	}
	,addChild: function(x) {
		if(this._children == null) throw "bad nodetype";
		if(x._parent != null) HxOverrides.remove(x._parent._children,x);
		x._parent = this;
		this._children.push(x);
	}
	,__class__: Xml
	,__properties__: {set_nodeValue:"set_nodeValue",set_nodeName:"set_nodeName",get_nodeName:"get_nodeName"}
};
com.haxepunk._Entity = {};
com.haxepunk._Entity.SolidType_Impl_ = function() { };
$hxClasses["com.haxepunk._Entity.SolidType_Impl_"] = com.haxepunk._Entity.SolidType_Impl_;
com.haxepunk._Entity.SolidType_Impl_.__name__ = ["com","haxepunk","_Entity","SolidType_Impl_"];
com.haxepunk._Entity.SolidType_Impl_.__properties__ = {get_type:"get_type"}
com.haxepunk._Entity.SolidType_Impl_._new = function(e) {
	return e;
};
com.haxepunk._Entity.SolidType_Impl_.get_type = function(this1) {
	return this1;
};
com.haxepunk._Entity.SolidType_Impl_.fromLeft = function(v) {
	var e = com.haxepunk.ds.Either.Left(v);
	return e;
};
com.haxepunk._Entity.SolidType_Impl_.fromRight = function(v) {
	var e = com.haxepunk.ds.Either.Right(v);
	return e;
};
com.haxepunk._Graphic = {};
com.haxepunk._Graphic.TileType_Impl_ = function() { };
$hxClasses["com.haxepunk._Graphic.TileType_Impl_"] = com.haxepunk._Graphic.TileType_Impl_;
com.haxepunk._Graphic.TileType_Impl_.__name__ = ["com","haxepunk","_Graphic","TileType_Impl_"];
com.haxepunk._Graphic.TileType_Impl_.__properties__ = {get_type:"get_type"}
com.haxepunk._Graphic.TileType_Impl_._new = function(e) {
	return e;
};
com.haxepunk._Graphic.TileType_Impl_.get_type = function(this1) {
	return this1;
};
com.haxepunk._Graphic.TileType_Impl_.fromString = function(tileset) {
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
		var e = com.haxepunk.ds.Either.Right(new com.haxepunk.graphics.atlas.TileAtlas((function($this) {
			var $r;
			var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName(tileset,true);
			$r = data;
			return $r;
		}(this))));
		return e;
	} else {
		var e1 = com.haxepunk.ds.Either.Left(com.haxepunk.HXP.getBitmap(tileset));
		return e1;
	}
};
com.haxepunk._Graphic.TileType_Impl_.fromTileAtlas = function(atlas) {
	var e = com.haxepunk.ds.Either.Right(atlas);
	return e;
};
com.haxepunk._Graphic.TileType_Impl_.fromBitmapData = function(bd) {
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
		var e = com.haxepunk.ds.Either.Right(new com.haxepunk.graphics.atlas.TileAtlas((function($this) {
			var $r;
			var data = new com.haxepunk.graphics.atlas.AtlasData(bd);
			$r = data;
			return $r;
		}(this))));
		return e;
	} else {
		var e1 = com.haxepunk.ds.Either.Left(bd);
		return e1;
	}
};
com.haxepunk._Graphic.ImageType_Impl_ = function() { };
$hxClasses["com.haxepunk._Graphic.ImageType_Impl_"] = com.haxepunk._Graphic.ImageType_Impl_;
com.haxepunk._Graphic.ImageType_Impl_.__name__ = ["com","haxepunk","_Graphic","ImageType_Impl_"];
com.haxepunk._Graphic.ImageType_Impl_.__properties__ = {get_type:"get_type"}
com.haxepunk._Graphic.ImageType_Impl_._new = function(e) {
	return e;
};
com.haxepunk._Graphic.ImageType_Impl_.get_type = function(this1) {
	return this1;
};
com.haxepunk._Graphic.ImageType_Impl_.fromString = function(s) {
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
		var e = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName(s,true);
			$r = data;
			return $r;
		}(this))));
		return e;
	} else {
		var e1 = com.haxepunk.ds.Either.Left(com.haxepunk.HXP.getBitmap(s));
		return e1;
	}
};
com.haxepunk._Graphic.ImageType_Impl_.fromTileAtlas = function(atlas) {
	var e = com.haxepunk.ds.Either.Right(atlas.getRegion(0));
	return e;
};
com.haxepunk._Graphic.ImageType_Impl_.fromAtlasRegion = function(region) {
	var e = com.haxepunk.ds.Either.Right(region);
	return e;
};
com.haxepunk._Graphic.ImageType_Impl_.fromBitmapData = function(bd) {
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
		var e = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data = new com.haxepunk.graphics.atlas.AtlasData(bd);
			$r = data;
			return $r;
		}(this))));
		return e;
	} else {
		var e1 = com.haxepunk.ds.Either.Left(bd);
		return e1;
	}
};
com.haxepunk.Graphic = function() {
	this.active = false;
	this._visible = true;
	this.set_x(this.y = 0);
	this.scrollX = this.scrollY = 1;
	this.relative = true;
	this._scroll = true;
	this._point = new flash.geom.Point();
};
$hxClasses["com.haxepunk.Graphic"] = com.haxepunk.Graphic;
com.haxepunk.Graphic.__name__ = ["com","haxepunk","Graphic"];
com.haxepunk.Graphic.prototype = {
	active: null
	,get_visible: function() {
		return this._visible;
	}
	,set_visible: function(value) {
		return this._visible = value;
	}
	,x: null
	,get_x: function() {
		return this.x;
	}
	,set_x: function(value) {
		return this.x = value;
	}
	,y: null
	,get_y: function() {
		return this.y;
	}
	,set_y: function(value) {
		return this.y = value;
	}
	,scrollX: null
	,scrollY: null
	,relative: null
	,blit: null
	,update: function() {
	}
	,destroy: function() {
	}
	,render: function(target,point,camera) {
	}
	,renderAtlas: function(layer,point,camera) {
	}
	,pause: function() {
		this.active = false;
	}
	,resume: function() {
		this.active = true;
	}
	,_scroll: null
	,_point: null
	,_entity: null
	,_visible: null
	,__class__: com.haxepunk.Graphic
	,__properties__: {set_y:"set_y",get_y:"get_y",set_x:"set_x",get_x:"get_x",set_visible:"set_visible",get_visible:"get_visible"}
};
com.haxepunk._HXP = {};
com.haxepunk._HXP.Position_Impl_ = function() { };
$hxClasses["com.haxepunk._HXP.Position_Impl_"] = com.haxepunk._HXP.Position_Impl_;
com.haxepunk._HXP.Position_Impl_.__name__ = ["com","haxepunk","_HXP","Position_Impl_"];
com.haxepunk._HXP.Position_Impl_.__properties__ = {set_y:"set_y",get_y:"get_y",set_x:"set_x",get_x:"get_x"}
com.haxepunk._HXP.Position_Impl_._new = function(obj) {
	return obj;
};
com.haxepunk._HXP.Position_Impl_.get_x = function(this1) {
	return this1.x;
};
com.haxepunk._HXP.Position_Impl_.set_x = function(this1,value) {
	return this1.x = value;
};
com.haxepunk._HXP.Position_Impl_.get_y = function(this1) {
	return this1.y;
};
com.haxepunk._HXP.Position_Impl_.set_y = function(this1,value) {
	return this1.y = value;
};
com.haxepunk._HXP.Position_Impl_.fromObject = function(obj) {
	return com.haxepunk._HXP.Position_Impl_._new(obj);
};
com.haxepunk._HXP.Position_Impl_.fromEntity = function(entity) {
	return com.haxepunk._HXP.Position_Impl_._new(entity);
};
flash.display.BitmapData = function(w,h,t,c) {
	if(t == null) t = true;
	this.qSync = 1;
	this.qTransparent = t;
	this.qTick = 0;
	this.qTime = new Date().getTime();
	this.rect = new flash.geom.Rectangle(0,0,w,h);
	this.component = flash.Lib.jsNode("canvas");
	this.component.width = w;
	this.component.height = h;
	this.qContext = this.component.getContext("2d");
	flash.display.BitmapData.setSmoothing(this.qContext,true);
	this.qPixel = this.qContext.createImageData(1,1);
	if(c == null) c = -1;
	if(!t) c |= -16777216;
	if((c & -16777216) != 0) this.fillRect(this.rect,c);
};
$hxClasses["flash.display.BitmapData"] = flash.display.BitmapData;
flash.display.BitmapData.__name__ = ["flash","display","BitmapData"];
flash.display.BitmapData.__interfaces__ = [flash.display.IBitmapDrawable];
flash.display.BitmapData.setSmoothing = function(o,v) {
	o.imageSmoothingEnabled = o.oImageSmoothingEnabled = o.msImageSmoothingEnabled = o.webkitImageSmoothingEnabled = o.mozImageSmoothingEnabled = v;
};
flash.display.BitmapData.makeColor = function(color) {
	return "rgba(" + (color >> 16 & 255) + "," + (color >> 8 & 255) + "," + (color & 255) + "," + ((color >> 24 & 255) / 255).toFixed(4) + ")";
};
flash.display.BitmapData.loadFromBytes = function(bytes,inRawAlpha,onload) {
	var bitmapData = new flash.display.BitmapData(0,0);
	bitmapData.nmeLoadFromBytes(bytes,inRawAlpha,onload);
	return bitmapData;
};
flash.display.BitmapData.nmeIsPNG = function(bytes) {
	bytes.position = 0;
	return bytes.data.getUint8(bytes.position++) == 137 && bytes.data.getUint8(bytes.position++) == 80 && bytes.data.getUint8(bytes.position++) == 78 && bytes.data.getUint8(bytes.position++) == 71 && bytes.data.getUint8(bytes.position++) == 13 && bytes.data.getUint8(bytes.position++) == 10 && bytes.data.getUint8(bytes.position++) == 26 && bytes.data.getUint8(bytes.position++) == 10;
};
flash.display.BitmapData.nmeIsJPG = function(bytes) {
	bytes.position = 0;
	return bytes.data.getUint8(bytes.position++) == 255 && bytes.data.getUint8(bytes.position++) == 216;
};
flash.display.BitmapData.prototype = {
	component: null
	,qContext: null
	,width: null
	,height: null
	,transparent: null
	,rect: null
	,qImageData: null
	,qSync: null
	,qTransparent: null
	,qTime: null
	,qTick: null
	,qPixel: null
	,fillRect: function(area,color) {
		if(area == null || area.width <= 0 || area.height <= 0) return;
		if(area.equals(this.rect) && this.qTransparent && (color & -16777216) == 0) {
			this.component.width = this.component.width;
			return;
		}
		if(!this.qTransparent) color |= -16777216; else if((color & -16777216) != -16777216) this.qContext.clearRect(area.x,area.y,area.width,area.height);
		if((color & -16777216) != 0) {
			this.qContext.fillStyle = flash.display.BitmapData.makeColor(color);
			this.qContext.fillRect(area.x,area.y,area.width,area.height);
		}
		this.qSync |= 5;
	}
	,clone: function() {
		this.syncCanvas();
		var r = new flash.display.BitmapData(this.component.width,this.component.height,this.qTransparent,0);
		r.qContext.drawImage(this.component,0,0);
		r.qSync |= 5;
		return r;
	}
	,dispose: function() {
		this.component.width = this.component.height = 1;
		this.qImageData = null;
		this.qSync = 5;
	}
	,handle: function() {
		this.syncCanvas();
		if((this.qSync & 4) != 0) {
			this.qTick++;
			this.qTime = new Date().getTime();
			this.qSync &= -5;
		}
		return this.component;
	}
	,getTime: function() {
		return this.qTime;
	}
	,getTick: function() {
		return this.qTick;
	}
	,drawToSurface: function(cnv,ctx,matrix,ctr,blendMode,clipRect,smoothing) {
		ctx.save();
		if(smoothing != null && ctx.imageSmoothingEnabled != smoothing) flash.display.BitmapData.setSmoothing(ctx,smoothing);
		if(matrix != null) {
			if(matrix.a == 1 && matrix.b == 0 && matrix.c == 0 && matrix.d == 1) ctx.translate(matrix.tx,matrix.ty); else ctx.setTransform(matrix.a,matrix.b,matrix.c,matrix.d,matrix.tx,matrix.ty);
		}
		ctx.drawImage(this.handle(),0,0);
		ctx.restore();
	}
	,copyPixels: function(sourceBitmapData,sourceRect,destPoint,alphaBitmapData,alphaPoint,mergeAlpha) {
		if(mergeAlpha == null) mergeAlpha = false;
		this.syncCanvas();
		if(alphaBitmapData != null) throw "alphaBitmapData is not supported yet.";
		var bit = sourceBitmapData.handle();
		var bw;
		var bh;
		var tw = this.component.width;
		var th = this.component.height;
		if(bit == null || (bw = bit.width) <= 0 || (bh = bit.height) <= 0) return;
		var dx = ~(~destPoint.x);
		var dy = ~(~destPoint.y);
		var sx;
		var sy;
		var sw;
		var sh;
		if(sourceRect != null) {
			sx = sourceRect.x;
			sy = sourceRect.y;
			sw = sourceRect.width;
			sh = sourceRect.height;
			if(sx < 0) {
				sw += sx;
				sx = 0;
			}
			if(sy < 0) {
				sh += sy;
				sy = 0;
			}
			if(sx + sw > bw) sw = bw - sx;
			if(sy + sh > bh) sh = bh - sy;
		} else {
			sx = sy = 0;
			sw = bw;
			sh = bh;
		}
		if(dx < 0) {
			sw += dx;
			sx -= dx;
			dx = 0;
		}
		if(dy < 0) {
			sh += dy;
			sy -= dy;
			dy = 0;
		}
		if(dx + sw > tw) sw = tw - dx;
		if(dy + sh > th) sh = th - dy;
		if(sw <= 0 || sh <= 0) return;
		if(this.qTransparent && !mergeAlpha) this.qContext.clearRect(dx,dy,sw,sh);
		this.qContext.drawImage(bit,sx,sy,sw,sh,dx,dy,sw,sh);
		this.qSync |= 5;
	}
	,draw: function(source,matrix,colorTransform,blendMode,clipRect,smoothing) {
		this.syncCanvas();
		var a = 0;
		this.qContext.save();
		if(colorTransform != null) {
			a = colorTransform.alphaMultiplier;
			colorTransform.alphaMultiplier = 1;
			this.qContext.globalAlpha *= a;
		}
		if(clipRect != null) {
			this.qContext.beginPath();
			this.qContext.rect(clipRect.x,clipRect.y,clipRect.width,clipRect.height);
			this.qContext.clip();
			this.qContext.beginPath();
		}
		if(smoothing != null) flash.display.BitmapData.setSmoothing(this.qContext,smoothing);
		source.drawToSurface(this.handle(),this.qContext,matrix,colorTransform,blendMode,clipRect,null);
		this.qContext.restore();
		if(colorTransform != null) colorTransform.alphaMultiplier = a;
		this.qSync |= 5;
	}
	,lock: function() {
		this.syncData();
	}
	,unlock: function() {
		this.syncCanvas();
	}
	,hitTestLocal: function(x,y) {
		if(x >= 0 && y >= 0 && x < this.component.width && y < this.component.height) try {
			return this.qContext.getImageData(x,y,1,1).data[3] != 0;
		} catch( _ ) {
			return true;
		}
		return false;
	}
	,getPixel: function(x,y) {
		if(x < 0 || y < 0 || x >= this.component.width || y >= this.component.height) return 0;
		if(!((this.qSync & 3) != 1)) {
			var d = this.qContext.getImageData(x,y,1,1).data;
			return d[0] << 16 | d[1] << 8 | d[2];
		} else {
			var o = y * this.component.width + x << 2;
			return this.qImageData.data[o] << 16 | this.qImageData.data[o + 1] << 8 | this.qImageData.data[o + 2];
		}
	}
	,getPixel32: function(x,y) {
		if(x < 0 || y < 0 || x >= this.component.width || y >= this.component.height) return 0;
		if(!((this.qSync & 3) != 1)) {
			var d = this.qContext.getImageData(x,y,1,1).data;
			return (this.qTransparent?d[3] << 24:-16777216) | d[0] << 16 | d[1] << 8 | d[2];
		} else {
			var o = y * this.component.width + x << 2;
			return (this.qTransparent?this.qImageData.data[o + 3] << 24:-16777216) | this.qImageData.data[o] << 16 | this.qImageData.data[o + 1] << 8 | this.qImageData.data[o + 2];
		}
	}
	,setPixel: function(x,y,color) {
		if(x < 0 || y < 0 || x >= this.component.width || y >= this.component.height) return;
		if((this.qSync & 3) != 2) {
			this.qPixel.data[0] = color >>> 16 & 255;
			this.qPixel.data[1] = color >>> 8 & 255;
			this.qPixel.data[2] = color & 255;
			this.qPixel.data[3] = 255;
			this.qContext.putImageData(this.qPixel,x,y);
			this.qSync |= 5;
		} else {
			var o = y * this.component.width + x << 2;
			this.qImageData.data[o] = color >>> 16 & 255;
			this.qImageData.data[o + 1] = color >>> 8 & 255;
			this.qImageData.data[o + 2] = color & 255;
			this.qImageData.data[o + 3] = 255;
			this.qSync |= 6;
		}
	}
	,setPixel32: function(x,y,color) {
		if(x < 0 || y < 0 || x >= this.component.width || y >= this.component.height) return;
		if((this.qSync & 3) != 2) {
			this.qPixel.data[0] = color >>> 16 & 255;
			this.qPixel.data[1] = color >>> 8 & 255;
			this.qPixel.data[2] = color & 255;
			this.qPixel.data[3] = color >>> 24 & 255;
			this.qContext.putImageData(this.qPixel,x,y);
			this.qSync |= 5;
		} else {
			var o = y * this.component.width + x << 2;
			this.qImageData.data[o] = color >>> 16 & 255;
			this.qImageData.data[o + 1] = color >>> 8 & 255;
			this.qImageData.data[o + 2] = color & 255;
			this.qImageData.data[o + 3] = color >>> 24 & 255;
			this.qSync |= 6;
		}
	}
	,getPixels: function(q) {
		var d;
		var v;
		var r = new flash.utils.ByteArray();
		var u;
		var qx = q.x | 0;
		var qy = q.y | 0;
		var qw = q.width | 0;
		var qh = q.height | 0;
		var i = 0;
		var j;
		var l = qw * qh * 4;
		r.set_length(l);
		v = r.data;
		if(!((this.qSync & 3) != 1)) {
			d = this.qContext.getImageData(qx,qy,qw,qh);
			u = d.data;
			while(i < l) r.writeUnsignedInt(u[i++] << 16 | u[i++] << 8 | u[i++] | u[i++] << 24);
		} else {
			u = this.qImageData.data;
			if(qx == 0 && qy == 0 && qw == this.component.width && qh == this.component.height) while(i < l) r.writeUnsignedInt(u[i++] << 16 | u[i++] << 8 | u[i++] | u[i++] << 24); else while(qh-- > 0) {
				i = (qx + qy++ * (j = qw)) * 4;
				while(j-- > 0) r.writeUnsignedInt(u[i++] << 16 | u[i++] << 8 | u[i++] | u[i++] << 24);
			}
		}
		return r;
	}
	,setPixels: function(q,r) {
		var qx = q.x | 0;
		var qy = q.y | 0;
		var qw = q.width | 0;
		var qh = q.height | 0;
		var i = 0;
		var j;
		var l = qw * qh * 4;
		var p;
		var w = this.component.width;
		var d;
		var u;
		if((this.qSync & 3) != 2) {
			d = this.qContext.createImageData(qw,qh);
			u = d.data;
			while(i < l) {
				p = r.readUnsignedInt();
				u[i] = p >> 16 & 255;
				u[i + 1] = p >> 8 & 255;
				u[i + 2] = p & 255;
				u[i + 3] = p >>> 24 & 255;
				i += 4;
			}
			this.qContext.putImageData(d,qx,qy);
			haxe.Log.trace("?",{ fileName : "BitmapData.hx", lineNumber : 373, className : "flash.display.BitmapData", methodName : "setPixels"});
		} else {
			u = this.qImageData.data;
			while(qh-- > 0) {
				i = (qx + qy++ * w) * 4;
				j = qw;
				while(j-- > 0) {
					p = r.readUnsignedInt();
					u[i] = p >> 16 & 255;
					u[i + 1] = p >> 8 & 255;
					u[i + 2] = p & 255;
					u[i + 3] = p >>> 24 & 255;
					i += 4;
				}
			}
		}
	}
	,getColorBoundsRect: function(mask,color,findColor) {
		if(findColor == null) findColor = true;
		this.syncData();
		var data = this.qImageData.data;
		var minX = this.component.width;
		var minY = this.component.height;
		var maxX = 0;
		var maxY = 0;
		var len = data.length;
		var i;
		var px;
		var x;
		var y;
		i = 0;
		while(i < len) {
			px = (this.qTransparent?data[i + 3] << 24:-16777216) | (data[i] & 255) << 16 | (data[i + 1] & 255) << 8 | data[i + 2] & 255;
			if(px == color == findColor) {
				x = Math.floor((i >> 2) % this.component.width);
				y = Math.floor((i >> 2) / this.component.width);
				if(x < minX) minX = x;
				if(x > maxX) maxX = x;
				if(y < minY) minY = y;
				if(y > maxY) maxY = y;
			}
			i += 4;
		}
		if(minX <= maxX && minY <= maxY) return new flash.geom.Rectangle(minX,minY,maxX - minX + 1,maxY - minY + 1);
		if(!findColor) return new flash.geom.Rectangle(0,0,this.component.width,this.component.height);
		return new flash.geom.Rectangle(0,0,0,0);
	}
	,floodFill: function(fx,fy,fc) {
		var wasCanvas = (this.qSync & 3) == 1;
		this.lock();
		var q = [fx | fy << 16];
		var c = 1;
		var d = this.qImageData.data;
		var zr;
		var zg;
		var zb;
		var za;
		var fr;
		var fg;
		var fb;
		var fa;
		var x;
		var y;
		var p;
		var o = [];
		var r;
		var w = this.component.width;
		var h = this.component.height;
		p = fy * this.component.width + fx << 4;
		zr = d[p];
		zg = d[p + 1];
		zb = d[p + 2];
		za = d[p + 3];
		fa = fc >>> 24;
		fr = fc >> 16 & 255;
		fg = fc >> 8 & 255;
		fb = fc & 255;
		y = -1;
		while(++y < h) {
			o.push(r = []);
			x = 0;
			while(x < w) {
				r.push(0);
				x += 32;
			}
		}
		while(c > 0) {
			p = q[--c];
			x = p & 65535;
			y = p >>> 16;
			if(x < 0 || y < 0 || x >= w || y >= h) continue;
			if((o[y][x >> 5] >> (x & 31) & 1) != 0) continue;
			o[y][x >> 5] |= 1 << (x & 31);
			p = y * this.component.width + x << 2;
			if(d[p] == zr && d[p + 1] == zg && d[p + 2] == zb && d[p + 3] == za) {
				d[p] = fr;
				d[p + 1] = fg;
				d[p + 2] = fb;
				d[p + 3] = fa;
				if((p = x + 1) < w && (o[y][p >> 5] >> (p & 31) & 1) == 0) q[c++] = y << 16 | p;
				if(x > 0 && (o[y][(p = x - 1) >> 5] >> (p & 31) & 1) == 0) q[c++] = y << 16 | p;
				if((p = y + 1) < h && (o[p][x >> 5] >> (x & 31) & 1) == 0) q[c++] = p << 16 | x;
				if(y > 0 && (o[p = y - 1][x >> 5] >> (x & 31) & 1) == 0) q[c++] = p << 16 | x;
			}
		}
		this.qSync |= 6;
		if(wasCanvas) this.unlock();
	}
	,colorTransform: function(q,o) {
		var x = ~(~q.x);
		var y = ~(~q.y);
		var w = ~(~q.width);
		var h = ~(~q.height);
		var tw = this.component.width;
		var th = this.component.height;
		var f = this.qContext.globalCompositeOperation;
		var a = this.qContext.globalAlpha;
		if(x < 0) {
			w += x;
			x = 0;
		}
		if(y < 0) {
			h += y;
			y = 0;
		}
		if(x + w > tw) w = tw - x;
		if(y + h > th) h = th - y;
		if(w <= 0 || h <= 0) return;
		if(o.isAlphaMultiplier()) {
			this.syncCanvas();
			this.qContext.globalCompositeOperation = "copy";
			this.qContext.globalAlpha *= o.alphaMultiplier;
			this.qContext.drawImage(this.component,x,y,w,h,x,y,w,h);
			this.qSync |= 5;
		} else if(o.isColorSetter()) {
			var s = this.qContext.fillStyle;
			if(o.alphaMultiplier != 0) {
				this.qContext.globalCompositeOperation = "source-in";
				this.qContext.fillStyle = "rgb(" + ~(~o.redOffset) + "," + ~(~o.greenOffset) + "," + ~(~o.blueOffset) + ")";
				this.qContext.fillRect(x,y,w,h);
				this.qContext.globalCompositeOperation = "copy";
				this.qContext.globalAlpha = o.alphaMultiplier;
				this.qContext.drawImage(this.component,x,y,w,h,x,y,w,h);
			} else {
				this.qContext.globalCompositeOperation = "copy";
				this.qContext.fillStyle = "rgba(" + ~(~o.redOffset) + "," + ~(~o.greenOffset) + "," + ~(~o.blueOffset) + "," + ~(~o.alphaOffset) + ")";
				this.qContext.fillRect(x,y,w,h);
			}
			this.qContext.fillStyle = s;
		} else {
			var wasCanvas = (this.qSync & 3) != 2;
			this.lock();
			var d = this.qImageData.data;
			var c = tw * th * 4;
			var i = c;
			var v;
			var rm = o.redMultiplier;
			var gm = o.greenMultiplier;
			var bm = o.blueMultiplier;
			var am = o.alphaMultiplier;
			var ro = o.redOffset;
			var go = o.greenOffset;
			var bo = o.blueOffset;
			var ao = o.alphaOffset;
			if(x == 0 && y == 0 && w == tw && h == th) while((i -= 4) >= 0) {
				if((v = d[i + 3]) > 0) if((v = v * am + ao) < 0) d[i + 3] = 0; else if(v > 255) d[i + 3] = 255; else d[i + 3] = ~(~v);
				if((v = d[i + 2] * bm + bo) < 0) d[i + 2] = 0; else if(v > 255) d[i + 2] = 255; else d[i + 2] = ~(~v);
				if((v = d[i + 1] * gm + go) < 0) d[i + 1] = 0; else if(v > 255) d[i + 1] = 255; else d[i + 1] = ~(~v);
				if((v = d[i] * rm + ro) < 0) d[i] = 0; else if(v > 255) d[i] = 255; else d[i] = ~(~v);
			} else {
				var px;
				var py = y - 1;
				var pb = y + h;
				var pr;
				while(++py < pb) {
					i = tw * py + x - 1 << 2;
					pr = i + w * 4;
					while((i += 4) < pr) {
						if((v = d[i + 3]) > 0) if((v = v * am + ao) < 0) d[i + 3] = 0; else if(v > 255) d[i + 3] = 255; else d[i + 3] = ~(~v);
						if((v = d[i + 2] * bm + bo) < 0) d[i + 2] = 0; else if(v > 255) d[i + 2] = 255; else d[i + 2] = ~(~v);
						if((v = d[i + 1] * gm + go) < 0) d[i + 1] = 0; else if(v > 255) d[i + 1] = 255; else d[i + 1] = ~(~v);
						if((v = d[i] * rm + ro) < 0) d[i] = 0; else if(v > 255) d[i] = 255; else d[i] = ~(~v);
					}
				}
			}
			this.qSync |= 6;
			if(wasCanvas) this.unlock();
		}
		this.qContext.globalCompositeOperation = f;
		this.qContext.globalAlpha = a;
	}
	,copyChannel: function(o,q,p,sourceChannel,destChannel) {
		var x = ~(~o.x);
		var px = ~(~p.x);
		var y = ~(~o.y);
		var py = ~(~p.y);
		var w = ~(~q.width);
		var h = ~(~q.height);
		var sw = o.component.width;
		var sh = o.component.height;
		var tw = this.component.width;
		var th = this.component.height;
		var i;
		var j;
		var u;
		var v;
		var c;
		var sc = sourceChannel;
		var dc = destChannel;
		if(px < 0) {
			w += px;
			px = 0;
		}
		if(py < 0) {
			h += py;
			py = 0;
		}
		if(x < 0) {
			w += x;
			x = 0;
		}
		if(y < 0) {
			h += y;
			y = 0;
		}
		if(x + w > sw) w = sw - x;
		if(y + h > sh) h = sh - y;
		if(px + w > tw) w = tw - px;
		if(py + h > th) h = th - py;
		if(w <= 0 || h <= 0) return;
		if(sc == 8 && dc == 8) {
			var f = this.qContext.globalCompositeOperation;
			var s = this.qContext.fillStyle;
			this.qContext.globalCompositeOperation = "darker";
			i = 0;
			while(i++ < 8) this.qContext.drawImage(this.component,px,py,w,h,px,py,w,h);
			this.qContext.globalCompositeOperation = "destination-over";
			this.qContext.fillStyle = "black";
			this.qContext.fillRect(x,y,w,h);
			this.qContext.globalCompositeOperation = "destination-atop";
			this.qContext.drawImage(o.handle(),x,y,w,h,px,py,w,h);
			this.qContext.globalCompositeOperation = f;
			this.qContext.fillStyle = s;
		} else {
			var wasCanvas = (this.qSync & 3) != 2;
			var ds;
			var dd;
			this.lock();
			dd = this.qImageData.data;
			o.lock();
			ds = o.qImageData.data;
			if(sc == 8) sc = 3; else if(sc == 4) sc = 2; else if(sc == 2) sc = 1; else if(sc == 1) sc = 0; else sc = -1;
			if(dc == 8) dc = 3; else if(dc == 4) dc = 2; else if(dc == 2) dc = 1; else if(dc == 1) dc = 0; else dc = -1;
			if(sc < 0 || dc < 0) return;
			j = py + h;
			v = y + h;
			while(--v >= y) {
				--j;
				c = w;
				i = (px + tw * j) * 4 + sc;
				u = (x + sw * v) * 4 + dc;
				while(c-- > 0) {
					dd[u] = ds[i];
					i += 4;
					u += 4;
				}
			}
			this.qSync |= 6;
			if(wasCanvas) this.unlock();
		}
	}
	,noise: function(q,l,h,c,m) {
		if(m == null) m = false;
		if(c == null) c = 7;
		if(h == null) h = 255;
		if(l == null) l = 0;
		var wasCanvas = (this.qSync & 3) != 2;
		var i = 0;
		var n;
		var p;
		var d = h - l + 1;
		var z = q;
		var r = (c & 1) > 0;
		var g = (c & 2) > 0;
		var b = (c & 4) > 0;
		var a = (c & 8) > 0;
		this.lock();
		p = this.qImageData.data;
		n = p.length;
		while(i < n) {
			if(m) {
				p[i] = p[i + 1] = p[i + 2] = l + (z = z * 16807 % 2147483647) % d;
				i += 3;
			} else {
				if(r) p[i++] = l + (z = z * 16807 % 2147483647) % d; else p[i++] = 0;
				if(g) p[i++] = l + (z = z * 16807 % 2147483647) % d; else p[i++] = 0;
				if(b) p[i++] = l + (z = z * 16807 % 2147483647) % d; else p[i++] = 0;
			}
			if(a) p[i++] = l + (z = z * 16807 % 2147483647) % d; else p[i++] = 255;
		}
		this.qSync |= 6;
		if(wasCanvas) this.unlock();
	}
	,applyFilter: function(sourceBitmapData,sourceRect,destPoint,filter) {
	}
	,jeashOnLoad: function(data,e) {
		var canvas = data.texture;
		var width = data.image.width;
		var height = data.image.height;
		canvas.width = width;
		canvas.height = height;
		var ctx = canvas.getContext("2d");
		ctx.drawImage(data.image,0,0,width,height);
		data.bitmapData.width = width;
		data.bitmapData.height = height;
		data.bitmapData.rect = new flash.geom.Rectangle(0,0,width,height);
		if(data.inLoader != null) {
			var e1 = new flash.events.Event("complete");
			e1.set_target(data.inLoader);
			data.inLoader.dispatchEvent(e1);
		}
	}
	,nmeLoadFromFile: function(inFilename,inLoader) {
		var _g = this;
		var image = window.document.createElement("img");
		if(inLoader != null) {
			var data = { image : image, texture : this.component, inLoader : inLoader, bitmapData : this};
			image.addEventListener("load",(function(f,a1) {
				return function(e) {
					return f(a1,e);
				};
			})($bind(this,this.jeashOnLoad),data),false);
			image.addEventListener("error",function(e1) {
				if(!image.complete) _g.jeashOnLoad(data,e1);
			},false);
		}
		image.src = inFilename;
	}
	,syncCanvas: function() {
		if(!((this.qSync & 3) != 2)) {
			this.qContext.putImageData(this.qImageData,0,0);
			this.qSync = this.qSync & -4;
		}
	}
	,syncData: function() {
		if(!((this.qSync & 3) != 1)) {
			this.qImageData = this.qContext.getImageData(0,0,this.component.width,this.component.height);
			this.qSync = this.qSync & -4;
		}
	}
	,nmeLoadFromBytes: function(c,a,h) {
		var _g = this;
		var t;
		var o = document.createElement("img");
		var n = this.component;
		var q;
		var f = null;
		var i;
		var l;
		var p;
		if(!(function($this) {
			var $r;
			var v;
			v = flash.display.BitmapData.nmeIsPNG(c)?t = "png":flash.display.BitmapData.nmeIsJPG(c)?t = "jpeg":t = "";
			$r = v;
			return $r;
		}(this))) throw new flash.errors.IOError("BitmapData can only load from ByteArrays with PNG/JPEG data.");
		f = function(_) {
			o.removeEventListener("load",f);
			_g.rect.width = n.width = o.width;
			_g.rect.height = n.height = o.height;
			q = _g.qContext = n.getContext("2d");
			q.drawImage(o,0,0);
			if(a != null) {
				i = -1;
				l = a.length;
				p = q.getImageData(0,0,o.width,o.height);
				while(++i < l) p.data[(i << 2) + 3] = a.data.getUint8(a.position++);
				q.putImageData(p,0,0);
			}
			if(h != null) h(_g);
		};
		o.addEventListener("load",f);
		o.src = "data:image/" + t + ";base64," + c.toBase64();
	}
	,__class__: flash.display.BitmapData
};
flash.display.MovieClip = function() {
	flash.display.Sprite.call(this);
	this.enabled = true;
	this.qIndex = this.qTotal = 0;
	this.loaderInfo = flash.display.LoaderInfo.create();
};
$hxClasses["flash.display.MovieClip"] = flash.display.MovieClip;
flash.display.MovieClip.__name__ = ["flash","display","MovieClip"];
flash.display.MovieClip.__super__ = flash.display.Sprite;
flash.display.MovieClip.prototype = $extend(flash.display.Sprite.prototype,{
	enabled: null
	,currentFrame: null
	,framesLoaded: null
	,totalFrames: null
	,qIndex: null
	,qTotal: null
	,gotoAndPlay: function(v,o) {
	}
	,gotoAndStop: function(v,o) {
	}
	,nextFrame: function() {
	}
	,play: function() {
	}
	,prevFrame: function() {
	}
	,stop: function() {
	}
	,get_currentFrame: function() {
		return this.qIndex;
	}
	,get_framesLoaded: function() {
		return this.qTotal;
	}
	,get_totalFrames: function() {
		return this.qTotal;
	}
	,__class__: flash.display.MovieClip
	,__properties__: $extend(flash.display.Sprite.prototype.__properties__,{get_totalFrames:"get_totalFrames",get_framesLoaded:"get_framesLoaded",get_currentFrame:"get_currentFrame"})
});
flash.display.LoaderInfo = function() {
	flash.events.EventDispatcher.call(this);
	this.bytesLoaded = this.bytesTotal = 0;
	this.childAllowsParent = true;
	this.parameters = { };
};
$hxClasses["flash.display.LoaderInfo"] = flash.display.LoaderInfo;
flash.display.LoaderInfo.__name__ = ["flash","display","LoaderInfo"];
flash.display.LoaderInfo.create = function(o) {
	var r = new flash.display.LoaderInfo();
	if(o != null) r.loader = o; else r.url = "";
	return r;
};
flash.display.LoaderInfo.__super__ = flash.events.EventDispatcher;
flash.display.LoaderInfo.prototype = $extend(flash.events.EventDispatcher.prototype,{
	bytes: null
	,bytesLoaded: null
	,bytesTotal: null
	,childAllowsParent: null
	,content: null
	,contentType: null
	,frameRate: null
	,height: null
	,loader: null
	,loaderURL: null
	,parameters: null
	,parentAllowsChild: null
	,sameDomain: null
	,sharedEvents: null
	,url: null
	,width: null
	,__class__: flash.display.LoaderInfo
});
com.haxepunk.Preloader = function() {
	this.tileData = [0,0,0,1,0,80,190,3,1,20,190,185,4,1,40,187,260,2,1,0,0,260,1,1,0];
	this.tiles = new openfl.display.Tilesheet(new com.haxepunk.HaxePunkLogo(0,0));
	this.tiles.addTileRect(new flash.geom.Rectangle(0,0,274,58));
	this.tiles.addTileRect(new flash.geom.Rectangle(0,65,274,80));
	this.tiles.addTileRect(new flash.geom.Rectangle(0,165,114,190),new flash.geom.Point(57,190));
	this.tiles.addTileRect(new flash.geom.Rectangle(115,164,134,136),new flash.geom.Point(67,68));
	this.tiles.addTileRect(new flash.geom.Rectangle(123,305,56,56),new flash.geom.Point(28,28));
	this.scaleIncrement = 0.002;
	var width = 260;
	var height = 340;
	var color = -3448027;
	var padding = 5;
	NMEPreloader.call(this);
	this.outline.set_x((this.getWidth() - width) / 2);
	this.outline.set_y((this.getHeight() - height) / 2);
	this.outline.get_graphics().clear();
	var complete = new flash.display.Sprite();
	complete.set_x(this.outline.x + width / 2);
	complete.set_y(this.outline.y + 60);
	complete.get_graphics().lineStyle(1,-1);
	complete.get_graphics().moveTo(-width / 2 + padding,0);
	complete.get_graphics().lineTo(width / 2 - padding,0);
	this.addChildAt(complete,0);
	this.progress.set_y(this.outline.y + 60);
	this.progress.set_x(this.outline.x + width / 2);
	this.progress.get_graphics().clear();
	this.progress.get_graphics().lineStyle(1,color);
	this.progress.get_graphics().moveTo(-width / 2 + padding,0);
	this.progress.get_graphics().lineTo(width / 2 - padding,0);
	this.addEventListener("enterFrame",$bind(this,this.onEnterFrame));
	this.onEnterFrame(null);
};
$hxClasses["com.haxepunk.Preloader"] = com.haxepunk.Preloader;
com.haxepunk.Preloader.__name__ = ["com","haxepunk","Preloader"];
com.haxepunk.Preloader.__super__ = NMEPreloader;
com.haxepunk.Preloader.prototype = $extend(NMEPreloader.prototype,{
	onEnterFrame: function(e) {
		this.tileData[9] += 1;
		this.tileData[14] += 1;
		this.tileData[18] += this.scaleIncrement;
		if(this.tileData[18] > 1.02 || this.tileData[18] < 1) this.scaleIncrement = -this.scaleIncrement;
		this.outline.get_graphics().clear();
		this.tiles.drawTiles(this.outline.get_graphics(),this.tileData,true,3);
	}
	,scaleIncrement: null
	,tiles: null
	,tileData: null
	,__class__: com.haxepunk.Preloader
});
openfl.display = {};
openfl.display.Tilesheet = function(image) {
	this.nmeBitmap = image;
	this.qOffsets = new Array();
	this.qRects = new Array();
	this.bounds = new flash.geom.Rectangle();
	this.tile = new flash.geom.Rectangle();
	this.matrix = new flash.geom.Matrix();
};
$hxClasses["openfl.display.Tilesheet"] = openfl.display.Tilesheet;
openfl.display.Tilesheet.__name__ = ["openfl","display","Tilesheet"];
openfl.display.Tilesheet.prototype = {
	nmeBitmap: null
	,qOffsets: null
	,qRects: null
	,bounds: null
	,tile: null
	,matrix: null
	,addTileRect: function(r,p) {
		if(p == null) p = new flash.geom.Point();
		this.qRects.push(r);
		this.qOffsets.push(p);
		return this.qRects.length - 1;
	}
	,getTileCenter: function(i) {
		return this.qOffsets[i];
	}
	,getTileRect: function(i) {
		return this.qRects[i];
	}
	,drawTiles: function(g,d,smooth,f) {
		if(f == null) f = 0;
		if(smooth == null) smooth = false;
		var lenOfs;
		var tc = 0;
		var nr = g.frec;
		var np = g.flen;
		var i = 0;
		var c = d.length;
		var j;
		var z = 0;
		var t;
		var o;
		var q;
		var v;
		var b = this.bounds;
		var u = this.tile;
		var m = this.matrix;
		var tx;
		var ty;
		var ox;
		var oy;
		var qx;
		var qy;
		var qw;
		var qh;
		var fs = (f & 1) != 0;
		var fr = (f & 2) != 0;
		var fm = (f & 16) != 0;
		var ft = fs || fr || fm;
		var rl = 2147483647;
		var rt = 2147483647;
		var rr = -2147483648;
		var rb = -2147483648;
		g.irec[g.ilen++] = 16;
		g.arec[g.alen++] = this.nmeBitmap;
		g.irec[g.ilen++] = f;
		if((f & 4) != 0) z += 3;
		if((f & 8) != 0) z++;
		b.setVoid();
		while(i < c) {
			var v1 = tx = d[i++];
			nr[np++] = v1;
			var v2 = ty = d[i++];
			nr[np++] = v2;
			t = d[i++];
			q = this.qRects[t];
			o = this.qOffsets[t];
			var v3 = ox = o.x;
			nr[np++] = v3;
			var v4 = oy = o.y;
			nr[np++] = v4;
			var v5 = qx = q.x;
			nr[np++] = v5;
			var v6 = qy = q.y;
			nr[np++] = v6;
			var v7 = qw = q.width;
			nr[np++] = v7;
			var v8 = qh = q.height;
			nr[np++] = v8;
			u.x = -o.x;
			u.width = q.width;
			u.y = -o.y;
			u.height = q.height;
			if(ft) {
				m.identity();
				if(fm) {
					var v9 = m.a = d[i++];
					nr[np++] = v9;
					var v10 = m.b = d[i++];
					nr[np++] = v10;
					var v11 = m.c = d[i++];
					nr[np++] = v11;
					var v12 = m.d = d[i++];
					nr[np++] = v12;
				} else {
					if(fs) m.scale((function($this) {
						var $r;
						var v13 = v = d[i++];
						$r = nr[np++] = v13;
						return $r;
					}(this)),v);
					if(fr) m.rotate((function($this) {
						var $r;
						var v14 = d[i++];
						$r = nr[np++] = v14;
						return $r;
					}(this)));
				}
				m.translate(q.x,q.y);
				u.transform(m);
			}
			u.x += tx;
			u.y += ty;
			b.join(u);
			j = 0;
			while(j++ < z) {
				var v15 = d[i++];
				nr[np++] = v15;
			}
			tc++;
		}
		g.irec[g.ilen++] = tc;
		g.flen = np;
		g.grab(b.x,b.y,b.x + b.width,b.y + b.height);
	}
	,__class__: openfl.display.Tilesheet
};
flash.display.ILoader = function() { };
$hxClasses["flash.display.ILoader"] = flash.display.ILoader;
flash.display.ILoader.__name__ = ["flash","display","ILoader"];
flash.display.ILoader.prototype = {
	content: null
	,contentLoaderInfo: null
	,load: null
	,loadBytes: null
	,__class__: flash.display.ILoader
};
flash.display.Loader = function() {
	flash.display.Sprite.call(this);
	this.contentLoaderInfo = flash.display.LoaderInfo.create(this);
};
$hxClasses["flash.display.Loader"] = flash.display.Loader;
flash.display.Loader.__name__ = ["flash","display","Loader"];
flash.display.Loader.__interfaces__ = [flash.display.ILoader];
flash.display.Loader.__super__ = flash.display.Sprite;
flash.display.Loader.prototype = $extend(flash.display.Sprite.prototype,{
	content: null
	,contentLoaderInfo: null
	,mImage: null
	,mShape: null
	,load: function(request,context) {
		var extension = "";
		var i;
		var parts = request.url.split(".");
		if(parts.length > 0) extension = parts[parts.length - 1].toLowerCase();
		var url = request.url;
		var p = url.lastIndexOf(".");
		if(p < 0) throw "Extension must be specified, got \"" + url + "\"";
		var ct;
		var bt = true;
		var ext = url.substring(p + 1);
		switch(ext) {
		case "swf":
			ct = "application/x-shockwave-flash";
			break;
		case "png":
			ct = "image/png";
			break;
		case "gif":
			ct = "image/gif";
			break;
		case "jpg":case "jpeg":
			bt = false;
			ct = "image/jpeg";
			break;
		default:
			throw "Unrecognized extension \"" + ext + "\" in \"" + url + "\"";
		}
		this.contentLoaderInfo.url = url;
		this.contentLoaderInfo.contentType = ct;
		this.mImage = new flash.display.BitmapData(0,0,bt);
		try {
			this.contentLoaderInfo.addEventListener("complete",$bind(this,this.handleLoad),false);
			this.mImage.nmeLoadFromFile(request.url,this.contentLoaderInfo);
			this.content = new flash.display.Bitmap(this.mImage);
			this.contentLoaderInfo.content = this.content;
			this.addChild(this.content);
		} catch( e ) {
			haxe.Log.trace("Error " + Std.string(e),{ fileName : "Loader.hx", lineNumber : 62, className : "flash.display.Loader", methodName : "load"});
			var evt = new flash.events.IOErrorEvent("ioError");
			evt.set_currentTarget(this);
			this.contentLoaderInfo.dispatchEvent(evt);
			return;
		}
		if(this.mShape == null) {
			this.mShape = new flash.display.Shape();
			this.addChild(this.mShape);
		}
	}
	,loadBytes: function(buffer) {
		var _g = this;
		try {
			this.contentLoaderInfo.addEventListener("complete",$bind(this,this.handleLoad),false);
			flash.display.BitmapData.loadFromBytes(buffer,null,function(bmd) {
				_g.content = new flash.display.Bitmap(bmd);
				_g.contentLoaderInfo.content = _g.content;
				_g.addChild(_g.content);
				var evt = new flash.events.Event("complete");
				evt.set_currentTarget(_g);
				_g.contentLoaderInfo.dispatchEvent(evt);
			});
		} catch( e ) {
			haxe.Log.trace("Error " + Std.string(e),{ fileName : "Loader.hx", lineNumber : 98, className : "flash.display.Loader", methodName : "loadBytes"});
			var evt1 = new flash.events.IOErrorEvent("ioError");
			evt1.set_currentTarget(this);
			this.contentLoaderInfo.dispatchEvent(evt1);
		}
	}
	,handleLoad: function(e) {
		e.set_currentTarget(this);
		this.contentLoaderInfo.removeEventListener("complete",$bind(this,this.handleLoad));
	}
	,__class__: flash.display.Loader
});
haxe.Resource = function() { };
$hxClasses["haxe.Resource"] = haxe.Resource;
haxe.Resource.__name__ = ["haxe","Resource"];
haxe.Resource.listNames = function() {
	var names = new Array();
	var _g = 0;
	var _g1 = haxe.Resource.content;
	while(_g < _g1.length) {
		var x = _g1[_g];
		++_g;
		names.push(x.name);
	}
	return names;
};
com.haxepunk.Screen = function() {
	this._shakeY = 0;
	this._shakeX = 0;
	this._shakeMagnitude = 0;
	this._shakeTime = 0;
	this.needsResize = false;
	this.fullScaleY = 1;
	this.fullScaleX = 1;
	this.scale = 1;
	this.scaleY = 1;
	this.scaleX = 1;
	this.originY = 0;
	this.originX = 0;
	this.y = 0;
	this.x = 0;
	this._sprite = new flash.display.Sprite();
	this._bitmap = new Array();
	this.init();
};
$hxClasses["com.haxepunk.Screen"] = com.haxepunk.Screen;
com.haxepunk.Screen.__name__ = ["com","haxepunk","Screen"];
com.haxepunk.Screen.prototype = {
	init: function() {
		this.set_x(this.set_y(this.set_originX(this.set_originY(0))));
		this._angle = this._current = 0;
		this.set_scale(this.set_scaleX(this.set_scaleY(1)));
		this.updateTransformation();
		if(com.haxepunk.HXP.engine.contains(this._sprite)) com.haxepunk.HXP.engine.removeChild(this._sprite);
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) com.haxepunk.HXP.engine.addChild(this._sprite);
	}
	,disposeBitmap: function(bd) {
		if(bd != null) {
			this._sprite.removeChild(bd);
			bd.bitmapData.dispose();
		}
	}
	,resize: function() {
		this.width = com.haxepunk.HXP.width;
		this.height = com.haxepunk.HXP.height;
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
			this.disposeBitmap(this._bitmap[0]);
			this.disposeBitmap(this._bitmap[1]);
			this._bitmap[0] = new flash.display.Bitmap(com.haxepunk.HXP.createBitmap(this.width,this.height,true),flash.display.PixelSnapping.NEVER);
			this._bitmap[1] = new flash.display.Bitmap(com.haxepunk.HXP.createBitmap(this.width,this.height,true),flash.display.PixelSnapping.NEVER);
			this._sprite.addChild(this._bitmap[0]).set_visible(true);
			this._sprite.addChild(this._bitmap[1]).set_visible(false);
			com.haxepunk.HXP.buffer = this._bitmap[0].bitmapData;
		}
		this._current = 0;
		this.needsResize = false;
	}
	,swap: function() {
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) com.haxepunk.HXP.buffer = this._bitmap[this._current].bitmapData;
	}
	,addFilter: function(filter) {
		this._sprite.filters = filter;
	}
	,refresh: function() {
		com.haxepunk.HXP.buffer.fillRect(com.haxepunk.HXP.bounds,0);
	}
	,redraw: function() {
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
			this._bitmap[this._current].set_visible(true);
			this._bitmap[1 - this._current].set_visible(false);
		}
	}
	,updateTransformation: function() {
		if(this._matrix == null) this._matrix = new flash.geom.Matrix();
		this._matrix.b = this._matrix.c = 0;
		this._matrix.a = this.fullScaleX;
		this._matrix.d = this.fullScaleY;
		this._matrix.tx = -this.originX * this._matrix.a;
		this._matrix.ty = -this.originY * this._matrix.d;
		if(this._angle != 0) this._matrix.rotate(this._angle);
		this._matrix.tx += this.originX * this.fullScaleX + this.x;
		this._matrix.ty += this.originY * this.fullScaleY + this.y;
		this._sprite.transform.set_matrix(this._matrix);
	}
	,update: function() {
		if(this._shakeTime > 0) {
			var sx = Std.random(this._shakeMagnitude * 2 + 1) - this._shakeMagnitude;
			var sy = Std.random(this._shakeMagnitude * 2 + 1) - this._shakeMagnitude;
			var _g = this;
			_g.set_x(_g.x + (sx - this._shakeX));
			var _g1 = this;
			_g1.set_y(_g1.y + (sy - this._shakeY));
			this._shakeX = sx;
			this._shakeY = sy;
			this._shakeTime -= com.haxepunk.HXP.elapsed;
			if(this._shakeTime < 0) this._shakeTime = 0;
		} else if(this._shakeX != 0 || this._shakeY != 0) {
			var _g2 = this;
			_g2.set_x(_g2.x - this._shakeX);
			var _g3 = this;
			_g3.set_y(_g3.y - this._shakeY);
			this._shakeX = this._shakeY = 0;
		}
	}
	,get_color: function() {
		return 0;
	}
	,set_color: function(value) {
		return value;
	}
	,x: null
	,set_x: function(value) {
		if(this.x == value) return value;
		com.haxepunk.HXP.engine.set_x(this.x = value);
		this.updateTransformation();
		return this.x;
	}
	,y: null
	,set_y: function(value) {
		if(this.y == value) return value;
		com.haxepunk.HXP.engine.set_y(this.y = value);
		this.updateTransformation();
		return this.y;
	}
	,originX: null
	,set_originX: function(value) {
		if(this.originX == value) return value;
		this.originX = value;
		this.updateTransformation();
		return this.originX;
	}
	,originY: null
	,set_originY: function(value) {
		if(this.originY == value) return value;
		this.originY = value;
		this.updateTransformation();
		return this.originY;
	}
	,scaleX: null
	,set_scaleX: function(value) {
		if(this.scaleX == value) return value;
		this.scaleX = value;
		this.fullScaleX = this.scaleX * this.scale;
		this.updateTransformation();
		this.needsResize = true;
		return this.scaleX;
	}
	,scaleY: null
	,set_scaleY: function(value) {
		if(this.scaleY == value) return value;
		this.scaleY = value;
		this.fullScaleY = this.scaleY * this.scale;
		this.updateTransformation();
		this.needsResize = true;
		return this.scaleY;
	}
	,scale: null
	,set_scale: function(value) {
		if(this.scale == value) return value;
		this.scale = value;
		this.fullScaleX = this.scaleX * this.scale;
		this.fullScaleY = this.scaleY * this.scale;
		this.updateTransformation();
		this.needsResize = true;
		return this.scale;
	}
	,fullScaleX: null
	,fullScaleY: null
	,needsResize: null
	,get_angle: function() {
		return this._angle * (-180 / Math.PI);
	}
	,set_angle: function(value) {
		if(this._angle == value * (Math.PI / -180)) return value;
		this._angle = value * (Math.PI / -180);
		this.updateTransformation();
		return this._angle;
	}
	,get_smoothing: function() {
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) return this._bitmap[0].smoothing; else return com.haxepunk.graphics.atlas.Atlas.smooth;
	}
	,set_smoothing: function(value) {
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) this._bitmap[0].set_smoothing(this._bitmap[1].set_smoothing(value)); else com.haxepunk.graphics.atlas.Atlas.smooth = value;
		return value;
	}
	,width: null
	,height: null
	,mouseX: null
	,get_mouseX: function() {
		return Std["int"](this._sprite.get_mouseX());
	}
	,mouseY: null
	,get_mouseY: function() {
		return Std["int"](this._sprite.get_mouseY());
	}
	,capture: function() {
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) return new com.haxepunk.graphics.Image((function($this) {
			var $r;
			var bd = $this._bitmap[$this._current].bitmapData.clone();
			$r = com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
				var $r;
				var e = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
					var $r;
					var data = new com.haxepunk.graphics.atlas.AtlasData(bd);
					$r = data;
					return $r;
				}($this))));
				$r = e;
				return $r;
			}($this)):(function($this) {
				var $r;
				var e1 = com.haxepunk.ds.Either.Left(bd);
				$r = e1;
				return $r;
			}($this));
			return $r;
		}(this))); else throw "Screen.capture only supported with buffer rendering";
	}
	,shake: function(magnitude,duration) {
		if(this._shakeTime < duration) this._shakeTime = duration;
		this._shakeMagnitude = magnitude;
	}
	,shakeStop: function() {
		this._shakeTime = 0;
	}
	,_sprite: null
	,_bitmap: null
	,_current: null
	,_matrix: null
	,_angle: null
	,_shakeTime: null
	,_shakeMagnitude: null
	,_shakeX: null
	,_shakeY: null
	,__class__: com.haxepunk.Screen
	,__properties__: {get_mouseY:"get_mouseY",get_mouseX:"get_mouseX",set_smoothing:"set_smoothing",get_smoothing:"get_smoothing",set_angle:"set_angle",get_angle:"get_angle",set_scale:"set_scale",set_scaleY:"set_scaleY",set_scaleX:"set_scaleX",set_originY:"set_originY",set_originX:"set_originX",set_y:"set_y",set_x:"set_x",set_color:"set_color",get_color:"get_color"}
};
com.haxepunk.RenderMode = $hxClasses["com.haxepunk.RenderMode"] = { __ename__ : true, __constructs__ : ["BUFFER","HARDWARE"] };
com.haxepunk.RenderMode.BUFFER = ["BUFFER",0];
com.haxepunk.RenderMode.BUFFER.toString = $estr;
com.haxepunk.RenderMode.BUFFER.__enum__ = com.haxepunk.RenderMode;
com.haxepunk.RenderMode.HARDWARE = ["HARDWARE",1];
com.haxepunk.RenderMode.HARDWARE.toString = $estr;
com.haxepunk.RenderMode.HARDWARE.__enum__ = com.haxepunk.RenderMode;
flash.net = {};
flash.net.URLRequest = function(inURL) {
	if(inURL != null) this.url = inURL;
	this.requestHeaders = [];
	this.method = "GET";
	this.contentType = null;
};
$hxClasses["flash.net.URLRequest"] = flash.net.URLRequest;
flash.net.URLRequest.__name__ = ["flash","net","URLRequest"];
flash.net.URLRequest.prototype = {
	contentType: null
	,data: null
	,method: null
	,requestHeaders: null
	,url: null
	,formatRequestHeaders: function() {
		var res = this.requestHeaders;
		if(res == null) res = [];
		if(this.method == "GET" || this.data == null) return res;
		if(typeof(this.data) == "string" || js.Boot.__instanceof(this.data,flash.utils.ByteArray)) (res = res.slice()).push(new flash.net.URLRequestHeader("Content-Type",this.contentType != null?this.contentType:"application/x-www-form-urlencoded"));
		return res;
	}
	,__class__: flash.net.URLRequest
};
com.haxepunk.HaxePunkLogo = function(width,height,transparent,color) {
	var o = com.haxepunk.HaxePunkLogo.image;
	flash.display.BitmapData.call(this,o.width,o.height,true,0);
	this.qContext.drawImage(o,0,0);
};
$hxClasses["com.haxepunk.HaxePunkLogo"] = com.haxepunk.HaxePunkLogo;
com.haxepunk.HaxePunkLogo.__name__ = ["com","haxepunk","HaxePunkLogo"];
com.haxepunk.HaxePunkLogo.preload = function() {
	var o = document.createElement("img");
	ApplicationMain.loadEmbed(o);
	o.src = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAARIAAAFqCAYAAADWRtWPAAAABHNCSVQICAgIfAhkiAAAAAlwSFlzAAAN1wAADdcBQiibeAAAABl0RVh0U29mdHdhcmUAd3d3Lmlua3NjYXBlLm9yZ5vuPBoAACAASURBVHic7J13uCO11Yffuwvs0luApUr03gm9Q0gINdSQAilAIEBoogUIEDoIEsJHCyV0CCV0SOi9BgglAUJZibq0UBcW2L3+/pC8dzzXHo/tGY+L3ufxc69nNJLcfnMkHZ0zUCqVKAqr5BTAesBy/vE58DTwuNDmqcI61qFYJUcBqwLrAOsC9whtji60UxlglVwU93rWAQSwrtDmm0I7FWiIAbO/uBFYpsHrPgHe8I/Xgb8KbV5rpAKr5NLAhcAKNYpcDfxGaDOuTj0zAM/WaW5joc0Lvvw6wEUJZfcX2lzry24D6ISyuwht7vBllwBurdOPpYU2n0X6vhjw9zrXjACmBqbxfwci58YDCyW9R1bJp4GZ67QRpQT8j6HP9zXgUqHN+2krsEreBixep9ho3GuaBhgZO7eH0ObMGnXvCuwMvAe87/++AtwqtHkrbR/zxio5B/BYA5eUcDfSD/zjTeA23M0iUVStkrMBT9Spf0ehzf2x6+4CFky4ZvLvph5TAHPh7gKNEhWf31slLwYOF9q8Xe9Cq+RPgPOBqRKKbQt8xyq5tdDm7oRyI6jf/2g7U9cpP13s/6Sy08TaqNePEVX61cx7X2Za4HBgj4Qy8wKzNlivpFLgj7FKngUcLbT5JMX1zX6nyhxulbxIaDO+yrmZgW9XOV6ySj4F3ARcK7R5voX2s2Akrb0HAPsAn1glTxbaHNtiW1NXOTZ3neuSfp8VjAA+Tls4gSmAXwDX+eFKTaySywLnUtnJb4D7gJdjxWcCrrFKLpxQ5STA+Dqq8TEwIfL8C2Awoa7PIs8/88eqMYizCMpMoPZ7OYi7u8fr+gr4ssY1adnFKpl0V0nzw6/HNMD+uM8tDf9rsb0xuB9RNT6tcXwAWBE4EnjWKnmRVXKuFvvRCt9Q+f1olhlxQn66VXKgRpmJJH+PPsBZO3HGUvv9HMR9P1MxUCqVsEouA/ycyg/vRuD4GtfNCayMuzOsgxOSMofVUk8/DHkSWChy+HJgd6HNp77MQsAVwEqRMi8CqybdDa2S8wB3A1HROU1oM+wLaZUcA1wGrB85/BjwPaHNx7GyMwH/8K+3zP3ADtWsL6vkacBvIof+4+t9o0a/RwGr4ayKbSKnzgfOixUfASwLrA18H5jBH79YaLNTjfpH4D6n3wA/ipw6Bze0rMb8/ppVfd+ibFMe+iXhh23fAf4UOfwOsFWV4nMDawHfAxb1xz4B5it/L2J1zwP8EDg5crhE5bAP3I/neOBUoc0E2oz/bNcCDsP9TsocADxY5ZIpgAWARXDvww+oHPYtL7T5V422pgO2BE4FZouc+j+hzV4JfZwK95tcKnL4NmA/oc2Lta6LM1CebLVKzg68Gzl3ntBml3oVWCU3w4lOmfuENuvWKHskcETk0GW4sdtgrNw0wLW4L1aZU4Q2qk5fDgJOiBxKGmtvTOWcxnFCm0NrlD0OOCRyaFOhzS01yu4JnB45tJ/Q5g9J/fbXrYUTqDK/F9ockVB+YeBvuC/BofXmB6ySqwMPRQ7VFPzYdfsA0f6fK7TZtd51kevH4oZKAGOFNgsklJ0SJzxrAEpoc3tC2RG4O/5of+h24P+Ag/z1UZ4Dvi+0eTNtv7PEKrkzldbc5kKbm1JctzsQ/f7uLbT5U63y/pqFgTuB+fyhCcDaQpuqcyhWSY2zNsucB+wmtKlliVdl8phdaPMezgRqCP+GvBo5tES1cl4c9owc+hjYKy4ivs4vgJ2AjyKHf53CVL0Sd2cqU2siF5yVERXOtRLKRs+Nwyl2LZaP/F/CTRqn4ZmU5QAQ2rwMLCO0+VnKScaXGqk/wplUms2NTszXmwifjNDmG6HN7sCySSLiyw7iJoLLlIQ2Nwlt1gTWxFmnZZYGHvUT/EXwnyavi0/E133v/fdiA9z3FJzQ3mKVjFocWCUHrJKnUCkifxLa7NKoiMDwyb/UY6IY0YmcamMxgF9SOel3vNDmoxply8J2cKyNqhZD5BpL5Q9y+YSyg8AdkUMre1O0An8sOrl3RzXxq9Hm0w3cBRs2vYU2jazdN/vZjqRyPqvWOL0Web6ur2tc/xBuWBUdms8NPGiV3KDR/mRAs8Oq+WLPH0lzkdDmFWAjhm7EswF3l8XED2cuA/aLXHay0GbvJvs5TEgaxir5S9wsfZmqYzgqVxYmAGelqP483ERqmV2skvVWIKLm+1LeXK5F9K4XF4wyK/tz1a6pwH9AS0YOPZzQdstYJTe0Sl5vlTwjp/pH4FaFouP0V/JoK9LmKKvkNf51JU2yJyK0GRTa/BbYATcZCW5O6Tar5Hez6Gue+KmGE2OHkyzhCoQ2zwEbM3RjL4vJ6sAtuPelzLFCmwNb6C5JKywr+DmNasyGM7OWwq2sRLkuXtgquQBDk2gAt0T9KWohtBm0Sp4LlMfyU+ImlM5PuOwRhkSr/MOuJW53xJ6vxfBJsOiwplTlmihLUnn3TnUHaQar5MzAvrhJ1/82UcX6CSI7N0Of7zSxc5c30VYq/IrfjsDW/tBxrdYptLnSKjka+Is/NCVwmVVyRW/BFsEOVskVqxyfCjc1sDzDrZHT0rhWRBHaPGaV3Bw3Fzga97t9KFbsd1k4NSYKCclzDNU4S2hzSZXjG8eeX9lAnRfglvTKX/ptSRaSuBWwPDWERGgzzir5HG4MDW5sHScqJM8Jbd6tUibaVlJfGuHHVslVapwbg+tzKxbl+lSuWqXhOhq4K1ZhjFWylgPeaNzy7XQ1zjeN0OZCq+TcwDH+0Kw4t4I1hTbNDvlaYYf6RSr4pdDmgmYaEtrcY5XcFvfZxX/vBwtt4lZPU7Q8tPE8B+xC5bJnlLiQJE6kRfFem1ErYX1/N65VfixDE01QfbhSqy9reHMemGzar16jbDWibb0jtDF1yiexIPDdGo9lye6zS8NXwNm4Je+k+aF6TE3t17QOOYhIGb9CdVXk0EpULk13Mvu1OMy7mcqFDnDOhZmICCRbJC9T/Y5awq24vA28BbwitHm8ViVWyZG4/TRl3qzmG1CHJyJ1TIkz5y9LKP8Ibg0eKv0/qnE7QzPXM+JM+rIFsyxDvhrlsklELYjchjUZ8TS1V1Q2Bmb3/7+MWz5M3KrQJeyFW9Eoz7PtapW8XGhzX5v7cR/OaW86YHr/d7rI8/ik/5LAE1bJzYQ2DzTZZnxV8Mkm66lKkpDcl8aPJAULUDnO/ncTdcTXwFchWUgeZkhIlrFKjk5wSHoAN/lb9kdYiyEhiQ5rJviyVbFKTs3QEKnch1a4Abi+xrnZgc1w1lKzlsm1CY6DdwAb+qfjMxSRD3DOWNWYEnez+D5O0DNHaPOe94uJDr+PoPEhXquckuRH4p0yf4nzFi8L+ozAtVbJFYryh0ki0Z09I5aMPW9mTT0uJCtVLTVE1BqYEjfXU/WHLbT50ir5IEM/nLUYciiLCsn9dbwjV6Dy/WzVInlGaHNhwvmTrJIX4vxtsuaLyP9ZDjc+q/OazrVKrg/clWGbFQhtLrVK7ohbHgZYz8+VVPM0LQS/fHuIVfJU4GaGrOrZcGKydkFzOzVpxzg77qDWsJD42fX3IoeWq7On50kqfQxqTVqWiQ5Z1qrxf9JqTbyNr8nYdKzBUbitDQfXK9ggUSGZNuO663EPbuXm51Q6nGVJfOvH73JqpyX8juv1cJ6qZVamcmtAR1CEkDQztIFKq2TqKvVOxlsOT0cONSIkY6ySC/nJrTlqlKlGtI2n2nHHENqMFdpcKLQZtuTeIoUJidCmJLS5xL+uhj2tU7ZxD5VzBt+xSsb3FHUE3sv7p1R6ee+StOBQBO0Qkvhsc7PuwvHhTT134ehQpt6E67NUusuv7R9lxglt6rl6R9vI1RGtDUR3rbbbImkX8f1PPy6kFynwc1RRV/bROHHpGNohJFGHtbdTxrOoRlxIvlWnfPTHPL8P/lIV75IdHbqsRQPDGu+FKGu03Y1ELZKR3qGr17iCyuHyd2oV7BAuwq2SlsliISQz2iEk0eXTVsa88SHRLHXKxyc76w1vomKxDpXbvhuZH6nWdrfxRex5bv4dRSG0+Rq3cbPMIlbJVgMR5Yb337k0cmipThqOtUNIpo/8X2tDXxriQYMShcTviH09cqgRIZmfSgujESGxjboydyDxgDy9Ory5P/a8062SuMtDHit2TZGrkHhntOiXsJWIUZ9SGSIgzWRT1DJInCcR2ryD89CN82wKP4po3d1ujcBwi6RXhSTuiNbpQvIClVH2Fq1VsN3kbZHETeKmLRI/jxH1iK03tIHYhGtCqLoy1VZmEldrfJ29NNEKfTC0gcmxO96JHCoixEBqhDYTqezvvEX1JU7eQjJD7HmrMSyjE7WNCslMuBB2SVQbwtRb9l2USk/MXhSSXrVIoNJbedZOW1atQnS4PndhvYjRbUISnSdJIyTPUBndq948yf1UBqFJdIuvUucXNBjprEOJf049aZF4xsaez161VOcQjf072ipZb/WyLeQtJNPHnrcy2QqVFkndO4dw+UCiy8b15km+BP4ZOfREiqDB0Tqf8OZnt9NPFknc6a3TheT12POOGN50m0USFZKZUsx5QOXkZz2LBNwmw2r/16KbdvympZ+EJJ74q9uEZJ5CehGj3RZJlkObkaTbJRqds1g2ybnK77qMho2c2x+rVX40lR62vTA/AsNznXT6vEErdLtF0hdCErdIshzaQONLwFOSEBCaSie0pGNlVmAoclu8rW4m7gdTZKKpvOk2i6SVwFK5kbeQxIcerWYsj88/JAV2BibvoIwGLE6aJ2lUSKJ1vZzXJrN24wNPRUW/l4UknhWwIyYvE4jHSP6wkF7EyFtI4moffxMapdk3MTrkSJonWbvKsSQhidbVK8OaMtF9HXMW1ov8iefErZriooOI/wY64ubVbiFpdawdvX6Qyq3VSdSdcPX7LMp7LcYxtBt4Pqvk/DXq7cWJ1jLRKFy9bJHEv5ONhgFtN/H+BiFpguj1HzUQiDhqLSxQY+09anncTWWmtmFWid9NHBWYXrZIellI4v5I3SYkfTm0yVJIGlHi54FoHp1q8yRRsbgHuLfGuWp1fErzAZs6lahFMo1PAN+LdJtFEg9d2vsWiZ+0i0YKy3KOJLUSe8vlscihasObqFjcixOTaueq1fFYi2kaOpF4PuFetUriryspb1GheL+p6Pfuw06J3dqOMAJRq6QoiwQSJlx98qQF/dO3hDav+A1d5WXQ+a2S8cxnvTzRCpUWCVSGVegl4tZprayMncDiVPpO3V2rYLtpt5Ck2R9TFZ9XN+ph2ejYsCKkQMwrNrpac2+N/ydbJf7aaDKsXptoBXgx9nzpqqW6n1Uj/7/fiakeIsQDGf2jaqkCaLeQLGaVjOeSTUv8i9yoRfIoQ34sMwNRj9X4sKba/9EyCzNkHQ36unuNV6j0Jek5IbFKSiod0J4qqCtp+WHseeqMlXnTDiF5NfL/VMAaTdYTz8trGrlYaPMxlYGno0OT+ERrmXtrlIle+58W4tB2LH7OJ7qTuV6w7W4knkq2Y28IVsklGMq9BPCC0OaNWuXbTTuEJJ79vNngMXEhaWY4McyfxAduXswfe1NoM1n4/DxJedJxIT+XMvnaFvrRLURTeixWJ5dQN7J77HlS9saiiefVvrWQXtSgHUISj+eRhZB8Tu28tUlUm3CtNT9S7VjZKun1idYy0YnHUdQPDNU1WCXXonK49qC/cXQcfuNoNP3EeOCUgrpTldyFRGjzOpXBWFawSja0DOzfyDGRQ48JbSbVKp9A1HRd1io5isohS7UgRtEAwev4a5atUWev8XTs+YqF9CIfDok9/0shvaiDVXJK4HIq82ef4mMMdwztsEjAJcSOtrlug9fHhzU3N9mPFxkKRTAVsByVQlIt/2v02Dq43cPlzYIfAy812Zdu4Hngm8jzHYvqSJZYJXehcn7kNVyem07kaCpXCN+lT1N2Apwbe/6rBq+PfoEn0uRY1geQfjxy6PvAUv7/j3BRuuO8wNBS86LAFpFzj/k6exKf+yX6fm1glVywVvluwKdiPTV2+Nc+Ol5HYZU8Ajgodvi3QptWw3FkTluExKe7jIY8/J5VMtXqjVVyFVwi5TK3+tAAzRL1cN2XoVAHD1cTBX8sOmG8V426CiVltLhmiN6pB2hzhrcsX5dVclGcE1c0Bu0VQpuO8ccAN5yxSl4AHBk7dbLQ5oICulSXuJBEZ+XrxvpokHiu1dOskvEt3BX4vDgnxQ6f0WI/onMa0Qhu8dWlKNHhTdQpLsv5kabfb++sd5dV8lj/f5r6067AXEVlHJif+3F7Wlp5XXsA9yVYQalXkaySq+PmwKIRxZ6l8saQF6nfA6vklrgh5c9jp/4stDmwhT7E36tMV+AmC4kPwz9H5NziWTYktLkCuDNyaEXgL3XuOEdQuapyi9CmVSecWlZEkpDUiiSfpUUS34zVCH/GWW2/BU6vUSYeMjLVCoy3/qLv+ezATxroW1Ovyyr5XeA0XA7mJ2qEyJQp6pnbKnkR7mYQzf/8FLCe0KYdu2cTE1lZJZe0Su5llXwAuI7hn81FDF+qbpT4518zhGgzTAGTReSXsXNLWyW3AG7PcPy4Gy6bXdkS2R6XS+RXQpvJeYH9l+ZEKu8WX+OGIq0yCRfcOO5haxKusVWOjSejsHfewzKefnE6q+SYKsXLjMF9Gfah0snvyir1jwF2iB1ewyq5PnB/isj3l+Hmk8qcY5X8Bri81mZFq+R0OHFbOHJ4ZJ3XNB1OHDbHfVdG+uPXR6P5+5Wzzakcoozydc+Ky/eytC+zRqSeMvcAW3knxVzxK45bxQ7Pb5XcFVgf9x7VCu84DthTaHNti30QwCaxw9+xSv4tqyXvAbO/uAT3JYu/2WW+BPYW2sQnTJvCKrkNbjkrau59BTyJMzXH4PYURK2jErCL0Ob8Ftv+NXA4lUvJZd4CzhXaHBW75khgZ6onI3oHOEZoc2aT/ZkfZ6WliVafhn8KbaIz/Fgl78Pd1WtZfh8B2wpt7kro57S41YJ4NPl3gfWFNv+Jlb8c2JZszOcSsFS5Davkj4BzaC7XzlvAAd46zhWr5Cw4i7WZO//XwMW4vjYtdt5AeJRk69PgPsN4fp+GGIEbwtQSEXDWQ3zna9MIba4BtqEypN0oYHXcXWhLKkUEYJ9WRcSzCNVFBJxQLFfl+HLUzmg2J5V33EaZnuxEBIbPJ4EbWiQNH2em9nsCgNBmPJVL+GXmoPqO7iXJbgx+c0yo5qVxEXkaOBRYtB0i4hlN4yLyGLAHMJfQZpcMLKY0ToSS4UHaG6YQl2ehzY1+NeYYhptcUV4ADhLa3NSennU1rwItmcB1uAz4UY711yKtz8Q3uA2i7wPv4aylB3FCFI+tUhQTcV7Zn/nHaziRewpnTXbyzuNEBkqlYt0gvKBsjJuQWggX1fsFnP/CX5v0YO0p/CrJ1P4xGmfJzI+zhsqPS4Q2FxXWyQaxSo5g6PWUX9vcuNeykP/7tdAmvuM10IEULiSBQKD7aZdnayAQ6GGCkAQCgZYJQhIIBFomCEkgEGiZICSBQKBlhvuRHDUwhaHnQuoFAn2PxEzkiFK97RBNMUwwXv98vv8bKJUajRcSCAQ6HIM8Tbq9WZkzTEgGJpXOGxw54t48GgsEAsUxMFjKLZpfcEgLBAItEyZbA4FAywQhCQQCLROEJBAItEwQkkAg0DJ9JSQ5RloPBPqavnA88wKyPfA94GfF9iYQ6D163iKxSq6HC5J0BfBpwd0JBHqSjrRIrJKLA+OENh+1UMcUuDij0ejn8Vy2gUAgAzpKSKySswNH4ZIDzdhidYtTKSIA/2qxzkAgUIWOEBKfcW9f4GBcPNKXhTZftVhtPCL8N8C/W6wzEAhUoXAh8TlTXsClGSjznxrFGyEuJP/2SbEDgUDGFC4kuIjh88aO5SEkYVjTAFbJo4EDmrz8M1ziJesfTwNXVsvoZ5Vcm8qUoLX4WGiTmH/HKnkVLrtePY4R2hzjr1kEl5itFisLbZLON9P+OKGNjFx3I7BRiuuWEdr8t0q7jwHL1rl2I6HN/SnaaIpOEJKlqxzLQ0jCRGtjTIlLsNQMo4BvAStFjh1qlTxEaHN9rOyIlO1Uy/0bZ6qUdUW/9/XaH0Oy0DTTfvy1pL2u1irrqBTX57pC2wnLv8tUOdaSkFgl5wVmiR0OQlIsiwHX+RSo3cQ2PgdPIIFOeIPiFkkJeLHFOuPWSAl4psU6+41bgLNx81dxJgGfJDySkpodYpVcIvL8ZeBUXO7nanwNXAccl6LPl/jHhzXOG+DPVA6lxgHHA3+nelL4XYDbfKL3elwM/AV4o8b5z4GrgRNjx/+Cy2RYK0XnM4D2fa3GKbjPqxbP4rL65Ubh8Uiskm8Bc0UOjRXatJQP1yp5OPD7yKFXhTbNJHPue/zd+Doqx/6PCW1WTbhmWmBVYA1gC2CFWJEbhTZbVLnuYuCnscMbCG3ubrDPswBjqcxp+zywUtJqoFVyU6BWetgvcN+pU6rN9cTqGY1LF7pi5PBEYD6hzTsJ180BvEnl0OseYEOhTTWRq9f3CcB+wDn1rm+VQi0Sq+SsVIoIZDM/snzseRjWNIn/Aj7c4DXjhTZ3CW1+jxOTuBBUS9YOLol2lBLwSCNt+/b/B8QnJf+VwqXgwYRz0wAnAE9bJdeo0/4E4InY4VeSRMRf9y7OaoryZAoRWR+4PH4YWENoc1beIgLFD22qTbRmMQQJKzbZ0vRQ0/+o/hA7PK/3HYrzcuy5Fdp82WTT8briz4chtPmY4cOH+DBtKeABq+SfrZIzJ1QXf8/SvocN9dsq+UvcsGz6yOGHcNbXUynbbJmihaTaRGvSXaEuVskZcQm2owSLpDU+afH6V2LPB4BZq5SL74Vqpd14XWn3WcXb3Aq4OXZsADd38pJV8icp60n7WlL12yo5YJU8ETgPt8JW5grccPCDlO1lQtFCUm2itWFTNka19fQgJMUStxA/B94qoiNN8LrQZjNgWyA+NJkNuMQqeZf3R2kL3pq7Bjgwdupo4McZeIU3TNFCEv/RP+/Ny1aIf2nfqzc2DeSHVXJO3NxClP8Ibboq6rjQ5hrc/q2zcTe8KOsDz1olj7RKNut7kwqr5BjgPpylVOZrYCehze+Kel8Lc0izSk7FcCF5KIOqgyNa/sxmlfxZwvlRuKHL0rhVm/h8yF059StXhDafALtbJS/BLSMvGTk9CjgC+JFVcvc82rdKLo0bZs0XO/V9oU2h72mRnq3L4Tz6orQ0PxKpN0oQkuxZAOf70Az/wu3w7lqENg9bJZfHDS0Oo9JTdWHgToavGrWEVXJj4K9UTqqWadXvqmWKHNqsXOVYSxaJVXJKKu8SEFZsOom3ge2LGMNnjdDmG6HNsTirq5o1kNmciVVyT5yPSDURAZgjq7aapZOE5C2hjWmxziUYbuUEi6R4xgK7AwtU23TWzQhtXhHabAjsBOSxUnIwcDowMnLsi1iZwoWkyKFNXEjymB/5nOFLj4HWGYczs6tRwrl6vxF5vCy0SXKb73qENhdbJW/FuavvmGHV8XnES4AHcHM0ZWbPsL2mKERIrJIzMdz0y2N+5Nl2ePX1IVZok0sy6m7G+27s5F39z8aFyMiKQeC3QpsTrZLxkAOFWyRFDW2+jXPqiRJWbAI9gV9BOTbDKj8HfiC0KW/2ezd2vnAhKWpos3rs+Wdk4xofNwODkAS6HQtsHguuFBeSwoc2RVkka8We39/qGNoqKYD43oewYhPodg6pEqHtfSpDHhRukbRdSHyaiNVih+/IoOr4sGYibut4INDNDPNU9Tfd6ApR/wkJLjbFNLFjaWJ21iMuJC/0gr9CIFCD6C7lvhzaxIc1bwltqkXhapQw0RroJ6LzJLMVHQ6yE4Qki2ENhGBGgf4iapGMpHpYhrbRViHxybzXjB1uWUi8X4qIHQ4TrYFepqNWbtptkSxOpXKWcBucWqVa6L4gJIFepqN8SdotJPFhzbNCm/cyqDcuJGMziGsSCHQy8ZCQfSUk68WeZzU/EmK0BvqN/hza+PmR9WOHs1j2hbBiE+g/4hZJPBtDW2mnRbIsLsZlmQlksFHPR1pbInY4CEmg14lbJLKITpRpp5B8J/b8/hZSDURZgsoo2hCGNoHe5wMqU2XIgvoBtFdINow9vzqjeuP+Ix8Ibd7MqO5AoCPx4THejxySBXUFaJOQ+Mja0RWbibg0kFkQ5kcC/Uo0O8LsVsn41pO20S6LZA0qI4nfJbSplei5UQpbsfHJuAKBoohH/5NFdALaF4/kB7HnV2VYd6YxSHwA6SUA49MPVCsjccmZlwHWrVPftMDPgEGhzVlN9GcUQ+ERBtP43VglR+IEdm2cgD8J3N5tuWQCdYnHv5Vkkzu7YXIXEr+ZaNvIoW+A6zOqe34gbhU0LCQ+e/2euB/earjdySWr5H9wkdsOEdr8zyq5AC7y1ba4/Q2n1an3YFzKgpmBd62S5wttvm6we9cCm/j/FS4maK32pgVOBn4CjAeew1mD0wD3WSW3y8gBMNAZxPMCx1PVto12DG3WodLr7i6fLT4L4sOaL2gwn4jP5P4sLtfKrMAxuP1AWwD3A78A7rJKzgr8BvghQxG964WHnJ0ha2IOYLsG+/YbhkTkAqFNkoh8Gyei2wG/EdrMKbTZCJgT956sA5zTSPuBjqeaRVII7Rja/DD2PMthTdPBnr3/ybHA/rg9P8cCRwptJkaK3WSVPBe3H+huhmeMqyckZwH7MBSfdi/g0pT9Ww44yT99AJfOoVbZfXCWyDfA6kKbyfNEQptPfXTzRYAtrZILCm1eTdOHQMcTt0hkEZ2AnC0SHw0tmqM0s2GNp6kVG6vkaJw4KNwK0qZCm8NiIgKA0OZp3GtYBpdFrYwR2ryd1I7Q5mUqtwGsbJWslhgs3r9pgStxaSDHAlvVGhJZJXcE/oC7KewRFZEI4yP/nP3l0QAAIABJREFUL1Wv/UB34KPWfxQ5JAvqSu4WyQbAtyLPLbCFVTKr+uM/yrorNt5V/2LccnQJ+IXQ5raka4Q291kl76DSqS5t1PszgWj6gL2An9a55k/Aorig2Jv5L8wwrJLrAOf6p+cJbWql0YxuTQgJ1XuL/wKr+P8XTiqYJ3kLyfax5wvRfM7YNKSxSE5iaPL3MKFNqqEG8A+aE5KbgdcZSvy8nVVSCW3iLs4AWCV/ipuXGQR2ENr8u0a5RYC/4TILPo0TqGrlpsOl/wCX1uCplP0OdAcvMyQkM1olZQYZKxsmNyHxcxDRZd//4Cb7TsZ9+QdxCZjHNtnEarjJzzKTcKsUSX36NW44A/AEcEID7cU9aFPtExLaTLJKnsNQnpOpgF2Bo6v0bwncvArAgUKbW6rV6VfCrgRm8Yf2FdpMqNGFNRn6nB+qNnwLdDXxCddlANPuTuRpkWwEzBR5fpLQ5iKr5KM49/j5gJ2BterNNVTDKrlo7NCLCT8mrJJL4YYM4ERsjwaz8EU9cz8BqloKNTgPOIKhvMS7WSVPENp8E+nfNLj3ZVrgL0krNMDPGRK2p4Q29yWUjU52391AnwPdQXzCdVngxnZ3Is/J1uiw5k3gcgChzeO4H8GtwALAnVbJ2YZfXpdGHdH+yNCy7XlCmyfSNmSVXJihoQnAI42IkPfduCZyaC4qJ6HBpXhcAjdk2i2hLzNQmcXt1ISyG+GSWwO8APxf2j4Huoa4RRL/XbSFXITE3123iBz6Y/Tu6/1INgUOxU0q/sPHXW2E1Cs2VsktcRO/4IZAw4YVdYhvOGwmveiZseeT5zSskr/ETcC+TsIKjecwhvxy3qLGcroXnPJE7ATgh0KbeBb7QPcTt0iWKaITeVkkuwLT+/8/oTJzOgBCm5LQ5jhgX7yF4pc96+L3uMS9+Kqu2HgX8+gw4e9N7A5uWUiENg9RmZZ0DavkClbJ5XGWwnhcasaanqdWyTmBvSOHTo8KdAzNkBW1f5VsbYEeQGjzGZVBjhZM+zvKksyFxP9wD4gcOsu/2KoIbf4EnIGbPL3B+3jUo5r5Vmvpd1/cEKrMeSnqn4yf2IyGiJwIPNZIHRHiVsmhuCHPKGBHoU29/MfbMzTPUmLI4qjAKrkxsIt/erXQJt5uoLeIDm9GAEu3uwN5WCS/YCjs2wTq7Efx7A3chht+XOU3ziURFxJbze3ei0B0ZWccbjm2EVakMqfwv1oYIlyGs9DKbIUTuSOFNn9LcX104vS/NV7zFrj9OeCskh2a7Guge6g24dpWMhUSLwAHRQ4dK7SJx5Ychs9luj1u+XYznMNYEmlDB6yP22tS5qImlj83ij1vZn4EAKHNeIa/tnuFNr+vd63foLhK5NCTVcrshhOREs4H5YBWk7O3mTz72k3vQ6NUWwJuK1lbJD9hKFHViwztFamLH/5sirMafmiVrOpg5Uk70fqT2PPz0/YHJrv47wJEQ0I2LSSe+DBj0RQWGAx37pvsWGaVnNIqeRzOB8UCqwltrmytm4UQTyHSSqCe+LW9nJ7k+djzFdrdgcyExMfAOCRyaPdGt8wLbV4HNge+Bk7yDlrxdqYAlowdHiYkVsmpqVxifdTvfWmE7XH7g6Ju5a0KyZe4Xcpl5gS2TnHdBrHnT8LkJd7ncPNS5wMrdfHE6kex560EjopfG6+7l3gAN3dXZiWr5PS1CudBlhbJdgz5+l8stLm3mUq8f8fJwGjgMu8hG2Ux3ORklGpDm80ZWjmC5lzDD8T5d5RXiMY24zxXxi+LX8/wu2WS9VUmmpK0BHxslbwe54/zOLC40GZnoU03/2DiVkMQkhR4az7qFzUFw5PR5UomQuI3wh3qn/6PITf0ZjkGF0ZuOf9/lPiw5n/ekomzTux5Q5GjrJLfA8bgLJByGIBHGqmjChfg+n8GEBWk1f0ycK2+DFDpEDfo+/UlsJTQZkehTTzsXtfh56+iK3yjUq7iVSPul9SzQuKJey3HLdhcycoiOYCh4cZeQpv3kwrXw7u6/9o/3d8qGV1+TTs/Ek8qnlpI/A/3cOB0YN7IqRfS1lGlzsNxQ6UncGEa4741SVbJHFRaYZ8DqwhtdhDavNhsnzqUrIY3fWOReOJCEk9GlystC4lVcg2GXLZPFtpc3mqdAEKbO3Bu9SOAiyKer2lXbJoWEtwS9tw49/NFIsdfaqCOyVglt8ZFYPsY2M7PHf2ZynHtDj4KWzXmjT3/SGgTn2DrFeI/+GHzZPXwXr1z16m313gY525RZlnvwNgWWhIS/8W/EjcmuwU4OItORdgX9wWYFzdXAen32ESHAh/W2rYfxyo5O261aQ/vLxKN8dBQGEdf3wq4Jd8B4OflLd5Cm3eoTMkxGreJsRrxINRz+8ntXiTu2btJ1VLJbERl0rTPkjZ09gL+9T0cOTQA/Kpd7TctJN78vwSYB2fy/6jB3bR18e7iZb+U7X0w5W/Fig2zSKySM1M50fpGA83+AbgnsoW/bJGUGO74k4i/I9yAm1w9XWgTjw4XXwr+dQ2BMLh5kTJTMtxKSdunY6uthnUQj8eeb9pEHfFrHm2yL93GXbHnv0rpWtAyrVgkxwIb4yZXNxPafJpNl4ZxHs4nBeC42LkvI+eixAWt1pChAqvkTrgvYXQ/S1lIvqDSnyR63UpVjo3GrdDMg7OaDoiX8Stb0SHXfLjVpni5r3E7qKM0Y/L/Hhctv9b+nFrE927kuZcjvry+qN99nQovxBvHDt/fQPtZvdZm64mv6DXiSxMXkjE0GHC8WRoWEqvkNFbJv+J8Rt4E1s8zmLDPxVIe1gzETj9XzXPT56OJCtsc9YYCVsm1cYGXfim0ecsfm5khEZoWWLzKdUfglqnj7+UFuFCQnwPbC22+qtF0PNfNnjXKxVdl9q5aqgbewe8w3J6eRv1p4rFfFs5xaPUQlX42AFfYFMnI/GdwIS56f5TEUJqR66dl+NzKsM88JfH3LG09C8WeL1K1VBWENo8xfPh9mo+mlysNCYl1iaEexqncU7iVg3obzbLgYqpbA0kxWqNLwlMB369V0Cq5GC5s4clCm2jckLg7/Zqx6w7EzeNsFR3WWSUPY2iPy251frgX48SmzPpWybjDHcBFsecb+Ynuulgld8DteTpeaHNDmmtixCe4RzE8YlwmeMs2Hv5yReDvSU5WXkQuYLg388NCm2HbCWqwLMNvVqumvLZaXVEWSZhMByY7US4YO9yol2p8NXBW4Dar5FzVCmfFQKmULvmaX4K9CjdHcSNuTmR88lXZYZW8kKEgPWV2F9qcXaU4VskzqUzhcC/wnfheGx8j9Qx/fot4Njqr5EcM+ST8G7dLeTrc8vDOwMZCm7si5bfGRTobAM4X2tSaQI22cRaVwYzOFtrsHiszAheGIBoF/t/AJkIbm1D3d4GbcHflHzSQrmNxnPhuxPD9RuDCHlyMm3+4PMsQjl5In2X4jc7iPqfH/WMisJJ/rE71Xa9bCW1q5pn2ToLb4+La/hT32ca5C/g7cF2S9W2VXAUXcmJzhgcmB5f0+1Lg/uh8mb8hbAT8mOFCUm7/b8CF9TaMWiW/hRspxJ02v/Z1HJvHil9di8QquZBV8nLci5kCN/n5g3aKiKeaYCRFRfsDlXMl6wLXWCVXt0rObZXcwSp5He7HcA9uWbaaqv4j8v+SOEey13AitWtMRJZnaIXmOdJ5rMLwSdefxk15LwC/jZVbEvinVTIeLwWr5JxWyT/jVtMuB7ZucDJ8J9zu4WoiAm6otzvOUqr242saH/C62kZG4ft1Bs4f52lcKIVfUV1ELkgSEc98OEtmd2q/jg1w3tbb1jhf5hCcA2WtlCOz4SzY+Hf5cOB3VBeRcvtnULkSWRWfcaDaTvKpcLvHt6lXRzNUjdnq735r4hT6Z8BXwPE407+QzU9Cm0etks8wZDImBnsW2rxslbyMytQPW1AZuQ3cmHqXhDvqaVRumCt/2Y4W2lxYPmiVHIOz1KbBDVW2E9pUnZyt0tfnrJIPMjR0mhYXl/WPsXI3WSWPxMV/LZvg3wLusEp+iLMOPsRZLUvi7krHC23iAtQNHI0b0mzW5PX3MuTU2G+cQ5vDRwyzSPz4fhxwH+5HeCawoNDm0KJEJEJUyf+bIi7IL6i949fittr/PMksF9o8gpukLDMeOFxo87vJFbmx7Q24FRpwQ65GPU7jVskefok93p+jcGIYXyWbFedzsSNuXP0QsG6XikjZAtsSZ4U1MmyaiLu7b5gwwd3T+GDgbfV4rmaRbIDzWzgBuLKVTWo5cD5urAo1lmKjeIHY2Sp5FW4T07K4YckTwLVpnZSENsdaJR/DzY+c553JokzFkPPPN6JGLpo6XM1wF/wpqLJU6y2TpXDDjpVwd+7pcJ63LwK3CG1SpctI4ESqDyerkcvSvxeT462SV+Cswu0YsrSifIGbeL8W97nWnDOqwqukT75dzzt2V1yK1nrEVxp3Yng62Gq8laJMmTWp9KUqk4sxMGyy1So5c5fvIA30OH67xOw46+PdAubrAjFSr9oEAoFALXJNIh4IBPqDICSBQKBlgpAEAoGWCUISCARaJghJIBBomSAkgUCgZYKQBAKBlglCEggEWiYISSAQaJkgJIFAoGWCkAQCgZYJQhIIBFomCEkgEGiZICSBQKBlgpAEAoGWCUISCARaJghJIBBomSAkgUCgZYKQBAKBlglCEggEWiYISSAQaJkgJIFAoGWCkAQCgZYJQhIIBFomCEkgEGiZarl/A4GOwyq5KLA+Ljf1y0KbQxq8fhng/4B7gFuAf/rcwoEMCCk7Ax2JVXI+nHCUH3PHimwvtLkqZV0CeBiYK3L4fVxC+luBf4R8163RkpBYJUcLbSZk2J9An2KVnB1YjyHhWKjOJZ8DKwltXqpT77eAB4FFE4pNAh7FicotQptn0vY74GhISKySCwNrAGv6v1Zo872c+hboYaySMwJr44Yq6wNLAQMNVvNvYGWhzRc12pgWuAtYpcF638aJyq3AnUKbzxq8vu9InCOxSi4ObMyQcMweK/J2Tv0K9BhWyalx36HyPMeKwMgWq10SOAf4aZX2pgCupnERATcE2tk/vrFKPoAXFqHNC813t3dJtEiskhcCOyVcf5/QZt2M+xToEaySMwF74cRjNWBUTk3tLrQ5O9LuAHAhsGMObY1lyFq5R2jzZQ5tdB31ln/rnW/1jhLobRYFfg+sS34iAvBHq+RKkecnkI+IAMwP7IFb+fnQKnmrVXLWnNrqGuot/9YbswYhCSQxdZvaGQVcbZVcAWdBH9imdqfGDf3HAB+2qc2OJAhJIE+maWNbErgPN2nbbqYtoM2Oop6QhKFNoBXaZZGUWbrN7ZVpp2B2JPWEIlgkgVZot5AURd9bJEFIAk1hlZw/RbF+uVMnColVUlglT7ZKztKuDrWbsGoTaBir5HHAK1bJc62SYxKK9rVFYpUcY5U8HfgvoIB/WCVnaGvP2kSwSAINYZU8FDgE993ZGXjZKnmodziL05dCYpWcxSp5AvAqsCcwlT+1EnCLVbLnLLVWhSTsHu4jrJL7AMfEDk/nj71klfyxdwYr03M/mBpMC2CVnM4qeRjwGnAQ1V//msANVsk8/WraThjaBFJhldwV+ENCkXmBS4FHrZJr+GP9YpHMapXcFycgRwMz1im/Ic7vZcrce9YmwtAmUBer5E+As1IWXxl40Cp5FbBwfr3qKA4ATgVma+CazYBLrZI98RsKQhJIxCq5FW7fSqPR9LYFtsi8Q73FdsB5seFgV5K7Q5pVchtc7Ij7a233DnQmVsmNgSsIN4w8+RkwHjcp27W0w0V+G2B74Gur5MPAncAdwJNCm0kprg8UgFVyPeBvDK04BPJjD6vkF0Kbdu0Rypx2Dm2mwu0CPQZ4DPjAKnmtVXLbBuoItAGr5GrAjcDoovvSRxxglfxd0Z1oliJXbWYCtqLLTbpewyq5PC7WxnRF96UBJuGCbD0J3AxcCdyLcwTrpuhmR1kl9y+6E83QCbt/u36iqVewSi4B3I4T+U7ja+BuXBDnd/zjbf/3vaSI8D7k4lzAnP4xF7AgsAlu13Anoa2S46OBmrqBVoUkC4e0kFunA7BKLoSbv/pW0X2J8CnOOroeuE1o82kzlQhtxgMv+0eUPa2SywJb+sdyLfQ1S870cyYXF92RtHRCGIEgJAXjUz/chbtbF83buPmZ63GhDL/OszEfMf4Z3LBCMCQqa1HcatUAcIEXk2sK6kNDhKFNn2OVnBMnIvMV3JVHgd8C9wptCkm2JLSxwGnAaT584t7AfhQTJmAkcLlV8kuhzS0FtN8Qra7aDGTgTBMskoLwOV/upH4OmTz5L7C10GY1oc09RYlIHKHNh0Kb3+Hem3OAiQV0Y0rgGqvk+gW03RCtrtpA61ZJEJIC8BHebweWKKgL44DdgSWFNn8rqA91EdqME9rshgvhWEQ/RwM3WiVXL6Dt1LQ6tAEnJK2odRjatBm/v+NWYPkCmv8M0MApfhI0E/wGuDmBWXHpOMcJbTKzInxGv629j81JuF287WJa4Far5GqdmlcnKyFphWCRtBmhzSSrZBGm+nXAbkKb95q52Mc82Qi3ujI3bhm3/Hc2Kr+vg1bJ94C3cBO45b9PAHc3O4krtHkEWMsquTVwPvV3+mbFSOCDNrXVMK2u2kDrQpK7RWKVnAv35VsOOFto87+82+wCTsStTLSDEm57/ZGNzoH4eZxNcSspG5E+NMEIXJqIMbisflE+tUreBtyAy573SSN9AhDaXGuVfB64ifbscv6j0Ob9NrTTFD1lkfg0jYsyJBrL+r/R7d2XAkFI3NDmefJP3/AF8DOhzdVpL7BKzgH8CCcea5D9MuwMuP1f2+NSct6DE5XLhTYfp61EaPOSVXJl4CrgOxn3McpHwCk51t8yXSskPvblMlSKxlLU3x/SEasCRSO0KVklTwLydHp6A9hCaPN0msJWyelwsT32p31LrlPiLJ2NgGN8PNrThTZfpblYaPOx3yV9Cm65OA90IwJXBF0xtLFKzsuQYJRFY4E011YhCMkQVwDH4qKbZc3DwFZCm3frFfQTpbsCv2N4ovp2MjNwMrCXVfJw4NIk1/syfhf7PlbJ54AzyXbH9Hs435aOpqMsEv+FWpzhopFlGP8gJB6hzUSr5Kkkh1BshguBX9Wb0PQ+SNvixKxIX5Y48wEXAftbJQ8W2tyW5iKhzflWyZdwy8SNREtL4vgsV7fyohOEZHar5F9worEE+ce/CEJSybnA4WQn1lcJbX5er5BVcjbgamCdjNrNg2Vwy643ADum2esjtHnQD3UeoPWYtW8CXbF5rxMc0mbFRYlajvYE0alrqvYT/m53RkbVPYn7LBOxSi6DW4btZBGJsgXwiFVywTSFhTZPAnXFNAVHC20mZFBP7rTqIg81hMQqKX2YxcUa7lW+BItkOKcDX7ZYxzu4idXEeqySP8DNn4gW22s3SwCPWyU3SFNYaPNX3JJ3s7xOvhPhmTJQKtX+XVkl/8nwNfg4i+K+hCv5x4r+76wZ9TFr5mjWIapb8ash89R5tPJ5TQDWEdo8XqcfhwG/p7u9mScC+wltTq9X0M8BXQ1s3WRbJZwn8Eexx8dVjj0vtHmuyXZaJotVm8dpn3dfFvSNRWKV3A04gfw/n18miYhVcirc3XX7nPvRDqYA/uSHZ7slxR32S+w74YIoNRPrZADn8zID9S24u3D5cgohi3gj3SQi0EdCAnyf/D+f44U2l9cpcza9ISJRdsbtuUnEz0FtDtRdBm+RVYrMkTMFTDbBFgJWiD16MXt6XwiJ/0zXqFuwNW4FDq3Tj33JZuKxE9nPKvms0OaipEJCmzd8fqAHyG9v2XQ4h8xncqo/kRFWyftwY67/4oLmHogzkXpRRKB/Vm2WJN/P8BvgN0l7Z6yS38M5ePUy51glV61XSGjzMM43JU9Wy7n+mowA1saNwfqFvrBIcJ9rnpwjtHm11kmr5GK4G1OvJ9caBVxnlZw7Rdnf4Sam86KwmCX9uIW/X4Qkz529n+FWX6pilZwZF3e12+bPmmUMcIMPc1AToc2b5OvuXqhF0m8EIWmdk+tsaT+f/kkgXmZF0u3QPYH8dp8v5D2G204Qkh7EKjk/LuBPHowDTk1oe03gBzm13ens6od0NfG7eI/NsQ+FWCX9KCT9MNma5/zIUXU2kdVdEu1hRgLHpyh3BmBz6kMQkjbR8xYJ+Q1rXgLOq3XSL3EWNk7vELasF6jZxzo5PKf2g5C0iSAkzXN8rYDKPjrdcTm1222kscouA17Loe1v+8+irQQh6TF8mMJFcqh6Im4lpha/xO27CsAaVsktkgr4gEnX5dD2NLgYPm0lCEnvkZc18oDQ5qNqJ6ySo4Ajc2q3W0kzV5IkzK3Q9uFNEJLeIy8huSHh3IY4X4rAEItbJevtnH8I+DCHttvumNaPQtLrqzZFCEmiGd/H1BveTAJuzqHdYJG0gZ61SHxk/TzGx88KbUyNNkfgdrcGhrNlijJJAt0s0ieHbxtBSHqLNcjnM00ay68KzJFDm73A0lbJBeqUuZ189t+01SoJQtJbhGFN51FveDMeF5Qoa4KQ5EmjKSO7jDyE5C1cUOdapDHf+5mihjdtnXDtOyHpVaySo4Fv51D1c7XE1yq5CPn4rPQSa/jd0Ek8m0O7K/oQl22h34Skl1dsVsbFxsiatxPOBRGpz0jqJ/9Keo+bZRSwfA71VqXfhCQMaxon6Us+V05t9hr1dmKPI5/vZtuGN0FIeodbgRdyqPethHNtXWLsYhIFV2jzDS7Hb9asnEOdVQlC0iMIbZ7GBdf5E9m+zmCRtE6a2DBZD28eBA7KuM6aBCHpIYQ2Xwpt9gY2wuWNzYKkL3iwSNKRRnCzEpJJwFHAukKb1zOqsy5BSHoQoc2dwNLAFRlUFyyS1mmXRfI6TkCOTErclQf9JiS9vGpTgdDmY6HNj4Af4lI6NsMkkhM7BYskHe2wSK4GlhXaPNhiPU3Rb0LSFxZJFJ/M+vomL3+3zp1tmibr7TemTVEmaVI7iS+AnYU22/l4sIXQ9khKBdN3QmKVPJHmM93Ve7/GATM1WXc/8U6KMs18N58GdhDavNTEtZkSLJIexir5O1zmxGaZw+/urUWaH0ggnbXRzHzTDYBp4rrMCULSo1gl98fN3rfCFMDsCefz8MjsRdK8T80IyZHAv+uFdWwHQUh6EKvkboDOqLqkL3iwSNKRl0UCsCBwvVXydqvk4k3W0TL9JiQ9v2pjldwRODPDKpOWLoNFko4071OrCc2+AzxrlfyjVbLt81b9JiQ9bZFYJbcFLgAGMqw2WCStk6dFEmUKYG/gZavkrnXmtzIlCEmPYJWcEZcrZWTGVSd9wZtdsuw3Et8nn4cmaS6qUb4FnAP80yq5XIb11iQISY8gtPkEeCOHqpOE5J84P4ZAbd4GXq5TZg7y+S0uT5ucBoOQ9BZ351BnTSER2nyJizkaqM2NKaLy5bXV4CPgzpzqriAISW+Rh5AsVed8s16z/UKa96fee9ws1/kQBbnTb0LS66s2eQjJfFbJpBQXN+P25ASG8ylwT4pyeaXz+GtO9Q6j34Skpy0Soc27wL9zqLqmw5PQ5kNc7IvAcG4T2nydVMAqOTUu7EPWfEA+N5aqBCHpPfL48tTznAzDm+qkeV82JJ/Nj38T2kzMod6qBCHpPfIQkhWskvMmnL+B/nhvG+ErXPjLeuTl3n5VTvVWJQhJ73Ev+cwF1RzHC23G0uYvbhdwttDm06QC3mFssxzafg/3PWgb/SYkvT7Zio9J8VQOVddL9HQo0JYVgi7gU+CYFOVWI1tHtDLXhghp+dIPFgnkM7xZx3vPVkVo8yrOmzIAJwltPkhRrieGNRCEpFfJQ0impL4Z/nvgsxza7ibeAf5Qr5BVcoB80p2OA+7Pod5EgpD0Jg+SzzDjEKtkzb08Qpv3gZNzaLebOEJok2bbwPbAwjm0f43Qpu1D+CAkPYjPcP9YDlUvAfysTplTcXfFfuRF3O7rRHxO3mNz6kPbnNCiBCHpXe7Kqd6jvBNVVbyI7U5/vdfgLMBdUk5y7gYskEMf3gIeyqHeuvSbkPT8qk2EvLwa5wb2SSogtLkeODyn9juVPdKkgrBKzkB+7801KTYI5kK/CUk/3SUfJb8t/gdZJWdNKiC0ORa4Mqf2O43/E9qcm7Lsgbh4IXlQyLAGgpD0LH6PR15m7ozAYSnK/QIXs6SXuRvYN01Bq+Scacs2wRu4m0chBCHpbfLctPVrq6RMKuDjlWxJ74ZkfA3YtoE9LUeRX1Kxq4oa1kAQkl4nrwlXgKmAP3p/iJoIbd7CicnnOfalCD4CNhfa/C9NYavkt3EWWl4UukUhCElv8xTwSY71bwH8rl4hoc3jwOp0SDKnDHgRWEVokypkg1VyLtxO4Kzj6ZYx/j0ujH4Tkn5atcEvRd6XczNHWCW3SdGX54CVgQdy7k/e3IoTkXpxWAGwSo7GiUhe4RShAzZM9puQ9JtFAvkHtxkALrJKrlCvoPd83QA4L+c+5cVJwGb1dvXGuAD4dk79KVO4kIQk4r3P2cDfcUuO0cessedL4FZjmmEa4Aar5LeFNolerT6G6C5WyedwXrB5mftZMgHnbHZpIxdZJQ8Fdmih3R+T4kZQ7z1vBwNmf9FPP65nhTZJ8Uf7Fqvki8CiLVbzKLCu0OarlG2uhdvgtmKL7ebJ/cA+QpunG7nIKvkD4FpaS1b2LLB8EXtnGiUMbQL44M6tigjAqjQwbBHaPIAz+3+EW0rtJJ7HDWPWaUJElgUuofWMh8uQ70pPZgQhCYDbiZoVP7FKnuWzx9VFaFMS2lwBLI5LN5kmjkeevIn78S4rtLm50Yv9Mu9twLQZ9ecYq+T0GdWVG/0mJB1vIhbEdhnXtxtwu1VylrQXCG2+Ftr8CVgQF12s3eP+14GDgIWFNn8JgPbaAAARmUlEQVRpZjhhldwBNxTKMrvdHMBvM6wvF/ptjuRJoc1KRXeik7BKrkh+buyv4oYHLzR6oXd0WxXnzLYF2Qy94jyLW5q9vtHhSxTf12PI7wc/AVhcaGNyqr9lwqpNIMthTZwFgUetkjsIbdJEVJ+Md/d+xD8OskouxpCoLAvUDGWQwHicaF4P3OCDVreEVXI63HxIHtHOyowGTiTfz6ol+s0ieUJos3LRnegkrJIGEDk3MwgcKLQ5JasKrZIz4YYQc8X+zoKbZ3kHl8B78t8G/T/S9EEAN+ImRdvBGkKbh9vUVkP0m5A8LrRZpehOdApWyVVo747RC4G9s/5BF4FVcgPgCmC2Njb7OLBqkZvzatFvk60d9wEUTLtN5Z8Br1olf+PDDXYdVsklrZI3AXfSXhEBmBmYoc1tpqLfhCSs2lSyYAFtfgs4DXjBKvnDeruHOwWr5DxWyfNxE7SbFtCFF4B1hDZ5bsJsmn4TkmCRVLIj0PRqRYssgBsaPGGVXL+gPtTFKjmTVfIE4L84/5IifjPP4zyGOzauSxCSPsbf3b6L2xZfFCsCd1klb7NKLl9gPyqwSk5jldwPt4R9EM2tEmXBv4D1hDbvFdR+KvptsvVBoc1aRXei07BKzo3b3j9/0X0BXsIlJb8BeLSd+0yskrPhhi1bABtRnHiUeRLYKG3wpCLpNyF5QGizdtGd6ESskgvgxCTPuBmN8i5wM05U7hDaTMi6Aavkwjjh2AIXfKlTrPTHgO926pxInH4TkvuFNusU3YlOxSq5BC4QUl5RzlvhC+AfOAe1t3E5XN4G3hbaJIZxtEqOwLmaz4VLpzEXbqJ5E9wen07jIWBjoU3XpD/tNyG5V2izXtGd6GS8y/zddOgyYw0+o1JcxgNjGBKOOeiOuCfghHwTn2isawgu8oEKhDZPWiU3wd3984p4njXT4/bi5LEfp53cCWyRMndwR9Ep48F2EYQkBT5j3A+Ar4vuSx/xd9wGx64TEQhCEqiB0OZ24IdAmly2gda4Cdgyj8nkdhGEJFAToc11wM8J71ue/A3YOm14yk4lCEkgEaHNJcCeRfejC2gmJMFVwPY+IHZX029CEvbaNIHQ5kzg4AYuKQH34pZq+4WfAZvhHOrScBnwowbSfXY0/SYky1glO8F7s+sQ2pwIHFen2FjgSGABv8x+e9796iA+8DFel8bFnk3yRv0LsKNPYNYT9JuQzAncb5VcqOiOdCNCm0OB02OHxwMXAesBCwptjoqEBOzo/SEZ8wG4vD0+9uzCwJ+A+LDlz8AvuyHFRCP0mx8JwDzAfVbJDYQ2RW5W61b2BqbD7d69ELgmwbO0X4SkBHwYPeD3x+xtlTwT0Lg9PGcAe3ViYKJW6TfP1ijvAhukTQQdaByr5Nrkn3u4E/if0GbWpAJWyeVbCTDd6fTb0CbKHMC9PplRIB/6xSKpm4unl0UE+ltIwG1Ou9vvLwlkTxCSPqHfhQRc1PE7fSDkQLZ8BPTE8mYdgpAU3YEOYSZcZrg1iu5IL+EnFYv4kbV7v0oQkqI70EHMAPzdKhnilWTL1UA700/cgsvQ93Gb2nsDF3ahr+nnVZtafAFsLrS5q+iO9Ao+9cT6DEUiyzI3bpQ3geWENh/6FaPbgVE5tPMf4DrgOqHNkznU33UEIanOBOAHQpu/F92RXsOnn1gZJyhbkl2Esom4SOsPRdraBvgrrVveJVwisetx4vFyi/X1HEFIavMVsK3Q5qaiO9LLWCUXYUhUVqX5H/1BQpuTqtT/G1wenUb5BjdkKecJ7thUEJ1AEJJkvsHtzryu6I70A1bJOYDNccKyIemHJbcCm9byGLVKnggcmKKez4HbcOJxS7cEXu4EgpDUZyLwY6HNVUV3pJ+wSk4HfA8nKpvg0lVWY/K8SEJdA8AlwI+rnH4flwj8OuDObo8LUhRBSNIxCfiZ0ObSojvSj1glpwDWYWiydj5/ati8SEIdU+Islw1xu5Svx4nHQ722ga4IgpCkZxDYWWjzl6I70u9YJVfACco7QpuzG7huelyIg2dy61yfEoSkMUrAbkKbPxfdkUCgkwgOaY0xAJxtlQyhBwOBCEFIGmcAON0nmA4EAgQhaYVTrJIHFd2JQKATCELSGidYJQ8vuhOBQNEEIWmd31sljy66E4FAkYRVm+w4SWgThjoRrJIr4SLRfeAfr/VivNJAsEiy5ECr5B+K7kSn4L1JrwBuxm14ewVYqdBOBXIjCEm27GOVPMP/iHoSq+RSKYtuBMTTfqybbW8CnUI/pqPIm18DU1olf9UrZrwXxq2Aw4Dl/Gur55T36yrH1gFOzrp/7cYeKFdgkD0GSqVZSwy8MThixLnzn/zas0X3q0jCHEl+XAT8ohf2cVTZPTuIyxR3WY3yc+I208Ut3k+BWeplmLNKLg/8qxOF2Ow7/0wDI0sWF1FvMqXSwAMDI0onipPNLQV1rVCCkOTL5fRAakar5AFAPNbHRGBr4CZgfmBZYDn/WAGXiKwa2wN/q5bz1kdSOxn4DXAnTojfyOI1ZIXdV87JSN7COSbGKQ0MlPaZ72T7p3b3q2iCkOTP1XR5smgfaezqKqfG43ZGz1DlXBLvA1fhhPYRoU3JKin8sZUj5T4BthTa3Ntwp3PkdSUuLDGwU43T3wwMlhab71T7Wls7VTBhsjV/tgWu9nfbbmVsjePT0riIAMwG7AE8BLxmldTAU1SKCMCMOKHqKD6ffvpdByj9tcbpKQdHjli6rR3qAIJF0j5uAbbuxsA5VskZcbltR7a56Y+A2Tp1aDj2gAWWGTE4uCfwYwaYxh++d/TAhE3nOHnc+CzasErODCyBC5j9KvCi0ObLLOrOkiAk7eUfuKDSHfdFqIVVciRwOrB7Ac1fLrSpFtWso3jt4AVnnOLrifMMlkaMl38Ya5qtx6+ObY1b3VrCP8bEig0CBhfJ/gVcPNm6gZ3yJghJ+7kb2Exo0+4kTg1jlZwBN2/x3YK6sIPQ5sqC2m4rVsn1cRPazaSPvR44WGjzUra9Sk+YI2k/6wO3+ZikhWOVXMgquatVcp7YcYGbwyhKRPoCq+TSVslbgbtoTkTAReB/3ip5lg+g3XaCRVIcDwMbC23amYWuAj9seQgo5z1+DhfX9J/A/+H2yRTJBGA9oc2jBfcjF6ySv8YNG7O8oX8KbCK0eTDDOusShKRYngA2Etq0K71kBT4Ewu+LaLsB3gNWFdrUWjnqSlrIt5OGz3E3qUzFxM/h/AJnpY7EZTI8V2gzGISkeJ7CiUnNdAp54K2RscC87Wy3SV4AVi9KcLPGpxO9l+pObVnxHrCU0Ob9LCqzSo7Ape3YJHbqTmDjICSdwbPAhll96GnxCdPvov3Lus1wN/BnYFFA4rxppwXWFNp8XWC/GsIqOTXu845vaMyDa4U222RRkY9TfHqN0weEydbOYBngXqtkfKkvV4Q29wGHtrPNFlgfuBI4Cvg5bifxt4GfFtinZtiJ9ogIwNZWyWUyqmuHpHNBSDqHJXBiMleb2z0JuKHNbWbJQd7s7hZ2aXN7v8ionkWSznXTB9APLArcb5Vs27yF32GbOslUBzINMGvRnUiD3xW9Qpub3SKjel5POhfikXQeC+LEZD2hjWlTm0lmayczFtig3XNLLSAKaFPaA+R7lHisNDDw8ODIEWcucMKrzSRHv4XaInhLsEg6E4kTk9zH0lbJ0cAP8m4nB14E1uqyZeG2zoFNpsRswKYDpdJxIydOeuaNA+dbq4laTgCqec6+BhwThKRzmRe4zyq5aM7tbAZMn3MbWfMasLbQ5q2iO9IgHxTdAUAMDo641x4gG/If8ls6vo1zVHwZ9xmcDawotPk0LP92PuNw5vt/8qjcKnkdzsW6mxgntJmz6E40ilVyPsAW3Y8yJQZ+JPXYK7KoK1gknc8Y3GpOVst4gHMwskouC2ycZb1tYkxRe0pa5A1cKICOYIDSH9/cb95ZsqgrCEl3MBtwt1WypRl/q+S3rZIH+01iHwH/AkZl0cECWK7oDjSKXyE7r+h+RJh90oiROouKgpB0D7MCd1kl41HEGuFK4HicFdJMZLNOouuExHMunTFXUmandw8YM22rlQQh6S5mAu6wSq7e5PXfyrIzBbNs0R1oBr+nas+i+xFhxARGtzxsDkLSfcyAy2DXED5mbLdbIVHWtkpu342xcIU2fwXOKLofZUqDAy1bd0FIupNm5jVG4IY232Tcl6KYG/d63rBKHutXRLoGoc2eQEekrRigtHyrdQQh6ROENhOENjvg/FMOw60g9AKzA7/FRaNvZf6o7Qht9sbFaP1voR0ZoOXd00FI+gyhzbtCm2Nx2/AvLLg7WTISF1GtqxDa/A1YEpee472CuvGvVisIQtKn+BQPjxTdj4zplj03FQhtJgptzsTtszocFyzo7YRLBoFXcNkOW2bE4GDLQhI27fU3LX+BOohxuNw7XYvQ5nPgGP8o5xMqp6Uo57X5D/CS0GaCVfIBYM0Wm504acaRz7dYRxCSPuc5XCa7boiQFsfgLKp7gfuKTMWQF0KbT3CvsarlWGLglAFKrQrJ6fKIsS0PCYOQ9DFCmy+tkv8FFi+6Lw1SAtYV2nTMvpUikHrs9XZ/eR0DTe/eNqMHJhyeRV/CHEmgG4c3D/W7iJQZWZq0Fy4FRcMMjhjxq6xSiwYh6WOskssBzcSmKJpLi+5ApzDPqW+8NWLE4KYDlNIv55f4Athl/pNeuz2rfoShTZ9ilVwVuA3ndt9NfA1cXXQnOol5T3r9gdcPEcsyceAcSqVt6xT/V2lgYAepx76Ytv63DppnnokTp9ioNDAwaURp8MPPZ5j+9iWOeL7C9yTEI+lO3hXaNB1tyyq5Hi5HSUekDW2QG4U2WcUh7Tns/vL7DLAuA6xMiRWB0cBzAwOlxwcHRzw68ZsprljoTy9/laauN/ebd5ZJAyPPY4DNqZyQHwecLqa3J3BEaRCCRdJ3+Gxpl9CdIgIunWigBuIUcysu7SocNTDilQ8XmjKtcER594Ax004aMfpWhtK5RhkDHGs/EwuJowZ25ojSYJgj6TN8TIxziu5HCxxqlWw22XZ/cURpsBkRAZjA6COpLiJRfm4/E0dDmGztV05n+Ez/JOCLAvrSKKOAq6yS3Ta3012UqDfXUmbvN/ebd5YgJH2Iz6G7K/AbXC7XxXD5Yb5Pd+wOXgD4S9Gd6FXGqgUE6VNnTDs4csQuYY6kT/ExMeLcZ5Xcle74kX7PKjl3F0aS73hG89X4r5kydflSaWChYJEEKhDaXAgcV3Q/InyI82SNc1gQkXyYc/q3P6aBDYEDlKYPQhKoxmF0hq/G47gt9vPghmI3AOOBB4A/FNiv3uaI0kRKXJW2+CAjbPAj6U5a8iNJg1VyBuBdnB9CEVwL/FRo82X0oFVyFDC1n+cJ5IQ9UK7AIE+mKVsqDawWLJJALVahOBE5Gdg2LiIAQpuvgojkjzjJPAWoFEVvlqeax4KQBGrx/YLa3Udoc6D3dwkUiNDmlFJp4NfAMEH3PDhycNJ2lEqlICSBWhQlJN2UFLznkaeMPWuKqSbOS4nDgDtLpYEHKHEdJTYR09t15jn1jS/Bucj/HTcrnvQgRZm0j06sq9v6VOsOkQlWyQWBRaqcegb4BbAO8GMgDw/T+XOoM9ACcx/35ofAsf5RlSmENt2Y+zWQL2/i5in2Z8j7+QJgD6HNBOAp4A9WycVwgvJj0gnA18AL8P/t3TEKwkAQQNFv5SWEjQexsRBbryI5gLWsrVjZ29uIhWAaO8FCC0E2VxAUxSIWowi6EpFEEeeVyyRMNWwmOwkL5DekdU+MFpIfVEgSfRRVfnEYVIAe0DHW9VNiN/iLwBAYIMVjZaw7XeKLyARy7S5ep3t/kJ5sVU8Z6yLkHMcrZjwWkgRoGuvWnnsf4zBoACNuHzA+APM301VfpM1WlZWpZ23sKyJXxro9MuszAdpA2VjXyic9lSfdkaisRJ61btpFxrotUM0+HfVJWkhUVpbIG8AS0kjdIf0R9QfO+wEo5PAQSnEAAAAASUVORK5CYII=";
	com.haxepunk.HaxePunkLogo.image = o;
};
com.haxepunk.HaxePunkLogo.__super__ = flash.display.BitmapData;
com.haxepunk.HaxePunkLogo.prototype = $extend(flash.display.BitmapData.prototype,{
	__class__: com.haxepunk.HaxePunkLogo
});
com.haxepunk.TweenType = $hxClasses["com.haxepunk.TweenType"] = { __ename__ : true, __constructs__ : ["Persist","Looping","OneShot"] };
com.haxepunk.TweenType.Persist = ["Persist",0];
com.haxepunk.TweenType.Persist.toString = $estr;
com.haxepunk.TweenType.Persist.__enum__ = com.haxepunk.TweenType;
com.haxepunk.TweenType.Looping = ["Looping",1];
com.haxepunk.TweenType.Looping.toString = $estr;
com.haxepunk.TweenType.Looping.__enum__ = com.haxepunk.TweenType;
com.haxepunk.TweenType.OneShot = ["OneShot",2];
com.haxepunk.TweenType.OneShot.toString = $estr;
com.haxepunk.TweenType.OneShot.__enum__ = com.haxepunk.TweenType;
com.haxepunk.Tween = function(duration,type,complete,ease) {
	this._target = duration;
	if(type == null) type = com.haxepunk.TweenType.Persist;
	this._type = type;
	this._ease = ease;
	this._t = 0;
	this._callback = complete;
	flash.events.EventDispatcher.call(this);
	if(this._callback != null) this.addEventListener(com.haxepunk.tweens.TweenEvent.FINISH,this._callback);
};
$hxClasses["com.haxepunk.Tween"] = com.haxepunk.Tween;
com.haxepunk.Tween.__name__ = ["com","haxepunk","Tween"];
com.haxepunk.Tween.__super__ = flash.events.EventDispatcher;
com.haxepunk.Tween.prototype = $extend(flash.events.EventDispatcher.prototype,{
	active: null
	,update: function() {
		if(com.haxepunk.HXP.fixed) this._time += 1; else this._time += com.haxepunk.HXP.elapsed;
		this._t = this._time / this._target;
		if(this._ease != null && this._t > 0 && this._t < 1) this._t = this._ease(this._t);
		if(this._time >= this._target) {
			this._t = 1;
			this._finish = true;
		}
		this.dispatchEvent(new com.haxepunk.tweens.TweenEvent(com.haxepunk.tweens.TweenEvent.UPDATE));
	}
	,start: function() {
		this._time = 0;
		if(this._target == 0) {
			this.active = false;
			this.dispatchEvent(new com.haxepunk.tweens.TweenEvent(com.haxepunk.tweens.TweenEvent.FINISH));
		} else {
			this.active = true;
			this.dispatchEvent(new com.haxepunk.tweens.TweenEvent(com.haxepunk.tweens.TweenEvent.START));
		}
	}
	,finish: function() {
		var _g = this._type;
		switch(_g[1]) {
		case 0:
			this._time = this._target;
			this.active = false;
			break;
		case 1:
			this._time %= this._target;
			this._t = this._time / this._target;
			if(this._ease != null && this._t > 0 && this._t < 1) this._t = this._ease(this._t);
			this.start();
			break;
		case 2:
			this._time = this._target;
			this.active = false;
			this._parent.removeTween(this);
			break;
		}
		this._finish = false;
		this.dispatchEvent(new com.haxepunk.tweens.TweenEvent(com.haxepunk.tweens.TweenEvent.FINISH));
		if(this._type == com.haxepunk.TweenType.OneShot && this._callback != null) this.removeEventListener(com.haxepunk.tweens.TweenEvent.FINISH,this._callback);
	}
	,cancel: function() {
		this.active = false;
		if(this._parent != null) this._parent.removeTween(this);
	}
	,get_percent: function() {
		return this._time / this._target;
	}
	,set_percent: function(value) {
		this._time = this._target * value;
		return this._time;
	}
	,scale: null
	,get_scale: function() {
		return this._t;
	}
	,_type: null
	,_ease: null
	,_t: null
	,_time: null
	,_target: null
	,_callback: null
	,_finish: null
	,_parent: null
	,_prev: null
	,_next: null
	,__class__: com.haxepunk.Tween
	,__properties__: {get_scale:"get_scale",set_percent:"set_percent",get_percent:"get_percent"}
});
com.haxepunk.debug = {};
com.haxepunk.debug.TraceCapture = $hxClasses["com.haxepunk.debug.TraceCapture"] = { __ename__ : true, __constructs__ : ["No","Yes"] };
com.haxepunk.debug.TraceCapture.No = ["No",0];
com.haxepunk.debug.TraceCapture.No.toString = $estr;
com.haxepunk.debug.TraceCapture.No.__enum__ = com.haxepunk.debug.TraceCapture;
com.haxepunk.debug.TraceCapture.Yes = ["Yes",1];
com.haxepunk.debug.TraceCapture.Yes.toString = $estr;
com.haxepunk.debug.TraceCapture.Yes.__enum__ = com.haxepunk.debug.TraceCapture;
com.haxepunk.debug.Console = function() {
	this.debugDraw = true;
	this.init();
	com.haxepunk.utils.Input.define("_ARROWS",[39,37,40,38]);
};
$hxClasses["com.haxepunk.debug.Console"] = com.haxepunk.debug.Console;
com.haxepunk.debug.Console.__name__ = ["com","haxepunk","debug","Console"];
com.haxepunk.debug.Console.prototype = {
	toggleKey: null
	,init: function() {
		this._sprite = new flash.display.Sprite();
		var font = openfl.Assets.getFont("font/04B_03__.ttf");
		if(font == null) font = openfl.Assets.getFont(com.haxepunk.HXP.defaultFont);
		this._format = new flash.text.TextFormat(font.fontName,8,16777215);
		this._back = new flash.display.Bitmap();
		this._fpsRead = new flash.display.Sprite();
		this._fpsReadText = new flash.text.TextField();
		this._fpsInfo = new flash.display.Sprite();
		this._fpsInfoText0 = new flash.text.TextField();
		this._fpsInfoText1 = new flash.text.TextField();
		this._memReadText = new flash.text.TextField();
		this._layerList = new com.haxepunk.debug.LayerList();
		this._logRead = new flash.display.Sprite();
		this._logReadText0 = new flash.text.TextField();
		this._logReadText1 = new flash.text.TextField();
		this._logScroll = 0;
		this._logLines = 33;
		this._entRead = new flash.display.Sprite();
		this._entReadText = new flash.text.TextField();
		this._debRead = new flash.display.Sprite();
		this._debReadText0 = new flash.text.TextField();
		this._debReadText1 = new flash.text.TextField();
		this._butRead = new flash.display.Sprite();
		this._entScreen = new flash.display.Sprite();
		this._entSelect = new flash.display.Sprite();
		this._entRect = new flash.geom.Rectangle();
		this.LOG = new Array();
		this.LAYER_LIST = new haxe.ds.IntMap();
		this.ENTITY_LIST = new Array();
		this.SCREEN_LIST = new Array();
		this.SELECT_LIST = new Array();
		this.WATCH_LIST = ["x","y"];
	}
	,traceLog: function(v,infos) {
		var log = infos.className + "(" + infos.lineNumber + "): " + Std.string(v);
		this.LOG.push(log);
		if(this._enabled && this._sprite.visible) this.updateLog();
	}
	,log: function(data) {
		var s = "";
		var _g1 = 0;
		var _g = data.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(i > 0) s += " ";
			if(data[i] != null) s += Std.string(data[i]); else s += "null";
		}
		if(s.indexOf("\n") >= 0) {
			var a = s.split("\n");
			var _g2 = 0;
			while(_g2 < a.length) {
				var s1 = a[_g2];
				++_g2;
				this.LOG.push(s1);
			}
		} else this.LOG.push(s);
		if(this._enabled && this._sprite.visible) this.updateLog();
	}
	,watch: function(properties) {
		var i;
		if(properties.length > 1) {
			var _g = 0;
			while(_g < properties.length) {
				var i1 = properties[_g];
				++_g;
				this.WATCH_LIST.push(i1);
			}
		} else this.WATCH_LIST.push(properties[0]);
	}
	,show: function() {
		if(!this._visible) {
			com.haxepunk.HXP.stage.addChild(this._sprite);
			this._visible = true;
		}
	}
	,hide: function() {
		if(this._visible) {
			com.haxepunk.HXP.stage.removeChild(this._sprite);
			this._visible = false;
		}
	}
	,enable: function(trace_capture,toggleKey) {
		if(toggleKey == null) toggleKey = 192;
		this.toggleKey = toggleKey;
		if(this._enabled) return;
		try {
			this._bmpLogo = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_logo.png"));
			this._butDebug = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_debug.png"));
			this._butOutput = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_output.png"));
			this._butPlay = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_play.png"));
			this._butPause = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_pause.png"));
			this._butStep = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_step.png"));
		} catch( e ) {
			return;
		}
		this._enabled = true;
		this._visible = true;
		com.haxepunk.HXP.stage.addChild(this._sprite);
		var big = this.get_width() >= 420;
		this._sprite.addChild(this._back);
		this._sprite.addChild(this._entScreen);
		this._entScreen.addChild(this._entSelect);
		this._sprite.addChild(this._entRead);
		this._entRead.addChild(this._entReadText);
		this._entReadText.defaultTextFormat = this.format(16,16777215,"right");
		this._entReadText.set_width(100);
		this._entReadText.set_height(20);
		this._entRead.set_x(this.get_width() - this._entReadText.get_width());
		this._entRead.get_graphics().clear();
		this._entRead.get_graphics().beginFill(0,.5);
		this._entRead.get_graphics().drawRoundRect(0,-20,this._entReadText.get_width() + 20,40,40,40);
		this._sprite.addChild(this._fpsRead);
		this._fpsRead.addChild(this._fpsReadText);
		this._fpsReadText.defaultTextFormat = this.format(16);
		this._fpsReadText.set_width(70);
		this._fpsReadText.set_height(20);
		this._fpsReadText.set_x(2);
		this._fpsReadText.set_y(1);
		this._fpsRead.get_graphics().clear();
		this._fpsRead.get_graphics().beginFill(0,.75);
		this._fpsRead.get_graphics().drawRoundRect(-20,-20,big?340:180,40,40,40);
		this._sprite.addChild(this._layerList);
		if(big) this._sprite.addChild(this._fpsInfo);
		this._fpsInfo.addChild(this._fpsInfoText0);
		this._fpsInfo.addChild(this._fpsInfoText1);
		this._fpsInfoText0.defaultTextFormat = this.format(8,11184810);
		this._fpsInfoText1.defaultTextFormat = this.format(8,11184810);
		this._fpsInfoText0.set_width(this._fpsInfoText1.set_width(60));
		this._fpsInfoText0.set_height(this._fpsInfoText1.set_height(20));
		this._fpsInfo.set_x(75);
		this._fpsInfoText1.set_x(60);
		this._fpsInfo.set_width(this._fpsInfoText0.get_width() + this._fpsInfoText1.get_width());
		this._sprite.addChild(this._logRead);
		this._logRead.addChild(this._logReadText0);
		this._logRead.addChild(this._logReadText1);
		this._logReadText0.defaultTextFormat = this.format(16,16777215);
		this._logReadText1.defaultTextFormat = this.format(big?16:8,16777215);
		this._logReadText0.set_selectable(false);
		this._logReadText0.set_width(80);
		this._logReadText0.set_height(20);
		this._logReadText1.set_width(this.get_width());
		this._logReadText0.set_x(2);
		this._logReadText0.set_y(3);
		this._logReadText0.set_text("OUTPUT:");
		this._logHeight = this.get_height() - 60;
		this._logBar = new flash.geom.Rectangle(8,24,16,this._logHeight - 8);
		this._logBarGlobal = this._logBar.clone();
		this._logBarGlobal.y += 40;
		if(big) this._logLines = this._logHeight / 16.5 | 0; else this._logLines = this._logHeight / 8.5 | 0;
		this._sprite.addChild(this._debRead);
		this._debRead.addChild(this._debReadText0);
		this._debRead.addChild(this._debReadText1);
		this._debReadText0.defaultTextFormat = this.format(16,16777215);
		this._debReadText1.defaultTextFormat = this.format(8,16777215);
		this._debReadText0.set_selectable(false);
		this._debReadText0.set_width(80);
		this._debReadText0.set_height(20);
		this._debReadText1.set_width(160);
		this._debReadText1.set_height(Std["int"](this.get_height() / 4));
		this._debReadText0.set_x(2);
		this._debReadText0.set_y(3);
		this._debReadText1.set_x(2);
		this._debReadText1.set_y(24);
		this._debReadText0.set_text("DEBUG:");
		this._debRead.set_y(this.get_height() - (this._debReadText1.y + this._debReadText1.get_height()));
		this._sprite.addChild(this._butRead);
		this._butRead.addChild(this._butDebug);
		this._butRead.addChild(this._butOutput);
		this._butRead.addChild(this._butPlay).set_x(20);
		this._butRead.addChild(this._butPause).set_x(20);
		this._butRead.addChild(this._butStep).set_x(40);
		this.updateButtons();
		this._butRead.get_graphics().clear();
		this._butRead.get_graphics().beginFill(0,.75);
		this._butRead.get_graphics().drawRoundRect(-20,-20,100,40,40,40);
		this.set_debug(true);
		com.haxepunk.HXP.stage.addEventListener("resize",$bind(this,this.onResize));
		this.onResize(null);
		this.set_paused(false);
		if(trace_capture == com.haxepunk.debug.TraceCapture.Yes) haxe.Log.trace = $bind(this,this.traceLog);
		this.LOG.push("-- HaxePunk v" + "2.5.3" + " --");
		if(this._enabled && this._sprite.visible) this.updateLog();
	}
	,onResize: function(e) {
		if(this._back.bitmapData != null) this._back.bitmapData.dispose();
		this._back.set_bitmapData(com.haxepunk.HXP.createBitmap(this.get_width(),this.get_height(),true,-1));
		com.haxepunk.HXP.matrix.identity();
		com.haxepunk.HXP.matrix.tx = Math.max((this._back.bitmapData.component.width - this._bmpLogo.get_width()) / 2,0);
		com.haxepunk.HXP.matrix.ty = Math.max((this._back.bitmapData.component.height - this._bmpLogo.get_height()) / 2,0);
		com.haxepunk.HXP.matrix.scale(Math.min(this.get_width() / this._back.bitmapData.component.width,1),Math.min(this.get_height() / this._back.bitmapData.component.height,1));
		this._back.bitmapData.draw(this._bmpLogo,com.haxepunk.HXP.matrix,null,"MULTIPLY");
		this._back.bitmapData.draw(this._back.bitmapData,null,null,"INVERT");
		this._back.bitmapData.colorTransform(this._back.bitmapData.rect,new flash.geom.ColorTransform(1,1,1,0.5));
		this.updateLog();
	}
	,get_visible: function() {
		return this._sprite.visible;
	}
	,set_visible: function(value) {
		this._sprite.set_visible(value);
		if(this._enabled && value) this.updateLog();
		return this._sprite.visible;
	}
	,debugDraw: null
	,set_debugDraw: function(value) {
		this.debugDraw = value;
		this.updateEntityLists(false);
		this.renderEntities();
		return value;
	}
	,update: function() {
		if(!this._enabled || !this._visible) return;
		this._entRead.set_x(this.get_width() - this._entReadText.get_width());
		this._layerList.set_x(this.get_width() - this._layerList.get_width() - 20);
		this._layerList.set_y((this.get_height() - this._layerList.get_height()) / 2);
		this._layerList.set_visible(com.haxepunk.HXP.engine.paused && this._debug);
		if(this._butRead.visible) this.updateButtons();
		if(this._paused) {
			if(this._debug) {
				this.updateEntityLists(com.haxepunk.HXP.engine._scene._update.length != this.ENTITY_LIST.length);
				if(com.haxepunk.HXP.engine.paused) {
					if(com.haxepunk.utils.Input.mousePressed) {
						if(com.haxepunk.utils.Input.get_mouseFlashY() > 20 && (com.haxepunk.utils.Input.get_mouseFlashX() > this._debReadText1.get_width() || com.haxepunk.utils.Input.get_mouseFlashY() < this._debRead.y)) {
							if(com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(16))) {
								if(this.SELECT_LIST.length != 0) this.startDragging(); else this.startPanning();
							} else this.startSelection();
						}
					} else {
						if(this._selecting) this.updateSelection();
						if(this._dragging) this.updateDragging();
						if(this._panning) this.updatePanning();
					}
					if(com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromRight(65))) this.selectAll();
					if(com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(16))) {
						if(this.SELECT_LIST.length != 0) {
							if(com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromLeft("_ARROWS"))) this.updateKeyMoving();
						} else if(com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromLeft("_ARROWS"))) this.updateKeyPanning();
					}
				} else {
					this.renderEntities();
					this.updateFPSRead();
					this.updateEntityCount();
				}
				this.updateDebugRead();
			} else if(this._scrolling) this.updateScrolling(); else if(com.haxepunk.utils.Input.mousePressed) this.startScrolling();
		} else {
			this.updateFPSRead();
			this.updateEntityCount();
		}
		if(com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromRight(this.toggleKey))) this.set_paused(!this._paused);
	}
	,get_paused: function() {
		return this._paused;
	}
	,set_paused: function(value) {
		if(!this._enabled) return false;
		this._paused = value;
		com.haxepunk.HXP.engine.paused = value;
		this._back.set_visible(value);
		this._entScreen.set_visible(value);
		this._butRead.set_visible(value);
		if(value) {
			if(this._debug) this.set_debug(true); else this.updateLog();
		} else {
			this._debRead.set_visible(false);
			this._logRead.set_visible(true);
			this.updateLog();
			this.ENTITY_LIST.length = 0;
			this.SCREEN_LIST.length = 0;
			this.SELECT_LIST.length = 0;
		}
		return this._paused;
	}
	,get_debug: function() {
		return this._debug;
	}
	,set_debug: function(value) {
		if(!this._enabled) return false;
		this._debug = value;
		this._debRead.set_visible(value);
		this._logRead.set_visible(!value);
		if(value) this.updateEntityLists(); else this.updateLog();
		this.renderEntities();
		return this._debug;
	}
	,stepFrame: function() {
		com.haxepunk.HXP.engine.update();
		com.haxepunk.HXP.engine.render();
		this.updateEntityCount();
		this.updateEntityLists();
		this.renderEntities();
	}
	,startDragging: function() {
		this._dragging = true;
		this._entRect.x = com.haxepunk.utils.Input.get_mouseX();
		this._entRect.y = com.haxepunk.utils.Input.get_mouseY();
	}
	,updateDragging: function() {
		this.moveSelected(Std["int"](com.haxepunk.utils.Input.get_mouseX() - this._entRect.x),Std["int"](com.haxepunk.utils.Input.get_mouseY() - this._entRect.y));
		this._entRect.x = com.haxepunk.utils.Input.get_mouseX();
		this._entRect.y = com.haxepunk.utils.Input.get_mouseY();
		if(com.haxepunk.utils.Input.mouseReleased) this._dragging = false;
	}
	,moveSelected: function(xDelta,yDelta) {
		var _g = 0;
		var _g1 = this.SELECT_LIST;
		while(_g < _g1.length) {
			var e = _g1[_g];
			++_g;
			var _g2 = e;
			_g2.x = (_g2.followCamera?_g2.x + com.haxepunk.HXP.camera.x:_g2.x) + xDelta;
			var _g21 = e;
			_g21.y = (_g21.followCamera?_g21.y + com.haxepunk.HXP.camera.y:_g21.y) + yDelta;
		}
		com.haxepunk.HXP.engine.render();
		this.renderEntities();
		this.updateEntityLists(true);
	}
	,startPanning: function() {
		this._panning = true;
		this._entRect.x = com.haxepunk.utils.Input.get_mouseX();
		this._entRect.y = com.haxepunk.utils.Input.get_mouseY();
	}
	,updatePanning: function() {
		if(com.haxepunk.utils.Input.mouseReleased) this._panning = false;
		this.panCamera(Std["int"](this._entRect.x - com.haxepunk.utils.Input.get_mouseX()),Std["int"](this._entRect.y - com.haxepunk.utils.Input.get_mouseY()));
		this._entRect.x = com.haxepunk.utils.Input.get_mouseX();
		this._entRect.y = com.haxepunk.utils.Input.get_mouseY();
	}
	,panCamera: function(xDelta,yDelta) {
		com.haxepunk.HXP.camera.x += xDelta;
		com.haxepunk.HXP.camera.y += yDelta;
		com.haxepunk.HXP.engine.render();
		this.updateEntityLists(true);
		this.renderEntities();
	}
	,setCamera: function(x,y) {
		com.haxepunk.HXP.camera.x = x;
		com.haxepunk.HXP.camera.y = y;
		com.haxepunk.HXP.engine.render();
		this.updateEntityLists(true);
		this.renderEntities();
	}
	,startSelection: function() {
		this._selecting = true;
		this._entRect.x = com.haxepunk.utils.Input.get_mouseFlashX();
		this._entRect.y = com.haxepunk.utils.Input.get_mouseFlashY();
		this._entRect.width = 0;
		this._entRect.height = 0;
	}
	,updateSelection: function() {
		this._entRect.width = com.haxepunk.utils.Input.get_mouseFlashX() - this._entRect.x;
		this._entRect.height = com.haxepunk.utils.Input.get_mouseFlashY() - this._entRect.y;
		if(com.haxepunk.utils.Input.mouseReleased) {
			this.selectEntities(this._entRect);
			this.renderEntities();
			this._selecting = false;
			this._entSelect.get_graphics().clear();
		} else {
			this._entSelect.get_graphics().clear();
			this._entSelect.get_graphics().lineStyle(1,16777215);
			this._entSelect.get_graphics().drawRect(this._entRect.x,this._entRect.y,this._entRect.width,this._entRect.height);
		}
	}
	,selectEntities: function(rect) {
		if(rect.width < 0) rect.x -= rect.width = -rect.width; else if(rect.width == 0) rect.width = 1;
		if(rect.height < 0) rect.y -= rect.height = -rect.height; else if(rect.height == 0) rect.height = 1;
		com.haxepunk.HXP.rect.width = com.haxepunk.HXP.rect.height = 6;
		var sx = com.haxepunk.HXP.screen.fullScaleX;
		var sy = com.haxepunk.HXP.screen.fullScaleY;
		var e;
		if(!com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(17))) this.SELECT_LIST.length = 0;
		var _g = 0;
		var _g1 = this.SCREEN_LIST;
		while(_g < _g1.length) {
			var e1 = _g1[_g];
			++_g;
			com.haxepunk.HXP.rect.x = ((e1.followCamera?e1.x + com.haxepunk.HXP.camera.x:e1.x) - com.haxepunk.HXP.camera.x) * sx - 3;
			com.haxepunk.HXP.rect.y = ((e1.followCamera?e1.y + com.haxepunk.HXP.camera.y:e1.y) - com.haxepunk.HXP.camera.y) * sy - 3;
			if(rect.intersects(com.haxepunk.HXP.rect)) {
				if(HxOverrides.indexOf(this.SELECT_LIST,e1,0) < 0) this.SELECT_LIST.push(e1); else HxOverrides.remove(this.SELECT_LIST,e1);
			}
		}
	}
	,selectAll: function() {
		var numSelected = this.SELECT_LIST.length;
		this.SELECT_LIST.length = 0;
		if(numSelected != this.SCREEN_LIST.length) {
			var _g = 0;
			var _g1 = this.SCREEN_LIST;
			while(_g < _g1.length) {
				var e = _g1[_g];
				++_g;
				this.SELECT_LIST.push(e);
			}
		}
		this.renderEntities();
	}
	,startScrolling: function() {
		if(this.LOG.length > this._logLines) this._scrolling = this._logBarGlobal.contains(com.haxepunk.utils.Input.get_mouseFlashX(),com.haxepunk.utils.Input.get_mouseFlashY());
	}
	,updateScrolling: function() {
		this._scrolling = com.haxepunk.utils.Input.mouseDown;
		this._logScroll = com.haxepunk.HXP.scaleClamp(com.haxepunk.utils.Input.get_mouseFlashY(),this._logBarGlobal.y,this._logBarGlobal.get_bottom(),0,1);
		this.updateLog();
	}
	,updateKeyMoving: function() {
		com.haxepunk.HXP.point.x = (com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromRight(39))?1:0) - (com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromRight(37))?1:0);
		com.haxepunk.HXP.point.y = (com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromRight(40))?1:0) - (com.haxepunk.utils.Input.pressed(com.haxepunk.utils._Input.InputType_Impl_.fromRight(38))?1:0);
		if(com.haxepunk.HXP.point.x != 0 || com.haxepunk.HXP.point.y != 0) this.moveSelected(com.haxepunk.HXP.point.x | 0,com.haxepunk.HXP.point.y | 0);
	}
	,updateKeyPanning: function() {
		com.haxepunk.HXP.point.x = (com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(39))?1:0) - (com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(37))?1:0);
		com.haxepunk.HXP.point.y = (com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(40))?1:0) - (com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(38))?1:0);
		if(com.haxepunk.HXP.point.x != 0 || com.haxepunk.HXP.point.y != 0) this.panCamera(com.haxepunk.HXP.point.x | 0,com.haxepunk.HXP.point.y | 0);
	}
	,updateEntityLists: function(fetchList) {
		if(fetchList == null) fetchList = true;
		if(fetchList) {
			this.ENTITY_LIST.length = 0;
			com.haxepunk.HXP.engine._scene.getAll(this.ENTITY_LIST);
			var $it0 = this.LAYER_LIST.keys();
			while( $it0.hasNext() ) {
				var key = $it0.next();
				this.LAYER_LIST.set(key,0);
			}
		}
		this.SCREEN_LIST.length = 0;
		var _g = 0;
		var _g1 = this.ENTITY_LIST;
		while(_g < _g1.length) {
			var e = _g1[_g];
			++_g;
			var layer = e._layer;
			if((e._scene == null?false:e.collideRect(e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x,e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y,e._scene.camera.x,e._scene.camera.y,com.haxepunk.HXP.width,com.haxepunk.HXP.height)) && com.haxepunk.HXP.engine._scene.layerVisible(layer)) this.SCREEN_LIST.push(e);
			if(fetchList) this.LAYER_LIST.set(layer,this.LAYER_LIST.exists(layer)?this.LAYER_LIST.get(layer) + 1:1);
		}
		if(fetchList) this._layerList.set(this.LAYER_LIST);
	}
	,renderEntities: function() {
		var e;
		this._entScreen.set_visible(this._debug);
		this._entScreen.set_x(com.haxepunk.HXP.screen.x);
		this._entScreen.set_y(com.haxepunk.HXP.screen.y);
		if(this._debug) {
			var g = this._entScreen.get_graphics();
			var sx = com.haxepunk.HXP.screen.fullScaleX;
			var sy = com.haxepunk.HXP.screen.fullScaleY;
			var colorHitbox = 16777215;
			var colorPosition = 16777215;
			g.clear();
			var _g = 0;
			var _g1 = this.SCREEN_LIST;
			while(_g < _g1.length) {
				var e1 = _g1[_g];
				++_g;
				var graphicScrollX;
				if(e1._graphic != null) graphicScrollX = e1._graphic.scrollX; else graphicScrollX = 1;
				var graphicScrollY;
				if(e1._graphic != null) graphicScrollY = e1._graphic.scrollY; else graphicScrollY = 1;
				if(HxOverrides.indexOf(this.SELECT_LIST,e1,0) < 0) {
					colorHitbox = 16711680;
					colorPosition = 65280;
				} else {
					colorHitbox = 16777215;
					colorPosition = 16777215;
				}
				if(e1.width != 0 && e1.height != 0) {
					g.lineStyle(1,colorHitbox);
					g.drawRect(((e1.followCamera?e1.x + com.haxepunk.HXP.camera.x:e1.x) - e1.originX - com.haxepunk.HXP.camera.x * graphicScrollX) * sx,((e1.followCamera?e1.y + com.haxepunk.HXP.camera.y:e1.y) - e1.originY - com.haxepunk.HXP.camera.y * graphicScrollY) * sy,e1.width * sx,e1.height * sy);
					if(this.debugDraw && e1._mask != null) {
						g.lineStyle(1,255);
						e1._mask.debugDraw(g,sx,sy);
					}
				}
				g.lineStyle(1,colorPosition);
				g.drawCircle(((e1.followCamera?e1.x + com.haxepunk.HXP.camera.x:e1.x) - com.haxepunk.HXP.camera.x * graphicScrollX) * sx,((e1.followCamera?e1.y + com.haxepunk.HXP.camera.y:e1.y) - com.haxepunk.HXP.camera.y * graphicScrollY) * sy,3);
			}
		}
	}
	,updateLog: function() {
		this._logHeight = this.get_height() - 60;
		this._logBar.height = this._logHeight - 8;
		if(this._paused) {
			this._logRead.set_y(40);
			this._logRead.get_graphics().clear();
			this._logRead.get_graphics().beginFill(0,.75);
			this._logRead.get_graphics().drawRect(0,0,this._logReadText0.get_width() - 20,20);
			this._logRead.get_graphics().moveTo(this._logReadText0.get_width(),20);
			this._logRead.get_graphics().lineTo(this._logReadText0.get_width() - 20,20);
			this._logRead.get_graphics().lineTo(this._logReadText0.get_width() - 20,0);
			this._logRead.get_graphics().curveTo(this._logReadText0.get_width(),0,this._logReadText0.get_width(),20);
			this._logRead.get_graphics().drawRect(0,20,this.get_width(),this._logHeight);
			this._logRead.get_graphics().beginFill(2105376,1);
			this._logRead.get_graphics().drawRoundRect(this._logBar.x,this._logBar.y,this._logBar.width,this._logBar.height,16,16);
			if(this.LOG.length > this._logLines) {
				this._logRead.get_graphics().beginFill(16777215,1);
				var y = this._logBar.y + 2 + (this._logBar.height - 16) * this._logScroll | 0;
				this._logRead.get_graphics().drawRoundRect(this._logBar.x + 2,y,12,12,12,12);
			}
			if(this.LOG.length != 0) {
				var i;
				if(this.LOG.length > this._logLines) i = Std["int"](Math.round((this.LOG.length - this._logLines) * this._logScroll)); else i = 0;
				var n = Std["int"](i + Math.min(this._logLines,this.LOG.length));
				var s = "";
				while(i < n) s += this.LOG[i++] + "\n";
				this._logReadText1.set_text(s);
			} else this._logReadText1.set_text("");
			this._logReadText1.set_height(this._logHeight);
			this._logReadText1.set_x(32);
			this._logReadText1.set_y(24);
			this._fpsReadText.set_selectable(true);
			this._fpsInfoText0.set_selectable(true);
			this._fpsInfoText1.set_selectable(true);
			this._memReadText.set_selectable(true);
			this._entReadText.set_selectable(true);
			this._debReadText1.set_selectable(true);
		} else {
			this._logRead.set_y(this.get_height() - 40);
			this._logReadText1.set_height(20);
			this._logRead.get_graphics().clear();
			this._logRead.get_graphics().beginFill(0,.75);
			this._logRead.get_graphics().drawRect(0,0,this._logReadText0.get_width() - 20,20);
			this._logRead.get_graphics().moveTo(this._logReadText0.get_width(),20);
			this._logRead.get_graphics().lineTo(this._logReadText0.get_width() - 20,20);
			this._logRead.get_graphics().lineTo(this._logReadText0.get_width() - 20,0);
			this._logRead.get_graphics().curveTo(this._logReadText0.get_width(),0,this._logReadText0.get_width(),20);
			this._logRead.get_graphics().drawRect(0,20,this.get_width(),20);
			this._logReadText1.set_text(this.LOG.length != 0?this.LOG[this.LOG.length - 1]:"");
			this._logReadText1.set_x(2);
			this._logReadText1.set_y(21);
			this._logReadText1.set_selectable(false);
			this._fpsReadText.set_selectable(false);
			this._fpsInfoText0.set_selectable(false);
			this._fpsInfoText1.set_selectable(false);
			this._memReadText.set_selectable(false);
			this._entReadText.set_selectable(false);
			this._debReadText0.set_selectable(false);
			this._debReadText1.set_selectable(false);
		}
	}
	,updateFPSRead: function() {
		this._fpsReadText.set_text("FPS: " + (com.haxepunk.HXP.frameRate | 0));
		this._fpsInfoText0.set_text("Update: " + Std.string(com.haxepunk.HXP._updateTime) + "ms\n" + "Render: " + Std.string(com.haxepunk.HXP._renderTime) + "ms");
		this._fpsInfoText1.set_text("System: " + Std.string(com.haxepunk.HXP._systemTime) + "ms\n" + "Game: " + Std.string(com.haxepunk.HXP._gameTime) + "ms");
	}
	,updateDebugRead: function() {
		var str;
		var big = this.get_width() >= 420;
		var s = "Mouse: " + Std.string(Std["int"](com.haxepunk.HXP.screen.get_mouseX() + com.haxepunk.HXP.engine._scene.camera.x)) + ", " + Std.string(Std["int"](com.haxepunk.HXP.screen.get_mouseY() + com.haxepunk.HXP.engine._scene.camera.y)) + "\nCamera: " + Std.string(com.haxepunk.HXP.camera.x) + ", " + Std.string(com.haxepunk.HXP.camera.y);
		if(this.SELECT_LIST.length != 0) {
			if(this.SELECT_LIST.length > 1) s += "\n\nSelected: " + Std.string(this.SELECT_LIST.length); else {
				var e = this.SELECT_LIST[0];
				s += "\n\n- " + Type.getClassName(Type.getClass(e)) + " -\n";
				var _g = 0;
				var _g1 = this.WATCH_LIST;
				while(_g < _g1.length) {
					var str1 = _g1[_g];
					++_g;
					var field = Reflect.field(e,str1);
					if(field != null) s += "\n" + str1 + ": " + Std.string(field);
				}
			}
		}
		this._debReadText1.set_text(s);
		this._debReadText1.setTextFormat(this.format(big?16:8));
		this._debReadText1.set_width(Math.max(this._debReadText1.get_textWidth() + 4,this._debReadText0.get_width()));
		this._debReadText1.set_height(this._debReadText1.y + this._debReadText1.get_textHeight() + 4);
		this._debRead.set_y(Std["int"](this.get_height() - this._debReadText1.get_height()));
		this._debRead.get_graphics().clear();
		this._debRead.get_graphics().beginFill(0,.75);
		this._debRead.get_graphics().drawRect(0,0,this._debReadText0.get_width() - 20,20);
		this._debRead.get_graphics().moveTo(this._debReadText0.get_width(),20);
		this._debRead.get_graphics().lineTo(this._debReadText0.get_width() - 20,20);
		this._debRead.get_graphics().lineTo(this._debReadText0.get_width() - 20,0);
		this._debRead.get_graphics().curveTo(this._debReadText0.get_width(),0,this._debReadText0.get_width(),20);
		this._debRead.get_graphics().drawRoundRect(-20,20,this._debReadText1.get_width() + 40,this.get_height() - this._debRead.y,40,40);
	}
	,updateEntityCount: function() {
		this._entReadText.set_text(Std.string(com.haxepunk.HXP.engine._scene._update.length) + " Entities");
	}
	,updateButtons: function() {
		this._butRead.set_x(this.get_width() >= 420?this._fpsInfo.x + this._fpsInfoText0.get_width() + this._fpsInfoText1.get_width() + Std["int"]((this._entRead.x - (this._fpsInfo.x + this._fpsInfoText0.get_width() + this._fpsInfoText1.get_width())) / 2) - 30:180);
		this._butDebug.set_visible(this._paused && !this._debug);
		this._butOutput.set_visible(this._paused && this._debug);
		this._butPlay.set_visible(com.haxepunk.HXP.engine.paused);
		this._butPause.set_visible(!com.haxepunk.HXP.engine.paused);
		this._butStep.set_visible(this._paused);
		if(this._butDebug.bitmapData.rect.contains(this._butDebug.get_mouseX(),this._butDebug.get_mouseY())) {
			this._butDebug.set_alpha(this._butOutput.set_alpha(1));
			if(com.haxepunk.utils.Input.mousePressed) this.set_debug(!this._debug);
		} else this._butDebug.set_alpha(this._butOutput.set_alpha(0.5));
		if(this._butPlay.bitmapData.rect.contains(this._butPlay.get_mouseX(),this._butPlay.get_mouseY())) {
			this._butPlay.set_alpha(this._butPause.set_alpha(1));
			if(com.haxepunk.utils.Input.mousePressed) {
				com.haxepunk.HXP.engine.paused = !com.haxepunk.HXP.engine.paused;
				this.renderEntities();
			}
		} else this._butPlay.set_alpha(this._butPause.set_alpha(0.5));
		if(this._butStep.bitmapData.rect.contains(this._butStep.get_mouseX(),this._butStep.get_mouseY())) {
			this._butStep.set_alpha(1);
			if(com.haxepunk.utils.Input.mousePressed) this.stepFrame();
		} else this._butStep.set_alpha(.5);
	}
	,format: function(size,color,align) {
		if(align == null) align = "left";
		if(color == null) color = 16777215;
		if(size == null) size = 16;
		this._format.size = size;
		this._format.color = color;
		switch(align) {
		case "left":
			this._format.align = "LEFT";
			break;
		case "right":
			this._format.align = "RIGHT";
			break;
		case "center":
			this._format.align = "CENTER";
			break;
		case "justify":
			this._format.align = "JUSTIFY";
			break;
		}
		return this._format;
	}
	,get_width: function() {
		return com.haxepunk.HXP.windowWidth;
	}
	,get_height: function() {
		return com.haxepunk.HXP.windowHeight;
	}
	,_enabled: null
	,_visible: null
	,_paused: null
	,_debug: null
	,_scrolling: null
	,_selecting: null
	,_dragging: null
	,_panning: null
	,_sprite: null
	,_format: null
	,_back: null
	,_fpsRead: null
	,_fpsReadText: null
	,_fpsInfo: null
	,_fpsInfoText0: null
	,_fpsInfoText1: null
	,_memReadText: null
	,_layerList: null
	,_logRead: null
	,_logReadText0: null
	,_logReadText1: null
	,_logHeight: null
	,_logBar: null
	,_logBarGlobal: null
	,_logScroll: null
	,_entRead: null
	,_entReadText: null
	,_debRead: null
	,_debReadText0: null
	,_debReadText1: null
	,_butRead: null
	,_butDebug: null
	,_butOutput: null
	,_butPlay: null
	,_butPause: null
	,_butStep: null
	,_bmpLogo: null
	,_entScreen: null
	,_entSelect: null
	,_entRect: null
	,_logLines: null
	,LOG: null
	,LAYER_LIST: null
	,ENTITY_LIST: null
	,SCREEN_LIST: null
	,SELECT_LIST: null
	,WATCH_LIST: null
	,__class__: com.haxepunk.debug.Console
	,__properties__: {get_height:"get_height",get_width:"get_width",set_debug:"set_debug",get_debug:"get_debug",set_paused:"set_paused",get_paused:"get_paused",set_debugDraw:"set_debugDraw",set_visible:"set_visible",get_visible:"get_visible"}
};
com.haxepunk.debug.VisibleLabel = function(textFormat) {
	this.display = true;
	flash.display.Sprite.call(this);
	this.active = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_visible.png"));
	this.inactive = new flash.display.Bitmap(openfl.Assets.getBitmapData("graphics/debug/console_hidden.png"));
	this.label = new flash.text.TextField();
	this.label.defaultTextFormat = textFormat;
	this.label.set_selectable(false);
	this.label.set_width(150);
	this.label.set_height(14);
	this.label.set_x(24);
	this.label.set_y(2);
	this.set_x(6);
	this.addChild(this.active);
	this.addChild(this.label);
	this.addEventListener("click",$bind(this,this.onClick),true);
};
$hxClasses["com.haxepunk.debug.VisibleLabel"] = com.haxepunk.debug.VisibleLabel;
com.haxepunk.debug.VisibleLabel.__name__ = ["com","haxepunk","debug","VisibleLabel"];
com.haxepunk.debug.VisibleLabel.__super__ = flash.display.Sprite;
com.haxepunk.debug.VisibleLabel.prototype = $extend(flash.display.Sprite.prototype,{
	display: null
	,set_display: function(value) {
		if(value != this.display) {
			this.display = value;
			if(value) {
				this.removeChild(this.inactive);
				this.addChild(this.active);
			} else {
				this.removeChild(this.active);
				this.addChild(this.inactive);
			}
		}
		return value;
	}
	,onClick: function(e) {
		this.set_display(!this.display);
	}
	,active: null
	,inactive: null
	,label: null
	,__class__: com.haxepunk.debug.VisibleLabel
	,__properties__: $extend(flash.display.Sprite.prototype.__properties__,{set_display:"set_display"})
});
com.haxepunk.debug.MaskLabel = function(textFormat) {
	com.haxepunk.debug.VisibleLabel.call(this,textFormat);
	this.label.set_text("Masks");
};
$hxClasses["com.haxepunk.debug.MaskLabel"] = com.haxepunk.debug.MaskLabel;
com.haxepunk.debug.MaskLabel.__name__ = ["com","haxepunk","debug","MaskLabel"];
com.haxepunk.debug.MaskLabel.__super__ = com.haxepunk.debug.VisibleLabel;
com.haxepunk.debug.MaskLabel.prototype = $extend(com.haxepunk.debug.VisibleLabel.prototype,{
	onClick: function(e) {
		com.haxepunk.debug.VisibleLabel.prototype.onClick.call(this,e);
		((function($this) {
			var $r;
			if(com.haxepunk.HXP._console == null) com.haxepunk.HXP._console = new com.haxepunk.debug.Console();
			$r = com.haxepunk.HXP._console;
			return $r;
		}(this))).set_debugDraw(this.display);
		((function($this) {
			var $r;
			if(com.haxepunk.HXP._console == null) com.haxepunk.HXP._console = new com.haxepunk.debug.Console();
			$r = com.haxepunk.HXP._console;
			return $r;
		}(this))).update();
	}
	,__class__: com.haxepunk.debug.MaskLabel
});
com.haxepunk.debug.LayerLabel = function(layer,textFormat) {
	com.haxepunk.debug.VisibleLabel.call(this,textFormat);
	this.layer = layer;
	this.set_count(0);
};
$hxClasses["com.haxepunk.debug.LayerLabel"] = com.haxepunk.debug.LayerLabel;
com.haxepunk.debug.LayerLabel.__name__ = ["com","haxepunk","debug","LayerLabel"];
com.haxepunk.debug.LayerLabel.__super__ = com.haxepunk.debug.VisibleLabel;
com.haxepunk.debug.LayerLabel.prototype = $extend(com.haxepunk.debug.VisibleLabel.prototype,{
	layer: null
	,set_count: function(value) {
		this.label.set_text("Layer " + this.layer + " [" + value + "]");
		return value;
	}
	,onClick: function(e) {
		com.haxepunk.debug.VisibleLabel.prototype.onClick.call(this,e);
		com.haxepunk.HXP.engine._scene._layerDisplay.set(this.layer,this.display);
		com.haxepunk.HXP.engine.render();
		((function($this) {
			var $r;
			if(com.haxepunk.HXP._console == null) com.haxepunk.HXP._console = new com.haxepunk.debug.Console();
			$r = com.haxepunk.HXP._console;
			return $r;
		}(this))).set_debugDraw(((function($this) {
			var $r;
			if(com.haxepunk.HXP._console == null) com.haxepunk.HXP._console = new com.haxepunk.debug.Console();
			$r = com.haxepunk.HXP._console;
			return $r;
		}(this))).debugDraw);
	}
	,__class__: com.haxepunk.debug.LayerLabel
	,__properties__: $extend(com.haxepunk.debug.VisibleLabel.prototype.__properties__,{set_count:"set_count"})
});
com.haxepunk.debug.LayerList = function(width,height) {
	if(height == null) height = 400;
	if(width == null) width = 250;
	flash.display.Sprite.call(this);
	var mask = new flash.display.Sprite();
	mask.get_graphics().beginFill(0);
	mask.get_graphics().drawRect(0,0,width,height);
	mask.get_graphics().endFill();
	this.addChild(mask);
	this.mask = mask;
	this.get_graphics().beginFill(0,.15);
	this.get_graphics().drawRect(0,0,width,height);
	this.get_graphics().endFill();
	var font = openfl.Assets.getFont("font/04B_03__.ttf");
	if(font == null) font = openfl.Assets.getFont(com.haxepunk.HXP.defaultFont);
	this._textFormat = new flash.text.TextFormat(font.fontName,16,16777215);
	this._labels = new haxe.ds.IntMap();
};
$hxClasses["com.haxepunk.debug.LayerList"] = com.haxepunk.debug.LayerList;
com.haxepunk.debug.LayerList.__name__ = ["com","haxepunk","debug","LayerList"];
com.haxepunk.debug.LayerList.__super__ = flash.display.Sprite;
com.haxepunk.debug.LayerList.prototype = $extend(flash.display.Sprite.prototype,{
	layerSort: function(a,b) {
		return a - b;
	}
	,set: function(list) {
		var $it0 = this._labels.keys();
		while( $it0.hasNext() ) {
			var key = $it0.next();
			this.removeChild(this._labels.get(key));
			this._labels.remove(key);
		}
		var keys = new Array();
		var $it1 = list.keys();
		while( $it1.hasNext() ) {
			var key1 = $it1.next();
			if(list.get(key1) > 0) keys.push(key1);
		}
		keys.sort($bind(this,this.layerSort));
		var i = 0;
		var scene = com.haxepunk.HXP.engine._scene;
		var _g = 0;
		while(_g < keys.length) {
			var layer = keys[_g];
			++_g;
			var label;
			if(this._labels.exists(layer)) label = this._labels.get(layer); else {
				label = new com.haxepunk.debug.LayerLabel(layer,this._textFormat);
				this._labels.set(layer,label);
			}
			label.set_count(list.get(layer));
			label.set_display(!scene._layerDisplay.exists(layer) || scene._layerDisplay.get(layer));
			label.set_y(i++ * 20 + 5);
			this.addChild(label);
		}
		if(this._maskLabel == null) {
			this._maskLabel = new com.haxepunk.debug.MaskLabel(this._textFormat);
			this.addChild(this._maskLabel);
		}
		this._maskLabel.set_y(i++ * 20 + 5);
	}
	,_labels: null
	,_maskLabel: null
	,_textFormat: null
	,__class__: com.haxepunk.debug.LayerList
});
com.haxepunk.ds = {};
com.haxepunk.ds.Either = $hxClasses["com.haxepunk.ds.Either"] = { __ename__ : true, __constructs__ : ["Left","Right"] };
com.haxepunk.ds.Either.Left = function(v) { var $x = ["Left",0,v]; $x.__enum__ = com.haxepunk.ds.Either; $x.toString = $estr; return $x; };
com.haxepunk.ds.Either.Right = function(v) { var $x = ["Right",1,v]; $x.__enum__ = com.haxepunk.ds.Either; $x.toString = $estr; return $x; };
com.haxepunk.graphics = {};
com.haxepunk.graphics.Animation = function(name,frames,frameRate,loop,parent) {
	if(loop == null) loop = true;
	if(frameRate == null) frameRate = 0;
	this.name = name;
	this.frames = frames;
	if(frameRate == 0) this.frameRate = com.haxepunk.HXP.assignedFrameRate; else this.frameRate = frameRate;
	this.loop = loop;
	this.frameCount = frames.length;
	this.set_parent(parent);
};
$hxClasses["com.haxepunk.graphics.Animation"] = com.haxepunk.graphics.Animation;
com.haxepunk.graphics.Animation.__name__ = ["com","haxepunk","graphics","Animation"];
com.haxepunk.graphics.Animation.prototype = {
	play: function(reset,reverse) {
		if(reverse == null) reverse = false;
		if(reset == null) reset = false;
		if(this.name == null) this._parent.playAnimation(this,reset,reverse); else this._parent.play(this.name,reset,reverse);
	}
	,parent: null
	,set_parent: function(value) {
		this._parent = value;
		return this._parent;
	}
	,name: null
	,frames: null
	,frameRate: null
	,frameCount: null
	,loop: null
	,_parent: null
	,__class__: com.haxepunk.graphics.Animation
	,__properties__: {set_parent:"set_parent"}
};
com.haxepunk.graphics.Graphiclist = function(graphic) {
	this._graphics = new Array();
	this._temp = new Array();
	this._camera = new flash.geom.Point();
	this._count = 0;
	com.haxepunk.Graphic.call(this);
	if(graphic != null) {
		var _g = 0;
		while(_g < graphic.length) {
			var g = graphic[_g];
			++_g;
			this.add(g);
		}
	}
};
$hxClasses["com.haxepunk.graphics.Graphiclist"] = com.haxepunk.graphics.Graphiclist;
com.haxepunk.graphics.Graphiclist.__name__ = ["com","haxepunk","graphics","Graphiclist"];
com.haxepunk.graphics.Graphiclist.__super__ = com.haxepunk.Graphic;
com.haxepunk.graphics.Graphiclist.prototype = $extend(com.haxepunk.Graphic.prototype,{
	update: function() {
		var _g = 0;
		var _g1 = this._graphics;
		while(_g < _g1.length) {
			var g = _g1[_g];
			++_g;
			if(g.active) g.update();
		}
	}
	,renderList: function(renderFunc,point,camera) {
		point.x += this.x;
		point.y += this.y;
		camera.x *= this.scrollX;
		camera.y *= this.scrollY;
		var _g = 0;
		var _g1 = this._graphics;
		while(_g < _g1.length) {
			var g = _g1[_g];
			++_g;
			if(g._visible) {
				if(g.relative) {
					this._point.x = point.x;
					this._point.y = point.y;
				} else this._point.x = this._point.y = 0;
				this._camera.x = camera.x;
				this._camera.y = camera.y;
				renderFunc(g);
			}
		}
	}
	,render: function(target,point,camera) {
		var _g = this;
		this.renderList(function(g) {
			g.render(target,_g._point,_g._camera);
		},point,camera);
	}
	,renderAtlas: function(layer,point,camera) {
		var _g = this;
		this.renderList(function(g) {
			g.renderAtlas(layer,_g._point,_g._camera);
		},point,camera);
	}
	,destroy: function() {
		var _g = 0;
		var _g1 = this._graphics;
		while(_g < _g1.length) {
			var g = _g1[_g];
			++_g;
			g.destroy();
		}
	}
	,add: function(graphic) {
		if(graphic == null) return graphic;
		if(this._count == 0) this.blit = graphic.blit; else if(this.blit != graphic.blit) throw "Can't add graphic objects with different render methods.";
		this._graphics[this._count++] = graphic;
		if(!this.active) this.active = graphic.active;
		return graphic;
	}
	,remove: function(graphic) {
		if(HxOverrides.indexOf(this._graphics,graphic,0) < 0) return graphic;
		this._temp.length = 0;
		var _g = 0;
		var _g1 = this._graphics;
		while(_g < _g1.length) {
			var g = _g1[_g];
			++_g;
			if(g == graphic) this._count--; else this._temp[this._temp.length] = g;
		}
		var temp = this._graphics;
		this._graphics = this._temp;
		this._temp = temp;
		this.updateCheck();
		return graphic;
	}
	,removeAt: function(index) {
		if(index == null) index = 0;
		if(this._graphics.length == 0) return;
		index %= this._graphics.length;
		this.remove(this._graphics[index % this._graphics.length]);
		this.updateCheck();
	}
	,removeAll: function() {
		this._graphics.length = 0;
		this._temp.length = 0;
		this._count = 0;
		this.active = false;
	}
	,children: null
	,get_children: function() {
		return this._graphics;
	}
	,count: null
	,get_count: function() {
		return this._count;
	}
	,updateCheck: function() {
		this.active = false;
		var _g = 0;
		var _g1 = this._graphics;
		while(_g < _g1.length) {
			var g = _g1[_g];
			++_g;
			if(g.active) {
				this.active = true;
				return;
			}
		}
	}
	,_graphics: null
	,_temp: null
	,_count: null
	,_camera: null
	,__class__: com.haxepunk.graphics.Graphiclist
	,__properties__: $extend(com.haxepunk.Graphic.prototype.__properties__,{get_count:"get_count",get_children:"get_children"})
});
com.haxepunk.graphics.Image = function(source,clipRect) {
	this._tintMode = 0.0;
	this._tintFactor = 1.0;
	this.smooth = true;
	com.haxepunk.Graphic.call(this);
	this.angle = 0;
	this.set_scale(this.scaleX = this.scaleY = 1);
	this.originX = this.originY = 0;
	this._alpha = 1;
	this._flipped = false;
	this._color = 16777215;
	this._red = this._green = this._blue = 1;
	this._matrix = com.haxepunk.HXP.matrix;
	if(source != null) {
		var _g = source;
		switch(_g[1]) {
		case 0:
			var bitmap = _g[2];
			this.blit = true;
			this._source = bitmap;
			this._sourceRect = bitmap.rect;
			break;
		case 1:
			var region = _g[2];
			this.blit = false;
			this._region = region;
			this._sourceRect = new flash.geom.Rectangle(0,0,this._region._rect.width,this._region._rect.height);
			break;
		}
	}
	if(clipRect != null) {
		if(clipRect.width == 0) clipRect.width = this._sourceRect.width;
		if(clipRect.height == 0) clipRect.height = this._sourceRect.height;
		if(!this.blit) this._region = this._region.clip(clipRect);
		this._sourceRect = clipRect;
	}
	if(this.blit) {
		this._bitmap = new flash.display.Bitmap();
		this._colorTransform = new flash.geom.ColorTransform();
		this.createBuffer();
		this.updateBuffer();
	}
};
$hxClasses["com.haxepunk.graphics.Image"] = com.haxepunk.graphics.Image;
com.haxepunk.graphics.Image.__name__ = ["com","haxepunk","graphics","Image"];
com.haxepunk.graphics.Image.createRect = function(width,height,color,alpha) {
	if(alpha == null) alpha = 1;
	if(color == null) color = 16777215;
	if(width == 0 || height == 0) throw "Illegal rect, sizes cannot be 0.";
	var source = com.haxepunk.HXP.createBitmap(width,height,true,-1);
	var image;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) image = new com.haxepunk.graphics.Image((function($this) {
		var $r;
		var region = com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data = new com.haxepunk.graphics.atlas.AtlasData(source);
			$r = data;
			return $r;
		}($this)));
		$r = (function($this) {
			var $r;
			var e = com.haxepunk.ds.Either.Right(region);
			$r = e;
			return $r;
		}($this));
		return $r;
	}(this))); else image = new com.haxepunk.graphics.Image(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data1 = new com.haxepunk.graphics.atlas.AtlasData(source);
			$r = data1;
			return $r;
		}($this))));
		$r = e1;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e2 = com.haxepunk.ds.Either.Left(source);
		$r = e2;
		return $r;
	}(this)));
	image.set_color(color);
	image.set_alpha(alpha);
	return image;
};
com.haxepunk.graphics.Image.createCircle = function(radius,color,alpha) {
	if(alpha == null) alpha = 1;
	if(color == null) color = 16777215;
	if(radius == 0) throw "Illegal circle, radius cannot be 0.";
	com.haxepunk.HXP.sprite.get_graphics().clear();
	com.haxepunk.HXP.sprite.get_graphics().beginFill(16777215);
	com.haxepunk.HXP.sprite.get_graphics().drawCircle(radius,radius,radius);
	var data = com.haxepunk.HXP.createBitmap(radius * 2,radius * 2,true,0);
	data.draw(com.haxepunk.HXP.sprite);
	var image;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) image = new com.haxepunk.graphics.Image((function($this) {
		var $r;
		var region = com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data1 = new com.haxepunk.graphics.atlas.AtlasData(data);
			$r = data1;
			return $r;
		}($this)));
		$r = (function($this) {
			var $r;
			var e = com.haxepunk.ds.Either.Right(region);
			$r = e;
			return $r;
		}($this));
		return $r;
	}(this))); else image = new com.haxepunk.graphics.Image(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data2 = new com.haxepunk.graphics.atlas.AtlasData(data);
			$r = data2;
			return $r;
		}($this))));
		$r = e1;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e2 = com.haxepunk.ds.Either.Left(data);
		$r = e2;
		return $r;
	}(this)));
	image.set_color(color);
	image.set_alpha(alpha);
	return image;
};
com.haxepunk.graphics.Image.createPolygon = function(polygon,color,alpha,fill,thick) {
	if(thick == null) thick = 1;
	if(fill == null) fill = true;
	if(alpha == null) alpha = 1;
	if(color == null) color = 16777215;
	var graphics = com.haxepunk.HXP.sprite.get_graphics();
	var points = polygon._points;
	var minX;
	var maxX;
	var minY;
	var maxY;
	var p;
	var originalAngle = polygon._angle;
	polygon.set_angle(0);
	minX = minY = 179 * Math.pow(10,306);
	maxX = maxY = -(179 * Math.pow(10,306));
	var _g = 0;
	while(_g < points.length) {
		var p1 = points[_g];
		++_g;
		if(p1.x < minX) minX = p1.x;
		if(p1.x > maxX) maxX = p1.x;
		if(p1.y < minY) minY = p1.y;
		if(p1.y > maxY) maxY = p1.y;
	}
	var w = Math.ceil(maxX - minX);
	var h = Math.ceil(maxY - minY);
	if(color > 16777215) color = 16777215 & color;
	graphics.clear();
	if(fill) graphics.beginFill(16777215); else graphics.lineStyle(thick,16777215,1,false,flash.display.LineScaleMode.NORMAL,null,"miter");
	graphics.moveTo(points[points.length - 1].x,points[points.length - 1].y);
	var _g1 = 0;
	while(_g1 < points.length) {
		var p2 = points[_g1];
		++_g1;
		graphics.lineTo(p2.x,p2.y);
	}
	graphics.endFill();
	com.haxepunk.HXP.matrix.identity();
	com.haxepunk.HXP.matrix.translate(-minX,-minY);
	var data = com.haxepunk.HXP.createBitmap(w,h,true,0);
	data.draw(com.haxepunk.HXP.sprite,com.haxepunk.HXP.matrix);
	var image;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) image = new com.haxepunk.graphics.Image((function($this) {
		var $r;
		var region = com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data1 = new com.haxepunk.graphics.atlas.AtlasData(data);
			$r = data1;
			return $r;
		}($this)));
		$r = (function($this) {
			var $r;
			var e = com.haxepunk.ds.Either.Right(region);
			$r = e;
			return $r;
		}($this));
		return $r;
	}(this))); else image = new com.haxepunk.graphics.Image(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data2 = new com.haxepunk.graphics.atlas.AtlasData(data);
			$r = data2;
			return $r;
		}($this))));
		$r = e1;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e2 = com.haxepunk.ds.Either.Left(data);
		$r = e2;
		return $r;
	}(this)));
	image.set_x(polygon.get_x() + polygon.origin.x);
	image.set_y(polygon.get_y() + polygon.origin.y);
	image.originX = image.x - polygon.minX;
	image.originY = image.y - polygon.minY;
	image.angle = originalAngle;
	polygon.set_angle(originalAngle);
	image.set_color(color);
	image.set_alpha(alpha);
	return image;
};
com.haxepunk.graphics.Image.__super__ = com.haxepunk.Graphic;
com.haxepunk.graphics.Image.prototype = $extend(com.haxepunk.Graphic.prototype,{
	angle: null
	,get_scale: function() {
		return this._scale;
	}
	,set_scale: function(value) {
		return this._scale = value;
	}
	,scaleX: null
	,scaleY: null
	,originX: null
	,originY: null
	,blend: null
	,init: function() {
		this.angle = 0;
		this.set_scale(this.scaleX = this.scaleY = 1);
		this.originX = this.originY = 0;
		this._alpha = 1;
		this._flipped = false;
		this._color = 16777215;
		this._red = this._green = this._blue = 1;
		this._matrix = com.haxepunk.HXP.matrix;
	}
	,createBuffer: function() {
		this._buffer = com.haxepunk.HXP.createBitmap(this._sourceRect.width | 0,this._sourceRect.height | 0,true);
		this._bufferRect = this._buffer.rect;
		this._bitmap.set_bitmapData(this._buffer);
	}
	,render: function(target,point,camera) {
		var sx = this._scale * this.scaleX;
		var sy = this._scale * this.scaleY;
		this._point.x = point.x + this.x - this.originX - camera.x * this.scrollX;
		this._point.y = point.y + this.y - this.originY - camera.y * this.scrollY;
		if(this._buffer != null) {
			if(this.angle == 0 && sx == 1 && sy == 1 && this.blend == null) target.copyPixels(this._buffer,this._bufferRect,this._point,null,null,true); else {
				this._matrix.b = this._matrix.c = 0;
				this._matrix.a = sx;
				this._matrix.d = sy;
				this._matrix.tx = -this.originX * sx;
				this._matrix.ty = -this.originY * sy;
				if(this.angle != 0) this._matrix.rotate(this.angle * (Math.PI / -180));
				this._matrix.tx += this.originX + this._point.x;
				this._matrix.ty += this.originY + this._point.y;
				target.draw(this._bitmap,this._matrix,null,this.blend,null,this._bitmap.smoothing);
			}
		}
	}
	,renderAtlas: function(layer,point,camera) {
		var sx = this._scale * this.scaleX;
		var sy = this._scale * this.scaleY;
		var fsx = com.haxepunk.HXP.screen.fullScaleX;
		var fsy = com.haxepunk.HXP.screen.fullScaleY;
		this._point.x = point.x + this.x - this.originX - camera.x * this.scrollX;
		this._point.y = point.y + this.y - this.originY - camera.y * this.scrollY;
		if(this.angle == 0) {
			if(!(sx == 1 && sy == 1)) {
				this._point.x = point.x + this.x - this.originX * sx - camera.x * this.scrollX;
				this._point.y = point.y + this.y - this.originY * sy - camera.y * this.scrollY;
			}
			if(this._flipped) this._point.x += this._sourceRect.width * sx;
			this._point.x = this._point.x * fsx;
			this._point.y = this._point.y * fsy;
			this._region.draw(this._point.x,this._point.y,layer,sx * fsx * (this._flipped?-1:1),sy * fsy,this.angle,this._red,this._green,this._blue,this._alpha,this.smooth);
		} else {
			if(this._flipped) sx *= -1;
			var angle = this.angle * (Math.PI / -180);
			var cos = Math.cos(angle);
			var sin = Math.sin(angle);
			var a = sx * cos * fsx;
			var b = sx * sin * fsy;
			var c = -sy * sin * fsx;
			var d = sy * cos * fsy;
			var tx = (-this.originX * sx * cos + this.originY * sy * sin + this.originX + this._point.x) * fsx;
			var ty = (-this.originX * sx * sin - this.originY * sy * cos + this.originY + this._point.y) * fsy;
			this._region.drawMatrix(tx,ty,a,b,c,d,layer,this._red,this._green,this._blue,this._alpha,this.smooth);
		}
	}
	,updateBuffer: function(clearBefore) {
		if(clearBefore == null) clearBefore = false;
		if(this._source == null) return;
		if(clearBefore) this._buffer.fillRect(this._bufferRect,0);
		this._buffer.copyPixels(this._source,this._sourceRect,com.haxepunk.HXP.zero);
		if(this._tint != null) this._buffer.colorTransform(this._bufferRect,this._tint);
	}
	,updateColorTransform: function() {
		if(this._alpha == 1) {
			if(this._tintFactor == 0 || this._tintMode == 0.0 && this._color == 16777215) {
				this._tint = null;
				return this.updateBuffer();
			}
		}
		this._tint = this._colorTransform;
		this._tint.redMultiplier = this._tintMode * (1.0 - this._tintFactor) + (1 - this._tintMode) * (this._tintFactor * ((this._color >> 16 & 255) / 255 - 1) + 1);
		this._tint.greenMultiplier = this._tintMode * (1.0 - this._tintFactor) + (1 - this._tintMode) * (this._tintFactor * ((this._color >> 8 & 255) / 255 - 1) + 1);
		this._tint.blueMultiplier = this._tintMode * (1.0 - this._tintFactor) + (1 - this._tintMode) * (this._tintFactor * ((this._color & 255) / 255 - 1) + 1);
		this._tint.redOffset = (this._color >> 16 & 255) * this._tintFactor * this._tintMode;
		this._tint.greenOffset = (this._color >> 8 & 255) * this._tintFactor * this._tintMode;
		this._tint.blueOffset = (this._color & 255) * this._tintFactor * this._tintMode;
		this._tint.alphaMultiplier = this._alpha;
		this.updateBuffer();
	}
	,clear: function() {
		if(this._buffer == null) return;
		this._buffer.fillRect(this._bufferRect,0);
	}
	,get_alpha: function() {
		return this._alpha;
	}
	,set_alpha: function(value) {
		if(value < 0) value = 0; else if(value > 1) value = 1; else value = value;
		if(this._alpha == value) return value;
		this._alpha = value;
		if(this.blit) this.updateColorTransform();
		return this._alpha;
	}
	,get_color: function() {
		return this._color;
	}
	,set_color: function(value) {
		value &= 16777215;
		if(this._color == value) return value;
		this._color = value;
		this._red = (this._color >> 16 & 255) / 255;
		this._green = (this._color >> 8 & 255) / 255;
		this._blue = (this._color & 255) / 255;
		if(this.blit) this.updateColorTransform();
		return this._color;
	}
	,get_tinting: function() {
		return this._tintFactor;
	}
	,set_tinting: function(value) {
		if(this._tintFactor == value || !this.blit) return value;
		this._tintFactor = value;
		this.updateColorTransform();
		return this._tintFactor;
	}
	,get_tintMode: function() {
		return this._tintMode;
	}
	,set_tintMode: function(value) {
		if(this._tintMode == value || !this.blit) return value;
		this._tintMode = value;
		this.updateColorTransform();
		return this._tintMode;
	}
	,get_flipped: function() {
		return this._flipped;
	}
	,set_flipped: function(value) {
		if(this._flipped == value) return value;
		this._flipped = value;
		if(this.blit) {
			var temp = this._source;
			if(!value || this._flip != null) this._source = this._flip; else if(com.haxepunk.graphics.Image._flips.h.__keys__[temp.__id__] != null) this._source = com.haxepunk.graphics.Image._flips.h[temp.__id__]; else {
				this._source = com.haxepunk.HXP.createBitmap(this._source.component.width,this._source.component.height,true);
				com.haxepunk.graphics.Image._flips.set(temp,this._source);
				com.haxepunk.HXP.matrix.identity();
				com.haxepunk.HXP.matrix.a = -1;
				com.haxepunk.HXP.matrix.tx = this._source.component.width;
				this._source.draw(temp,com.haxepunk.HXP.matrix);
			}
			this._flip = temp;
			this.updateBuffer();
		}
		return this._flipped;
	}
	,centerOrigin: function() {
		this.originX = Std["int"](this.get_width() / 2);
		this.originY = Std["int"](this.get_height() / 2);
	}
	,centerOO: function() {
		var _g = this;
		_g.x = _g.x + this.originX;
		var _g1 = this;
		_g1.y = _g1.y + this.originY;
		this.centerOrigin();
		var _g2 = this;
		_g2.x = _g2.x - this.originX;
		var _g3 = this;
		_g3.y = _g3.y - this.originY;
	}
	,smooth: null
	,get_width: function() {
		return (this.blit?this._bufferRect.width:!this._region.rotated?this._region._rect.width:this._region._rect.height) | 0;
	}
	,get_height: function() {
		return (this.blit?this._bufferRect.height:!this._region.rotated?this._region._rect.height:this._region._rect.width) | 0;
	}
	,get_scaledWidth: function() {
		return this.get_width() * this.scaleX * this._scale;
	}
	,set_scaledWidth: function(w) {
		return this.scaleX = w / this._scale / this.get_width();
	}
	,get_scaledHeight: function() {
		return this.get_height() * this.scaleY * this._scale;
	}
	,set_scaledHeight: function(h) {
		return this.scaleY = h / this._scale / this.get_height();
	}
	,clipRect: null
	,get_clipRect: function() {
		return this._sourceRect;
	}
	,_source: null
	,_sourceRect: null
	,_buffer: null
	,_bufferRect: null
	,_bitmap: null
	,_region: null
	,_alpha: null
	,_color: null
	,_tintFactor: null
	,_tintMode: null
	,_tint: null
	,_colorTransform: null
	,_matrix: null
	,_red: null
	,_green: null
	,_blue: null
	,_flipped: null
	,_flip: null
	,_scale: null
	,__class__: com.haxepunk.graphics.Image
	,__properties__: $extend(com.haxepunk.Graphic.prototype.__properties__,{get_clipRect:"get_clipRect",set_scaledHeight:"set_scaledHeight",get_scaledHeight:"get_scaledHeight",set_scaledWidth:"set_scaledWidth",get_scaledWidth:"get_scaledWidth",get_height:"get_height",get_width:"get_width",set_flipped:"set_flipped",get_flipped:"get_flipped",set_tintMode:"set_tintMode",get_tintMode:"get_tintMode",set_tinting:"set_tinting",get_tinting:"get_tinting",set_color:"set_color",get_color:"get_color",set_alpha:"set_alpha",get_alpha:"get_alpha",set_scale:"set_scale",get_scale:"get_scale"})
});
com.haxepunk.graphics.Spritemap = function(source,frameWidth,frameHeight,cbFunc) {
	if(frameHeight == null) frameHeight = 0;
	if(frameWidth == null) frameWidth = 0;
	this.complete = true;
	this.rate = 1;
	this._anims = new haxe.ds.StringMap();
	this._timer = this._frame = 0;
	this._rect = new flash.geom.Rectangle(0,0,frameWidth,frameHeight);
	{
		var _g = source;
		switch(_g[1]) {
		case 0:
			var bd = _g[2];
			com.haxepunk.graphics.Image.call(this,com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
				var $r;
				var e = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
					var $r;
					var data = new com.haxepunk.graphics.atlas.AtlasData(bd);
					$r = data;
					return $r;
				}($this))));
				$r = e;
				return $r;
			}(this)):(function($this) {
				var $r;
				var e1 = com.haxepunk.ds.Either.Left(bd);
				$r = e1;
				return $r;
			}(this)),this._rect);
			break;
		case 1:
			var atlas = _g[2];
			this._atlas = atlas;
			if(frameWidth > this._atlas.get_width() || frameHeight > this._atlas.get_height()) throw "Frame width and height can't be bigger than the source image dimension.";
			this._atlas.prepare(frameWidth == 0?Std["int"](this._atlas.get_width()):frameWidth,frameHeight == 0?Std["int"](this._atlas.get_height()):frameHeight);
			com.haxepunk.graphics.Image.call(this,(function($this) {
				var $r;
				var region = atlas.getRegion($this._frame);
				$r = (function($this) {
					var $r;
					var e2 = com.haxepunk.ds.Either.Right(region);
					$r = e2;
					return $r;
				}($this));
				return $r;
			}(this)),this._rect);
			break;
		}
	}
	if(this.blit) {
		this._width = this._source.component.width;
		this._height = this._source.component.height;
	} else {
		this._width = Std["int"](this._atlas.get_width());
		this._height = Std["int"](this._atlas.get_height());
	}
	if(frameWidth == 0) this._rect.width = this._width;
	if(frameHeight == 0) this._rect.height = this._height;
	if(this._width % this._rect.width != 0 || this._height % this._rect.height != 0) throw "Source image width and height should be multiples of the frame width and height.";
	this._columns = Math.ceil(this._width / this._rect.width);
	this._rows = Math.ceil(this._height / this._rect.height);
	this._frameCount = this._columns * this._rows;
	this.callbackFunc = cbFunc;
	this.updateBuffer();
	this.active = true;
};
$hxClasses["com.haxepunk.graphics.Spritemap"] = com.haxepunk.graphics.Spritemap;
com.haxepunk.graphics.Spritemap.__name__ = ["com","haxepunk","graphics","Spritemap"];
com.haxepunk.graphics.Spritemap.__super__ = com.haxepunk.graphics.Image;
com.haxepunk.graphics.Spritemap.prototype = $extend(com.haxepunk.graphics.Image.prototype,{
	complete: null
	,callbackFunc: null
	,rate: null
	,updateBuffer: function(clearBefore) {
		if(clearBefore == null) clearBefore = false;
		if(this.blit) {
			if(this._width > 0 && this._height > 0) {
				this._rect.x = this._rect.width * (this._frame % this._columns);
				this._rect.y = this._rect.height * (this._frame / this._columns | 0);
				if(this._flipped) this._rect.x = this._width - this._rect.width - this._rect.x;
			}
			com.haxepunk.graphics.Image.prototype.updateBuffer.call(this,clearBefore);
		} else this._region = this._atlas.getRegion(this._frame);
	}
	,update: function() {
		if(this._anim != null && !this.complete) {
			this._timer += (com.haxepunk.HXP.fixed?this._anim.frameRate / com.haxepunk.HXP.assignedFrameRate:this._anim.frameRate * com.haxepunk.HXP.elapsed) * this.rate;
			if(this._timer >= 1) {
				while(this._timer >= 1) {
					this._timer--;
					if(this.reverse) this._index += -1; else this._index += 1;
					if(this.reverse && this._index == -1 || !this.reverse && this._index == this._anim.frameCount) {
						if(this._anim.loop) {
							if(this.reverse) this._index = this._anim.frameCount - 1; else this._index = 0;
							if(this.callbackFunc != null) this.callbackFunc();
						} else {
							if(this.reverse) this._index = 0; else this._index = this._anim.frameCount - 1;
							this.complete = true;
							if(this.callbackFunc != null) this.callbackFunc();
							break;
						}
					}
				}
				if(this._anim != null) this._frame = this._anim.frames[this._index] | 0;
				this.updateBuffer();
			}
		}
	}
	,add: function(name,frames,frameRate,loop) {
		if(loop == null) loop = true;
		if(frameRate == null) frameRate = 0;
		if(this._anims.get(name) != null) throw "Cannot have multiple animations with the same name";
		var _g1 = 0;
		var _g = frames.length;
		while(_g1 < _g) {
			var i = _g1++;
			frames[i] %= this._frameCount;
			if(frames[i] < 0) frames[i] += this._frameCount;
		}
		var anim = new com.haxepunk.graphics.Animation(name,frames,frameRate,loop);
		this._anims.set(name,anim);
		anim.set_parent(this);
		return anim;
	}
	,play: function(name,reset,reverse) {
		if(reverse == null) reverse = false;
		if(reset == null) reset = false;
		if(name == null) name = "";
		if(!reset && this._anim != null && this._anim.name == name) return this._anim;
		if(!this._anims.exists(name)) {
			this.stop(reset);
			return null;
		}
		this._anim = this._anims.get(name);
		this.reverse = reverse;
		this.restart();
		return this._anim;
	}
	,playFrames: function(frames,frameRate,loop,reset,reverse) {
		if(reverse == null) reverse = false;
		if(reset == null) reset = false;
		if(loop == null) loop = true;
		if(frameRate == null) frameRate = 0;
		if(frames == null || frames.length == 0) {
			this.stop(reset);
			return null;
		}
		if(reset == false && this._anim != null && this._anim.frames == frames) return this._anim;
		return this.playAnimation(new com.haxepunk.graphics.Animation(null,frames,frameRate,loop),reset,reverse);
	}
	,playAnimation: function(anim,reset,reverse) {
		if(reverse == null) reverse = false;
		if(reset == null) reset = false;
		if(anim == null) throw "No animation supplied";
		if(reset == false && this._anim == anim) return anim;
		this._anim = anim;
		this.reverse = reverse;
		this.restart();
		return anim;
	}
	,restart: function() {
		this._timer = this.reverse?this._index = this._anim.frames.length - 1:this._index = 0;
		this._frame = this._anim.frames[this._index];
		this.complete = false;
		this.updateBuffer();
	}
	,stop: function(reset) {
		if(reset == null) reset = false;
		this._anim = null;
		if(reset) this._frame = this.reverse?this._index = this._anim.frames.length - 1:this._index = 0;
		this.complete = true;
		this.updateBuffer();
	}
	,getFrame: function(column,row) {
		if(row == null) row = 0;
		if(column == null) column = 0;
		return row % this._rows * this._columns + column % this._columns;
	}
	,setFrame: function(column,row) {
		if(row == null) row = 0;
		if(column == null) column = 0;
		this._anim = null;
		var frame = row % this._rows * this._columns + column % this._columns;
		if(this._frame == frame) return;
		this._frame = frame;
		this.updateBuffer();
	}
	,randFrame: function() {
		this.set_frame((function($this) {
			var $r;
			com.haxepunk.HXP._seed = com.haxepunk.HXP._seed * 16807.0 % 2147483647 | 0;
			$r = com.haxepunk.HXP._seed / 2147483647 * $this._frameCount | 0;
			return $r;
		}(this)));
	}
	,setAnimFrame: function(name,index) {
		var frames = this._anims.get(name).frames;
		index = index % frames.length;
		if(index < 0) index += frames.length;
		this.set_frame(frames[index]);
	}
	,get_frame: function() {
		return this._frame;
	}
	,set_frame: function(value) {
		this._anim = null;
		value %= this._frameCount;
		if(value < 0) value = this._frameCount + value;
		if(this._frame == value) return this._frame;
		this._frame = value;
		this.updateBuffer();
		return this._frame;
	}
	,get_index: function() {
		if(this._anim != null) return this._index; else return 0;
	}
	,set_index: function(value) {
		if(this._anim == null) return 0;
		value %= this._anim.frameCount;
		if(this._index == value) return this._index;
		this._index = value;
		this._frame = this._anim.frames[this._index];
		this.updateBuffer();
		return this._index;
	}
	,reverse: null
	,frameCount: null
	,get_frameCount: function() {
		return this._frameCount;
	}
	,columns: null
	,get_columns: function() {
		return this._columns;
	}
	,rows: null
	,get_rows: function() {
		return this._rows;
	}
	,currentAnim: null
	,get_currentAnim: function() {
		if(this._anim != null) return this._anim.name; else return "";
	}
	,_rect: null
	,_width: null
	,_height: null
	,_columns: null
	,_rows: null
	,_frameCount: null
	,_anims: null
	,_anim: null
	,_index: null
	,_frame: null
	,_timer: null
	,_atlas: null
	,__class__: com.haxepunk.graphics.Spritemap
	,__properties__: $extend(com.haxepunk.graphics.Image.prototype.__properties__,{get_currentAnim:"get_currentAnim",get_rows:"get_rows",get_columns:"get_columns",get_frameCount:"get_frameCount",set_index:"set_index",get_index:"get_index",set_frame:"set_frame",get_frame:"get_frame"})
});
com.haxepunk.graphics._Text = {};
com.haxepunk.graphics._Text.StyleType_Impl_ = function() { };
$hxClasses["com.haxepunk.graphics._Text.StyleType_Impl_"] = com.haxepunk.graphics._Text.StyleType_Impl_;
com.haxepunk.graphics._Text.StyleType_Impl_.__name__ = ["com","haxepunk","graphics","_Text","StyleType_Impl_"];
com.haxepunk.graphics._Text.StyleType_Impl_._new = function(format) {
	return format;
};
com.haxepunk.graphics._Text.StyleType_Impl_.toTextformat = function(this1) {
	return this1;
};
com.haxepunk.graphics._Text.StyleType_Impl_.fromTextFormat = function(format) {
	return com.haxepunk.graphics._Text.StyleType_Impl_._new(format);
};
com.haxepunk.graphics._Text.StyleType_Impl_.fromTextOptions = function(object) {
	var format = new flash.text.TextFormat();
	var fields = Type.getInstanceFields(flash.text.TextFormat);
	var _g = 0;
	var _g1 = Reflect.fields(object);
	while(_g < _g1.length) {
		var key = _g1[_g];
		++_g;
		if(HxOverrides.indexOf(fields,key,0) > -1) Reflect.setField(format,key,Reflect.field(object,key)); else throw "\"" + key + "\" is not a TextFormat property";
	}
	return com.haxepunk.graphics._Text.StyleType_Impl_._new(format);
};
com.haxepunk.graphics._Text.StyleType_Impl_.fromDynamic = function(object) {
	var format = new flash.text.TextFormat();
	var fields = Type.getInstanceFields(flash.text.TextFormat);
	var _g = 0;
	var _g1 = Reflect.fields(object);
	while(_g < _g1.length) {
		var key = _g1[_g];
		++_g;
		if(HxOverrides.indexOf(fields,key,0) > -1) Reflect.setField(format,key,Reflect.field(object,key)); else throw "\"" + key + "\" is not a TextFormat property";
	}
	return com.haxepunk.graphics._Text.StyleType_Impl_._new(format);
};
com.haxepunk.graphics.Text = function(text,x,y,width,height,options) {
	if(height == null) height = 0;
	if(width == null) width = 0;
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.resizable = true;
	if(options == null) options = { };
	if(text == null) text = "";
	if(!Object.prototype.hasOwnProperty.call(options,"font")) options.font = com.haxepunk.HXP.defaultFont;
	if(!Object.prototype.hasOwnProperty.call(options,"size")) options.size = 16;
	if(!Object.prototype.hasOwnProperty.call(options,"align")) options.align = "LEFT";
	if(!Object.prototype.hasOwnProperty.call(options,"color")) options.color = 16777215;
	if(!Object.prototype.hasOwnProperty.call(options,"resizable")) options.resizable = true;
	if(!Object.prototype.hasOwnProperty.call(options,"wordWrap")) options.wordWrap = false;
	if(!Object.prototype.hasOwnProperty.call(options,"leading")) options.leading = 0;
	var fontObj = openfl.Assets.getFont(options.font);
	this._format = new flash.text.TextFormat(fontObj.fontName,options.size,16777215);
	this._format.align = options.align;
	this._format.leading = options.leading;
	this._field = new flash.text.TextField();
	this._field.wordWrap = options.wordWrap;
	this._field.defaultTextFormat = this._format;
	this._field.set_text(this._text = text);
	this._field.set_selectable(false);
	this.resizable = options.resizable;
	this._styles = new haxe.ds.StringMap();
	if(width == 0) this._width = Std["int"](this._field.get_textWidth() + 4); else this._width = width;
	if(height == 0) this._height = Std["int"](this._field.get_textHeight() + 4); else this._height = height;
	var source = com.haxepunk.HXP.createBitmap(this._width,this._height,true);
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
		this._source = source;
		this._sourceRect = source.rect;
		this._region = com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data = new com.haxepunk.graphics.atlas.AtlasData($this._source);
			$r = data;
			return $r;
		}(this)));
		this.blit = true;
		com.haxepunk.graphics.Image.call(this);
	} else com.haxepunk.graphics.Image.call(this,com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE?(function($this) {
		var $r;
		var e = com.haxepunk.ds.Either.Right(com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
			var $r;
			var data1 = new com.haxepunk.graphics.atlas.AtlasData(source);
			$r = data1;
			return $r;
		}($this))));
		$r = e;
		return $r;
	}(this)):(function($this) {
		var $r;
		var e1 = com.haxepunk.ds.Either.Left(source);
		$r = e1;
		return $r;
	}(this)));
	this.blit = com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER;
	this.updateTextBuffer();
	this.set_size(options.size);
	this.set_color(options.color);
	this.x = x;
	this.y = y;
};
$hxClasses["com.haxepunk.graphics.Text"] = com.haxepunk.graphics.Text;
com.haxepunk.graphics.Text.__name__ = ["com","haxepunk","graphics","Text"];
com.haxepunk.graphics.Text.__super__ = com.haxepunk.graphics.Image;
com.haxepunk.graphics.Text.prototype = $extend(com.haxepunk.graphics.Image.prototype,{
	resizable: null
	,textWidth: null
	,textHeight: null
	,addStyle: function(tagName,params) {
		this._styles.set(tagName,com.haxepunk.graphics._Text.StyleType_Impl_.toTextformat(params));
		if(this._richText != null) this.updateTextBuffer();
	}
	,updateColorTransform: function() {
		if(this._richText != null) {
			if(this._alpha == 1) this._tint = null; else {
				this._tint = this._colorTransform;
				this._tint.redMultiplier = 1;
				this._tint.greenMultiplier = 1;
				this._tint.blueMultiplier = 1;
				this._tint.redOffset = 0;
				this._tint.greenOffset = 0;
				this._tint.blueOffset = 0;
				this._tint.alphaMultiplier = this._alpha;
			}
			if(this._format.color != this._color) this.updateTextBuffer(); else this.updateBuffer();
		} else com.haxepunk.graphics.Image.prototype.updateColorTransform.call(this);
	}
	,matchStyles: function() {
		this._text = this._richText;
		this._field.set_text(com.haxepunk.graphics.Text.tag_re.replace(this._text,"$2"));
		this._field.setTextFormat(this._format);
		while(com.haxepunk.graphics.Text.tag_re.match(this._text)) {
			var tagName = com.haxepunk.graphics.Text.tag_re.matched(1);
			var text = com.haxepunk.graphics.Text.tag_re.matched(2);
			var p = com.haxepunk.graphics.Text.tag_re.matchedPos();
			this._text = HxOverrides.substr(this._text,0,p.pos) + text + HxOverrides.substr(this._text,p.pos + p.len,null);
			if(this._styles.exists(tagName)) this._field.setTextFormat(this._styles.get(tagName),p.pos,p.pos + text.length);
		}
	}
	,updateTextBuffer: function() {
		if(this._richText == null) {
			this._format.color = 16777215;
			this._field.setTextFormat(this._format);
		} else {
			this._format.color = this._color;
			this.matchStyles();
		}
		this._field.set_width(this._width);
		this._field.set_width(this.textWidth = Math.ceil(this._field.get_textWidth() + 4));
		this._field.set_height(this.textHeight = Math.ceil(this._field.get_textHeight() + 4));
		if(this.resizable && (this.textWidth > this._width || this.textHeight > this._height)) {
			if(this._width < this.textWidth) this._width = this.textWidth;
			if(this._height < this.textHeight) this._height = this.textHeight;
		}
		if(this._width > this._source.component.width || this._height > this._source.component.height) {
			this._source = com.haxepunk.HXP.createBitmap(Std["int"](Math.max(this._width,this._source.component.width)),Std["int"](Math.max(this._height,this._source.component.height)),true);
			this._sourceRect = this._source.rect;
			this.createBuffer();
			if(!this.blit) {
				if(this._region != null) this._region.destroy();
				this._region = com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion((function($this) {
					var $r;
					var data = new com.haxepunk.graphics.atlas.AtlasData($this._source);
					$r = data;
					return $r;
				}(this)));
			}
		} else this._source.fillRect(this._sourceRect,0);
		this._field.set_width(this._width);
		this._field.set_height(this._height);
		this._source.draw(this._field);
		com.haxepunk.graphics.Image.prototype.updateBuffer.call(this);
	}
	,destroy: function() {
		if(this._region != null) this._region.destroy();
	}
	,get_text: function() {
		return this._text;
	}
	,set_text: function(value) {
		if(this._text == value && this._richText == null) return value;
		this._field.set_text(this._text = value);
		if(this._richText == null) this.updateTextBuffer(); else this.updateColorTransform();
		return value;
	}
	,get_richText: function() {
		if(this._richText == null) return this._text; else return this._richText;
	}
	,set_richText: function(value) {
		if(this._richText == value) return value;
		var fromPlain = this._richText == null;
		this._richText = value;
		if(this._richText == "") this._field.set_text(this._text = "");
		if(fromPlain && this._richText != null) {
			this._format.color = 16777215;
			this._red = this._green = this._blue = 1;
			this.updateColorTransform();
		} else this.updateTextBuffer();
		return value;
	}
	,getTextProperty: function(name) {
		var value = Reflect.getProperty(this,name);
		if(value == null) value = Reflect.getProperty(this._field,name);
		if(value == null) value = Reflect.getProperty(this._format,name);
		return value;
	}
	,setTextProperty: function(name,value) {
		var propertyFound = false;
		try {
			Reflect.setProperty(this,name,value);
			return true;
		} catch( e ) {
			try {
				Reflect.setProperty(this._field,name,value);
				propertyFound = true;
			} catch( e1 ) {
				try {
					Reflect.setProperty(this._format,name,value);
					propertyFound = true;
				} catch( e2 ) {
				}
			}
		}
		if(!propertyFound) return false;
		this.updateTextBuffer();
		return true;
	}
	,font: null
	,set_font: function(value) {
		if(this.font == value) return value;
		value = openfl.Assets.getFont(value).fontName;
		this._format.font = this.font = value;
		this.updateTextBuffer();
		return value;
	}
	,size: null
	,set_size: function(value) {
		if(this.size == value) return value;
		this._format.size = this.size = value;
		this.updateTextBuffer();
		return value;
	}
	,align: null
	,set_align: function(value) {
		if(this.align == value) return value;
		this._format.align = value;
		this.updateTextBuffer();
		return value;
	}
	,leading: null
	,set_leading: function(value) {
		if(this.leading == value) return value;
		this._format.leading = this.leading = value;
		this.updateTextBuffer();
		return value;
	}
	,wordWrap: null
	,set_wordWrap: function(value) {
		if(this.wordWrap == value) return value;
		this._field.wordWrap = this.wordWrap = value;
		this.updateTextBuffer();
		return value;
	}
	,get_width: function() {
		return this._width | 0;
	}
	,get_height: function() {
		return this._height | 0;
	}
	,_width: null
	,_height: null
	,_text: null
	,_richText: null
	,_field: null
	,_format: null
	,_styles: null
	,__class__: com.haxepunk.graphics.Text
	,__properties__: $extend(com.haxepunk.graphics.Image.prototype.__properties__,{set_wordWrap:"set_wordWrap",set_leading:"set_leading",set_align:"set_align",set_size:"set_size",set_font:"set_font",set_richText:"set_richText",get_richText:"get_richText",set_text:"set_text",get_text:"get_text"})
});
com.haxepunk.graphics.atlas = {};
com.haxepunk.graphics.atlas.Atlas = function(source) {
	this._data = source;
};
$hxClasses["com.haxepunk.graphics.atlas.Atlas"] = com.haxepunk.graphics.atlas.Atlas;
com.haxepunk.graphics.atlas.Atlas.__name__ = ["com","haxepunk","graphics","atlas","Atlas"];
com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion = function(source) {
	var data = source;
	return data.createRegion(new flash.geom.Rectangle(0,0,data.width,data.height),null);
};
com.haxepunk.graphics.atlas.Atlas.prototype = {
	get_width: function() {
		return this._data.width;
	}
	,get_height: function() {
		return this._data.height;
	}
	,destroy: function() {
		this._data.destroy();
	}
	,prepareTile: function(tile,x,y,layer,scaleX,scaleY,angle,red,green,blue,alpha,smooth) {
		this._data.prepareTile(tile,x,y,layer,scaleX,scaleY,angle,red,green,blue,alpha,smooth);
	}
	,_data: null
	,__class__: com.haxepunk.graphics.atlas.Atlas
	,__properties__: {get_height:"get_height",get_width:"get_width"}
};
com.haxepunk.graphics.atlas._AtlasData = {};
com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_ = function() { };
$hxClasses["com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_"] = com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_;
com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.__name__ = ["com","haxepunk","graphics","atlas","_AtlasData","AtlasDataType_Impl_"];
com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_._new = function(data) {
	return data;
};
com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.toAtlasData = function(this1) {
	return this1;
};
com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromString = function(s) {
	var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName(s,true);
	return data;
};
com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromBitmapData = function(bd) {
	var data = new com.haxepunk.graphics.atlas.AtlasData(bd);
	return data;
};
com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromAtlasData = function(data) {
	return data;
};
com.haxepunk.graphics.atlas.AtlasData = function(bd,name,flags) {
	this._layerIndex = 0;
	this._rects = new Array();
	this._data = new Array();
	this._smoothData = new Array();
	this._dataIndex = this._smoothDataIndex = 0;
	this._tilesheet = new openfl.display.Tilesheet(bd);
	if(name == null) name = "bitmapData_" + com.haxepunk.graphics.atlas.AtlasData._uniqueId++;
	this._name = name;
	if(com.haxepunk.graphics.atlas.AtlasData._dataPool.exists(this._name)) throw "There should never be a duplicate AtlasData instance!"; else com.haxepunk.graphics.atlas.AtlasData._dataPool.set(this._name,this);
	this._renderFlags = 28;
	this._flagAlpha = true;
	this._flagRGB = true;
	this.width = bd.component.width;
	this.height = bd.component.height;
};
$hxClasses["com.haxepunk.graphics.atlas.AtlasData"] = com.haxepunk.graphics.atlas.AtlasData;
com.haxepunk.graphics.atlas.AtlasData.__name__ = ["com","haxepunk","graphics","atlas","AtlasData"];
com.haxepunk.graphics.atlas.AtlasData.__properties__ = {set_active:"set_active"}
com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName = function(name,create) {
	if(create == null) create = false;
	var data = null;
	if(com.haxepunk.graphics.atlas.AtlasData._dataPool.exists(name)) data = com.haxepunk.graphics.atlas.AtlasData._dataPool.get(name); else if(create) {
		var bitmap = com.haxepunk.HXP.getBitmap(name);
		if(bitmap != null) data = new com.haxepunk.graphics.atlas.AtlasData(bitmap,name);
	}
	return data;
};
com.haxepunk.graphics.atlas.AtlasData.startScene = function(scene) {
	com.haxepunk.graphics.atlas.AtlasData._scene = scene;
	com.haxepunk.graphics.atlas.AtlasData._scene.sprite.get_graphics().clear();
};
com.haxepunk.graphics.atlas.AtlasData.set_active = function(value) {
	if(com.haxepunk.graphics.atlas.AtlasData.active != value) {
		if(com.haxepunk.graphics.atlas.AtlasData.active != null) com.haxepunk.graphics.atlas.AtlasData.active.flush();
		com.haxepunk.graphics.atlas.AtlasData.active = value;
	}
	return value;
};
com.haxepunk.graphics.atlas.AtlasData.destroyAll = function() {
	var $it0 = com.haxepunk.graphics.atlas.AtlasData._dataPool.iterator();
	while( $it0.hasNext() ) {
		var atlas = $it0.next();
		atlas.destroy();
	}
};
com.haxepunk.graphics.atlas.AtlasData.prototype = {
	width: null
	,height: null
	,toString: function() {
		return this._name;
	}
	,reload: function(bd) {
		com.haxepunk.HXP.overwriteBitmapCache(this._name,bd);
		this._tilesheet = new openfl.display.Tilesheet(bd);
		var _g = 0;
		var _g1 = this._rects;
		while(_g < _g1.length) {
			var r = _g1[_g];
			++_g;
			this._tilesheet.addTileRect(r);
		}
	}
	,destroy: function() {
		com.haxepunk.HXP.removeBitmap(this._name);
		com.haxepunk.graphics.atlas.AtlasData._dataPool.remove(this._name);
	}
	,createRegion: function(rect,center) {
		var r = rect.clone();
		this._rects.push(r);
		var tileIndex = this._tilesheet.addTileRect(r,null);
		return new com.haxepunk.graphics.atlas.AtlasRegion(this,tileIndex,r);
	}
	,flush: function() {
		if(this._dataIndex != 0) {
			this._tilesheet.drawTiles(com.haxepunk.graphics.atlas.AtlasData._scene.sprite.get_graphics(),this._data,false,this._renderFlags);
			this._dataIndex = 0;
		}
		if(this._smoothDataIndex != 0) {
			this._tilesheet.drawTiles(com.haxepunk.graphics.atlas.AtlasData._scene.sprite.get_graphics(),this._smoothData,false,this._renderFlags);
			this._smoothDataIndex = 0;
		}
	}
	,prepareTileMatrix: function(tile,layer,tx,ty,a,b,c,d,red,green,blue,alpha,smooth) {
		if(com.haxepunk.graphics.atlas.AtlasData.active != this) {
			if(com.haxepunk.graphics.atlas.AtlasData.active != null) com.haxepunk.graphics.atlas.AtlasData.active.flush();
			com.haxepunk.graphics.atlas.AtlasData.active = this;
		}
		this;
		if(smooth == null) smooth = com.haxepunk.graphics.atlas.Atlas.smooth;
		var _data;
		if(smooth) _data = this._smoothData; else _data = this._data;
		var _dataIndex;
		if(smooth) _dataIndex = this._smoothDataIndex; else _dataIndex = this._dataIndex;
		_data[_dataIndex++] = tx;
		_data[_dataIndex++] = ty;
		_data[_dataIndex++] = tile;
		_data[_dataIndex++] = a;
		_data[_dataIndex++] = b;
		_data[_dataIndex++] = c;
		_data[_dataIndex++] = d;
		if(this._flagRGB) {
			_data[_dataIndex++] = red;
			_data[_dataIndex++] = green;
			_data[_dataIndex++] = blue;
		}
		if(this._flagAlpha) _data[_dataIndex++] = alpha;
		if(smooth) this._smoothDataIndex = _dataIndex; else this._dataIndex = _dataIndex;
	}
	,prepareTile: function(tile,x,y,layer,scaleX,scaleY,angle,red,green,blue,alpha,smooth) {
		if(com.haxepunk.graphics.atlas.AtlasData.active != this) {
			if(com.haxepunk.graphics.atlas.AtlasData.active != null) com.haxepunk.graphics.atlas.AtlasData.active.flush();
			com.haxepunk.graphics.atlas.AtlasData.active = this;
		}
		this;
		if(smooth == null) smooth = com.haxepunk.graphics.atlas.Atlas.smooth;
		var _data;
		if(smooth) _data = this._smoothData; else _data = this._data;
		var _dataIndex;
		if(smooth) _dataIndex = this._smoothDataIndex; else _dataIndex = this._dataIndex;
		_data[_dataIndex++] = x;
		_data[_dataIndex++] = y;
		_data[_dataIndex++] = tile;
		if(angle == 0) {
			_data[_dataIndex++] = scaleX;
			_data[_dataIndex++] = 0;
			_data[_dataIndex++] = 0;
			_data[_dataIndex++] = scaleY;
		} else {
			var cos = Math.cos(-angle * (Math.PI / -180));
			var sin = Math.sin(-angle * (Math.PI / -180));
			_data[_dataIndex++] = cos * scaleX;
			_data[_dataIndex++] = -sin * scaleY;
			_data[_dataIndex++] = sin * scaleX;
			_data[_dataIndex++] = cos * scaleY;
		}
		if(this._flagRGB) {
			_data[_dataIndex++] = red;
			_data[_dataIndex++] = green;
			_data[_dataIndex++] = blue;
		}
		if(this._flagAlpha) _data[_dataIndex++] = alpha;
		if(smooth) this._smoothDataIndex = _dataIndex; else this._dataIndex = _dataIndex;
	}
	,get_alpha: function() {
		return (this._renderFlags & 8) != 0;
	}
	,set_alpha: function(value) {
		if(value) this._renderFlags |= 8; else this._renderFlags &= -9;
		this._flagAlpha = value;
		return value;
	}
	,get_rgb: function() {
		return (this._renderFlags & 4) != 0;
	}
	,set_rgb: function(value) {
		if(value) this._renderFlags |= 4; else this._renderFlags &= -5;
		this._flagRGB = value;
		return value;
	}
	,get_blend: function() {
		if((this._renderFlags & 0) != 0) return 0; else if((this._renderFlags & 65536) != 0) return 65536; else if((this._renderFlags & 131072) != 0) return 131072; else if((this._renderFlags & 262144) != 0) return 262144; else return 0;
	}
	,set_blend: function(value) {
		this._renderFlags &= -458753;
		if(value == 65536 || value == 131072 || value == 262144 || value == 0) {
			this._renderFlags |= value;
			return value;
		}
		return 0;
	}
	,_name: null
	,_layerIndex: null
	,_renderFlags: null
	,_flagRGB: null
	,_flagAlpha: null
	,_tilesheet: null
	,_data: null
	,_dataIndex: null
	,_smoothData: null
	,_smoothDataIndex: null
	,_rects: null
	,__class__: com.haxepunk.graphics.atlas.AtlasData
	,__properties__: {set_blend:"set_blend",get_blend:"get_blend",set_rgb:"set_rgb",get_rgb:"get_rgb",set_alpha:"set_alpha",get_alpha:"get_alpha"}
};
com.haxepunk.graphics.atlas.AtlasRegion = function(parent,tileIndex,rect) {
	this._parent = parent;
	this.tileIndex = tileIndex;
	this._rect = rect;
	this.rotated = false;
};
$hxClasses["com.haxepunk.graphics.atlas.AtlasRegion"] = com.haxepunk.graphics.atlas.AtlasRegion;
com.haxepunk.graphics.atlas.AtlasRegion.__name__ = ["com","haxepunk","graphics","atlas","AtlasRegion"];
com.haxepunk.graphics.atlas.AtlasRegion.prototype = {
	rotated: null
	,tileIndex: null
	,clip: function(clipRect,center) {
		var clipRectCopy = new flash.geom.Rectangle(clipRect.x,clipRect.y,clipRect.width,clipRect.height);
		if(clipRectCopy.x + clipRectCopy.width > this._rect.width) clipRectCopy.width = this._rect.width - clipRectCopy.x;
		if(clipRectCopy.y + clipRectCopy.height > this._rect.height) clipRectCopy.height = this._rect.height - clipRectCopy.y;
		if(clipRectCopy.width < 0) clipRectCopy.width = 0;
		if(clipRectCopy.height < 0) clipRectCopy.height = 0;
		clipRectCopy.x += this._rect.x;
		clipRectCopy.y += this._rect.y;
		return this._parent.createRegion(clipRectCopy,center);
	}
	,draw: function(x,y,layer,scaleX,scaleY,angle,red,green,blue,alpha,smooth) {
		if(alpha == null) alpha = 1;
		if(blue == null) blue = 1;
		if(green == null) green = 1;
		if(red == null) red = 1;
		if(angle == null) angle = 0;
		if(scaleY == null) scaleY = 1;
		if(scaleX == null) scaleX = 1;
		if(smooth == null) smooth = com.haxepunk.graphics.atlas.Atlas.smooth;
		if(this.rotated) angle = angle + 90;
		this._parent.prepareTile(this.tileIndex,x,y,layer,scaleX,scaleY,angle,red,green,blue,alpha,smooth);
	}
	,drawMatrix: function(tx,ty,a,b,c,d,layer,red,green,blue,alpha,smooth) {
		if(alpha == null) alpha = 1;
		if(blue == null) blue = 1;
		if(green == null) green = 1;
		if(red == null) red = 1;
		if(smooth == null) smooth = com.haxepunk.graphics.atlas.Atlas.smooth;
		if(this.rotated) {
			var matrix = new flash.geom.Matrix(a,b,c,d,tx,ty);
			matrix.rotate(90 * (Math.PI / -180));
			this._parent.prepareTileMatrix(this.tileIndex,layer,matrix.tx,matrix.ty,matrix.a,matrix.b,matrix.c,matrix.d,red,green,blue,alpha,smooth);
		} else this._parent.prepareTileMatrix(this.tileIndex,layer,tx,ty,a,b,c,d,red,green,blue,alpha,smooth);
	}
	,destroy: function() {
		if(this._parent != null) {
			this._parent.destroy();
			this._parent = null;
		}
	}
	,toString: function() {
		return "[AtlasRegion " + this._rect.width + ", " + this._rect.height + " " + this.tileIndex + "]";
	}
	,get_width: function() {
		return this._rect.width;
	}
	,get_height: function() {
		return this._rect.height;
	}
	,_rect: null
	,_parent: null
	,__class__: com.haxepunk.graphics.atlas.AtlasRegion
	,__properties__: {get_height:"get_height",get_width:"get_width"}
};
com.haxepunk.graphics.atlas.TextureAtlas = function(source) {
	this._regions = new haxe.ds.StringMap();
	com.haxepunk.graphics.atlas.Atlas.call(this,source);
};
$hxClasses["com.haxepunk.graphics.atlas.TextureAtlas"] = com.haxepunk.graphics.atlas.TextureAtlas;
com.haxepunk.graphics.atlas.TextureAtlas.__name__ = ["com","haxepunk","graphics","atlas","TextureAtlas"];
com.haxepunk.graphics.atlas.TextureAtlas.loadTexturePacker = function(file) {
	var xml = Xml.parse(openfl.Assets.getText(file));
	var root = xml.firstElement();
	var atlas = new com.haxepunk.graphics.atlas.TextureAtlas((function($this) {
		var $r;
		var s = root.get("imagePath");
		$r = (function($this) {
			var $r;
			var data = com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName(s,true);
			$r = data;
			return $r;
		}($this));
		return $r;
	}(this)));
	var $it0 = root.elements();
	while( $it0.hasNext() ) {
		var sprite = $it0.next();
		com.haxepunk.HXP.rect.x = Std.parseInt(sprite.get("x"));
		com.haxepunk.HXP.rect.y = Std.parseInt(sprite.get("y"));
		if(sprite.exists("w")) com.haxepunk.HXP.rect.width = Std.parseInt(sprite.get("w"));
		if(sprite.exists("h")) com.haxepunk.HXP.rect.height = Std.parseInt(sprite.get("h"));
		var region = atlas.defineRegion(sprite.get("n"),com.haxepunk.HXP.rect);
		if(sprite.exists("r") && sprite.get("r") == "y") region.rotated = true;
	}
	return atlas;
};
com.haxepunk.graphics.atlas.TextureAtlas.__super__ = com.haxepunk.graphics.atlas.Atlas;
com.haxepunk.graphics.atlas.TextureAtlas.prototype = $extend(com.haxepunk.graphics.atlas.Atlas.prototype,{
	getRegion: function(name) {
		if(this._regions.exists(name)) return this._regions.get(name);
		throw "Region has not been defined yet \"" + name + "\".";
	}
	,defineRegion: function(name,rect,center) {
		var region = this._data.createRegion(rect,center);
		this._regions.set(name,region);
		return region;
	}
	,_regions: null
	,__class__: com.haxepunk.graphics.atlas.TextureAtlas
});
com.haxepunk.graphics.atlas.TileAtlas = function(source) {
	com.haxepunk.graphics.atlas.Atlas.call(this,source);
	this._regions = new Array();
};
$hxClasses["com.haxepunk.graphics.atlas.TileAtlas"] = com.haxepunk.graphics.atlas.TileAtlas;
com.haxepunk.graphics.atlas.TileAtlas.__name__ = ["com","haxepunk","graphics","atlas","TileAtlas"];
com.haxepunk.graphics.atlas.TileAtlas.__super__ = com.haxepunk.graphics.atlas.Atlas;
com.haxepunk.graphics.atlas.TileAtlas.prototype = $extend(com.haxepunk.graphics.atlas.Atlas.prototype,{
	getRegion: function(index) {
		if(index >= this._regions.length) throw "Atlas doesn't have a region number \"" + index + "\"";
		return this._regions[index];
	}
	,prepare: function(tileWidth,tileHeight,tileMarginWidth,tileMarginHeight) {
		if(tileMarginHeight == null) tileMarginHeight = 0;
		if(tileMarginWidth == null) tileMarginWidth = 0;
		if(this._regions.length > 0) return;
		var cols = Math.floor(this._data.width / tileWidth);
		var rows = Math.floor(this._data.height / tileHeight);
		com.haxepunk.HXP.rect.width = tileWidth;
		com.haxepunk.HXP.rect.height = tileHeight;
		com.haxepunk.HXP.point.x = com.haxepunk.HXP.point.y = 0;
		var _g = 0;
		while(_g < rows) {
			var y = _g++;
			com.haxepunk.HXP.rect.y = y * (tileHeight + tileMarginHeight);
			var _g1 = 0;
			while(_g1 < cols) {
				var x = _g1++;
				com.haxepunk.HXP.rect.x = x * (tileWidth + tileMarginWidth);
				this._regions.push(this._data.createRegion(com.haxepunk.HXP.rect,com.haxepunk.HXP.point));
			}
		}
	}
	,_regions: null
	,__class__: com.haxepunk.graphics.atlas.TileAtlas
});
com.haxepunk.masks.Circle = function(radius,x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	if(radius == null) radius = 1;
	com.haxepunk.masks.Hitbox.call(this);
	this.set_radius(radius);
	this._x = x + radius;
	this._y = y + radius;
	var key = Type.getClassName(com.haxepunk.Mask);
	this._check.set(key,$bind(this,this.collideMask));
	var key1 = Type.getClassName(com.haxepunk.masks.Circle);
	this._check.set(key1,$bind(this,this.collideCircle));
	var key2 = Type.getClassName(com.haxepunk.masks.Hitbox);
	this._check.set(key2,$bind(this,this.collideHitbox));
	var key3 = Type.getClassName(com.haxepunk.masks.Grid);
	this._check.set(key3,$bind(this,this.collideGrid));
	var key4 = Type.getClassName(com.haxepunk.masks.SlopedGrid);
	this._check.set(key4,$bind(this,this.collideSlopedGrid));
};
$hxClasses["com.haxepunk.masks.Circle"] = com.haxepunk.masks.Circle;
com.haxepunk.masks.Circle.__name__ = ["com","haxepunk","masks","Circle"];
com.haxepunk.masks.Circle.__super__ = com.haxepunk.masks.Hitbox;
com.haxepunk.masks.Circle.prototype = $extend(com.haxepunk.masks.Hitbox.prototype,{
	collideMask: function(other) {
		var distanceX = Math.abs(this._parent.get_x() + this._x - other._parent.get_x() - other._parent.width * 0.5);
		var distanceY = Math.abs(this._parent.get_y() + this._y - other._parent.get_y() - other._parent.height * 0.5);
		if(distanceX > other._parent.width * 0.5 + this._radius || distanceY > other._parent.height * 0.5 + this._radius) return false;
		if(distanceX <= other._parent.width * 0.5 || distanceY <= other._parent.height * 0.5) return true;
		var distanceToCorner = (distanceX - other._parent.width * 0.5) * (distanceX - other._parent.width * 0.5) + (distanceY - other._parent.height * 0.5) * (distanceY - other._parent.height * 0.5);
		return distanceToCorner <= this._squaredRadius;
	}
	,collideCircle: function(other) {
		var dx = this._parent.get_x() + this._x - (other._parent.get_x() + other._x);
		var dy = this._parent.get_y() + this._y - (other._parent.get_y() + other._y);
		return dx * dx + dy * dy < Math.pow(this._radius + other._radius,2);
	}
	,collideGridTile: function(mx,my,hTileWidth,hTileHeight,thisX,thisY) {
		var collide = false;
		var dx = Math.abs(thisX - mx);
		if(dx <= hTileWidth + this._radius) {
			var dy = Math.abs(thisY - my);
			if(dy <= hTileHeight + this._radius) {
				if(dx <= hTileWidth || dy <= hTileHeight) collide = true; else {
					var xCornerDist = dx - hTileWidth;
					var yCornerDist = dy - hTileHeight;
					if(xCornerDist * xCornerDist + yCornerDist * yCornerDist <= this._squaredRadius) collide = true;
				}
			}
		}
		return collide;
	}
	,collideGrid: function(other) {
		var thisX = this._x + this._parent.get_x();
		var thisY = this._y + this._parent.get_y();
		var otherX = other.get_x() + other._parent.get_x();
		var otherY = other.get_y() + other._parent.get_y();
		var entityDistX = thisX - otherX;
		var entityDistY = thisY - otherY;
		var minx = Math.floor((entityDistX - this._radius) / (other._tile.width | 0));
		var miny = Math.floor((entityDistY - this._radius) / (other._tile.height | 0));
		var maxx = Math.ceil((entityDistX + this._radius) / (other._tile.width | 0));
		var maxy = Math.ceil((entityDistY + this._radius) / (other._tile.height | 0));
		if(minx < 0) minx = 0;
		if(miny < 0) miny = 0;
		if(maxx > other.columns) maxx = other.columns;
		if(maxy > other.rows) maxy = other.rows;
		var hTileWidth = (other._tile.width | 0) * 0.5;
		var hTileHeight = (other._tile.height | 0) * 0.5;
		var dx;
		var dy = otherY + miny * (other._tile.height | 0);
		var _g = miny;
		while(_g < maxy) {
			var yy = _g++;
			dx = otherX + minx * (other._tile.width | 0);
			var _g1 = minx;
			while(_g1 < maxx) {
				var xx = _g1++;
				if(other.getTile(xx,yy)) {
					if(this.collideGridTile(dx + hTileWidth,dy + hTileHeight,hTileWidth,hTileHeight,thisX,thisY)) return true;
				}
				dx += other._tile.width | 0;
			}
			dy += other._tile.height | 0;
		}
		return false;
	}
	,collideSlopedGrid: function(other) {
		var thisX = this._x + this._parent.get_x();
		var thisY = this._y + this._parent.get_y();
		var otherX = other.get_x() + other._parent.get_x();
		var otherY = other.get_y() + other._parent.get_y();
		var entityDistX = thisX - otherX;
		var entityDistY = thisY - otherY;
		var minx = Math.floor((entityDistX - this._radius) / (other._tile.width | 0));
		var miny = Math.floor((entityDistY - this._radius) / (other._tile.height | 0));
		var maxx = Math.ceil((entityDistX + this._radius) / (other._tile.width | 0));
		var maxy = Math.ceil((entityDistY + this._radius) / (other._tile.height | 0));
		if(minx < 0) minx = 0;
		if(miny < 0) miny = 0;
		if(maxx > other.columns) maxx = other.columns;
		if(maxy > other.rows) maxy = other.rows;
		var hTileWidth = (other._tile.width | 0) * 0.5;
		var hTileHeight = (other._tile.height | 0) * 0.5;
		var dx;
		var dy = otherY + miny * (other._tile.height | 0);
		var _g = miny;
		while(_g < maxy) {
			var yy = _g++;
			dx = otherX + minx * (other._tile.width | 0);
			var _g1 = minx;
			while(_g1 < maxx) {
				var xx = _g1++;
				var tile = other.getTile(xx,yy);
				if(tile.type == com.haxepunk.masks.TileType.Solid) {
					if(this.collideGridTile(dx + hTileWidth,dy + hTileHeight,hTileWidth,hTileHeight,thisX,thisY)) return true;
				} else if(tile.type == com.haxepunk.masks.TileType.AboveSlope || tile.type == com.haxepunk.masks.TileType.BelowSlope) {
					if(other.collidePointInSlope(dx,dy,thisX,thisY,tile)) return true;
					var x1 = dx;
					var y1 = dy + tile.yOffset;
					var yoff = tile.slope * (other._tile.width | 0);
					var x2 = x1 + yoff / tile.slope;
					var y2 = y1 + yoff;
					var dx1 = x2 - x1;
					var dy1 = y2 - y1;
					var fx = x1 - thisX;
					var fy = y1 - thisY;
					var a = dx1 * dx1 + dy1 * dy1;
					var b = (fx * dx1 + fy * dy1) * 2;
					var c = fx * fx + fy * fy - this._radius * this._radius;
					var discriminant = b * b - 4 * a * c;
					if(discriminant >= 0) {
						discriminant = Math.sqrt(discriminant);
						var t1 = (-b - discriminant) / (2 * a);
						var t2 = (-b + discriminant) / (2 * a);
						if(t1 >= 0 && t1 <= 1 || t2 >= 0 && t2 <= 1 || t1 < 0 && t2 > 1) return true;
					}
				}
				dx += other._tile.width | 0;
			}
			dy += other._tile.height | 0;
		}
		return false;
	}
	,collideHitbox: function(other) {
		var _otherHalfWidth = other._width * 0.5;
		var _otherHalfHeight = other._height * 0.5;
		var px = this._x + this._parent.get_x();
		var py = this._y + this._parent.get_y();
		var ox = other._x;
		var oy = other._y;
		if((other._parent != com.haxepunk.Entity._EMPTY?other._parent:null) != null) {
			ox += (other._parent != com.haxepunk.Entity._EMPTY?other._parent:null).get_x();
			oy += (other._parent != com.haxepunk.Entity._EMPTY?other._parent:null).get_y();
		}
		var distanceX = Math.abs(px - ox - _otherHalfWidth);
		var distanceY = Math.abs(py - oy - _otherHalfHeight);
		if(distanceX > _otherHalfWidth + this._radius || distanceY > _otherHalfHeight + this._radius) return false;
		if(distanceX <= _otherHalfWidth || distanceY <= _otherHalfHeight) return true;
		var distanceToCorner = (distanceX - _otherHalfWidth) * (distanceX - _otherHalfWidth) + (distanceY - _otherHalfHeight) * (distanceY - _otherHalfHeight);
		return distanceToCorner <= this._squaredRadius;
	}
	,project: function(axis,projection) {
		projection.min = -this._radius;
		projection.max = this._radius;
	}
	,debugDraw: function(graphics,scaleX,scaleY) {
		graphics.drawCircle((this._parent.get_x() + this._x - com.haxepunk.HXP.camera.x) * scaleX,(this._parent.get_y() + this._y - com.haxepunk.HXP.camera.y) * scaleY,this._radius * scaleX);
	}
	,get_x: function() {
		return this._x - this._radius;
	}
	,get_y: function() {
		return this._y - this._radius;
	}
	,get_radius: function() {
		return this._radius;
	}
	,set_radius: function(value) {
		if(this._radius == value) return value;
		this._radius = value;
		this._squaredRadius = value * value;
		this.set_height(this.set_width(this._radius + this._radius));
		if(this.list != null) this.list.update(); else if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) this.update();
		return this._radius;
	}
	,update: function() {
		if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) {
			this._parent.originX = -this._x + this._radius;
			this._parent.originY = -this._y + this._radius;
			this._parent.height = this._parent.width = this._radius + this._radius;
			if(this.list != null) this.list.update();
		}
	}
	,_radius: null
	,_squaredRadius: null
	,__class__: com.haxepunk.masks.Circle
	,__properties__: $extend(com.haxepunk.masks.Hitbox.prototype.__properties__,{set_radius:"set_radius",get_radius:"get_radius"})
});
com.haxepunk.masks.Grid = function(width,height,tileWidth,tileHeight,x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	com.haxepunk.masks.Hitbox.call(this);
	if(width == 0 || height == 0 || tileWidth == 0 || tileHeight == 0) throw "Illegal Grid, sizes cannot be 0.";
	this._rect = com.haxepunk.HXP.rect;
	this._point = com.haxepunk.HXP.point;
	this._point2 = com.haxepunk.HXP.point2;
	this.columns = width / tileWidth | 0;
	this.rows = height / tileHeight | 0;
	this._tile = new flash.geom.Rectangle(0,0,tileWidth,tileHeight);
	this._x = x;
	this._y = y;
	this._width = width;
	this._height = height;
	this.usePositions = false;
	var key = Type.getClassName(com.haxepunk.Mask);
	this._check.set(key,$bind(this,this.collideMask));
	var key1 = Type.getClassName(com.haxepunk.masks.Hitbox);
	this._check.set(key1,$bind(this,this.collideHitbox));
	var key2 = Type.getClassName(com.haxepunk.masks.Pixelmask);
	this._check.set(key2,$bind(this,this.collidePixelmask));
	var key3 = Type.getClassName(com.haxepunk.masks.Grid);
	this._check.set(key3,$bind(this,this.collideGrid));
	this.data = new Array();
	var _g1 = 0;
	var _g = this.rows;
	while(_g1 < _g) {
		var x1 = _g1++;
		this.data.push(new Array());
	}
};
$hxClasses["com.haxepunk.masks.Grid"] = com.haxepunk.masks.Grid;
com.haxepunk.masks.Grid.__name__ = ["com","haxepunk","masks","Grid"];
com.haxepunk.masks.Grid.__super__ = com.haxepunk.masks.Hitbox;
com.haxepunk.masks.Grid.prototype = $extend(com.haxepunk.masks.Hitbox.prototype,{
	usePositions: null
	,setTile: function(column,row,solid) {
		if(solid == null) solid = true;
		if(row == null) row = 0;
		if(column == null) column = 0;
		if(this.usePositions) {
			column = column / this._tile.width | 0;
			row = row / this._tile.height | 0;
		}
		this.setTileXY(column,row,solid);
	}
	,setTileXY: function(x,y,solid) {
		if(solid == null) solid = true;
		if(y == null) y = 0;
		if(x == null) x = 0;
		if(!(x < 0 || x > this.columns - 1 || y < 0 || y > this.rows - 1?false:true)) return;
		this.data[y][x] = solid;
	}
	,clearTile: function(column,row) {
		if(row == null) row = 0;
		if(column == null) column = 0;
		this.setTile(column,row,false);
	}
	,checkTile: function(column,row) {
		if(column < 0 || column > this.columns - 1 || row < 0 || row > this.rows - 1) return false; else return true;
	}
	,getTile: function(column,row) {
		if(row == null) row = 0;
		if(column == null) column = 0;
		if(this.usePositions) {
			column = column / this._tile.width | 0;
			row = row / this._tile.height | 0;
		}
		return this.getTileXY(column,row);
	}
	,getTileXY: function(x,y) {
		if(y == null) y = 0;
		if(x == null) x = 0;
		if(!(x < 0 || x > this.columns - 1 || y < 0 || y > this.rows - 1?false:true)) return false;
		return this.data[y][x];
	}
	,setRect: function(column,row,width,height,solid) {
		if(solid == null) solid = true;
		if(height == null) height = 1;
		if(width == null) width = 1;
		if(row == null) row = 0;
		if(column == null) column = 0;
		if(this.usePositions) {
			column = column / this._tile.width | 0;
			row = row / this._tile.height | 0;
			width = width / this._tile.width | 0;
			height = height / this._tile.height | 0;
		}
		var _g1 = row;
		var _g = row + height;
		while(_g1 < _g) {
			var yy = _g1++;
			var _g3 = column;
			var _g2 = column + width;
			while(_g3 < _g2) {
				var xx = _g3++;
				this.setTileXY(xx,yy,solid);
			}
		}
	}
	,clearRect: function(column,row,width,height) {
		if(height == null) height = 1;
		if(width == null) width = 1;
		if(row == null) row = 0;
		if(column == null) column = 0;
		this.setRect(column,row,width,height,false);
	}
	,loadFromString: function(str,columnSep,rowSep) {
		if(rowSep == null) rowSep = "\n";
		if(columnSep == null) columnSep = ",";
		var row = str.split(rowSep);
		var rows = row.length;
		var col;
		var cols;
		var x;
		var y;
		var _g = 0;
		while(_g < rows) {
			var y1 = _g++;
			if(row[y1] == "") continue;
			col = row[y1].split(columnSep);
			cols = col.length;
			var _g1 = 0;
			while(_g1 < cols) {
				var x1 = _g1++;
				if(col[x1] == "") continue;
				this.setTile(x1,y1,Std.parseInt(col[x1]) > 0);
			}
		}
	}
	,loadFrom2DArray: function(array) {
		var _g1 = 0;
		var _g = array.length;
		while(_g1 < _g) {
			var y = _g1++;
			var _g3 = 0;
			var _g2 = array[0].length;
			while(_g3 < _g2) {
				var x = _g3++;
				this.setTile(x,y,array[y][x] > 0);
			}
		}
	}
	,saveToString: function(columnSep,rowSep,solid,empty) {
		if(empty == null) empty = "false";
		if(solid == null) solid = "true";
		if(rowSep == null) rowSep = "\n";
		if(columnSep == null) columnSep = ",";
		var s = "";
		var x;
		var y;
		var _g1 = 0;
		var _g = this.rows;
		while(_g1 < _g) {
			var y1 = _g1++;
			var _g3 = 0;
			var _g2 = this.columns;
			while(_g3 < _g2) {
				var x1 = _g3++;
				s += Std.string(this.getTileXY(x1,y1)?solid:empty);
				if(x1 != this.columns - 1) s += columnSep;
			}
			if(y1 != this.rows - 1) s += rowSep;
		}
		return s;
	}
	,clone: function() {
		var cloneGrid = new com.haxepunk.masks.Grid(this._width,this._height,this._tile.width | 0,this._tile.height | 0,this._x,this._y);
		var _g1 = 0;
		var _g = this.rows;
		while(_g1 < _g) {
			var y = _g1++;
			var _g3 = 0;
			var _g2 = this.columns;
			while(_g3 < _g2) {
				var x = _g3++;
				cloneGrid.setTile(x,y,this.getTile(x,y));
			}
		}
		return cloneGrid;
	}
	,get_tileWidth: function() {
		return this._tile.width | 0;
	}
	,get_tileHeight: function() {
		return this._tile.height | 0;
	}
	,columns: null
	,rows: null
	,data: null
	,collideMask: function(other) {
		var rectX;
		var rectY;
		var pointX;
		var pointY;
		this._rect.x = other._parent.get_x() - other._parent.originX - this._parent.get_x() + this._parent.originX;
		this._rect.y = other._parent.get_y() - other._parent.originY - this._parent.get_y() + this._parent.originY;
		pointX = ((this._rect.x + other._parent.width - 1) / this._tile.width | 0) + 1;
		pointY = ((this._rect.y + other._parent.height - 1) / this._tile.height | 0) + 1;
		rectX = this._rect.x / this._tile.width | 0;
		rectY = this._rect.y / this._tile.height | 0;
		var _g = rectY;
		while(_g < pointY) {
			var dy = _g++;
			var _g1 = rectX;
			while(_g1 < pointX) {
				var dx = _g1++;
				if(this.getTile(dx,dy)) return true;
			}
		}
		return false;
	}
	,collideHitbox: function(other) {
		var rectX;
		var rectY;
		var pointX;
		var pointY;
		this._rect.x = other._parent.get_x() - other._x - this._parent.get_x() + this._x;
		this._rect.y = other._parent.get_y() - other._y - this._parent.get_y() + this._y;
		pointX = ((this._rect.x + other._width - 1) / this._tile.width | 0) + 1;
		pointY = ((this._rect.y + other._height - 1) / this._tile.height | 0) + 1;
		rectX = this._rect.x / this._tile.width | 0;
		rectY = this._rect.y / this._tile.height | 0;
		var _g = rectY;
		while(_g < pointY) {
			var dy = _g++;
			var _g1 = rectX;
			while(_g1 < pointX) {
				var dx = _g1++;
				if(this.getTile(dx,dy)) return true;
			}
		}
		return false;
	}
	,collidePixelmask: function(other) {
		haxe.Log.trace("Pixelmasks will not work in targets other than flash due to hittest not being implemented in OpenFL.",{ fileName : "Grid.hx", lineNumber : 399, className : "com.haxepunk.masks.Grid", methodName : "collidePixelmask"});
		return false;
	}
	,collideGrid: function(other) {
		var ax1 = this._parent.get_x() + this._x;
		var ax2 = ax1 + this._width;
		var bx1 = other._parent.get_x() + other._x;
		var bx2 = bx1 + other._width;
		if(ax2 < bx1 || ax1 > bx2) return false;
		var ay1 = this._parent.get_y() + this._y;
		var ay2 = ay1 + this._height;
		var by1 = other._parent.get_y() + other._y;
		var by2 = by1 + other._height;
		if(ay2 < by1 || ay1 > by2) return false;
		var ox1;
		if(ax1 > bx1) ox1 = ax1; else ox1 = bx1;
		var oy1;
		if(ay1 > by1) oy1 = ay1; else oy1 = by1;
		var ox2;
		if(ax2 < bx2) ox2 = ax2; else ox2 = bx2;
		var oy2;
		if(ay2 < by2) oy2 = ay2; else oy2 = by2;
		var tw;
		var th;
		if(this._tile.width < other._tile.width) {
			tw = this._tile.width;
			ox1 -= this._parent.get_x() + this._x;
			ox1 = (ox1 / tw | 0) * tw;
			ox1 += this._parent.get_x() + this._x;
		} else {
			tw = other._tile.width;
			ox1 -= other._parent.get_x() + other._x;
			ox1 = (ox1 / tw | 0) * tw;
			ox1 += other._parent.get_x() + other._x;
		}
		if(this._tile.height < other._tile.height) {
			th = this._tile.height;
			oy1 -= this._parent.get_y() + this._y;
			oy1 = (oy1 / th | 0) * th;
			oy1 += this._parent.get_y() + this._y;
		} else {
			th = other._tile.height;
			oy1 -= other._parent.get_y() + other._y;
			oy1 = (oy1 / th | 0) * th;
			oy1 += other._parent.get_y() + other._y;
		}
		var y = oy1;
		var x = 0;
		while(y < oy2) {
			var ar1 = Std["int"]((y - this._parent.get_y() - this._y) / this._tile.height);
			var br1 = Std["int"]((y - other._parent.get_y() - other._y) / other._tile.height);
			var ar2 = Std["int"]((y - this._parent.get_y() - this._y + (th - 1)) / this._tile.height);
			var br2 = Std["int"]((y - other._parent.get_y() - other._y + (th - 1)) / other._tile.height);
			x = ox1;
			while(x < ox2) {
				var ac1 = Std["int"]((x - this._parent.get_x() - this._x) / this._tile.width);
				var bc1 = Std["int"]((x - other._parent.get_x() - other._x) / other._tile.width);
				var ac2 = Std["int"]((x - this._parent.get_x() - this._x + (tw - 1)) / this._tile.width);
				var bc2 = Std["int"]((x - other._parent.get_x() - other._x + (tw - 1)) / other._tile.width);
				if(this.getTile(ac1,ar1) && other.getTile(bc1,br1) || this.getTile(ac2,ar1) && other.getTile(bc2,br1) || this.getTile(ac1,ar2) && other.getTile(bc1,br2) || this.getTile(ac2,ar2) && other.getTile(bc2,br2)) return true;
				x += tw;
			}
			y += th;
		}
		return false;
	}
	,debugDraw: function(graphics,scaleX,scaleY) {
		var cellX;
		var cellY;
		var stepX = (this._tile.width | 0) * scaleX;
		var stepY = (this._tile.height | 0) * scaleY;
		var px = this._x + this._parent.get_x() - com.haxepunk.HXP.camera.x;
		var py = this._y + this._parent.get_y() - com.haxepunk.HXP.camera.y;
		var startx = Math.floor(-px / (this._tile.width | 0));
		var starty = Math.floor(-py / (this._tile.height | 0));
		var destx = startx + 1 + Math.ceil(com.haxepunk.HXP.width / (this._tile.width | 0));
		var desty = starty + 1 + Math.ceil(com.haxepunk.HXP.height / (this._tile.height | 0));
		if(startx > this.columns || starty > this.rows || destx < 0 || desty < 0) return;
		if(startx < 0) startx = 0;
		if(destx > this.columns) destx = this.columns;
		if(starty < 0) starty = 0;
		if(desty > this.rows) desty = this.rows;
		px = (px + startx * (this._tile.width | 0)) * scaleX;
		py = (py + starty * (this._tile.height | 0)) * scaleY;
		var row;
		cellY = py;
		var _g = starty;
		while(_g < desty) {
			var y = _g++;
			cellX = px;
			row = this.data[y];
			var _g1 = startx;
			while(_g1 < destx) {
				var x = _g1++;
				if(row[x]) {
					graphics.lineStyle(1,16777215,0.3);
					graphics.drawRect(cellX,cellY,stepX,stepY);
					if(x < this.columns - 1 && !row[x + 1]) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX + stepX,cellY);
						graphics.lineTo(cellX + stepX,cellY + stepY);
					}
					if(x > 0 && !row[x - 1]) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX,cellY);
						graphics.lineTo(cellX,cellY + stepY);
					}
					if(y < this.rows - 1 && !this.data[y + 1][x]) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX,cellY + stepY);
						graphics.lineTo(cellX + stepX,cellY + stepY);
					}
					if(y > 0 && !this.data[y - 1][x]) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX,cellY);
						graphics.lineTo(cellX + stepX,cellY);
					}
				}
				cellX += stepX;
			}
			cellY += stepY;
		}
	}
	,squareProjection: function(axis,point) {
		if(axis.x < axis.y) {
			point.x = axis.x;
			point.y = axis.y;
		} else {
			point.y = axis.x;
			point.x = axis.y;
		}
	}
	,_tile: null
	,_rect: null
	,_point: null
	,_point2: null
	,__class__: com.haxepunk.masks.Grid
	,__properties__: $extend(com.haxepunk.masks.Hitbox.prototype.__properties__,{get_tileHeight:"get_tileHeight",get_tileWidth:"get_tileWidth"})
});
com.haxepunk.masks.Pixelmask = function(source,x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	com.haxepunk.masks.Hitbox.call(this);
	if(js.Boot.__instanceof(source,flash.display.BitmapData)) this._data = source; else this._data = com.haxepunk.HXP.getBitmap(source);
	if(this._data == null) throw "Invalid Pixelmask source image.";
	this.threshold = 1;
	this._rect = com.haxepunk.HXP.rect;
	this._point = com.haxepunk.HXP.point;
	this._point2 = com.haxepunk.HXP.point2;
	var _this = this.get_data();
	this._width = _this.component.width;
	var _this1 = this.get_data();
	this._height = _this1.component.height;
	this._x = x;
	this._y = y;
	var key = Type.getClassName(com.haxepunk.Mask);
	this._check.set(key,$bind(this,this.collideMask));
	var key1 = Type.getClassName(com.haxepunk.masks.Pixelmask);
	this._check.set(key1,$bind(this,this.collidePixelmask));
	var key2 = Type.getClassName(com.haxepunk.masks.Hitbox);
	this._check.set(key2,$bind(this,this.collideHitbox));
};
$hxClasses["com.haxepunk.masks.Pixelmask"] = com.haxepunk.masks.Pixelmask;
com.haxepunk.masks.Pixelmask.__name__ = ["com","haxepunk","masks","Pixelmask"];
com.haxepunk.masks.Pixelmask.__super__ = com.haxepunk.masks.Hitbox;
com.haxepunk.masks.Pixelmask.prototype = $extend(com.haxepunk.masks.Hitbox.prototype,{
	threshold: null
	,collideMask: function(other) {
		this._point.x = this._parent.get_x() + this._x;
		this._point.y = this._parent.get_y() + this._y;
		this._rect.x = other._parent.get_x() - other._parent.originX;
		this._rect.y = other._parent.get_y() - other._parent.originY;
		this._rect.width = other._parent.width;
		this._rect.height = other._parent.height;
		return false;
	}
	,collideHitbox: function(other) {
		this._point.x = this._parent.get_x() + this._x;
		this._point.y = this._parent.get_y() + this._y;
		this._rect.x = other._parent.get_x() + other._x;
		this._rect.y = other._parent.get_y() + other._y;
		this._rect.width = other._width;
		this._rect.height = other._height;
		return false;
	}
	,collidePixelmask: function(other) {
		this._point.x = other._parent.get_x() + other._x - (this._parent.get_x() + this._x);
		this._point.y = other._parent.get_y() + other._y - (this._parent.get_y() + this._y);
		var r1 = new flash.geom.Rectangle(0,0,this._data.component.width,this._data.component.height);
		var r2 = new flash.geom.Rectangle(this._point.x,this._point.y,other._data.component.width,other._data.component.height);
		var intersect = r1.intersection(r2);
		if(intersect.isEmpty()) return false;
		var _g1 = Math.floor(intersect.x);
		var _g = Math.floor(intersect.x + intersect.width + 1);
		while(_g1 < _g) {
			var dx = _g1++;
			var _g3 = Math.floor(intersect.y);
			var _g2 = Math.floor(intersect.y + intersect.height + 1);
			while(_g3 < _g2) {
				var dy = _g3++;
				var p1 = this._data.getPixel32(dx,dy) >> 24 & 255;
				var p2 = other._data.getPixel32(Math.floor(dx - this._point.x),Math.floor(dy - this._point.y)) >> 24 & 255;
				if(p1 > 0 && p2 > 0) return true;
			}
		}
		return false;
	}
	,get_data: function() {
		return this._data;
	}
	,set_data: function(value) {
		this._data = value;
		this._width = value.component.width;
		this._height = value.component.height;
		this.update();
		return this._data;
	}
	,_data: null
	,_rect: null
	,_point: null
	,_point2: null
	,__class__: com.haxepunk.masks.Pixelmask
	,__properties__: $extend(com.haxepunk.masks.Hitbox.prototype.__properties__,{set_data:"set_data",get_data:"get_data"})
});
com.haxepunk.math = {};
com.haxepunk.math.Projection = function() {
	this.max = this.min = 0;
};
$hxClasses["com.haxepunk.math.Projection"] = com.haxepunk.math.Projection;
com.haxepunk.math.Projection.__name__ = ["com","haxepunk","math","Projection"];
com.haxepunk.math.Projection.prototype = {
	max: null
	,min: null
	,overlaps: function(other) {
		return !(this.min > other.max || this.max < other.min);
	}
	,getOverlap: function(other) {
		if(this.max > other.max) return this.max - other.min; else return other.max - this.min;
	}
	,toString: function() {
		return "[ " + this.min + ", " + this.max + " ]";
	}
	,__class__: com.haxepunk.math.Projection
};
com.haxepunk.masks.Polygon = function(points,origin) {
	this.maxY = 0;
	this.maxX = 0;
	this.minY = 0;
	this.minX = 0;
	com.haxepunk.masks.Hitbox.call(this);
	if(points.length < 3) throw "The polygon needs at least 3 sides.";
	this._points = points;
	this._fakeEntity = new com.haxepunk.Entity();
	this._fakeTileHitbox = new com.haxepunk.masks.Hitbox();
	var key = Type.getClassName(com.haxepunk.Mask);
	this._check.set(key,$bind(this,this.collideMask));
	var key1 = Type.getClassName(com.haxepunk.masks.Hitbox);
	this._check.set(key1,$bind(this,this.collideHitbox));
	var key2 = Type.getClassName(com.haxepunk.masks.Grid);
	this._check.set(key2,$bind(this,this.collideGrid));
	var key3 = Type.getClassName(com.haxepunk.masks.Circle);
	this._check.set(key3,$bind(this,this.collideCircle));
	var key4 = Type.getClassName(com.haxepunk.masks.Polygon);
	this._check.set(key4,$bind(this,this.collidePolygon));
	if(origin != null) this.origin = origin; else this.origin = new flash.geom.Point();
	this._angle = 0;
	this.updateAxes();
};
$hxClasses["com.haxepunk.masks.Polygon"] = com.haxepunk.masks.Polygon;
com.haxepunk.masks.Polygon.__name__ = ["com","haxepunk","masks","Polygon"];
com.haxepunk.masks.Polygon.createPolygon = function(sides,radius,angle) {
	if(angle == null) angle = 0;
	if(radius == null) radius = 100;
	if(sides == null) sides = 3;
	if(sides < 3) throw "The polygon needs at least 3 sides.";
	var rotationAngle = Math.PI * 2 / sides;
	var points = new Array();
	var _g = 0;
	while(_g < sides) {
		var i = _g++;
		var tempAngle = Math.PI + i * rotationAngle;
		var p = new flash.geom.Point(0,0);
		var value = Math.cos(tempAngle) * radius + radius;
		p.x = value;
		var value1 = Math.sin(tempAngle) * radius + radius;
		p.y = value1;
		points.push(p);
	}
	var poly = new com.haxepunk.masks.Polygon(points);
	poly.origin.x = radius;
	poly.origin.y = radius;
	poly.set_angle(angle);
	return poly;
};
com.haxepunk.masks.Polygon.createFromArray = function(points) {
	var p = new Array();
	var i = 0;
	while(i < points.length) p.push((function($this) {
		var $r;
		var x = points[i++];
		var y = points[i++];
		$r = new flash.geom.Point(x,y);
		return $r;
	}(this)));
	return new com.haxepunk.masks.Polygon(p);
};
com.haxepunk.masks.Polygon.__super__ = com.haxepunk.masks.Hitbox;
com.haxepunk.masks.Polygon.prototype = $extend(com.haxepunk.masks.Hitbox.prototype,{
	origin: null
	,minX: null
	,minY: null
	,maxX: null
	,maxY: null
	,collideMask: function(other) {
		var offset;
		var offsetX = this._parent.get_x() + this._x - other._parent.get_x();
		var offsetY = this._parent.get_y() + this._y - other._parent.get_y();
		this.project(com.haxepunk.masks.Polygon.vertical,com.haxepunk.masks.Polygon.firstProj);
		other.project(com.haxepunk.masks.Polygon.vertical,com.haxepunk.masks.Polygon.secondProj);
		com.haxepunk.masks.Polygon.firstProj.min += offsetY;
		com.haxepunk.masks.Polygon.firstProj.max += offsetY;
		if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		this.project(com.haxepunk.masks.Polygon.horizontal,com.haxepunk.masks.Polygon.firstProj);
		other.project(com.haxepunk.masks.Polygon.horizontal,com.haxepunk.masks.Polygon.secondProj);
		com.haxepunk.masks.Polygon.firstProj.min += offsetX;
		com.haxepunk.masks.Polygon.firstProj.max += offsetX;
		if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		var _g = 0;
		var _g1 = this._axes;
		while(_g < _g1.length) {
			var a = _g1[_g];
			++_g;
			this.project(a,com.haxepunk.masks.Polygon.firstProj);
			other.project(a,com.haxepunk.masks.Polygon.secondProj);
			offset = offsetX * a.x + offsetY * a.y;
			com.haxepunk.masks.Polygon.firstProj.min += offset;
			com.haxepunk.masks.Polygon.firstProj.max += offset;
			if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		}
		return true;
	}
	,collideHitbox: function(hitbox) {
		var offset;
		var offsetX = this._parent.get_x() + this._x - hitbox._parent.get_x();
		var offsetY = this._parent.get_y() + this._y - hitbox._parent.get_y();
		this.project(com.haxepunk.masks.Polygon.vertical,com.haxepunk.masks.Polygon.firstProj);
		hitbox.project(com.haxepunk.masks.Polygon.vertical,com.haxepunk.masks.Polygon.secondProj);
		com.haxepunk.masks.Polygon.firstProj.min += offsetY;
		com.haxepunk.masks.Polygon.firstProj.max += offsetY;
		if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		this.project(com.haxepunk.masks.Polygon.horizontal,com.haxepunk.masks.Polygon.firstProj);
		hitbox.project(com.haxepunk.masks.Polygon.horizontal,com.haxepunk.masks.Polygon.secondProj);
		com.haxepunk.masks.Polygon.firstProj.min += offsetX;
		com.haxepunk.masks.Polygon.firstProj.max += offsetX;
		if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		var _g = 0;
		var _g1 = this._axes;
		while(_g < _g1.length) {
			var a = _g1[_g];
			++_g;
			this.project(a,com.haxepunk.masks.Polygon.firstProj);
			hitbox.project(a,com.haxepunk.masks.Polygon.secondProj);
			offset = offsetX * a.x + offsetY * a.y;
			com.haxepunk.masks.Polygon.firstProj.min += offset;
			com.haxepunk.masks.Polygon.firstProj.max += offset;
			if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		}
		return true;
	}
	,collideGrid: function(grid) {
		var tileW = grid._tile.width | 0;
		var tileH = grid._tile.height | 0;
		var solidTile;
		this._fakeEntity.width = tileW;
		this._fakeEntity.height = tileH;
		this._fakeEntity.set_x(this._parent.get_x());
		this._fakeEntity.set_y(this._parent.get_y());
		this._fakeEntity.originX = grid._parent.originX + grid._x;
		this._fakeEntity.originY = grid._parent.originY + grid._y;
		this._fakeTileHitbox._width = tileW;
		this._fakeTileHitbox._height = tileH;
		this._fakeTileHitbox.set_parent(this._fakeEntity);
		var _g1 = 0;
		var _g = grid.rows;
		while(_g1 < _g) {
			var r = _g1++;
			var _g3 = 0;
			var _g2 = grid.columns;
			while(_g3 < _g2) {
				var c = _g3++;
				this._fakeEntity.set_x(grid._parent.get_x() + grid._x + c * tileW);
				this._fakeEntity.set_y(grid._parent.get_y() + grid._y + r * tileH);
				solidTile = grid.getTile(c,r);
				if(solidTile && this.collideHitbox(this._fakeTileHitbox)) return true;
			}
		}
		return false;
	}
	,collideCircle: function(circle) {
		var edgesCrossed = 0;
		var p1;
		var p2;
		var i;
		var j;
		var nPoints = this._points.length;
		var offsetX = this._parent.get_x() + this._x;
		var offsetY = this._parent.get_y() + this._y;
		i = 0;
		j = nPoints - 1;
		while(i < nPoints) {
			p1 = this._points[i];
			p2 = this._points[j];
			var distFromCenter = (p2.x - p1.x) * (circle._y + circle._parent.get_y() - p1.y - offsetY) / (p2.y - p1.y) + p1.x + offsetX;
			if(p1.y + offsetY > circle._y + circle._parent.get_y() != p2.y + offsetY > circle._y + circle._parent.get_y() && circle._x + circle._parent.get_x() < distFromCenter) edgesCrossed++;
			j = i;
			i++;
		}
		if((edgesCrossed & 1) > 0) return true;
		var radiusSqr = circle._radius * circle._radius;
		var cx = circle._x + circle._parent.get_x();
		var cy = circle._y + circle._parent.get_y();
		var minDistanceSqr = 0;
		var closestX;
		var closestY;
		i = 0;
		j = nPoints - 1;
		while(i < nPoints) {
			p1 = this._points[i];
			p2 = this._points[j];
			var segmentLenSqr = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
			var t = ((cx - p1.x - offsetX) * (p2.x - p1.x) + (cy - p1.y - offsetY) * (p2.y - p1.y)) / segmentLenSqr;
			if(t < 0) {
				closestX = p1.x;
				closestY = p1.y;
			} else if(t > 1) {
				closestX = p2.x;
				closestY = p2.y;
			} else {
				closestX = p1.x + t * (p2.x - p1.x);
				closestY = p1.y + t * (p2.y - p1.y);
			}
			closestX += offsetX;
			closestY += offsetY;
			minDistanceSqr = (cx - closestX) * (cx - closestX) + (cy - closestY) * (cy - closestY);
			if(minDistanceSqr <= radiusSqr) return true;
			j = i;
			i++;
		}
		return false;
	}
	,collidePolygon: function(other) {
		var offset;
		var offsetX = this._parent.get_x() + this._x - other._parent.get_x() - other._x;
		var offsetY = this._parent.get_y() + this._y - other._parent.get_y() - other._y;
		var _g = 0;
		var _g1 = this._axes;
		while(_g < _g1.length) {
			var a = _g1[_g];
			++_g;
			this.project(a,com.haxepunk.masks.Polygon.firstProj);
			other.project(a,com.haxepunk.masks.Polygon.secondProj);
			offset = offsetX * a.x + offsetY * a.y;
			com.haxepunk.masks.Polygon.firstProj.min += offset;
			com.haxepunk.masks.Polygon.firstProj.max += offset;
			if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		}
		var _g2 = 0;
		var _g11 = other._axes;
		while(_g2 < _g11.length) {
			var a1 = _g11[_g2];
			++_g2;
			this.project(a1,com.haxepunk.masks.Polygon.firstProj);
			other.project(a1,com.haxepunk.masks.Polygon.secondProj);
			offset = offsetX * a1.x + offsetY * a1.y;
			com.haxepunk.masks.Polygon.firstProj.min += offset;
			com.haxepunk.masks.Polygon.firstProj.max += offset;
			if(!com.haxepunk.masks.Polygon.firstProj.overlaps(com.haxepunk.masks.Polygon.secondProj)) return false;
		}
		return true;
	}
	,project: function(axis,projection) {
		var p = this._points[0];
		var min = axis.x * p.x + axis.y * p.y;
		var max = min;
		var _g1 = 1;
		var _g = this._points.length;
		while(_g1 < _g) {
			var i = _g1++;
			p = this._points[i];
			var cur = axis.x * p.x + axis.y * p.y;
			if(cur < min) min = cur; else if(cur > max) max = cur;
		}
		projection.min = min;
		projection.max = max;
	}
	,debugDraw: function(graphics,scaleX,scaleY) {
		var offsetX = this._parent.get_x() + this._x - com.haxepunk.HXP.camera.x;
		var offsetY = this._parent.get_y() + this._y - com.haxepunk.HXP.camera.y;
		graphics.beginFill(255,.3);
		graphics.moveTo((this._points[this._points.length - 1].x + offsetX) * scaleX,(this._points[this._points.length - 1].y + offsetY) * scaleY);
		var _g1 = 0;
		var _g = this._points.length;
		while(_g1 < _g) {
			var i = _g1++;
			graphics.lineTo((this._points[i].x + offsetX) * scaleX,(this._points[i].y + offsetY) * scaleY);
		}
		graphics.endFill();
		graphics.drawCircle((offsetX + this.origin.x) * scaleX,(offsetY + this.origin.y) * scaleY,2);
	}
	,get_angle: function() {
		return this._angle;
	}
	,set_angle: function(value) {
		if(value != this._angle) {
			this.rotate(value - this._angle);
			if(this.list != null || (this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) this.update();
		}
		return value;
	}
	,get_points: function() {
		return this._points;
	}
	,set_points: function(value) {
		if(this._points != value) {
			this._points = value;
			if(this.list != null || (this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) this.updateAxes();
		}
		return value;
	}
	,update: function() {
		this.project(com.haxepunk.masks.Polygon.horizontal,com.haxepunk.masks.Polygon.firstProj);
		var projX = Math.round(com.haxepunk.masks.Polygon.firstProj.min);
		this._width = Math.round(com.haxepunk.masks.Polygon.firstProj.max - com.haxepunk.masks.Polygon.firstProj.min);
		this.project(com.haxepunk.masks.Polygon.vertical,com.haxepunk.masks.Polygon.secondProj);
		var projY = Math.round(com.haxepunk.masks.Polygon.secondProj.min);
		this._height = Math.round(com.haxepunk.masks.Polygon.secondProj.max - com.haxepunk.masks.Polygon.secondProj.min);
		this.minX = this._x + projX;
		this.minY = this._y + projY;
		this.maxX = Math.round(this.minX + this._width);
		this.maxY = Math.round(this.minY + this._height);
		if(this.list != null) this.list.update(); else if((this._parent != com.haxepunk.Entity._EMPTY?this._parent:null) != null) {
			this._parent.originX = -this._x - projX;
			this._parent.originY = -this._y - projY;
			this._parent.width = this._width;
			this._parent.height = this._height;
		}
	}
	,rotate: function(angleDelta) {
		this._angle += angleDelta;
		angleDelta *= Math.PI / -180;
		var p;
		var _g1 = 0;
		var _g = this._points.length;
		while(_g1 < _g) {
			var i = _g1++;
			p = this._points[i];
			var dx = p.x - this.origin.x;
			var dy = p.y - this.origin.y;
			var pointAngle = Math.atan2(dy,dx);
			var length = Math.sqrt(dx * dx + dy * dy);
			var value = Math.cos(pointAngle + angleDelta) * length + this.origin.x;
			p.x = value;
			var value1 = Math.sin(pointAngle + angleDelta) * length + this.origin.y;
			p.y = value1;
		}
		var _g2 = 0;
		var _g11 = this._axes;
		while(_g2 < _g11.length) {
			var a = _g11[_g2];
			++_g2;
			var axisAngle = Math.atan2(a.y,a.x);
			var value2 = Math.cos(axisAngle + angleDelta);
			a.x = value2;
			var value3 = Math.sin(axisAngle + angleDelta);
			a.y = value3;
		}
	}
	,generateAxes: function() {
		this._axes = new Array();
		var temp;
		var nPoints = this._points.length;
		var edge;
		var i;
		var j;
		i = 0;
		j = nPoints - 1;
		while(i < nPoints) {
			edge = new flash.geom.Point(0,0);
			edge.x = this._points[i].x - this._points[j].x;
			edge.y = this._points[i].y - this._points[j].y;
			temp = edge.y;
			edge.y = -edge.x;
			edge.x = temp;
			com.haxepunk.math._Vector.Vector_Impl_.normalize(edge,1);
			this._axes.push(edge);
			j = i;
			i++;
		}
	}
	,removeDuplicateAxes: function() {
		var i = this._axes.length - 1;
		var j = i - 1;
		while(i > 0) {
			if(Math.abs(this._axes[i].x - this._axes[j].x) < com.haxepunk.masks.Polygon.EPSILON && Math.abs(this._axes[i].y - this._axes[j].y) < com.haxepunk.masks.Polygon.EPSILON || Math.abs(this._axes[j].x + this._axes[i].x) < com.haxepunk.masks.Polygon.EPSILON && Math.abs(this._axes[i].y + this._axes[j].y) < com.haxepunk.masks.Polygon.EPSILON) {
				this._axes.splice(i,1);
				i--;
			}
			j--;
			if(j < 0) {
				i--;
				j = i - 1;
			}
		}
	}
	,updateAxes: function() {
		this.generateAxes();
		this.removeDuplicateAxes();
		this.update();
	}
	,_angle: null
	,_points: null
	,_axes: null
	,_fakeEntity: null
	,_fakeTileHitbox: null
	,__class__: com.haxepunk.masks.Polygon
	,__properties__: $extend(com.haxepunk.masks.Hitbox.prototype.__properties__,{set_points:"set_points",get_points:"get_points",set_angle:"set_angle",get_angle:"get_angle"})
});
com.haxepunk.masks.TileType = $hxClasses["com.haxepunk.masks.TileType"] = { __ename__ : true, __constructs__ : ["Empty","Solid","AboveSlope","BelowSlope","TopLeft","TopRight","BottomLeft","BottomRight"] };
com.haxepunk.masks.TileType.Empty = ["Empty",0];
com.haxepunk.masks.TileType.Empty.toString = $estr;
com.haxepunk.masks.TileType.Empty.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.TileType.Solid = ["Solid",1];
com.haxepunk.masks.TileType.Solid.toString = $estr;
com.haxepunk.masks.TileType.Solid.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.TileType.AboveSlope = ["AboveSlope",2];
com.haxepunk.masks.TileType.AboveSlope.toString = $estr;
com.haxepunk.masks.TileType.AboveSlope.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.TileType.BelowSlope = ["BelowSlope",3];
com.haxepunk.masks.TileType.BelowSlope.toString = $estr;
com.haxepunk.masks.TileType.BelowSlope.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.TileType.TopLeft = ["TopLeft",4];
com.haxepunk.masks.TileType.TopLeft.toString = $estr;
com.haxepunk.masks.TileType.TopLeft.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.TileType.TopRight = ["TopRight",5];
com.haxepunk.masks.TileType.TopRight.toString = $estr;
com.haxepunk.masks.TileType.TopRight.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.TileType.BottomLeft = ["BottomLeft",6];
com.haxepunk.masks.TileType.BottomLeft.toString = $estr;
com.haxepunk.masks.TileType.BottomLeft.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.TileType.BottomRight = ["BottomRight",7];
com.haxepunk.masks.TileType.BottomRight.toString = $estr;
com.haxepunk.masks.TileType.BottomRight.__enum__ = com.haxepunk.masks.TileType;
com.haxepunk.masks.SlopedGrid = function(width,height,tileWidth,tileHeight,x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	com.haxepunk.masks.Hitbox.call(this);
	if(width == 0 || height == 0 || tileWidth == 0 || tileHeight == 0) throw "Illegal Grid, sizes cannot be 0.";
	this._rect = com.haxepunk.HXP.rect;
	this._point = com.haxepunk.HXP.point;
	this._point2 = com.haxepunk.HXP.point2;
	this.columns = width / tileWidth | 0;
	this.rows = height / tileHeight | 0;
	this._tile = new flash.geom.Rectangle(0,0,tileWidth,tileHeight);
	this._x = x;
	this._y = y;
	this._width = width;
	this._height = height;
	this.usePositions = false;
	var key = Type.getClassName(com.haxepunk.Mask);
	this._check.set(key,$bind(this,this.collideMask));
	var key1 = Type.getClassName(com.haxepunk.masks.Hitbox);
	this._check.set(key1,$bind(this,this.collideHitbox));
	this.data = new Array();
	var _g1 = 0;
	var _g = this.rows;
	while(_g1 < _g) {
		var x1 = _g1++;
		this.data.push(new Array());
	}
};
$hxClasses["com.haxepunk.masks.SlopedGrid"] = com.haxepunk.masks.SlopedGrid;
com.haxepunk.masks.SlopedGrid.__name__ = ["com","haxepunk","masks","SlopedGrid"];
com.haxepunk.masks.SlopedGrid.__super__ = com.haxepunk.masks.Hitbox;
com.haxepunk.masks.SlopedGrid.prototype = $extend(com.haxepunk.masks.Hitbox.prototype,{
	usePositions: null
	,collidePoint: function(cx,cy) {
		var px = this._x + this._parent.get_x();
		var py = this._y + this._parent.get_y();
		var column = (cx - px) / this._tile.width | 0;
		var row = (cy - py) / this._tile.height | 0;
		var x = px + column * this._tile.width;
		var y = py + row * this._tile.height;
		var tile = this.getTile(column,row);
		if(tile != null) {
			if(tile.type == com.haxepunk.masks.TileType.Solid) return true; else if(tile.type == com.haxepunk.masks.TileType.AboveSlope || tile.type == com.haxepunk.masks.TileType.BelowSlope) {
				if(this.collidePointInSlope(x,y,cx,cy,tile)) return true;
			}
		}
		return false;
	}
	,collidePointInSlope: function(x1,y1,px,py,tile) {
		y1 += tile.yOffset;
		var yoff = tile.slope * this._tile.width;
		var x2 = x1 + yoff / tile.slope;
		var y2 = y1 + yoff;
		var left = (x2 - x1) * (py - y1) > (y2 - y1) * (px - x1);
		return tile.type == com.haxepunk.masks.TileType.AboveSlope && !left || tile.type == com.haxepunk.masks.TileType.BelowSlope && left;
	}
	,setTile: function(column,row,type,slope,yOffset) {
		if(yOffset == null) yOffset = 0;
		if(slope == null) slope = 0;
		if(row == null) row = 0;
		if(column == null) column = 0;
		if(!(column >= 0 && column < this.columns && row >= 0 && row < this.rows)) return;
		if(type == null) type = com.haxepunk.masks.TileType.Solid;
		if(this.usePositions) {
			column = column / this._tile.width | 0;
			row = row / this._tile.height | 0;
		}
		switch(type[1]) {
		case 4:
			this.data[row][column] = { type : com.haxepunk.masks.TileType.AboveSlope, slope : -1, yOffset : this._tile.height};
			break;
		case 5:
			this.data[row][column] = { type : com.haxepunk.masks.TileType.AboveSlope, slope : 1, yOffset : 0};
			break;
		case 6:
			this.data[row][column] = { type : com.haxepunk.masks.TileType.BelowSlope, slope : 1, yOffset : 0};
			break;
		case 7:
			this.data[row][column] = { type : com.haxepunk.masks.TileType.BelowSlope, slope : -1, yOffset : this._tile.height};
			break;
		default:
			this.data[row][column] = { type : type, slope : slope, yOffset : yOffset * this._tile.height};
		}
	}
	,clearTile: function(column,row) {
		if(row == null) row = 0;
		if(column == null) column = 0;
		this.setTile(column,row,com.haxepunk.masks.TileType.Empty);
	}
	,checkTile: function(column,row) {
		return column >= 0 && column < this.columns && row >= 0 && row < this.rows;
	}
	,getTile: function(column,row) {
		if(row == null) row = 0;
		if(column == null) column = 0;
		if(!(column >= 0 && column < this.columns && row >= 0 && row < this.rows)) return com.haxepunk.masks.SlopedGrid._emptyTile; else {
			if(this.usePositions) {
				column = column / this._tile.width | 0;
				row = row / this._tile.height | 0;
			}
			return this.data[row][column];
		}
	}
	,setRect: function(column,row,width,height,type,slope,yOffset) {
		if(yOffset == null) yOffset = 0;
		if(slope == null) slope = 0;
		if(height == null) height = 1;
		if(width == null) width = 1;
		if(row == null) row = 0;
		if(column == null) column = 0;
		if(type == null) type = com.haxepunk.masks.TileType.Solid;
		if(this.usePositions) {
			column = column / this._tile.width | 0;
			row = row / this._tile.height | 0;
			width = width / this._tile.width | 0;
			height = height / this._tile.height | 0;
		}
		var _g1 = row;
		var _g = row + height;
		while(_g1 < _g) {
			var yy = _g1++;
			var _g3 = column;
			var _g2 = column + width;
			while(_g3 < _g2) {
				var xx = _g3++;
				this.setTile(xx,yy,type,slope,yOffset);
			}
		}
	}
	,clearRect: function(column,row,width,height) {
		if(height == null) height = 1;
		if(width == null) width = 1;
		if(row == null) row = 0;
		if(column == null) column = 0;
		this.setRect(column,row,width,height,com.haxepunk.masks.TileType.Empty);
	}
	,get_tileWidth: function() {
		return this._tile.width | 0;
	}
	,get_tileHeight: function() {
		return this._tile.height | 0;
	}
	,columns: null
	,rows: null
	,data: null
	,collideBox: function(opx,opy,opw,oph,px,py) {
		this._rect.x = opx - px;
		this._rect.y = opy - py;
		var startx = this._rect.x / this._tile.width | 0;
		var starty = this._rect.y / this._tile.height | 0;
		var endx = ((this._rect.x + opw - 1) / this._tile.width | 0) + 1;
		var endy = ((this._rect.y + oph - 1) / this._tile.height | 0) + 1;
		var yy = py + starty * this._tile.height;
		var _g = starty;
		while(_g < endy) {
			var dy = _g++;
			var xx = px + startx * this._tile.width;
			var _g1 = startx;
			while(_g1 < endx) {
				var dx = _g1++;
				var tile = this.getTile(dx,dy);
				if(tile == null) continue;
				var _g2 = tile.type;
				switch(_g2[1]) {
				case 1:
					return true;
				case 3:
					var x = opx;
					var y = opy + oph;
					if(tile.slope < 0) x += opw;
					x = com.haxepunk.HXP.clamp(x,xx,xx + (this._tile.width | 0));
					y = com.haxepunk.HXP.clamp(y,yy,yy + (this._tile.height | 0));
					if(this.collidePointInSlope(xx,yy,x,y,tile)) return true;
					break;
				case 2:
					var x1 = opx;
					var y1 = opy;
					if(tile.slope > 0) x1 += opw;
					x1 = com.haxepunk.HXP.clamp(x1,xx,xx + (this._tile.width | 0));
					y1 = com.haxepunk.HXP.clamp(y1,yy,yy + (this._tile.height | 0));
					if(this.collidePointInSlope(xx,yy,x1,y1,tile)) return true;
					break;
				default:
				}
				xx += this._tile.width;
			}
			yy += this._tile.height;
		}
		return false;
	}
	,collideMask: function(other) {
		var x = this._x + this._parent.get_x();
		var y = this._y + this._parent.get_y();
		return this.collideBox(other._parent.get_x() - other._parent.originX,other._parent.get_y() - other._parent.originY,other._parent.width,other._parent.height,this._parent.get_x() + this._parent.originX,this._parent.get_y() + this._parent.originY);
	}
	,collideHitbox: function(other) {
		var x = this._x + this._parent.get_x();
		var y = this._y + this._parent.get_y();
		var ox = other._x + other._parent.get_x();
		var oy = other._y + other._parent.get_y();
		return this.collideBox(ox,oy,other._width,other._height,x,y);
	}
	,debugDraw: function(graphics,scaleX,scaleY) {
		var cellX;
		var cellY;
		var stepX = (this._tile.width | 0) * scaleX;
		var stepY = (this._tile.height | 0) * scaleY;
		var px = this._x + this._parent.get_x() - com.haxepunk.HXP.camera.x;
		var py = this._y + this._parent.get_y() - com.haxepunk.HXP.camera.y;
		var startx = Math.floor(-px / (this._tile.width | 0));
		var starty = Math.floor(-py / (this._tile.height | 0));
		var destx = startx + 1 + Math.ceil(com.haxepunk.HXP.width / (this._tile.width | 0));
		var desty = starty + 1 + Math.ceil(com.haxepunk.HXP.height / (this._tile.height | 0));
		if(startx > this.columns || starty > this.rows || destx < 0 || desty < 0) return;
		if(startx < 0) startx = 0;
		if(destx > this.columns) destx = this.columns;
		if(starty < 0) starty = 0;
		if(desty > this.rows) desty = this.rows;
		px = (px + startx * (this._tile.width | 0)) * scaleX;
		py = (py + starty * (this._tile.height | 0)) * scaleY;
		var row;
		cellY = py;
		var _g = starty;
		while(_g < desty) {
			var y = _g++;
			cellX = px;
			row = this.data[y];
			var _g1 = startx;
			while(_g1 < destx) {
				var x = _g1++;
				var tile = row[x];
				if(tile == null || tile.type == null) {
				} else if(tile.type == com.haxepunk.masks.TileType.Solid) {
					graphics.lineStyle(1,16777215,0.3);
					graphics.drawRect(cellX,cellY,stepX,stepY);
					if(x < this.columns - 1 && row[x + 1].type == com.haxepunk.masks.TileType.Empty) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX + stepX,cellY);
						graphics.lineTo(cellX + stepX,cellY + stepY);
					}
					if(x > 0 && row[x - 1].type == com.haxepunk.masks.TileType.Empty) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX,cellY);
						graphics.lineTo(cellX,cellY + stepY);
					}
					if(y < this.rows - 1 && this.data[y + 1][x].type == com.haxepunk.masks.TileType.Empty) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX,cellY + stepY);
						graphics.lineTo(cellX + stepX,cellY + stepY);
					}
					if(y > 0 && this.data[y - 1][x].type == com.haxepunk.masks.TileType.Empty) {
						graphics.lineStyle(1,255);
						graphics.moveTo(cellX,cellY);
						graphics.lineTo(cellX + stepX,cellY);
					}
				} else if(tile.type == com.haxepunk.masks.TileType.BelowSlope || tile.type == com.haxepunk.masks.TileType.AboveSlope) {
					var offset = tile.yOffset * scaleY;
					var xpos = cellX;
					var endx = stepX;
					var ypos = cellY + offset;
					var endy = tile.slope * endx;
					if(offset < 0) {
						var fx = -offset / tile.slope;
						endx = stepX - fx;
						xpos = cellX + fx;
						ypos = cellY;
						if(y <= 0 || this.data[y - 1][x].type == com.haxepunk.masks.TileType.Solid) {
							graphics.moveTo(cellX,ypos);
							graphics.lineTo(xpos,ypos);
						}
					} else if(offset > (this._tile.height | 0)) {
						var fx1 = -(offset - (this._tile.width | 0)) / tile.slope;
						endx = stepX - fx1;
						xpos = cellX + fx1;
						ypos = cellY + stepY;
						if(y >= this.rows - 1 || this.data[y + 1][x].type == com.haxepunk.masks.TileType.Solid) {
							graphics.moveTo(cellX,ypos);
							graphics.lineTo(xpos,ypos);
						}
					} else if(offset + endy < 0) {
						var fx2 = -offset / tile.slope;
						endx = fx2;
						if(y <= 0 || this.data[y - 1][x].type == com.haxepunk.masks.TileType.Solid) {
							graphics.moveTo(cellX + fx2,cellY);
							graphics.lineTo(cellX + stepX,cellY);
						}
					} else if(offset + endy > (this._tile.height | 0)) {
						var fx3 = -(offset - (this._tile.width | 0)) / tile.slope;
						endx = fx3;
						if(y >= this.rows - 1 || this.data[y + 1][x].type == com.haxepunk.masks.TileType.Solid) {
							graphics.moveTo(cellX + fx3,cellY + stepY);
							graphics.lineTo(cellX + stepX,cellY + stepY);
						}
					}
					endy = tile.slope * endx;
					graphics.lineStyle(1,255);
					graphics.moveTo(xpos,ypos);
					graphics.lineTo(xpos + endx,ypos + endy);
				}
				cellX += stepX;
			}
			cellY += stepY;
		}
	}
	,_tile: null
	,_rect: null
	,_point: null
	,_point2: null
	,__class__: com.haxepunk.masks.SlopedGrid
	,__properties__: $extend(com.haxepunk.masks.Hitbox.prototype.__properties__,{get_tileHeight:"get_tileHeight",get_tileWidth:"get_tileWidth"})
});
com.haxepunk.math._Vector = {};
com.haxepunk.math._Vector.Vector_Impl_ = function() { };
$hxClasses["com.haxepunk.math._Vector.Vector_Impl_"] = com.haxepunk.math._Vector.Vector_Impl_;
com.haxepunk.math._Vector.Vector_Impl_.__name__ = ["com","haxepunk","math","_Vector","Vector_Impl_"];
com.haxepunk.math._Vector.Vector_Impl_.__properties__ = {get_unit:"get_unit",get_angle:"get_angle",get_length:"get_length",get_squareLength:"get_squareLength",set_y:"set_y",get_y:"get_y",set_x:"set_x",get_x:"get_x"}
com.haxepunk.math._Vector.Vector_Impl_._new = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	return new flash.geom.Point(x,y);
};
com.haxepunk.math._Vector.Vector_Impl_.toPoint = function(this1) {
	return this1;
};
com.haxepunk.math._Vector.Vector_Impl_.fromPoint = function(point) {
	return new flash.geom.Point(point.x,point.y);
};
com.haxepunk.math._Vector.Vector_Impl_.get_x = function(this1) {
	return this1.x;
};
com.haxepunk.math._Vector.Vector_Impl_.set_x = function(this1,value) {
	return this1.x = value;
};
com.haxepunk.math._Vector.Vector_Impl_.get_y = function(this1) {
	return this1.y;
};
com.haxepunk.math._Vector.Vector_Impl_.set_y = function(this1,value) {
	return this1.y = value;
};
com.haxepunk.math._Vector.Vector_Impl_.dot = function(this1,b) {
	return this1.x * b.x + this1.y * b.y;
};
com.haxepunk.math._Vector.Vector_Impl_.cross = function(this1,b) {
	return this1.x * b.x - this1.y * b.y;
};
com.haxepunk.math._Vector.Vector_Impl_.invert = function(this1) {
	this1.x = -this1.x;
	this1.y = -this1.y;
};
com.haxepunk.math._Vector.Vector_Impl_.rotate = function(this1,angle) {
	var sin = Math.sin(angle);
	var cos = Math.cos(angle);
	return new flash.geom.Point(this1.x * cos - this1.y * sin,this1.x * sin + this1.y * cos);
};
com.haxepunk.math._Vector.Vector_Impl_.normalize = function(this1,size) {
	if(size == null) size = 1;
	var len = Math.sqrt(this1.x * this1.x + this1.y * this1.y);
	if(len == 0) {
		var value = this1.y = 0;
		this1.x = value;
	} else {
		this1.x = this1.x / len * size;
		this1.y = this1.y / len * size;
	}
};
com.haxepunk.math._Vector.Vector_Impl_.get_squareLength = function(this1) {
	return this1.x * this1.x + this1.y * this1.y;
};
com.haxepunk.math._Vector.Vector_Impl_.get_length = function(this1) {
	return Math.sqrt(this1.x * this1.x + this1.y * this1.y);
};
com.haxepunk.math._Vector.Vector_Impl_.get_angle = function(this1) {
	return Math.atan2(this1.y,this1.x);
};
com.haxepunk.math._Vector.Vector_Impl_.get_unit = function(this1) {
	var len = Math.sqrt(this1.x * this1.x + this1.y * this1.y);
	return new flash.geom.Point(this1.x / len,this1.y / len);
};
com.haxepunk.math._Vector.Vector_Impl_.add = function(a,b) {
	return new flash.geom.Point(a.x + b.x,a.y + b.y);
};
com.haxepunk.math._Vector.Vector_Impl_.sub = function(a,b) {
	return new flash.geom.Point(a.x - b.x,a.y - b.y);
};
com.haxepunk.math._Vector.Vector_Impl_.scalar_mult = function(a,b) {
	return new flash.geom.Point(a.x * b,a.y * b);
};
com.haxepunk.math._Vector.Vector_Impl_.scalar_divide = function(a,b) {
	return new flash.geom.Point(a.x / b,a.y / b);
};
flash.events.Event = function(type,bubbles,cancelable) {
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	this.type = type;
	this.bubbles = bubbles;
	this.cancelable = cancelable;
};
$hxClasses["flash.events.Event"] = flash.events.Event;
flash.events.Event.__name__ = ["flash","events","Event"];
flash.events.Event.prototype = {
	_target: null
	,_current: null
	,get_target: function() {
		return this._target || this.target;
	}
	,set_target: function(v) {
		return this._target = v;
	}
	,get_currentTarget: function() {
		return this._current || this.currentTarget;
	}
	,set_currentTarget: function(v) {
		return this._current = v;
	}
	,type: null
	,timeStamp: null
	,bubbles: null
	,cancelBubble: null
	,cancelable: null
	,defaultPrevented: null
	,preventDefault: function() {
		this.defaultPrevented = true;
	}
	,isDefaultPrevented: function() {
		return this.defaultPrevented;
	}
	,clone: function() {
		return new flash.events.Event(this.type,this.bubbles,this.cancelable);
	}
	,__class__: flash.events.Event
	,__properties__: {set_currentTarget:"set_currentTarget",get_currentTarget:"get_currentTarget",set_target:"set_target",get_target:"get_target"}
};
com.haxepunk.tweens = {};
com.haxepunk.tweens.TweenEvent = function(type,bubbles,cancelable) {
	flash.events.Event.call(this,type,bubbles,cancelable);
};
$hxClasses["com.haxepunk.tweens.TweenEvent"] = com.haxepunk.tweens.TweenEvent;
com.haxepunk.tweens.TweenEvent.__name__ = ["com","haxepunk","tweens","TweenEvent"];
com.haxepunk.tweens.TweenEvent.__super__ = flash.events.Event;
com.haxepunk.tweens.TweenEvent.prototype = $extend(flash.events.Event.prototype,{
	__class__: com.haxepunk.tweens.TweenEvent
});
com.haxepunk.tweens.misc = {};
com.haxepunk.tweens.misc.Alarm = function(duration,complete,type) {
	com.haxepunk.Tween.call(this,duration,type,complete,null);
};
$hxClasses["com.haxepunk.tweens.misc.Alarm"] = com.haxepunk.tweens.misc.Alarm;
com.haxepunk.tweens.misc.Alarm.__name__ = ["com","haxepunk","tweens","misc","Alarm"];
com.haxepunk.tweens.misc.Alarm.__super__ = com.haxepunk.Tween;
com.haxepunk.tweens.misc.Alarm.prototype = $extend(com.haxepunk.Tween.prototype,{
	reset: function(duration) {
		this._target = duration;
		this.start();
	}
	,get_elapsed: function() {
		return this._time;
	}
	,get_duration: function() {
		return this._target;
	}
	,get_remaining: function() {
		return this._target - this._time;
	}
	,__class__: com.haxepunk.tweens.misc.Alarm
	,__properties__: $extend(com.haxepunk.Tween.prototype.__properties__,{get_remaining:"get_remaining",get_duration:"get_duration",get_elapsed:"get_elapsed"})
});
com.haxepunk.tweens.misc.MultiVarTween = function(complete,type) {
	this._vars = new Array();
	this._start = new Array();
	this._range = new Array();
	com.haxepunk.Tween.call(this,0,type,complete);
};
$hxClasses["com.haxepunk.tweens.misc.MultiVarTween"] = com.haxepunk.tweens.misc.MultiVarTween;
com.haxepunk.tweens.misc.MultiVarTween.__name__ = ["com","haxepunk","tweens","misc","MultiVarTween"];
com.haxepunk.tweens.misc.MultiVarTween.__super__ = com.haxepunk.Tween;
com.haxepunk.tweens.misc.MultiVarTween.prototype = $extend(com.haxepunk.Tween.prototype,{
	tween: function(object,properties,duration,ease) {
		this._object = object;
		this._vars.length = 0;
		this._start.length = 0;
		this._range.length = 0;
		this._target = duration;
		this._ease = ease;
		var p;
		var fields = null;
		if(Reflect.isObject(properties)) fields = Reflect.fields(properties); else throw "Unsupported MultiVar properties container - use Object containing key/value pairs.";
		var _g = 0;
		while(_g < fields.length) {
			var p1 = fields[_g];
			++_g;
			var a = Reflect.getProperty(object,p1);
			if(Math.isNaN(a)) throw "The property \"" + p1 + "\" is not numeric.";
			this._vars.push(p1);
			this._start.push(a);
			this._range.push(Reflect.field(properties,p1) - a);
		}
		this.start();
	}
	,update: function() {
		com.haxepunk.Tween.prototype.update.call(this);
		var i = this._vars.length;
		while(i-- > 0) Reflect.setProperty(this._object,this._vars[i],this._start[i] + this._range[i] * this._t);
	}
	,_object: null
	,_vars: null
	,_start: null
	,_range: null
	,__class__: com.haxepunk.tweens.misc.MultiVarTween
});
com.haxepunk.utils = {};
com.haxepunk.utils.Draw = function() { };
$hxClasses["com.haxepunk.utils.Draw"] = com.haxepunk.utils.Draw;
com.haxepunk.utils.Draw.__name__ = ["com","haxepunk","utils","Draw"];
com.haxepunk.utils.Draw.init = function() {
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.HARDWARE) {
		var sprite = new flash.display.Sprite();
		com.haxepunk.HXP.stage.addChild(sprite);
		com.haxepunk.utils.Draw._graphics = sprite.get_graphics();
	} else com.haxepunk.utils.Draw._graphics = com.haxepunk.HXP.sprite.get_graphics();
	com.haxepunk.utils.Draw._rect = com.haxepunk.HXP.rect;
};
com.haxepunk.utils.Draw.setTarget = function(target,camera,blend) {
	com.haxepunk.utils.Draw._target = target;
	if(camera != null) com.haxepunk.utils.Draw._camera = camera; else com.haxepunk.utils.Draw._camera = com.haxepunk.HXP.zero;
	com.haxepunk.utils.Draw.blend = blend;
};
com.haxepunk.utils.Draw.resetTarget = function() {
	com.haxepunk.utils.Draw._target = com.haxepunk.HXP.buffer;
	com.haxepunk.utils.Draw._camera = com.haxepunk.HXP.camera;
	com.haxepunk.utils.Draw.blend = null;
	com.haxepunk.utils.Draw._graphics.clear();
};
com.haxepunk.utils.Draw.drawToScreen = function() {
	if(com.haxepunk.utils.Draw.blend == null) com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite); else com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite,null,null,com.haxepunk.utils.Draw.blend);
};
com.haxepunk.utils.Draw.line = function(x1,y1,x2,y2,color) {
	if(color == null) color = 16777215;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		color = -16777216 | 16777215 & color;
		var screen = com.haxepunk.utils.Draw._target;
		var X = Math.abs(x2 - x1);
		var Y = Math.abs(y2 - y1);
		var xx;
		var yy;
		x1 -= com.haxepunk.utils.Draw._camera.x | 0;
		y1 -= com.haxepunk.utils.Draw._camera.y | 0;
		x2 -= com.haxepunk.utils.Draw._camera.x | 0;
		y2 -= com.haxepunk.utils.Draw._camera.y | 0;
		if(X == 0) {
			if(Y == 0) {
				screen.setPixel32(x1,y1,color);
				return;
			}
			if(y2 > y1) yy = 1; else yy = -1;
			while(y1 != y2) {
				screen.setPixel32(x1,y1,color);
				y1 += yy;
			}
			screen.setPixel32(x2,y2,color);
			return;
		}
		if(Y == 0) {
			if(x2 > x1) xx = 1; else xx = -1;
			while(x1 != x2) {
				screen.setPixel32(x1,y1,color);
				x1 += xx;
			}
			screen.setPixel32(x2,y2,color);
			return;
		}
		if(x2 > x1) xx = 1; else xx = -1;
		if(y2 > y1) yy = 1; else yy = -1;
		var c = 0;
		var slope;
		if(X > Y) {
			slope = Y / X;
			c = .5;
			while(x1 != x2) {
				screen.setPixel32(x1,y1,color);
				x1 += xx;
				c += slope;
				if(c >= 1) {
					y1 += yy;
					c -= 1;
				}
			}
			screen.setPixel32(x2,y2,color);
		} else {
			slope = X / Y;
			c = .5;
			while(y1 != y2) {
				screen.setPixel32(x1,y1,color);
				y1 += yy;
				c += slope;
				if(c >= 1) {
					x1 += xx;
					c -= 1;
				}
			}
			screen.setPixel32(x2,y2,color);
		}
	} else com.haxepunk.utils.Draw.linePlus(x1,y1,x2,y2,color);
};
com.haxepunk.utils.Draw.linePlus = function(x1,y1,x2,y2,color,alpha,thick) {
	if(thick == null) thick = 1;
	if(alpha == null) alpha = 1;
	if(color == null) color = -16777216;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		com.haxepunk.utils.Draw._graphics.clear();
		com.haxepunk.utils.Draw._graphics.lineStyle(thick,color,alpha,false,flash.display.LineScaleMode.NONE);
		com.haxepunk.utils.Draw._graphics.moveTo(x1 - com.haxepunk.utils.Draw._camera.x,y1 - com.haxepunk.utils.Draw._camera.y);
		com.haxepunk.utils.Draw._graphics.lineTo(x2 - com.haxepunk.utils.Draw._camera.x,y2 - com.haxepunk.utils.Draw._camera.y);
		if(com.haxepunk.utils.Draw.blend == null) com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite); else com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite,null,null,com.haxepunk.utils.Draw.blend);
	} else {
		com.haxepunk.utils.Draw._graphics.lineStyle(thick,color,alpha,false,flash.display.LineScaleMode.NONE);
		com.haxepunk.utils.Draw._graphics.moveTo(x1 - com.haxepunk.utils.Draw._camera.x,y1 - com.haxepunk.utils.Draw._camera.y);
		com.haxepunk.utils.Draw._graphics.lineTo(x2 - com.haxepunk.utils.Draw._camera.x,y2 - com.haxepunk.utils.Draw._camera.y);
		com.haxepunk.utils.Draw._graphics.lineStyle(0);
	}
};
com.haxepunk.utils.Draw.rect = function(x,y,width,height,color,alpha) {
	if(alpha == null) alpha = 1;
	if(color == null) color = 16777215;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		if(alpha >= 1 && com.haxepunk.utils.Draw.blend == null) {
			color = -16777216 | 16777215 & color;
			com.haxepunk.utils.Draw._rect.x = x - com.haxepunk.utils.Draw._camera.x;
			com.haxepunk.utils.Draw._rect.y = y - com.haxepunk.utils.Draw._camera.y;
			com.haxepunk.utils.Draw._rect.width = width;
			com.haxepunk.utils.Draw._rect.height = height;
			com.haxepunk.utils.Draw._target.fillRect(com.haxepunk.utils.Draw._rect,color);
			return;
		}
		com.haxepunk.utils.Draw._graphics.clear();
		com.haxepunk.utils.Draw._graphics.beginFill(color,alpha);
		com.haxepunk.utils.Draw._graphics.drawRect(x - com.haxepunk.utils.Draw._camera.x,y - com.haxepunk.utils.Draw._camera.y,width,height);
		if(com.haxepunk.utils.Draw.blend == null) com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite); else com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite,null,null,com.haxepunk.utils.Draw.blend);
	} else {
		com.haxepunk.utils.Draw._graphics.beginFill(color,alpha);
		com.haxepunk.utils.Draw._graphics.drawRect(x - com.haxepunk.utils.Draw._camera.x,y - com.haxepunk.utils.Draw._camera.y,width,height);
		com.haxepunk.utils.Draw._graphics.endFill();
	}
};
com.haxepunk.utils.Draw.rectPlus = function(x,y,width,height,color,alpha,fill,thick) {
	if(thick == null) thick = 1;
	if(fill == null) fill = true;
	if(alpha == null) alpha = 1;
	if(color == null) color = 16777215;
	color = 16777215 & color;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) com.haxepunk.utils.Draw._graphics.clear();
	if(fill) com.haxepunk.utils.Draw._graphics.beginFill(color,alpha); else com.haxepunk.utils.Draw._graphics.lineStyle(thick,color,alpha);
	com.haxepunk.utils.Draw._graphics.drawRect(x - com.haxepunk.utils.Draw._camera.x,y - com.haxepunk.utils.Draw._camera.y,width,height);
	com.haxepunk.utils.Draw._graphics.endFill();
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		if(com.haxepunk.utils.Draw.blend == null) com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite); else com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite,null,null,com.haxepunk.utils.Draw.blend);
	} else com.haxepunk.utils.Draw._graphics.lineStyle(0);
};
com.haxepunk.utils.Draw.circle = function(x,y,radius,color) {
	if(color == null) color = 16777215;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		color = -16777216 | 16777215 & color;
		x -= com.haxepunk.utils.Draw._camera.x | 0;
		y -= com.haxepunk.utils.Draw._camera.y | 0;
		var f = 1 - radius;
		var fx = 1;
		var fy = -2 * radius;
		var xx = 0;
		var yy = radius;
		com.haxepunk.utils.Draw._target.setPixel32(x,y + radius,color);
		com.haxepunk.utils.Draw._target.setPixel32(x,y - radius,color);
		com.haxepunk.utils.Draw._target.setPixel32(x + radius,y,color);
		com.haxepunk.utils.Draw._target.setPixel32(x - radius,y,color);
		while(xx < yy) {
			if(f >= 0) {
				yy--;
				fy += 2;
				f += fy;
			}
			xx++;
			fx += 2;
			f += fx;
			com.haxepunk.utils.Draw._target.setPixel32(x + xx,y + yy,color);
			com.haxepunk.utils.Draw._target.setPixel32(x - xx,y + yy,color);
			com.haxepunk.utils.Draw._target.setPixel32(x + xx,y - yy,color);
			com.haxepunk.utils.Draw._target.setPixel32(x - xx,y - yy,color);
			com.haxepunk.utils.Draw._target.setPixel32(x + yy,y + xx,color);
			com.haxepunk.utils.Draw._target.setPixel32(x - yy,y + xx,color);
			com.haxepunk.utils.Draw._target.setPixel32(x + yy,y - xx,color);
			com.haxepunk.utils.Draw._target.setPixel32(x - yy,y - xx,color);
		}
	} else com.haxepunk.utils.Draw.circlePlus(x,y,radius,color,1.0,false);
};
com.haxepunk.utils.Draw.circlePlus = function(x,y,radius,color,alpha,fill,thick) {
	if(thick == null) thick = 1;
	if(fill == null) fill = true;
	if(alpha == null) alpha = 1;
	if(color == null) color = 16777215;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		com.haxepunk.utils.Draw._graphics.clear();
		if(fill) {
			com.haxepunk.utils.Draw._graphics.beginFill(color & 16777215,alpha);
			com.haxepunk.utils.Draw._graphics.drawCircle(x - com.haxepunk.utils.Draw._camera.x,y - com.haxepunk.utils.Draw._camera.y,radius);
			com.haxepunk.utils.Draw._graphics.endFill();
		} else {
			com.haxepunk.utils.Draw._graphics.lineStyle(thick,color & 16777215,alpha);
			com.haxepunk.utils.Draw._graphics.drawCircle(x - com.haxepunk.utils.Draw._camera.x,y - com.haxepunk.utils.Draw._camera.y,radius);
		}
		if(com.haxepunk.utils.Draw.blend == null) com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite); else com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite,null,null,com.haxepunk.utils.Draw.blend);
	} else if(fill) {
		com.haxepunk.utils.Draw._graphics.beginFill(color & 16777215,alpha);
		com.haxepunk.utils.Draw._graphics.drawCircle(x - com.haxepunk.utils.Draw._camera.x,y - com.haxepunk.utils.Draw._camera.y,radius);
		com.haxepunk.utils.Draw._graphics.endFill();
	} else {
		com.haxepunk.utils.Draw._graphics.lineStyle(thick,color & 16777215,alpha);
		com.haxepunk.utils.Draw._graphics.drawCircle(x - com.haxepunk.utils.Draw._camera.x,y - com.haxepunk.utils.Draw._camera.y,radius);
		com.haxepunk.utils.Draw._graphics.lineStyle(0);
	}
};
com.haxepunk.utils.Draw.hitbox = function(e,outline,color,alpha) {
	if(alpha == null) alpha = 1;
	if(color == null) color = 16777215;
	if(outline == null) outline = true;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		if(outline) {
			color = -16777216 | 16777215 & color;
			var x;
			x = (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX - com.haxepunk.utils.Draw._camera.x | 0;
			var y;
			y = (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY - com.haxepunk.utils.Draw._camera.y | 0;
			com.haxepunk.utils.Draw._rect.x = x;
			com.haxepunk.utils.Draw._rect.y = y;
			com.haxepunk.utils.Draw._rect.width = e.width;
			com.haxepunk.utils.Draw._rect.height = 1;
			com.haxepunk.utils.Draw._target.fillRect(com.haxepunk.utils.Draw._rect,color);
			com.haxepunk.utils.Draw._rect.y += e.height - 1;
			com.haxepunk.utils.Draw._target.fillRect(com.haxepunk.utils.Draw._rect,color);
			com.haxepunk.utils.Draw._rect.y = y;
			com.haxepunk.utils.Draw._rect.width = 1;
			com.haxepunk.utils.Draw._rect.height = e.height;
			com.haxepunk.utils.Draw._target.fillRect(com.haxepunk.utils.Draw._rect,color);
			com.haxepunk.utils.Draw._rect.x += e.width - 1;
			com.haxepunk.utils.Draw._target.fillRect(com.haxepunk.utils.Draw._rect,color);
			return;
		}
		if(alpha >= 1 && com.haxepunk.utils.Draw.blend == null) {
			color = -16777216 | 16777215 & color;
			com.haxepunk.utils.Draw._rect.x = (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX - com.haxepunk.utils.Draw._camera.x;
			com.haxepunk.utils.Draw._rect.y = (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY - com.haxepunk.utils.Draw._camera.y;
			com.haxepunk.utils.Draw._rect.width = e.width;
			com.haxepunk.utils.Draw._rect.height = e.height;
			com.haxepunk.utils.Draw._target.fillRect(com.haxepunk.utils.Draw._rect,color);
			return;
		}
		com.haxepunk.utils.Draw._graphics.clear();
		com.haxepunk.utils.Draw._graphics.beginFill(color,alpha);
		com.haxepunk.utils.Draw._graphics.drawRect((e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX - com.haxepunk.utils.Draw._camera.x,(e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY - com.haxepunk.utils.Draw._camera.y,e.width,e.height);
		if(com.haxepunk.utils.Draw.blend == null) com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite); else com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite,null,null,com.haxepunk.utils.Draw.blend);
	} else {
		com.haxepunk.utils.Draw._graphics.beginFill(color,alpha);
		com.haxepunk.utils.Draw._graphics.drawRect((e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) - e.originX - com.haxepunk.utils.Draw._camera.x,(e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) - e.originY - com.haxepunk.utils.Draw._camera.y,e.width,e.height);
		com.haxepunk.utils.Draw._graphics.endFill();
	}
};
com.haxepunk.utils.Draw.curve = function(x1,y1,x2,y2,x3,y3,thick,color,alpha) {
	if(alpha == null) alpha = 1;
	if(color == null) color = 0;
	if(thick == null) thick = 1;
	if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) {
		com.haxepunk.utils.Draw._graphics.clear();
		com.haxepunk.utils.Draw._graphics.lineStyle(thick,color,alpha);
		com.haxepunk.utils.Draw._graphics.moveTo(x1 - com.haxepunk.utils.Draw._camera.x,y1 - com.haxepunk.utils.Draw._camera.y);
		com.haxepunk.utils.Draw._graphics.curveTo(x2 - com.haxepunk.utils.Draw._camera.x,y2 - com.haxepunk.utils.Draw._camera.y,x3 - com.haxepunk.utils.Draw._camera.x,y3 - com.haxepunk.utils.Draw._camera.y);
		if(com.haxepunk.utils.Draw.blend == null) com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite); else com.haxepunk.utils.Draw._target.draw(com.haxepunk.HXP.sprite,null,null,com.haxepunk.utils.Draw.blend);
	} else {
		com.haxepunk.utils.Draw._graphics.lineStyle(thick,color,alpha);
		com.haxepunk.utils.Draw._graphics.moveTo(x1 - com.haxepunk.utils.Draw._camera.x,y1 - com.haxepunk.utils.Draw._camera.y);
		com.haxepunk.utils.Draw._graphics.curveTo(x2 - com.haxepunk.utils.Draw._camera.x,y2 - com.haxepunk.utils.Draw._camera.y,x3 - com.haxepunk.utils.Draw._camera.x,y3 - com.haxepunk.utils.Draw._camera.y);
		com.haxepunk.utils.Draw._graphics.lineStyle(0);
	}
};
com.haxepunk.utils.Draw.graphic = function(g,x,y,layer) {
	if(layer == null) layer = 0;
	if(y == null) y = 0;
	if(x == null) x = 0;
	if(g._visible) {
		if(g.relative) {
			com.haxepunk.HXP.point.x = x;
			com.haxepunk.HXP.point.y = y;
		} else com.haxepunk.HXP.point.x = com.haxepunk.HXP.point.y = 0;
		com.haxepunk.HXP.point2.x = com.haxepunk.HXP.camera.x;
		com.haxepunk.HXP.point2.y = com.haxepunk.HXP.camera.y;
		if(com.haxepunk.HXP.renderMode == com.haxepunk.RenderMode.BUFFER) g.render(com.haxepunk.utils.Draw._target,com.haxepunk.HXP.point,com.haxepunk.HXP.point2); else g.renderAtlas(layer,com.haxepunk.HXP.point,com.haxepunk.HXP.point2);
	}
};
com.haxepunk.utils.Draw.entity = function(e,x,y,addEntityPosition) {
	if(addEntityPosition == null) addEntityPosition = false;
	if(y == null) y = 0;
	if(x == null) x = 0;
	if(e.visible && e._graphic != null) {
		if(addEntityPosition) com.haxepunk.utils.Draw.graphic(e._graphic,x + (e.followCamera?e.x + com.haxepunk.HXP.camera.x:e.x) | 0,y + (e.followCamera?e.y + com.haxepunk.HXP.camera.y:e.y) | 0); else com.haxepunk.utils.Draw.graphic(e._graphic,x,y);
	}
};
com.haxepunk.utils.Draw.text = function(text,x,y,options) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	var textGfx = new com.haxepunk.graphics.Text(text,x,y,0,0,options);
	textGfx.render(com.haxepunk.utils.Draw._target,com.haxepunk.HXP.zero,com.haxepunk.utils.Draw._camera);
};
com.haxepunk.utils.Ease = function() { };
$hxClasses["com.haxepunk.utils.Ease"] = com.haxepunk.utils.Ease;
com.haxepunk.utils.Ease.__name__ = ["com","haxepunk","utils","Ease"];
com.haxepunk.utils.Ease.__properties__ = {get_EL:"get_EL",get_PI2:"get_PI2",get_PI:"get_PI"}
com.haxepunk.utils.Ease.quadIn = function(t) {
	return t * t;
};
com.haxepunk.utils.Ease.quadOut = function(t) {
	return -t * (t - 2);
};
com.haxepunk.utils.Ease.quadInOut = function(t) {
	if(t <= .5) return t * t * 2; else return 1 - --t * t * 2;
};
com.haxepunk.utils.Ease.cubeIn = function(t) {
	return t * t * t;
};
com.haxepunk.utils.Ease.cubeOut = function(t) {
	return 1 + --t * t * t;
};
com.haxepunk.utils.Ease.cubeInOut = function(t) {
	if(t <= .5) return t * t * t * 4; else return 1 + --t * t * t * 4;
};
com.haxepunk.utils.Ease.quartIn = function(t) {
	return t * t * t * t;
};
com.haxepunk.utils.Ease.quartOut = function(t) {
	return 1 - (t -= 1) * t * t * t;
};
com.haxepunk.utils.Ease.quartInOut = function(t) {
	if(t <= .5) return t * t * t * t * 8; else return (1 - (t = t * 2 - 2) * t * t * t) / 2 + .5;
};
com.haxepunk.utils.Ease.quintIn = function(t) {
	return t * t * t * t * t;
};
com.haxepunk.utils.Ease.quintOut = function(t) {
	return (t = t - 1) * t * t * t * t + 1;
};
com.haxepunk.utils.Ease.quintInOut = function(t) {
	if((t *= 2) < 1) return t * t * t * t * t / 2; else return ((t -= 2) * t * t * t * t + 2) / 2;
};
com.haxepunk.utils.Ease.sineIn = function(t) {
	return -Math.cos(com.haxepunk.utils.Ease.get_PI2() * t) + 1;
};
com.haxepunk.utils.Ease.sineOut = function(t) {
	return Math.sin(com.haxepunk.utils.Ease.get_PI2() * t);
};
com.haxepunk.utils.Ease.sineInOut = function(t) {
	return -Math.cos(com.haxepunk.utils.Ease.get_PI() * t) / 2 + .5;
};
com.haxepunk.utils.Ease.bounceIn = function(t) {
	t = 1 - t;
	if(t < 0.36363636363636365) return 1 - 7.5625 * t * t;
	if(t < 0.72727272727272729) return 1 - (7.5625 * (t - 0.54545454545454541) * (t - 0.54545454545454541) + .75);
	if(t < 0.90909090909090906) return 1 - (7.5625 * (t - 0.81818181818181823) * (t - 0.81818181818181823) + .9375);
	return 1 - (7.5625 * (t - 0.95454545454545459) * (t - 0.95454545454545459) + .984375);
};
com.haxepunk.utils.Ease.bounceOut = function(t) {
	if(t < 0.36363636363636365) return 7.5625 * t * t;
	if(t < 0.72727272727272729) return 7.5625 * (t - 0.54545454545454541) * (t - 0.54545454545454541) + .75;
	if(t < 0.90909090909090906) return 7.5625 * (t - 0.81818181818181823) * (t - 0.81818181818181823) + .9375;
	return 7.5625 * (t - 0.95454545454545459) * (t - 0.95454545454545459) + .984375;
};
com.haxepunk.utils.Ease.bounceInOut = function(t) {
	if(t < .5) {
		t = 1 - t * 2;
		if(t < 0.36363636363636365) return (1 - 7.5625 * t * t) / 2;
		if(t < 0.72727272727272729) return (1 - (7.5625 * (t - 0.54545454545454541) * (t - 0.54545454545454541) + .75)) / 2;
		if(t < 0.90909090909090906) return (1 - (7.5625 * (t - 0.81818181818181823) * (t - 0.81818181818181823) + .9375)) / 2;
		return (1 - (7.5625 * (t - 0.95454545454545459) * (t - 0.95454545454545459) + .984375)) / 2;
	}
	t = t * 2 - 1;
	if(t < 0.36363636363636365) return 7.5625 * t * t / 2 + .5;
	if(t < 0.72727272727272729) return (7.5625 * (t - 0.54545454545454541) * (t - 0.54545454545454541) + .75) / 2 + .5;
	if(t < 0.90909090909090906) return (7.5625 * (t - 0.81818181818181823) * (t - 0.81818181818181823) + .9375) / 2 + .5;
	return (7.5625 * (t - 0.95454545454545459) * (t - 0.95454545454545459) + .984375) / 2 + .5;
};
com.haxepunk.utils.Ease.circIn = function(t) {
	return -(Math.sqrt(1 - t * t) - 1);
};
com.haxepunk.utils.Ease.circOut = function(t) {
	return Math.sqrt(1 - (t - 1) * (t - 1));
};
com.haxepunk.utils.Ease.circInOut = function(t) {
	if(t <= .5) return (Math.sqrt(1 - t * t * 4) - 1) / -2; else return (Math.sqrt(1 - (t * 2 - 2) * (t * 2 - 2)) + 1) / 2;
};
com.haxepunk.utils.Ease.expoIn = function(t) {
	return Math.pow(2,10 * (t - 1));
};
com.haxepunk.utils.Ease.expoOut = function(t) {
	return -Math.pow(2,-10 * t) + 1;
};
com.haxepunk.utils.Ease.expoInOut = function(t) {
	if(t < .5) return Math.pow(2,10 * (t * 2 - 1)) / 2; else return (-Math.pow(2,-10 * (t * 2 - 1)) + 2) / 2;
};
com.haxepunk.utils.Ease.backIn = function(t) {
	return t * t * (2.70158 * t - 1.70158);
};
com.haxepunk.utils.Ease.backOut = function(t) {
	return 1 - --t * t * (-2.70158 * t - 1.70158);
};
com.haxepunk.utils.Ease.backInOut = function(t) {
	t *= 2;
	if(t < 1) return t * t * (2.70158 * t - 1.70158) / 2;
	t--;
	return (1 - --t * t * (-2.70158 * t - 1.70158)) / 2 + .5;
};
com.haxepunk.utils.Ease.get_PI = function() {
	return Math.PI;
};
com.haxepunk.utils.Ease.get_PI2 = function() {
	return Math.PI / 2;
};
com.haxepunk.utils.Ease.get_EL = function() {
	return 2 * com.haxepunk.utils.Ease.get_PI() / 0.45;
};
com.haxepunk.utils.GestureType = function() {
	this.released = false;
	this.pressed = false;
	this.active = false;
	this.time = 0;
	this.magnitude = 0;
	this.y2 = 0;
	this.x2 = 0;
	this.y = 0;
	this.x = 0;
	this.reset();
};
$hxClasses["com.haxepunk.utils.GestureType"] = com.haxepunk.utils.GestureType;
com.haxepunk.utils.GestureType.__name__ = ["com","haxepunk","utils","GestureType"];
com.haxepunk.utils.GestureType.prototype = {
	x: null
	,y: null
	,x2: null
	,y2: null
	,magnitude: null
	,time: null
	,active: null
	,pressed: null
	,released: null
	,reset: function() {
		this.x = this.y = this.x2 = this.y2 = this.time = 0;
		this.active = this.pressed = this.released = false;
	}
	,start: function(x,y) {
		if(y == null) y = 0;
		if(x == null) x = 0;
		this.active = this.pressed = true;
		this.x = x;
		this.y = y;
		this.x2 = this.y2 = this.magnitude = 0;
		this.time = 0;
	}
	,get_distance: function() {
		return com.haxepunk.HXP.distance(this.x,this.y,this.x2,this.y2);
	}
	,get_velocity: function() {
		if(this.time == 0) return 0; else return this.get_distance() / this.time;
	}
	,get_angle: function() {
		return 0;
	}
	,release: function() {
		this.released = true;
	}
	,update: function() {
		if(this.pressed) this.pressed = false; else if(this.released) this.reset(); else if(this.active) this.time += com.haxepunk.HXP.elapsed;
	}
	,__class__: com.haxepunk.utils.GestureType
	,__properties__: {get_angle:"get_angle",get_velocity:"get_velocity",get_distance:"get_distance"}
};
com.haxepunk.utils.GestureMode = $hxClasses["com.haxepunk.utils.GestureMode"] = { __ename__ : true, __constructs__ : ["READY","SINGLE_TOUCH","SINGLE_MOVE","MULTI_TOUCH","MULTI_MOVE","FINISHED"] };
com.haxepunk.utils.GestureMode.READY = ["READY",0];
com.haxepunk.utils.GestureMode.READY.toString = $estr;
com.haxepunk.utils.GestureMode.READY.__enum__ = com.haxepunk.utils.GestureMode;
com.haxepunk.utils.GestureMode.SINGLE_TOUCH = ["SINGLE_TOUCH",1];
com.haxepunk.utils.GestureMode.SINGLE_TOUCH.toString = $estr;
com.haxepunk.utils.GestureMode.SINGLE_TOUCH.__enum__ = com.haxepunk.utils.GestureMode;
com.haxepunk.utils.GestureMode.SINGLE_MOVE = ["SINGLE_MOVE",2];
com.haxepunk.utils.GestureMode.SINGLE_MOVE.toString = $estr;
com.haxepunk.utils.GestureMode.SINGLE_MOVE.__enum__ = com.haxepunk.utils.GestureMode;
com.haxepunk.utils.GestureMode.MULTI_TOUCH = ["MULTI_TOUCH",3];
com.haxepunk.utils.GestureMode.MULTI_TOUCH.toString = $estr;
com.haxepunk.utils.GestureMode.MULTI_TOUCH.__enum__ = com.haxepunk.utils.GestureMode;
com.haxepunk.utils.GestureMode.MULTI_MOVE = ["MULTI_MOVE",4];
com.haxepunk.utils.GestureMode.MULTI_MOVE.toString = $estr;
com.haxepunk.utils.GestureMode.MULTI_MOVE.__enum__ = com.haxepunk.utils.GestureMode;
com.haxepunk.utils.GestureMode.FINISHED = ["FINISHED",5];
com.haxepunk.utils.GestureMode.FINISHED.toString = $estr;
com.haxepunk.utils.GestureMode.FINISHED.__enum__ = com.haxepunk.utils.GestureMode;
com.haxepunk.utils.Gesture = function() { };
$hxClasses["com.haxepunk.utils.Gesture"] = com.haxepunk.utils.Gesture;
com.haxepunk.utils.Gesture.__name__ = ["com","haxepunk","utils","Gesture"];
com.haxepunk.utils.Gesture.enable = function() {
	com.haxepunk.utils.Gesture.enabled = true;
	com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.READY;
};
com.haxepunk.utils.Gesture.disable = function() {
	com.haxepunk.utils.Gesture.enabled = false;
};
com.haxepunk.utils.Gesture.getTouch = function(touches,touchOrder,n) {
	if(n >= touchOrder.length) return null;
	return touches.get(touchOrder[n]);
};
com.haxepunk.utils.Gesture.check = function(gestureType) {
	if(!com.haxepunk.utils.Gesture.gestures.exists(gestureType)) return false;
	return com.haxepunk.utils.Gesture.gestures.get(gestureType).active;
};
com.haxepunk.utils.Gesture.pressed = function(gestureType) {
	if(!com.haxepunk.utils.Gesture.gestures.exists(gestureType)) return false;
	return com.haxepunk.utils.Gesture.gestures.get(gestureType).pressed;
};
com.haxepunk.utils.Gesture.released = function(gestureType) {
	if(!com.haxepunk.utils.Gesture.gestures.exists(gestureType)) return false;
	return com.haxepunk.utils.Gesture.gestures.get(gestureType).released;
};
com.haxepunk.utils.Gesture.get = function(gestureType) {
	if(!com.haxepunk.utils.Gesture.check(gestureType)) return null;
	return com.haxepunk.utils.Gesture.gestures.get(gestureType);
};
com.haxepunk.utils.Gesture.start = function(gestureType,x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	if(!com.haxepunk.utils.Gesture.gestures.exists(gestureType)) {
		var v = new com.haxepunk.utils.GestureType();
		com.haxepunk.utils.Gesture.gestures.set(gestureType,v);
		v;
	}
	if(!com.haxepunk.utils.Gesture.gestures.get(gestureType).active) com.haxepunk.utils.Gesture.gestures.get(gestureType).start(x,y);
};
com.haxepunk.utils.Gesture.finish = function(gestureType) {
	if(!com.haxepunk.utils.Gesture.gestures.exists(gestureType)) {
		var v = new com.haxepunk.utils.GestureType();
		com.haxepunk.utils.Gesture.gestures.set(gestureType,v);
		v;
	}
	com.haxepunk.utils.Gesture.gestures.get(gestureType).release();
};
com.haxepunk.utils.Gesture.finishAll = function() {
	var $it0 = com.haxepunk.utils.Gesture.gestures.iterator();
	while( $it0.hasNext() ) {
		var gesture = $it0.next();
		if(gesture.active) gesture.release();
	}
};
com.haxepunk.utils.Gesture.update = function() {
	var $it0 = com.haxepunk.utils.Gesture.gestures.iterator();
	while( $it0.hasNext() ) {
		var gesture = $it0.next();
		gesture.update();
	}
	var touches = com.haxepunk.utils.Input._touches;
	var touchOrder = com.haxepunk.utils.Input._touchOrder;
	var touchCount = 0;
	var _g = 0;
	while(_g < touchOrder.length) {
		var touch = touchOrder[_g];
		++_g;
		if(touches.exists(touch)) {
			if(touches.get(touch).get_pressed() || !touches.get(touch).released) touchCount += 1;
		} else HxOverrides.remove(touchOrder,touch);
	}
	if(com.haxepunk.utils.Gesture._lastTap > 0) com.haxepunk.utils.Gesture._lastTap = Math.max(0,com.haxepunk.utils.Gesture._lastTap - com.haxepunk.HXP.elapsed / com.haxepunk.utils.Gesture.doubleTapTime);
	var _g1 = com.haxepunk.utils.Gesture.mode;
	switch(_g1[1]) {
	case 0:
		if(touchCount > 0) if(touchCount == 1) com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.SINGLE_TOUCH; else com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.MULTI_TOUCH;
		break;
	case 1:
		if(touchCount == 0) {
			com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.READY;
			var touch1;
			if(0 >= touchOrder.length) touch1 = null; else touch1 = touches.get(touchOrder[0]);
			var t;
			if(touch1.time < com.haxepunk.utils.Gesture.longPressTime) t = 1; else t = 3;
			if(t == 1 && com.haxepunk.utils.Gesture._lastTap > 0) t = 2;
			if(!com.haxepunk.utils.Gesture.check(t)) {
				com.haxepunk.utils.Gesture.start(t,touch1.x,touch1.y);
				if(t == 1) com.haxepunk.utils.Gesture._lastTap = 1;
			}
		} else if(touchCount == 1) {
			var touch2;
			if(0 >= touchOrder.length) touch2 = null; else touch2 = touches.get(touchOrder[0]);
			var dist = com.haxepunk.HXP.distance(touch2.startX,touch2.startY,touch2.x,touch2.y);
			if(dist > com.haxepunk.utils.Gesture.deadZone) com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.SINGLE_MOVE; else if(touch2.time >= com.haxepunk.utils.Gesture.longPressTime && !com.haxepunk.utils.Gesture.check(3)) com.haxepunk.utils.Gesture.start(3,touch2.x,touch2.y);
		} else if(touchCount > 1) com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.MULTI_TOUCH;
		break;
	case 2:
		if(touchCount == 0) com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.READY; else {
			var touch3;
			if(0 >= touchOrder.length) touch3 = null; else touch3 = touches.get(touchOrder[0]);
			var dist1 = com.haxepunk.HXP.distance(touch3.startX,touch3.startY,touch3.x,touch3.y);
			if(!com.haxepunk.utils.Gesture.check(4)) com.haxepunk.utils.Gesture.start(4,touch3.startX,touch3.startY);
			var g = com.haxepunk.utils.Gesture.get(4);
			g.x2 = touch3.x;
			g.y2 = touch3.y;
			g.magnitude = dist1;
		}
		if(touchCount > 1) {
			var touch4;
			if(1 >= touchOrder.length) touch4 = null; else touch4 = touches.get(touchOrder[1]);
			com.haxepunk.utils.Gesture.start(6,touch4.x,touch4.y);
		} else if(com.haxepunk.utils.Gesture.check(6)) com.haxepunk.utils.Gesture.finish(6);
		break;
	case 3:
		if(touchCount < 2) {
			if(touchCount == 0) com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.READY; else com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.FINISHED;
			if(!com.haxepunk.utils.Gesture.check(5)) {
				var t1;
				if(0 >= touchOrder.length) t1 = null; else t1 = touches.get(touchOrder[0]);
				var t2;
				if(1 >= touchOrder.length) t2 = null; else t2 = touches.get(touchOrder[1]);
				if(t2 != null) {
					var mx = (t1.startX - t2.startX) / 2;
					var my = (t1.startY - t2.startY) / 2;
					com.haxepunk.utils.Gesture.start(6,mx,my);
				}
			}
			com.haxepunk.utils.Gesture.finishAll();
		} else {
			var t11;
			if(0 >= touchOrder.length) t11 = null; else t11 = touches.get(touchOrder[0]);
			var t21;
			if(1 >= touchOrder.length) t21 = null; else t21 = touches.get(touchOrder[1]);
			if(t11 != null && t21 != null) {
				var d1 = com.haxepunk.HXP.distance(t11.startX,t11.startY,t11.x,t11.y);
				var d2 = com.haxepunk.HXP.distance(t21.startX,t21.startY,t21.x,t21.y);
				if(d1 > com.haxepunk.utils.Gesture.deadZone && d2 > com.haxepunk.utils.Gesture.deadZone) {
					if(!com.haxepunk.utils.Gesture.check(5)) {
						var mx1 = (t11.startX - t21.startX) / 2;
						var my1 = (t11.startY - t21.startY) / 2;
						com.haxepunk.utils.Gesture.start(5,mx1,my1);
					}
					var inner = com.haxepunk.HXP.distance(t11.startX,t11.startY,t21.startX,t21.startY);
					var outer = com.haxepunk.HXP.distance(t11.x,t11.y,t21.x,t21.y);
					com.haxepunk.utils.Gesture.get(5).magnitude = inner / outer;
				}
			}
		}
		break;
	default:
		if(touchCount == 0) com.haxepunk.utils.Gesture.mode = com.haxepunk.utils.GestureMode.READY;
	}
	if(touchCount == 0) com.haxepunk.utils.Gesture.finishAll();
};
com.haxepunk.utils.HaxelibInfoBuilder = function() { };
$hxClasses["com.haxepunk.utils.HaxelibInfoBuilder"] = com.haxepunk.utils.HaxelibInfoBuilder;
com.haxepunk.utils.HaxelibInfoBuilder.__name__ = ["com","haxepunk","utils","HaxelibInfoBuilder"];
com.haxepunk.utils.HaxelibInfo = function() { };
$hxClasses["com.haxepunk.utils.HaxelibInfo"] = com.haxepunk.utils.HaxelibInfo;
com.haxepunk.utils.HaxelibInfo.__name__ = ["com","haxepunk","utils","HaxelibInfo"];
com.haxepunk.utils._Input = {};
com.haxepunk.utils._Input.InputType_Impl_ = function() { };
$hxClasses["com.haxepunk.utils._Input.InputType_Impl_"] = com.haxepunk.utils._Input.InputType_Impl_;
com.haxepunk.utils._Input.InputType_Impl_.__name__ = ["com","haxepunk","utils","_Input","InputType_Impl_"];
com.haxepunk.utils._Input.InputType_Impl_.__properties__ = {get_type:"get_type"}
com.haxepunk.utils._Input.InputType_Impl_._new = function(e) {
	return e;
};
com.haxepunk.utils._Input.InputType_Impl_.get_type = function(this1) {
	return this1;
};
com.haxepunk.utils._Input.InputType_Impl_.fromLeft = function(v) {
	var e = com.haxepunk.ds.Either.Left(v);
	return e;
};
com.haxepunk.utils._Input.InputType_Impl_.fromRight = function(v) {
	var e = com.haxepunk.ds.Either.Right(v);
	return e;
};
com.haxepunk.utils.Input = function() { };
$hxClasses["com.haxepunk.utils.Input"] = com.haxepunk.utils.Input;
com.haxepunk.utils.Input.__name__ = ["com","haxepunk","utils","Input"];
com.haxepunk.utils.Input.__properties__ = {get_joysticks:"get_joysticks",get_touchOrder:"get_touchOrder",get_touches:"get_touches",get_mouseFlashY:"get_mouseFlashY",get_mouseFlashX:"get_mouseFlashX",get_mouseY:"get_mouseY",get_mouseX:"get_mouseX",get_mouseWheelDelta:"get_mouseWheelDelta"}
com.haxepunk.utils.Input.get_mouseWheelDelta = function() {
	if(com.haxepunk.utils.Input.mouseWheel) {
		com.haxepunk.utils.Input.mouseWheel = false;
		return com.haxepunk.utils.Input._mouseWheelDelta;
	}
	return 0;
};
com.haxepunk.utils.Input.get_mouseX = function() {
	return com.haxepunk.HXP.screen.get_mouseX();
};
com.haxepunk.utils.Input.get_mouseY = function() {
	return com.haxepunk.HXP.screen.get_mouseY();
};
com.haxepunk.utils.Input.get_mouseFlashX = function() {
	return Std["int"](com.haxepunk.HXP.stage.get_mouseX() - com.haxepunk.HXP.screen.x);
};
com.haxepunk.utils.Input.get_mouseFlashY = function() {
	return Std["int"](com.haxepunk.HXP.stage.get_mouseY() - com.haxepunk.HXP.screen.y);
};
com.haxepunk.utils.Input.define = function(name,keys) {
	com.haxepunk.utils.Input._control.set(name,keys);
};
com.haxepunk.utils.Input.check = function(input) {
	{
		var _g = input;
		switch(_g[1]) {
		case 0:
			var s = _g[2];
			var _g1 = 0;
			var _g2 = com.haxepunk.utils.Input._control.get(s);
			while(_g1 < _g2.length) {
				var key = _g2[_g1];
				++_g1;
				if(key < 0) {
					if(com.haxepunk.utils.Input._keyNum > 0) return true;
					continue;
				}
				if(com.haxepunk.utils.Input._key.get(key) == true) return true;
			}
			return false;
		case 1:
			var i = _g[2];
			if(i < 0) return com.haxepunk.utils.Input._keyNum > 0; else return com.haxepunk.utils.Input._key.get(i);
			break;
		}
	}
	return false;
};
com.haxepunk.utils.Input.pressed = function(input) {
	{
		var _g = input;
		switch(_g[1]) {
		case 0:
			var s = _g[2];
			if(com.haxepunk.utils.Input._control.exists(s)) {
				var _g1 = 0;
				var _g2 = com.haxepunk.utils.Input._control.get(s);
				while(_g1 < _g2.length) {
					var key = _g2[_g1];
					++_g1;
					if(key < 0?com.haxepunk.utils.Input._pressNum != 0:HxOverrides.indexOf(com.haxepunk.utils.Input._press,key,0) >= 0) return true;
				}
			}
			break;
		case 1:
			var i = _g[2];
			if(i < 0) return com.haxepunk.utils.Input._pressNum != 0; else return HxOverrides.indexOf(com.haxepunk.utils.Input._press,i,0) >= 0;
			break;
		}
	}
	return false;
};
com.haxepunk.utils.Input.released = function(input) {
	{
		var _g = input;
		switch(_g[1]) {
		case 0:
			var s = _g[2];
			var _g1 = 0;
			var _g2 = com.haxepunk.utils.Input._control.get(s);
			while(_g1 < _g2.length) {
				var key = _g2[_g1];
				++_g1;
				if(key < 0?com.haxepunk.utils.Input._releaseNum != 0:HxOverrides.indexOf(com.haxepunk.utils.Input._release,key,0) >= 0) return true;
			}
			return false;
		case 1:
			var i = _g[2];
			if(i < 0) return com.haxepunk.utils.Input._releaseNum != 0; else return HxOverrides.indexOf(com.haxepunk.utils.Input._release,i,0) >= 0;
			break;
		}
	}
};
com.haxepunk.utils.Input.touchPoints = function(touchCallback) {
	var $it0 = com.haxepunk.utils.Input._touches.iterator();
	while( $it0.hasNext() ) {
		var touch = $it0.next();
		touchCallback(touch);
	}
};
com.haxepunk.utils.Input.get_touches = function() {
	return com.haxepunk.utils.Input._touches;
};
com.haxepunk.utils.Input.get_touchOrder = function() {
	return com.haxepunk.utils.Input._touchOrder;
};
com.haxepunk.utils.Input.joystick = function(id) {
	var joy = com.haxepunk.utils.Input._joysticks.get(id);
	if(joy == null) {
		joy = new com.haxepunk.utils.Joystick();
		com.haxepunk.utils.Input._joysticks.set(id,joy);
	}
	return joy;
};
com.haxepunk.utils.Input.get_joysticks = function() {
	var count = 0;
	var $it0 = com.haxepunk.utils.Input._joysticks.iterator();
	while( $it0.hasNext() ) {
		var joystick = $it0.next();
		if(joystick.get_connected()) count += 1;
	}
	return count;
};
com.haxepunk.utils.Input.enable = function() {
	if(!com.haxepunk.utils.Input._enabled && com.haxepunk.HXP.stage != null) {
		com.haxepunk.HXP.stage.addEventListener("keydown",com.haxepunk.utils.Input.onKeyDown,false,2);
		com.haxepunk.HXP.stage.addEventListener("keyup",com.haxepunk.utils.Input.onKeyUp,false,2);
		com.haxepunk.HXP.stage.addEventListener("mouseDown",com.haxepunk.utils.Input.onMouseDown,false,2);
		com.haxepunk.HXP.stage.addEventListener("mouseUp",com.haxepunk.utils.Input.onMouseUp,false,2);
		com.haxepunk.HXP.stage.addEventListener("mouseWheel",com.haxepunk.utils.Input.onMouseWheel,false,2);
		com.haxepunk.utils.Input.multiTouchSupported = flash.ui.Multitouch.supportsTouchEvents;
		if(com.haxepunk.utils.Input.multiTouchSupported) {
			flash.ui.Multitouch.inputMode = flash.ui.MultitouchInputMode.TOUCH_POINT;
			com.haxepunk.HXP.stage.addEventListener("touchBegin",com.haxepunk.utils.Input.onTouchBegin);
			com.haxepunk.HXP.stage.addEventListener("touchMove",com.haxepunk.utils.Input.onTouchMove);
			com.haxepunk.HXP.stage.addEventListener("touchEnd",com.haxepunk.utils.Input.onTouchEnd);
		}
	}
};
com.haxepunk.utils.Input.update = function() {
	while(com.haxepunk.utils.Input._pressNum-- > -1) com.haxepunk.utils.Input._press[com.haxepunk.utils.Input._pressNum] = -1;
	com.haxepunk.utils.Input._pressNum = 0;
	while(com.haxepunk.utils.Input._releaseNum-- > -1) com.haxepunk.utils.Input._release[com.haxepunk.utils.Input._releaseNum] = -1;
	com.haxepunk.utils.Input._releaseNum = 0;
	if(com.haxepunk.utils.Input.mousePressed) com.haxepunk.utils.Input.mousePressed = false;
	if(com.haxepunk.utils.Input.mouseReleased) com.haxepunk.utils.Input.mouseReleased = false;
	if(com.haxepunk.utils.Input.multiTouchSupported) {
		var $it0 = com.haxepunk.utils.Input._touches.iterator();
		while( $it0.hasNext() ) {
			var touch = $it0.next();
			touch.update();
		}
		if(com.haxepunk.utils.Gesture.enabled) com.haxepunk.utils.Gesture.update();
		var $it1 = com.haxepunk.utils.Input._touches.iterator();
		while( $it1.hasNext() ) {
			var touch1 = $it1.next();
			if(touch1.released && !(touch1.time == 0)) {
				com.haxepunk.utils.Input._touches.remove(touch1.id);
				HxOverrides.remove(com.haxepunk.utils.Input._touchOrder,touch1.id);
			}
		}
	}
};
com.haxepunk.utils.Input.onKeyDown = function(e) {
	var code = com.haxepunk.utils.Input.keyCode(e);
	if(code == -1) return;
	com.haxepunk.utils.Input.lastKey = code;
	if(code == 8) com.haxepunk.utils.Input.keyString = HxOverrides.substr(com.haxepunk.utils.Input.keyString,0,com.haxepunk.utils.Input.keyString.length - 1); else if(code > 47 && code < 58 || code > 64 && code < 91 || code == 32) {
		if(com.haxepunk.utils.Input.keyString.length > 100) com.haxepunk.utils.Input.keyString = HxOverrides.substr(com.haxepunk.utils.Input.keyString,1,null);
		var $char = String.fromCharCode(code);
		if(e.shiftKey != com.haxepunk.utils.Input.check(com.haxepunk.utils._Input.InputType_Impl_.fromRight(20))) $char = $char.toUpperCase(); else $char = $char.toLowerCase();
		com.haxepunk.utils.Input.keyString += $char;
	}
	if(!com.haxepunk.utils.Input._key.get(code)) {
		com.haxepunk.utils.Input._key.set(code,true);
		true;
		com.haxepunk.utils.Input._keyNum++;
		com.haxepunk.utils.Input._press[com.haxepunk.utils.Input._pressNum++] = code;
	}
};
com.haxepunk.utils.Input.onKeyUp = function(e) {
	var code = com.haxepunk.utils.Input.keyCode(e);
	if(code == -1) return;
	if(com.haxepunk.utils.Input._key.get(code)) {
		com.haxepunk.utils.Input._key.set(code,false);
		false;
		com.haxepunk.utils.Input._keyNum--;
		com.haxepunk.utils.Input._release[com.haxepunk.utils.Input._releaseNum++] = code;
	}
};
com.haxepunk.utils.Input.keyCode = function(e) {
	return e.keyCode;
};
com.haxepunk.utils.Input.onMouseDown = function(e) {
	if(!com.haxepunk.utils.Input.mouseDown) {
		com.haxepunk.utils.Input.mouseDown = true;
		com.haxepunk.utils.Input.mouseUp = false;
		com.haxepunk.utils.Input.mousePressed = true;
	}
};
com.haxepunk.utils.Input.onMouseUp = function(e) {
	com.haxepunk.utils.Input.mouseDown = false;
	com.haxepunk.utils.Input.mouseUp = true;
	com.haxepunk.utils.Input.mouseReleased = true;
};
com.haxepunk.utils.Input.onMouseWheel = function(e) {
	com.haxepunk.utils.Input.mouseWheel = true;
	com.haxepunk.utils.Input._mouseWheelDelta = e.delta;
};
com.haxepunk.utils.Input.onTouchBegin = function(e) {
	var touchPoint = new com.haxepunk.utils.Touch(e.stageX / com.haxepunk.HXP.screen.fullScaleX,e.stageY / com.haxepunk.HXP.screen.fullScaleY,e.touchPointID);
	com.haxepunk.utils.Input._touches.set(e.touchPointID,touchPoint);
	com.haxepunk.utils.Input._touchOrder.push(e.touchPointID);
};
com.haxepunk.utils.Input.onTouchMove = function(e) {
	var point = com.haxepunk.utils.Input._touches.get(e.touchPointID);
	point.x = e.stageX / com.haxepunk.HXP.screen.fullScaleX;
	point.y = e.stageY / com.haxepunk.HXP.screen.fullScaleY;
};
com.haxepunk.utils.Input.onTouchEnd = function(e) {
	com.haxepunk.utils.Input._touches.get(e.touchPointID).released = true;
};
com.haxepunk.utils.JoyButtonState = $hxClasses["com.haxepunk.utils.JoyButtonState"] = { __ename__ : true, __constructs__ : ["BUTTON_ON","BUTTON_OFF","BUTTON_PRESSED","BUTTON_RELEASED"] };
com.haxepunk.utils.JoyButtonState.BUTTON_ON = ["BUTTON_ON",0];
com.haxepunk.utils.JoyButtonState.BUTTON_ON.toString = $estr;
com.haxepunk.utils.JoyButtonState.BUTTON_ON.__enum__ = com.haxepunk.utils.JoyButtonState;
com.haxepunk.utils.JoyButtonState.BUTTON_OFF = ["BUTTON_OFF",1];
com.haxepunk.utils.JoyButtonState.BUTTON_OFF.toString = $estr;
com.haxepunk.utils.JoyButtonState.BUTTON_OFF.__enum__ = com.haxepunk.utils.JoyButtonState;
com.haxepunk.utils.JoyButtonState.BUTTON_PRESSED = ["BUTTON_PRESSED",2];
com.haxepunk.utils.JoyButtonState.BUTTON_PRESSED.toString = $estr;
com.haxepunk.utils.JoyButtonState.BUTTON_PRESSED.__enum__ = com.haxepunk.utils.JoyButtonState;
com.haxepunk.utils.JoyButtonState.BUTTON_RELEASED = ["BUTTON_RELEASED",3];
com.haxepunk.utils.JoyButtonState.BUTTON_RELEASED.toString = $estr;
com.haxepunk.utils.JoyButtonState.BUTTON_RELEASED.__enum__ = com.haxepunk.utils.JoyButtonState;
com.haxepunk.utils.Joystick = function() {
	this.buttons = new haxe.ds.IntMap();
	this.ball = new flash.geom.Point(0,0);
	this.axis = new Array();
	this.hat = new flash.geom.Point(0,0);
	this.set_connected(false);
	this._timeout = 0;
};
$hxClasses["com.haxepunk.utils.Joystick"] = com.haxepunk.utils.Joystick;
com.haxepunk.utils.Joystick.__name__ = ["com","haxepunk","utils","Joystick"];
com.haxepunk.utils.Joystick.prototype = {
	buttons: null
	,axis: null
	,hat: null
	,ball: null
	,update: function() {
		this._timeout -= com.haxepunk.HXP.elapsed;
		var $it0 = this.buttons.keys();
		while( $it0.hasNext() ) {
			var button = $it0.next();
			var _g = this.buttons.get(button);
			switch(_g[1]) {
			case 2:
				this.buttons.set(button,com.haxepunk.utils.JoyButtonState.BUTTON_ON);
				break;
			case 3:
				this.buttons.set(button,com.haxepunk.utils.JoyButtonState.BUTTON_OFF);
				break;
			default:
			}
		}
	}
	,pressed: function(button) {
		if(button == null) {
			var $it0 = this.buttons.keys();
			while( $it0.hasNext() ) {
				var k = $it0.next();
				if(this.buttons.get(k) == com.haxepunk.utils.JoyButtonState.BUTTON_PRESSED) return true;
			}
		} else if(this.buttons.exists(button)) return this.buttons.get(button) == com.haxepunk.utils.JoyButtonState.BUTTON_PRESSED;
		return false;
	}
	,released: function(button) {
		if(button == null) {
			var $it0 = this.buttons.keys();
			while( $it0.hasNext() ) {
				var k = $it0.next();
				if(this.buttons.get(k) == com.haxepunk.utils.JoyButtonState.BUTTON_RELEASED) return true;
			}
		} else if(this.buttons.exists(button)) return this.buttons.get(button) == com.haxepunk.utils.JoyButtonState.BUTTON_RELEASED;
		return false;
	}
	,check: function(button) {
		if(button == null) {
			var $it0 = this.buttons.keys();
			while( $it0.hasNext() ) {
				var k = $it0.next();
				var b = this.buttons.get(k);
				if(b != com.haxepunk.utils.JoyButtonState.BUTTON_OFF && b != com.haxepunk.utils.JoyButtonState.BUTTON_RELEASED) return true;
			}
		} else if(this.buttons.exists(button)) {
			var b1 = this.buttons.get(button);
			return b1 != com.haxepunk.utils.JoyButtonState.BUTTON_OFF && b1 != com.haxepunk.utils.JoyButtonState.BUTTON_RELEASED;
		}
		return false;
	}
	,getAxis: function(a) {
		if(a < 0 || a >= this.axis.length) return 0; else if(Math.abs(this.axis[a]) < 0.15) return 0; else return this.axis[a];
	}
	,get_connected: function() {
		return this._timeout > 0;
	}
	,set_connected: function(value) {
		if(value) this._timeout = 3; else this._timeout = 0;
		return value;
	}
	,_timeout: null
	,__class__: com.haxepunk.utils.Joystick
	,__properties__: {set_connected:"set_connected",get_connected:"get_connected"}
};
com.haxepunk.utils.OUYA_GAMEPAD = function() { };
$hxClasses["com.haxepunk.utils.OUYA_GAMEPAD"] = com.haxepunk.utils.OUYA_GAMEPAD;
com.haxepunk.utils.OUYA_GAMEPAD.__name__ = ["com","haxepunk","utils","OUYA_GAMEPAD"];
com.haxepunk.utils.XBOX_GAMEPAD = function() { };
$hxClasses["com.haxepunk.utils.XBOX_GAMEPAD"] = com.haxepunk.utils.XBOX_GAMEPAD;
com.haxepunk.utils.XBOX_GAMEPAD.__name__ = ["com","haxepunk","utils","XBOX_GAMEPAD"];
com.haxepunk.utils.PS3_GAMEPAD = function() { };
$hxClasses["com.haxepunk.utils.PS3_GAMEPAD"] = com.haxepunk.utils.PS3_GAMEPAD;
com.haxepunk.utils.PS3_GAMEPAD.__name__ = ["com","haxepunk","utils","PS3_GAMEPAD"];
com.haxepunk.utils.Key = function() { };
$hxClasses["com.haxepunk.utils.Key"] = com.haxepunk.utils.Key;
com.haxepunk.utils.Key.__name__ = ["com","haxepunk","utils","Key"];
com.haxepunk.utils.Key.nameOfKey = function($char) {
	if($char == -1) return "";
	if($char >= 65 && $char <= 90) return String.fromCharCode($char);
	if($char >= 112 && $char <= 126) return "F" + Std.string($char - 111);
	if($char >= 96 && $char <= 105) return "NUMPAD " + Std.string($char - 96);
	switch($char) {
	case 37:
		return "LEFT";
	case 38:
		return "UP";
	case 39:
		return "RIGHT";
	case 40:
		return "DOWN";
	case 219:
		return "{";
	case 221:
		return "}";
	case 192:
		return "~";
	case 13:
		return "ENTER";
	case 17:
		return "CONTROL";
	case 32:
		return "SPACE";
	case 16:
		return "SHIFT";
	case 8:
		return "BACKSPACE";
	case 20:
		return "CAPS LOCK";
	case 46:
		return "DELETE";
	case 35:
		return "END";
	case 27:
		return "ESCAPE";
	case 36:
		return "HOME";
	case 45:
		return "INSERT";
	case 9:
		return "TAB";
	case 34:
		return "PAGE DOWN";
	case 33:
		return "PAGE UP";
	case 107:
		return "NUMPAD ADD";
	case 110:
		return "NUMPAD DECIMAL";
	case 111:
		return "NUMPAD DIVIDE";
	case 108:
		return "NUMPAD ENTER";
	case 106:
		return "NUMPAD MULTIPLY";
	case 109:
		return "NUMPAD SUBTRACT";
	}
	return String.fromCharCode($char);
};
com.haxepunk.utils.Touch = function(x,y,id) {
	this.released = false;
	this.startX = this.x = x;
	this.startY = this.y = y;
	this.id = id;
	this.time = 0;
};
$hxClasses["com.haxepunk.utils.Touch"] = com.haxepunk.utils.Touch;
com.haxepunk.utils.Touch.__name__ = ["com","haxepunk","utils","Touch"];
com.haxepunk.utils.Touch.prototype = {
	id: null
	,x: null
	,y: null
	,startX: null
	,startY: null
	,time: null
	,get_sceneX: function() {
		return this.x + com.haxepunk.HXP.camera.x;
	}
	,get_sceneY: function() {
		return this.y + com.haxepunk.HXP.camera.y;
	}
	,get_pressed: function() {
		return this.time == 0;
	}
	,released: null
	,update: function() {
		this.time += com.haxepunk.HXP.elapsed;
	}
	,__class__: com.haxepunk.utils.Touch
	,__properties__: {get_pressed:"get_pressed",get_sceneY:"get_sceneY",get_sceneX:"get_sceneX"}
};
flash.display.Bitmap = function(bitmapData,pixelSnapping,smoothing) {
	if(smoothing == null) smoothing = false;
	this.smoothing = false;
	flash.display.DisplayObject.call(this);
	this.set_bitmapData(bitmapData);
};
$hxClasses["flash.display.Bitmap"] = flash.display.Bitmap;
flash.display.Bitmap.__name__ = ["flash","display","Bitmap"];
flash.display.Bitmap.__interfaces__ = [flash.display.IBitmapDrawable];
flash.display.Bitmap.__super__ = flash.display.DisplayObject;
flash.display.Bitmap.prototype = $extend(flash.display.DisplayObject.prototype,{
	bitmapData: null
	,smoothing: null
	,set_bitmapData: function(v) {
		if(this.bitmapData != null) this.component.removeChild(this.bitmapData.component);
		if(v != null) this.component.appendChild(v.handle());
		return this.bitmapData = v;
	}
	,set_smoothing: function(v) {
		var o = this.bitmapData.qContext;
		o.imageSmoothingEnabled = o.oImageSmoothingEnabled = o.msImageSmoothingEnabled = o.webkitImageSmoothingEnabled = o.mozImageSmoothingEnabled = v;
		return v;
	}
	,get_width: function() {
		if(this.qWidth != null) return this.qWidth; else if(this.bitmapData != null) return this.bitmapData.component.width; else return 0;
	}
	,get_height: function() {
		if(this.qHeight != null) return this.qHeight; else if(this.bitmapData != null) return this.bitmapData.component.height; else return 0;
	}
	,drawToSurface: function(cnv,ctx,matrix,ctr,blendMode,clipRect,smoothing) {
		this.bitmapData.drawToSurface(cnv,ctx,matrix,ctr,blendMode,clipRect,smoothing);
	}
	,hitTestLocal: function(x,y,p,v) {
		return (!v || this.visible) && this.bitmapData != null && x >= 0 && y >= 0 && x < this.bitmapData.component.width && y < this.bitmapData.component.height;
	}
	,__class__: flash.display.Bitmap
	,__properties__: $extend(flash.display.DisplayObject.prototype.__properties__,{set_smoothing:"set_smoothing",set_bitmapData:"set_bitmapData"})
});
flash.display.ImageDataLease = function() {
};
$hxClasses["flash.display.ImageDataLease"] = flash.display.ImageDataLease;
flash.display.ImageDataLease.__name__ = ["flash","display","ImageDataLease"];
flash.display.ImageDataLease.prototype = {
	seed: null
	,time: null
	,set: function(s,t) {
		this.seed = s;
		this.time = t;
	}
	,clone: function() {
		var leaseClone = new flash.display.ImageDataLease();
		leaseClone.seed = this.seed;
		leaseClone.time = this.time;
		return leaseClone;
	}
	,__class__: flash.display.ImageDataLease
};
flash.display.BitmapDataChannel = function() { };
$hxClasses["flash.display.BitmapDataChannel"] = flash.display.BitmapDataChannel;
flash.display.BitmapDataChannel.__name__ = ["flash","display","BitmapDataChannel"];
flash.display.IGraphics = function() { };
$hxClasses["flash.display.IGraphics"] = flash.display.IGraphics;
flash.display.IGraphics.__name__ = ["flash","display","IGraphics"];
flash.display.IGraphics.__interfaces__ = [flash.display.IBitmapDrawable];
flash.display.IGraphics.prototype = {
	component: null
	,context: null
	,invalidate: null
	,hitTestLocal: null
	,beginBitmapFill: null
	,beginFill: null
	,beginGradientFill: null
	,clear: null
	,curveTo: null
	,drawCircle: null
	,drawEllipse: null
	,drawRect: null
	,drawRoundRect: null
	,endFill: null
	,lineStyle: null
	,lineTo: null
	,moveTo: null
	,__class__: flash.display.IGraphics
};
flash.display.Graphics = function() {
	this.rgPending = false;
	this.synced = true;
	this.component = flash.Lib.jsNode("canvas");
	this.context = this.component.getContext("2d");
	this.context.save();
	this.bounds = new flash.geom.Rectangle();
	this.resetBounds();
	this.irec = [];
	this.frec = [];
	this.arec = [];
	this.lineWidth = this.ilen = this.flen = this.alen = 0;
};
$hxClasses["flash.display.Graphics"] = flash.display.Graphics;
flash.display.Graphics.__name__ = ["flash","display","Graphics"];
flash.display.Graphics.__interfaces__ = [flash.display.IGraphics,flash.display.IBitmapDrawable];
flash.display.Graphics.prototype = {
	component: null
	,context: null
	,displayObject: null
	,bounds: null
	,lineWidth: null
	,irec: null
	,ilen: null
	,frec: null
	,flen: null
	,arec: null
	,alen: null
	,synced: null
	,rgPending: null
	,offsetX: null
	,offsetY: null
	,_drawMatrix: null
	,regenerate: function() {
		var o = this.component;
		var s = this.component.style;
		var q = this.context;
		var b = this.bounds;
		var bx = ~(~(b.x - 2));
		var by = ~(~(b.y - 2));
		var bw = Math.ceil(b.width + 4);
		var bh = Math.ceil(b.height + 4);
		this.synced = true;
		this.rgPending = false;
		if(b.width <= 0 || b.height <= 0) {
			o.width = o.height = 1;
			s.top = s.left = "0";
			return;
		}
		if(this.offsetX != bx || this.offsetY != by) {
			s.left = (this.offsetX = bx) + "px";
			s.top = (this.offsetY = by) + "px";
		}
		if(bw != o.width || bh != o.height) {
			o.width = bw;
			o.height = bh;
		} else q.clearRect(0,0,bw,bh);
		q.save();
		q.translate(-bx,-by);
		this.render(o,q);
		q.restore();
	}
	,regenerateTask: function() {
		if(this.rgPending) this.regenerate();
	}
	,requestRegeneration: function() {
		flash.Lib.schedule($bind(this,this.regenerateTask));
		this.rgPending = true;
	}
	,set_displayObject: function(v) {
		if(this.displayObject != v) {
			this.displayObject = v;
			if(!this.synced) this.requestRegeneration();
		}
		return v;
	}
	,resetBounds: function() {
		this.bounds.setVoid();
		this.invalidate();
	}
	,grab: function(x,y,r,b) {
		var i;
		if(x < (i = this.bounds.x)) {
			i = i - x;
			this.bounds.x -= i;
			this.bounds.width += i;
		}
		if(y < (i = this.bounds.y)) {
			i = i - y;
			this.bounds.y -= i;
			this.bounds.height += i;
		}
		if(r > (i = this.bounds.get_right())) this.bounds.width += r - i;
		if(b > (i = this.bounds.get_bottom())) this.bounds.height += b - i;
		this.invalidate();
	}
	,invalidate: function() {
		if(this.synced) {
			this.synced = false;
			if(!this.rgPending && this.displayObject != null && this.displayObject.get_stage() != null) this.requestRegeneration();
		}
	}
	,clear: function() {
		var i = 0;
		while(i < this.alen) this.arec[i++] = null;
		this.lineWidth = this.ilen = this.flen = this.alen = 0;
		this.resetBounds();
		this.invalidate();
	}
	,lineStyle: function(w,c,a,ph,sm,cs,js,ml) {
		this.irec[this.ilen++] = 1;
		var v;
		v = w > 0?this.lineWidth = w:this.lineWidth = 0;
		this.frec[this.flen++] = v;
		if(w > 0) {
			var v1 = flash.Lib.rgbf(c != null?c:0,a != null?a:1);
			this.arec[this.alen++] = v1;
			if(cs == "none") this.irec[this.ilen++] = 2; else if(cs == "square") this.irec[this.ilen++] = 1; else this.irec[this.ilen++] = 0;
			if(js == "bevel") this.irec[this.ilen++] = 2; else if(js == "miter") this.irec[this.ilen++] = 1; else this.irec[this.ilen++] = 0;
		}
	}
	,beginFill: function(c,a) {
		this.irec[this.ilen++] = 2;
		var v = flash.Lib.rgbf(c != null?c:0,a != null?a:1);
		this.arec[this.alen++] = v;
	}
	,beginBitmapFill: function(bitmap,m,repeat,smooth) {
		this.irec[this.ilen++] = 3;
		this.arec[this.alen++] = bitmap;
		if(repeat != false) this.irec[this.ilen++] = 1; else this.irec[this.ilen++] = 0;
		var i;
		if(m != null) i = 1; else i = 0;
		this.irec[this.ilen++] = i;
		if(i) {
			var r = this.frec;
			var l = this.flen;
			r[l++] = m.a;
			r[l++] = m.b;
			r[l++] = m.c;
			r[l++] = m.d;
			r[l++] = m.tx;
			r[l++] = m.ty;
			this.flen = l;
		}
	}
	,beginGradientFill: function(type,colors,alphas,ratios,m,spreadMethod,interpolationMethod,fpr) {
		if(fpr == null) fpr = 0;
		var g;
		var i = -1;
		var n = colors.length;
		this.irec[this.ilen++] = 4;
		if(type == "LINEAR") g = this.context.createLinearGradient(-819.2 * m.a + m.tx,-819.2 * m.b + m.ty,819.2 * m.a + m.tx,819.2 * m.b + m.ty); else {
			fpr *= 819.2;
			g = this.context.createRadialGradient(fpr * m.a + m.tx,fpr * m.b + m.ty,0,819.2 * m.c + m.tx,fpr * m.b + m.ty,819.2 * m.d + m.ty);
		}
		while(++i < n) g.addColorStop(ratios[i] / 255,flash.Lib.rgbf(colors[i],alphas[i]));
		this.arec[this.alen++] = g;
	}
	,endFill: function() {
		this.irec[this.ilen++] = 9;
		this.invalidate();
	}
	,moveTo: function(x,y) {
		this.irec[this.ilen++] = 10;
		this.frec[this.flen++] = x;
		this.frec[this.flen++] = y;
		var r = this.lineWidth / 2;
		this.grab(x - r,y - r,x + r,y + r);
	}
	,lineTo: function(x,y) {
		this.irec[this.ilen++] = 11;
		this.frec[this.flen++] = x;
		this.frec[this.flen++] = y;
		var r = this.lineWidth / 2;
		this.grab(x - r,y - r,x + r,y + r);
	}
	,curveTo: function(u,v,x,y) {
		this.irec[this.ilen++] = 12;
		var r = this.frec;
		var l = this.flen;
		r[l++] = u;
		r[l++] = v;
		r[l++] = x;
		r[l++] = y;
		this.flen = l;
		var r1 = this.lineWidth / 2;
		this.grab(x - r1,y - r1,x + r1,y + r1);
	}
	,drawRect: function(x,y,w,h) {
		this.irec[this.ilen++] = 13;
		var r = this.frec;
		var l = this.flen;
		r[l++] = x;
		r[l++] = y;
		r[l++] = w;
		r[l++] = h;
		this.flen = l;
		var r1 = this.lineWidth / 2;
		this.grab(x - r1,y - r1,x + w + r1,y + h + r1);
	}
	,drawRoundRect: function(x,y,w,h,p,q) {
		this.irec[this.ilen++] = 15;
		var r = this.frec;
		var l = this.flen;
		r[l++] = x;
		r[l++] = y;
		r[l++] = w;
		r[l++] = h;
		r[l++] = p;
		r[l++] = q;
		this.flen = l;
		var r1 = this.lineWidth / 2;
		this.grab(x - r1,y - r1,x + w + r1,y + h + r1);
	}
	,drawCircle: function(x,y,q) {
		this.irec[this.ilen++] = 14;
		var r = this.frec;
		var l = this.flen;
		r[l++] = x;
		r[l++] = y;
		r[l++] = q;
		this.flen = l;
		var r1 = q;
		r1 += this.lineWidth / 2;
		this.grab(x - r1,y - r1,x + r1,y + r1);
	}
	,drawEllipse: function(x,y,w,h) {
		this.irec[this.ilen++] = 17;
		var r = this.frec;
		var l = this.flen;
		r[l++] = x;
		r[l++] = y;
		r[l++] = w;
		r[l++] = h;
		this.flen = l;
		this.grab(x,y,x + w,y + h);
	}
	,drawToSurface: function(cnv,ctx,mtx,ctr,blendMode,clipRect,smoothing) {
		ctx.save();
		if(mtx != null) ctx.transform(mtx.a,mtx.b,mtx.c,mtx.d,mtx.tx,mtx.ty);
		this.render(cnv,ctx);
		ctx.restore();
	}
	,hitTestLocal: function(x,y,p) {
		if(this.bounds.contains(x,y)) {
			if(p) {
				if(!this.synced) this.regenerate();
				try {
					return this.context.getImageData(x - this.offsetX,y - this.offsetY,1,1).data[3] != 0;
				} catch( _ ) {
				}
			}
			return true;
		}
		return false;
	}
	,_closePath: function(cnv,ctx,f,m,texture) {
		if(f & 1) {
			ctx.closePath();
			if(f & 4) {
				ctx.save();
				ctx.transform(m.a,m.b,m.c,m.d,m.tx,m.ty);
				ctx.fillStyle = ctx.createPattern(texture,f & 8?"repeat":"no-repeat");
				ctx.fill();
				ctx.restore();
			} else ctx.fill();
		}
		if(f & 2) ctx.stroke();
		ctx.beginPath();
		return f;
	}
	,render: function(cnv,ctx) {
		var f = 0;
		var p = -1;
		var m = this._drawMatrix;
		var v;
		var i;
		var d;
		var n = 0;
		var tex = null;
		var ir = this.irec;
		var ip = -1;
		var il = ir.length - 1;
		var ar = this.arec;
		var ap = -1;
		var nr = this.frec;
		var np = -1;
		if(m == null) this._drawMatrix = m = new flash.geom.Matrix();
		while(ip < il) {
			var _g = i = ir[++ip];
			switch(_g) {
			case 1:
				if(n > 0) f = this._closePath(cnv,ctx,f,m,tex);
				ctx.lineWidth = d = nr[++np];
				if(d > 0) {
					f |= 2;
					ctx.strokeStyle = ar[++ap];
					if((i = ir[++ip]) == 2) ctx.lineCap = "butt"; else if(i == 1) ctx.lineCap = "square"; else ctx.lineCap = "round";
					if((i = ir[++ip]) == 2) ctx.lineJoin = "bevel"; else if(i == 1) ctx.lineJoin = "miter"; else ctx.lineJoin = "round";
				} else {
					f &= -3;
					ctx.strokeStyle = null;
				}
				break;
			case 2:case 3:case 4:
				if(n > 0) f = this._closePath(cnv,ctx,f,m,tex);
				f |= 1;
				if(i == 3) {
					tex = ar[++ap].handle();
					i = ir[++ip];
					if(ir[++ip] != 0) {
						if(i != 0) f |= 8; else f &= -9;
						m.a = nr[++np];
						m.b = nr[++np];
						m.c = nr[++np];
						m.d = nr[++np];
						m.tx = nr[++np];
						m.ty = nr[++np];
						f |= 4;
					} else {
						ctx.fillStyle = ctx.createPattern(tex,i != 0?"repeat":"no-repeat");
						f &= -5;
					}
				} else {
					ctx.fillStyle = ar[++ap];
					f &= -5;
				}
				n = 0;
				break;
			case 9:
				if(n > 0) {
					f = this._closePath(cnv,ctx,f,m,tex);
					n = 0;
				}
				f &= -2;
				break;
			case 10:
				ctx.moveTo(nr[++np],nr[++np]);
				n++;
				break;
			case 11:
				ctx.lineTo(nr[++np],nr[++np]);
				n++;
				break;
			case 12:
				ctx.quadraticCurveTo(nr[++np],nr[++np],nr[++np],nr[++np]);
				n++;
				break;
			case 13:
				ctx.rect(nr[++np],nr[++np],nr[++np],nr[++np]);
				n++;
				break;
			case 14:
				var x = nr[++np];
				var y = nr[++np];
				var r = nr[++np];
				if(r < 0) r = -r;
				ctx.moveTo(x + r,y);
				if(r != 0) ctx.arc(x,y,r,0,Math.PI * 2,true);
				n++;
				break;
			case 17:
				var x1 = nr[++np];
				var y1 = nr[++np];
				var w = nr[++np];
				var h = nr[++np];
				var x11 = x1 + w / 2;
				var y11 = y1 + h / 2;
				var x2 = x1 + w;
				var y2 = y1 + h;
				var m1 = 0.275892;
				var xm = w * m1;
				var ym = h * m1;
				ctx.moveTo(x11,y1);
				ctx.bezierCurveTo(x11 + xm,y1,x2,y11 - ym,x2,y11);
				ctx.bezierCurveTo(x2,y11 + ym,x11 + xm,y2,x11,y2);
				ctx.bezierCurveTo(x11 - xm,y2,x1,y11 + ym,x1,y11);
				ctx.bezierCurveTo(x1,y11 - ym,x11 - xm,y1,x11,y1);
				n++;
				break;
			case 15:
				var x3 = nr[++np];
				var y3 = nr[++np];
				var w1 = nr[++np];
				var h1 = nr[++np];
				var u = nr[++np];
				var q = nr[++np];
				if(q == null) {
					ctx.moveTo(x3 + u,y3 + h1);
					ctx.arcTo(x3 + w1 - u,y3 + h1 - u,x3 + w1,y3 + h1 - u,u);
					ctx.arcTo(x3 + w1,y3 + u,x3 + w1 - u,y3,u);
					ctx.arcTo(x3 + u,y3,x3,y3 + u,u);
					ctx.arcTo(x3 + u,y3 + h1 - u,x3 + u,y3 + h1,u);
				} else {
					ctx.moveTo(x3 + u,y3 + h1);
					ctx.lineTo(x3 + w1 - u,y3 + h1);
					ctx.quadraticCurveTo(x3 + w1,y3 + h1,x3 + w1,y3 + h1 - q);
					ctx.lineTo(x3 + w1,y3 + q);
					ctx.quadraticCurveTo(x3 + w1,y3,x3 + w1 - u,y3);
					ctx.lineTo(x3 + u,y3);
					ctx.quadraticCurveTo(x3,y3,x3,y3 + q);
					ctx.lineTo(x3,y3 + h1 - q);
					ctx.quadraticCurveTo(x3,y3 + h1,x3 + u,y3 + h1);
				}
				n++;
				break;
			case 16:
				var tex1 = ar[++ap];
				var d1 = tex1.handle();
				var fx = ir[++ip];
				var fs = (fx & 1) != 0;
				var fr = (fx & 2) != 0;
				var fc = (fx & 4) != 0;
				var fa = (fx & 8) != 0;
				var fm = (fx & 16) != 0;
				var c = ir[++ip];
				var tx;
				var ty;
				var ox;
				var oy;
				var rx;
				var ry;
				var rw;
				var rh;
				ctx.save();
				if((fx & 65536) != 0) ctx.globalCompositeOperation = "lighter"; else ctx.globalCompositeOperation = "source-over";
				while(--c >= 0) {
					tx = nr[++np];
					ty = nr[++np];
					ox = nr[++np];
					oy = nr[++np];
					rx = nr[++np];
					ry = nr[++np];
					rw = nr[++np];
					rh = nr[++np];
					ctx.save();
					if(fm) ctx.transform(nr[++np],nr[++np],nr[++np],nr[++np],tx,ty); else {
						ctx.translate(tx,ty);
						if(fs) ctx.scale(v = nr[++np],v);
						if(fr) ctx.rotate(nr[++np]);
					}
					if(fc) p += 3;
					if(fa) ctx.globalAlpha = nr[++np];
					ctx.drawImage(d1,rx,ry,rw,rh,-ox,-oy,rw,rh);
					ctx.restore();
				}
				ctx.restore();
				break;
			default:
				throw 4000 + i;
			}
		}
		if(n > 0) f = this._closePath(cnv,ctx,f,m,tex);
	}
	,__class__: flash.display.Graphics
	,__properties__: {set_displayObject:"set_displayObject"}
};
flash.display._JointStyle = {};
flash.display._JointStyle.JointStyle_Impl_ = function() { };
$hxClasses["flash.display._JointStyle.JointStyle_Impl_"] = flash.display._JointStyle.JointStyle_Impl_;
flash.display._JointStyle.JointStyle_Impl_.__name__ = ["flash","display","_JointStyle","JointStyle_Impl_"];
flash.display._JointStyle.JointStyle_Impl_._new = function(s) {
	return s;
};
flash.display._JointStyle.JointStyle_Impl_.toString = function(this1) {
	return this1;
};
flash.display._JointStyle.JointStyle_Impl_.fromString = function(s) {
	return s;
};
flash.display.LineScaleMode = $hxClasses["flash.display.LineScaleMode"] = { __ename__ : true, __constructs__ : ["HORIZONTAL","NONE","NORMAL","VERTICAL"] };
flash.display.LineScaleMode.HORIZONTAL = ["HORIZONTAL",0];
flash.display.LineScaleMode.HORIZONTAL.toString = $estr;
flash.display.LineScaleMode.HORIZONTAL.__enum__ = flash.display.LineScaleMode;
flash.display.LineScaleMode.NONE = ["NONE",1];
flash.display.LineScaleMode.NONE.toString = $estr;
flash.display.LineScaleMode.NONE.__enum__ = flash.display.LineScaleMode;
flash.display.LineScaleMode.NORMAL = ["NORMAL",2];
flash.display.LineScaleMode.NORMAL.toString = $estr;
flash.display.LineScaleMode.NORMAL.__enum__ = flash.display.LineScaleMode;
flash.display.LineScaleMode.VERTICAL = ["VERTICAL",3];
flash.display.LineScaleMode.VERTICAL.toString = $estr;
flash.display.LineScaleMode.VERTICAL.__enum__ = flash.display.LineScaleMode;
flash.display.PixelSnapping = $hxClasses["flash.display.PixelSnapping"] = { __ename__ : true, __constructs__ : ["ALWAYS","AUTO","NEVER"] };
flash.display.PixelSnapping.ALWAYS = ["ALWAYS",0];
flash.display.PixelSnapping.ALWAYS.toString = $estr;
flash.display.PixelSnapping.ALWAYS.__enum__ = flash.display.PixelSnapping;
flash.display.PixelSnapping.AUTO = ["AUTO",1];
flash.display.PixelSnapping.AUTO.toString = $estr;
flash.display.PixelSnapping.AUTO.__enum__ = flash.display.PixelSnapping;
flash.display.PixelSnapping.NEVER = ["NEVER",2];
flash.display.PixelSnapping.NEVER.toString = $estr;
flash.display.PixelSnapping.NEVER.__enum__ = flash.display.PixelSnapping;
flash.display.Shape = function() {
	(this.graphics = new flash.display.Graphics()).set_displayObject(this);
	this.component = this.graphics.component;
	flash.display.DisplayObject.call(this);
};
$hxClasses["flash.display.Shape"] = flash.display.Shape;
flash.display.Shape.__name__ = ["flash","display","Shape"];
flash.display.Shape.__interfaces__ = [flash.display.IBitmapDrawable];
flash.display.Shape.__super__ = flash.display.DisplayObject;
flash.display.Shape.prototype = $extend(flash.display.DisplayObject.prototype,{
	graphics: null
	,drawToSurface: function(cnv,ctx,mtx,ctr,blendMode,clipRect,smoothing) {
		this.graphics.drawToSurface(cnv,ctx,mtx,ctr,blendMode,clipRect,smoothing);
	}
	,set_stage: function(v) {
		var z = this.get_stage() == null && v != null;
		var r = flash.display.DisplayObject.prototype.set_stage.call(this,v);
		if(z) this.graphics.invalidate();
		return r;
	}
	,hitTestLocal: function(x,y,p,v) {
		return (!v || this.visible) && this.graphics.hitTestLocal(x,y,p);
	}
	,__class__: flash.display.Shape
});
flash.display.StageQuality = function() { };
$hxClasses["flash.display.StageQuality"] = flash.display.StageQuality;
flash.display.StageQuality.__name__ = ["flash","display","StageQuality"];
flash.errors = {};
flash.errors.Error = function(message,id) {
	if(id == null) id = 0;
	if(message == null) message = "";
	this.message = message;
	this.errorID = id;
};
$hxClasses["flash.errors.Error"] = flash.errors.Error;
flash.errors.Error.__name__ = ["flash","errors","Error"];
flash.errors.Error.prototype = {
	errorID: null
	,message: null
	,name: null
	,getStackTrace: function() {
		return haxe.CallStack.toString(haxe.CallStack.exceptionStack());
	}
	,toString: function() {
		if(this.message != null) return this.message; else return "Error";
	}
	,__class__: flash.errors.Error
};
flash.errors.IOError = function(message) {
	if(message == null) message = "";
	flash.errors.Error.call(this,message);
};
$hxClasses["flash.errors.IOError"] = flash.errors.IOError;
flash.errors.IOError.__name__ = ["flash","errors","IOError"];
flash.errors.IOError.__super__ = flash.errors.Error;
flash.errors.IOError.prototype = $extend(flash.errors.Error.prototype,{
	__class__: flash.errors.IOError
});
flash.events.TextEvent = function(type,bubbles,cancelable,text) {
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	flash.events.Event.call(this,type,bubbles,cancelable);
	this.text = text;
};
$hxClasses["flash.events.TextEvent"] = flash.events.TextEvent;
flash.events.TextEvent.__name__ = ["flash","events","TextEvent"];
flash.events.TextEvent.__super__ = flash.events.Event;
flash.events.TextEvent.prototype = $extend(flash.events.Event.prototype,{
	text: null
	,__class__: flash.events.TextEvent
});
flash.events.ErrorEvent = function(type,bubbles,cancelable,text) {
	flash.events.TextEvent.call(this,type,bubbles,cancelable);
	this.text = text;
};
$hxClasses["flash.events.ErrorEvent"] = flash.events.ErrorEvent;
flash.events.ErrorEvent.__name__ = ["flash","events","ErrorEvent"];
flash.events.ErrorEvent.__super__ = flash.events.TextEvent;
flash.events.ErrorEvent.prototype = $extend(flash.events.TextEvent.prototype,{
	__class__: flash.events.ErrorEvent
});
flash.events.HTTPStatusEvent = function(type,bubbles,cancelable,status) {
	if(status == null) status = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	this.status = status;
	flash.events.Event.call(this,type,bubbles,cancelable);
};
$hxClasses["flash.events.HTTPStatusEvent"] = flash.events.HTTPStatusEvent;
flash.events.HTTPStatusEvent.__name__ = ["flash","events","HTTPStatusEvent"];
flash.events.HTTPStatusEvent.__super__ = flash.events.Event;
flash.events.HTTPStatusEvent.prototype = $extend(flash.events.Event.prototype,{
	responseHeaders: null
	,responseURL: null
	,status: null
	,__class__: flash.events.HTTPStatusEvent
});
flash.events.IOErrorEvent = function(type,bubbles,cancelable,inText) {
	if(inText == null) inText = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	flash.events.Event.call(this,type,bubbles,cancelable);
	this.text = inText;
};
$hxClasses["flash.events.IOErrorEvent"] = flash.events.IOErrorEvent;
flash.events.IOErrorEvent.__name__ = ["flash","events","IOErrorEvent"];
flash.events.IOErrorEvent.__super__ = flash.events.Event;
flash.events.IOErrorEvent.prototype = $extend(flash.events.Event.prototype,{
	text: null
	,__class__: flash.events.IOErrorEvent
});
flash.events.KeyboardEvent = function(type,bubbles,cancelable,charCodeValue,keyCodeValue) {
	if(keyCodeValue == null) keyCodeValue = 0;
	if(charCodeValue == null) charCodeValue = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	flash.events.Event.call(this,type,bubbles,cancelable);
	this.keyCode = keyCodeValue;
	this.charCode = charCodeValue;
};
$hxClasses["flash.events.KeyboardEvent"] = flash.events.KeyboardEvent;
flash.events.KeyboardEvent.__name__ = ["flash","events","KeyboardEvent"];
flash.events.KeyboardEvent.__super__ = flash.events.Event;
flash.events.KeyboardEvent.prototype = $extend(flash.events.Event.prototype,{
	altKey: null
	,ctrlKey: null
	,shiftKey: null
	,keyCode: null
	,charCode: null
	,__class__: flash.events.KeyboardEvent
});
flash.events.UIEvent = function(type,bubbles,cancelable) {
	flash.events.Event.call(this,type,bubbles,cancelable);
};
$hxClasses["flash.events.UIEvent"] = flash.events.UIEvent;
flash.events.UIEvent.__name__ = ["flash","events","UIEvent"];
flash.events.UIEvent.__super__ = flash.events.Event;
flash.events.UIEvent.prototype = $extend(flash.events.Event.prototype,{
	altKey: null
	,ctrlKey: null
	,shiftKey: null
	,localX: null
	,localY: null
	,stageX: null
	,stageY: null
	,relatedObject: null
	,__class__: flash.events.UIEvent
});
flash.events.MouseEvent = function(type,bubbles,cancelable,lx,ly,obj,ctrlKey,altKey,shiftKey,bt,delta) {
	flash.events.UIEvent.call(this,type,bubbles != null?bubbles:true,cancelable != null?cancelable:false);
	if(ctrlKey != null) this.ctrlKey = ctrlKey; else this.ctrlKey = false;
	if(altKey != null) this.altKey = altKey; else this.altKey = false;
	if(shiftKey != null) this.shiftKey = shiftKey; else this.shiftKey = false;
	this.relatedObject = obj;
	if(bt != null) this.buttonDown = bt; else this.buttonDown = false;
	if(delta != null) this.delta = delta; else this.delta = 0;
};
$hxClasses["flash.events.MouseEvent"] = flash.events.MouseEvent;
flash.events.MouseEvent.__name__ = ["flash","events","MouseEvent"];
flash.events.MouseEvent.__super__ = flash.events.UIEvent;
flash.events.MouseEvent.prototype = $extend(flash.events.UIEvent.prototype,{
	buttonDown: null
	,delta: null
	,updateAfterEvent: function() {
	}
	,__class__: flash.events.MouseEvent
});
flash.events.ProgressEvent = function(type,bubbles,cancelable,bytesLoaded,bytesTotal) {
	if(bytesTotal == null) bytesTotal = 0;
	if(bytesLoaded == null) bytesLoaded = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	flash.events.Event.call(this,type,bubbles,cancelable);
	this.bytesLoaded = bytesLoaded;
	this.bytesTotal = bytesTotal;
};
$hxClasses["flash.events.ProgressEvent"] = flash.events.ProgressEvent;
flash.events.ProgressEvent.__name__ = ["flash","events","ProgressEvent"];
flash.events.ProgressEvent.__super__ = flash.events.Event;
flash.events.ProgressEvent.prototype = $extend(flash.events.Event.prototype,{
	bytesLoaded: null
	,bytesTotal: null
	,__class__: flash.events.ProgressEvent
});
flash.events.SecurityErrorEvent = function(type,bubbles,cancelable,text) {
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	flash.events.ErrorEvent.call(this,type,bubbles,cancelable);
	this.text = text;
};
$hxClasses["flash.events.SecurityErrorEvent"] = flash.events.SecurityErrorEvent;
flash.events.SecurityErrorEvent.__name__ = ["flash","events","SecurityErrorEvent"];
flash.events.SecurityErrorEvent.__super__ = flash.events.ErrorEvent;
flash.events.SecurityErrorEvent.prototype = $extend(flash.events.ErrorEvent.prototype,{
	__class__: flash.events.SecurityErrorEvent
});
flash.events.TouchEvent = function(type,bubbles,cancelable,id,primary,lx,ly,sx,sy,ps,obj,ctrl,alt,shift) {
	flash.events.UIEvent.call(this,type,bubbles,cancelable);
	this.altKey = alt;
	this.shiftKey = shift;
	this.ctrlKey = ctrl;
	this.touchPointID = id;
	this.sizeX = sx;
	this.sizeY = sy;
	this.pressure = ps;
};
$hxClasses["flash.events.TouchEvent"] = flash.events.TouchEvent;
flash.events.TouchEvent.__name__ = ["flash","events","TouchEvent"];
flash.events.TouchEvent.__super__ = flash.events.UIEvent;
flash.events.TouchEvent.prototype = $extend(flash.events.UIEvent.prototype,{
	sizeX: null
	,sizeY: null
	,pressure: null
	,touchPointID: null
	,__class__: flash.events.TouchEvent
});
flash.filters = {};
flash.filters.BitmapFilter = function(inType) {
	this._mType = inType;
};
$hxClasses["flash.filters.BitmapFilter"] = flash.filters.BitmapFilter;
flash.filters.BitmapFilter.__name__ = ["flash","filters","BitmapFilter"];
flash.filters.BitmapFilter.prototype = {
	_mType: null
	,_nmeCached: null
	,clone: function() {
		throw "Implement in subclass. BitmapFilter::clone";
		return null;
	}
	,nmePreFilter: function(surface) {
	}
	,nmeApplyFilter: function(surface,rect,refreshCache) {
		if(refreshCache == null) refreshCache = false;
	}
	,__class__: flash.filters.BitmapFilter
};
flash.media.Sound = function(stream,ctx) {
	flash.events.EventDispatcher.call(this);
	if(stream != null) this.load(stream,ctx);
};
$hxClasses["flash.media.Sound"] = flash.media.Sound;
flash.media.Sound.__name__ = ["flash","media","Sound"];
flash.media.Sound.canPlayType = function(o) {
	var f;
	var v;
	o = o.toLowerCase();
	if(flash.media.Sound.canPlayMap != null) {
		if(flash.media.Sound.canPlayMap.exists(o)) return flash.media.Sound.canPlayMap.get(o);
	} else flash.media.Sound.canPlayMap = new haxe.ds.StringMap();
	f = flash.media.Sound.getFormatType(o);
	v = new Audio().canPlayType(f) != "no";
	flash.media.Sound.canPlayMap.set(o,v);
	return v;
};
flash.media.Sound.getFormatType = function(o) {
	if(o == "mp3") return "audio/mpeg;"; else if(o == "ogg") return "audio/ogg; codecs=\"vorbis\""; else return null;
};
flash.media.Sound.__super__ = flash.events.EventDispatcher;
flash.media.Sound.prototype = $extend(flash.events.EventDispatcher.prototype,{
	id3: null
	,component: null
	,qCache: null
	,length: null
	,close: function() {
		if(this.component != null) this.component = null; else throw new flash.errors.IOError("Attempt to close unexisting stream.");
	}
	,load: function(stream,ctx) {
		var s = stream.url;
		var m = flash.media.Sound.library;
		if(m != null && m.exists(s)) {
			this.component = m.get(s);
			var value = this.component.cloneNode(true);
			flash.media.Sound.library.set(s,value);
		} else this.component = new Audio(s);
		this.qCache = [];
	}
	,play: function(ofs,loops,stf) {
		if(loops == null) loops = 0;
		if(ofs == null) ofs = 0;
		var o;
		var i;
		if(this.qCache.length == 0) {
			(o = new flash.media.SoundChannel()).init(this,this.component,loops);
			this.component = this.component.cloneNode(true);
		} else {
			o = this.qCache[0];
			var _g = 0;
			var _g1 = this.qCache;
			while(_g < _g1.length) {
				var v = _g1[_g];
				++_g;
				if(v.component.currentTime * 1000 == ofs) {
					o = v;
					break;
				}
			}
			HxOverrides.remove(this.qCache,o);
		}
		o.set_soundTransform(stf);
		try {
			o._loops = loops;
			o.play(ofs);
		} catch( e ) {
			null;
		}
		return o;
	}
	,get_length: function() {
		if(this.component != null) return this.component.duration * 1000; else return 0;
	}
	,__class__: flash.media.Sound
	,__properties__: {get_length:"get_length"}
});
flash.media.SoundChannel = function() {
	this._loops = 1;
	this.active = false;
	this.rightPeak = 1;
	this.leftPeak = 1;
	flash.events.EventDispatcher.call(this);
};
$hxClasses["flash.media.SoundChannel"] = flash.media.SoundChannel;
flash.media.SoundChannel.__name__ = ["flash","media","SoundChannel"];
flash.media.SoundChannel.__super__ = flash.events.EventDispatcher;
flash.media.SoundChannel.prototype = $extend(flash.events.EventDispatcher.prototype,{
	leftPeak: null
	,rightPeak: null
	,soundTransform: null
	,component: null
	,qSound: null
	,active: null
	,_position: null
	,_loops: null
	,init: function(q,v,loops) {
		if(loops == null) loops = 1;
		this.qSound = q;
		this.component = v;
		this._loops = loops;
		this.component.addEventListener("ended",$bind(this,this.onEnded));
	}
	,play: function(p) {
		var o = this.component;
		var l;
		if(!this.active) {
			l = this.get_duration();
			if(p == 0 || p / 1000 <= l) {
				this._position = this.set_position(p);
				o.load();
				o.play();
				this.active = true;
			} else {
				this.set_position(0);
				o.load();
				o.play();
				o.pause();
				this.qSound.qCache.push(this);
			}
		}
	}
	,stop: function() {
		if(this.active) {
			this.active = false;
			this.component.pause();
			this.qSound.qCache.push(this);
		}
	}
	,set_soundTransform: function(v) {
		this.soundTransform = v;
		if(v != null) this.component.volume = v.volume; else this.component.volume = 1;
		return v;
	}
	,get_duration: function() {
		var o = this.component;
		var f;
		try {
			if(o.buffered != null) f = o.buffered.end(0); else f = o.duration;
		} catch( _ ) {
			f = o.duration;
			if(Math.isNaN(f)) f = 0;
		}
		return f;
	}
	,get_position: function() {
		return this.component.currentTime * 1000;
	}
	,set_position: function(v) {
		if(this.component.currentTime != v / 1000) {
			var p = !this.component.paused;
			if(p) this.component.pause();
			this.component.currentTime = v / 1000;
			if(p) this.component.play();
		}
		return v;
	}
	,onEnded: function(e) {
		if(this.active) {
			if(--this._loops > 0) {
				this.set_position(this._position);
				if(this.component.paused) this.component.play();
			} else {
				this.stop();
				this.component.currentTime = 0;
				this.dispatchEvent(new flash.events.Event("soundComplete"));
			}
		}
	}
	,__class__: flash.media.SoundChannel
	,__properties__: {set_position:"set_position",get_position:"get_position",set_soundTransform:"set_soundTransform"}
});
flash.media.SoundLoaderContext = function(bufferTime,checkPolicyFile) {
	if(checkPolicyFile == null) checkPolicyFile = false;
	if(bufferTime == null) bufferTime = 0;
	this.bufferTime = bufferTime;
	this.checkPolicyFile = checkPolicyFile;
};
$hxClasses["flash.media.SoundLoaderContext"] = flash.media.SoundLoaderContext;
flash.media.SoundLoaderContext.__name__ = ["flash","media","SoundLoaderContext"];
flash.media.SoundLoaderContext.prototype = {
	bufferTime: null
	,checkPolicyFile: null
	,__class__: flash.media.SoundLoaderContext
};
flash.net.IURLLoader = function() { };
$hxClasses["flash.net.IURLLoader"] = flash.net.IURLLoader;
flash.net.IURLLoader.__name__ = ["flash","net","IURLLoader"];
flash.net.IURLLoader.__interfaces__ = [flash.events.IEventDispatcher];
flash.net.IURLLoader.prototype = {
	bytesLoaded: null
	,bytesTotal: null
	,data: null
	,dataFormat: null
	,close: null
	,load: null
	,__class__: flash.net.IURLLoader
};
flash.net.URLLoader = function(request) {
	flash.events.EventDispatcher.call(this);
	this.bytesLoaded = this.bytesTotal = 0;
	this.set_dataFormat(1);
	if(request != null) this.load(request);
};
$hxClasses["flash.net.URLLoader"] = flash.net.URLLoader;
flash.net.URLLoader.__name__ = ["flash","net","URLLoader"];
flash.net.URLLoader.__interfaces__ = [flash.net.IURLLoader];
flash.net.URLLoader.__super__ = flash.events.EventDispatcher;
flash.net.URLLoader.prototype = $extend(flash.events.EventDispatcher.prototype,{
	bytesLoaded: null
	,bytesTotal: null
	,data: null
	,dataFormat: null
	,set_dataFormat: function(v) {
		if(v == 0 && window.ArrayBuffer == null) this.dataFormat = 1; else this.dataFormat = v;
		return this.dataFormat;
	}
	,close: function() {
	}
	,getData: function() {
		return null;
	}
	,load: function(request) {
		this.requestUrl(request.url,request.method,request.data,request.formatRequestHeaders());
	}
	,registerEvents: function(subject) {
		var self = this;
		if(typeof XMLHttpRequestProgressEvent != "undefined") subject.addEventListener("progress",$bind(this,this.onProgress),false);
		subject.onreadystatechange = function() {
			if(subject.readyState == 4) {
				var s;
				try {
					s = subject.status;
				} catch( _ ) {
					s = null;
				}
				if(s != null) self.onStatus(s);
				if(s == null) self.onError("Failed to connect or resolve host"); else if(s >= 200 && s < 400) self.onData(subject.response); else if(s == 12029) self.onError("Failed to connect to host"); else if(s == 12007) self.onError("Unknown host"); else if(s == 0) {
					self.onError("Unable to make request (may be blocked due to cross-domain permissions)");
					self.onSecurityError("Unable to make request (may be blocked due to cross-domain permissions)");
				} else self.onError("Http Error #" + subject.status);
			}
		};
	}
	,requestUrl: function(url,method,data,requestHeaders) {
		var xmlHttpRequest = new XMLHttpRequest();
		this.getData = function() {
			if(xmlHttpRequest.response != null) return xmlHttpRequest.response; else return xmlHttpRequest.responseText;
		};
		this.registerEvents(xmlHttpRequest);
		var uri = "";
		if(js.Boot.__instanceof(data,flash.utils.ByteArray)) {
			var data1 = data;
			if(this.dataFormat == 0) uri = data1.data.buffer; else uri = data1.readUTFBytes(data1.length);
		} else if(js.Boot.__instanceof(data,flash.net.URLVariables)) {
			var data2 = data;
			var _g = 0;
			var _g1 = Reflect.fields(data2);
			while(_g < _g1.length) {
				var p = _g1[_g];
				++_g;
				if(uri.length != 0) uri += "&";
				uri += encodeURIComponent(p) + "=" + StringTools.urlEncode(Reflect.field(data2,p));
			}
		} else if(data != null) uri = data.toString();
		try {
			if(method == "GET" && uri != null && uri != "") {
				var question = url.split("?").length <= 1;
				xmlHttpRequest.open(method,url + (question?"?":"&") + Std.string(uri),true);
				uri = "";
			} else xmlHttpRequest.open(method,url,true);
		} catch( e ) {
			this.onError(e.toString());
			return;
		}
		if(this.dataFormat == 0) xmlHttpRequest.responseType = "arraybuffer";
		var _g2 = 0;
		while(_g2 < requestHeaders.length) {
			var header = requestHeaders[_g2];
			++_g2;
			xmlHttpRequest.setRequestHeader(header.name,header.value);
		}
		xmlHttpRequest.send(uri);
		this.onOpen();
	}
	,onData: function(_) {
		var v;
		if(_) v = _; else v = this.getData();
		var e;
		if(this.dataFormat == 0) this.data = flash.utils.ByteArray.nmeOfBuffer(v); else this.data = Std.string(v);
		e = new flash.events.Event("complete");
		e.set_currentTarget(this);
		this.dispatchEvent(e);
	}
	,onError: function(msg) {
		var e = new flash.events.IOErrorEvent("ioError");
		e.text = msg;
		e.set_currentTarget(this);
		this.dispatchEvent(e);
	}
	,onOpen: function() {
		var e = new flash.events.Event("open");
		e.set_currentTarget(this);
		this.dispatchEvent(e);
	}
	,onProgress: function(event) {
		var e = new flash.events.ProgressEvent("progress");
		e.set_currentTarget(this);
		e.bytesLoaded = event.loaded;
		e.bytesTotal = event.total;
		this.dispatchEvent(e);
	}
	,onSecurityError: function(msg) {
		var evt = new flash.events.SecurityErrorEvent("securityError");
		evt.text = msg;
		evt.set_currentTarget(this);
		this.dispatchEvent(evt);
	}
	,onStatus: function(status) {
		var e = new flash.events.HTTPStatusEvent("httpStatus",false,false,status);
		e.set_currentTarget(this);
		this.dispatchEvent(e);
	}
	,__class__: flash.net.URLLoader
	,__properties__: {set_dataFormat:"set_dataFormat"}
});
flash.net.URLRequestHeader = function(name,value) {
	if(value == null) value = "";
	if(name == null) name = "";
	this.name = name;
	this.value = value;
};
$hxClasses["flash.net.URLRequestHeader"] = flash.net.URLRequestHeader;
flash.net.URLRequestHeader.__name__ = ["flash","net","URLRequestHeader"];
flash.net.URLRequestHeader.prototype = {
	name: null
	,value: null
	,__class__: flash.net.URLRequestHeader
};
flash.net.URLVariables = function(o) {
	if(o != null) this.decode(o);
};
$hxClasses["flash.net.URLVariables"] = flash.net.URLVariables;
flash.net.URLVariables.__name__ = ["flash","net","URLVariables"];
flash.net.URLVariables.prototype = {
	decode: function(s) {
		var o = 0;
		var i = -1;
		var l = s.length;
		var e = 0;
		var k;
		var v;
		var c;
		while(o < l) {
			i = s.indexOf("&",o);
			if(i < 0) i = l;
			e = s.indexOf("=",o);
			if(e == -1 || e > i) throw 2101;
			k = s.substring(o,e);
			v = s.substring(e + 1,i);
			if(Object.prototype.hasOwnProperty.call(this,k)) {
				c = Reflect.field(this,k);
				if((c instanceof Array) && c.__enum__ == null) c.push(v); else c = [c,v];
			} else c = v;
			this[k] = c;
			o = i + 1;
		}
	}
	,toString: function() {
		var r = "";
		var o = Reflect.fields(this);
		var i = -1;
		var l = o.length;
		var k;
		var v;
		while(++i < l) {
			if(i > 0) r += "&";
			r += StringTools.urlEncode(k = o[i]) + "=";
			if((v = Reflect.field(this,k) instanceof Array) && (v = Reflect.field(this,k)).__enum__ == null) r += v.join("&" + k + "="); else r += Std.string(v);
		}
		return r;
	}
	,__class__: flash.net.URLVariables
};
flash.system = {};
flash.system.System = function() { };
$hxClasses["flash.system.System"] = flash.system.System;
flash.system.System.__name__ = ["flash","system","System"];
flash.system.System.__properties__ = {get_vmVersion:"get_vmVersion",get_totalMemory:"get_totalMemory"}
flash.system.System.exit = function(code) {
	window.close();
};
flash.system.System.get_totalMemory = function() {
	var v;
	return ((v = console) && (v = v.memory) && (v = v.totalJSHeapSize)) || 0;
};
flash.system.System.get_vmVersion = function() {
	return "2.0 js openfl";
};
flash.text = {};
flash.text.AntiAliasType = $hxClasses["flash.text.AntiAliasType"] = { __ename__ : true, __constructs__ : ["ADVANCED","NORMAL"] };
flash.text.AntiAliasType.ADVANCED = ["ADVANCED",0];
flash.text.AntiAliasType.ADVANCED.toString = $estr;
flash.text.AntiAliasType.ADVANCED.__enum__ = flash.text.AntiAliasType;
flash.text.AntiAliasType.NORMAL = ["NORMAL",1];
flash.text.AntiAliasType.NORMAL.toString = $estr;
flash.text.AntiAliasType.NORMAL.__enum__ = flash.text.AntiAliasType;
flash.text.Font = function() {
};
$hxClasses["flash.text.Font"] = flash.text.Font;
flash.text.Font.__name__ = ["flash","text","Font"];
flash.text.Font.enumerateFonts = function(z) {
	if(z == null) z = false;
	return [];
};
flash.text.Font.registerFont = function(v) {
};
flash.text.Font.prototype = {
	fontName: null
	,fontStyle: null
	,fontType: null
	,hasGlyphs: function(v) {
		return false;
	}
	,__class__: flash.text.Font
};
flash.text.FontStyle = $hxClasses["flash.text.FontStyle"] = { __ename__ : true, __constructs__ : ["REGULAR","ITALIC","BOLD_ITALIC","BOLD"] };
flash.text.FontStyle.REGULAR = ["REGULAR",0];
flash.text.FontStyle.REGULAR.toString = $estr;
flash.text.FontStyle.REGULAR.__enum__ = flash.text.FontStyle;
flash.text.FontStyle.ITALIC = ["ITALIC",1];
flash.text.FontStyle.ITALIC.toString = $estr;
flash.text.FontStyle.ITALIC.__enum__ = flash.text.FontStyle;
flash.text.FontStyle.BOLD_ITALIC = ["BOLD_ITALIC",2];
flash.text.FontStyle.BOLD_ITALIC.toString = $estr;
flash.text.FontStyle.BOLD_ITALIC.__enum__ = flash.text.FontStyle;
flash.text.FontStyle.BOLD = ["BOLD",3];
flash.text.FontStyle.BOLD.toString = $estr;
flash.text.FontStyle.BOLD.__enum__ = flash.text.FontStyle;
flash.text.FontType = $hxClasses["flash.text.FontType"] = { __ename__ : true, __constructs__ : ["EMBEDDED","DEVICE"] };
flash.text.FontType.EMBEDDED = ["EMBEDDED",0];
flash.text.FontType.EMBEDDED.toString = $estr;
flash.text.FontType.EMBEDDED.__enum__ = flash.text.FontType;
flash.text.FontType.DEVICE = ["DEVICE",1];
flash.text.FontType.DEVICE.toString = $estr;
flash.text.FontType.DEVICE.__enum__ = flash.text.FontType;
flash.text.TextField = function() {
	this.qText = "";
	this.type = "DYNAMIC";
	this.maxChars = 0;
	this.borderColor = 0;
	this.backgroundColor = 16777215;
	flash.display.InteractiveObject.call(this);
	var s = this.component.style;
	s.whiteSpace = "nowrap";
	s.overflow = "hidden";
	this.defaultTextFormat = new flash.text.TextFormat("_serif",16,0);
	this.textColor = 0;
	this.wordWrap = this.qEditable = this.qBackground = this.qBorder = false;
	this.set_width(this.set_height(100));
};
$hxClasses["flash.text.TextField"] = flash.text.TextField;
flash.text.TextField.__name__ = ["flash","text","TextField"];
flash.text.TextField.__interfaces__ = [flash.display.IBitmapDrawable];
flash.text.TextField.__super__ = flash.display.InteractiveObject;
flash.text.TextField.prototype = $extend(flash.display.InteractiveObject.prototype,{
	autoSize: null
	,antiAliasType: null
	,backgroundColor: null
	,borderColor: null
	,caretIndex: null
	,defaultTextFormat: null
	,displayAsPassword: null
	,embedFonts: null
	,htmlText: null
	,length: null
	,maxChars: null
	,multiline: null
	,scrollV: null
	,maxScrollV: null
	,numLines: null
	,selectable: null
	,selectedText: null
	,styleSheet: null
	,textColor: null
	,textHeight: null
	,textWidth: null
	,type: null
	,wordWrap: null
	,qText: null
	,qFontStyle: null
	,qLineHeight: null
	,qTextArea: null
	,qEditable: null
	,qBackground: null
	,qBorder: null
	,get_background: function() {
		return this.qBackground;
	}
	,set_background: function(v) {
		if(this.qBackground != v) {
			if(this.qBackground = v) this.component.style.background = flash.Lib.rgbf(this.backgroundColor,1);
		}
		return v;
	}
	,set_backgroundColor: function(v) {
		if(this.backgroundColor != v) {
			this.backgroundColor = v;
			if(this.qBackground) this.component.style.background = flash.Lib.rgbf(v,1);
		}
		return v;
	}
	,get_border: function() {
		return this.qBorder;
	}
	,set_border: function(v) {
		if(this.qBorder != v) {
			if(this.qBorder = v) this.component.style.border = "1px solid " + flash.Lib.rgbf(this.borderColor,1);
		}
		return v;
	}
	,set_borderColor: function(v) {
		if(this.borderColor != v) {
			this.borderColor = v;
			if(this.qBorder) this.component.style.border = "1px solid " + flash.Lib.rgbf(this.borderColor,1);
		}
		return v;
	}
	,setTextFormat: function(v,f,l) {
	}
	,get_text: function() {
		if(this.qEditable) return this.qTextArea.value; else return this.qText;
	}
	,set_text: function(v) {
		if(this.get_text() != v) {
			var o;
			var q = this.defaultTextFormat;
			var z = this.qEditable;
			this.qText = v;
			if(z) this.qTextArea.value = v; else if(this.component.innerText == null) this.component.innerHTML = StringTools.replace(StringTools.htmlEscape(v),"\n","<br>"); else this.component.innerText = v;
			o = (z?this.qTextArea:this.component).style;
			this.qFontStyle = o.font = q.get_fontStyle();
			o.lineHeight = (this.qLineHeight = q.size * 1.25 | 0) + "px";
			o.color = flash.Lib.rgbf(q.color != null?q.color:this.textColor,1);
		}
		return v;
	}
	,appendText: function(v) {
		var _g = this;
		_g.set_text(_g.get_text() + v);
	}
	,setSelection: function(v,o) {
		if(this.qEditable) this.qTextArea.setSelectionRange(v,o);
	}
	,drawToSurface: function(cnv,ctx,mtx,ctr,blendMode,clipRect,smoothing) {
		var q = this.defaultTextFormat;
		ctx.save();
		ctx.fillStyle = this.component.style.color;
		ctx.font = this.qFontStyle;
		ctx.textBaseline = "top";
		if(q.align != null) ctx.textAlign = q.align; else ctx.textAlign = "left";
		ctx.fillText(this.get_text(),0,0);
		ctx.restore();
	}
	,get_width: function() {
		if(this.qWidth != null) return this.qWidth; else return this.get_textWidth();
	}
	,get_height: function() {
		if(this.qHeight != null) return this.qHeight; else return this.get_textHeight();
	}
	,set_width: function(v) {
		if(this.qWidth != v) {
			var o;
			if(v != null) o = v + "px"; else o = "";
			this.component.style.width = o;
			if(this.qEditable) this.qTextArea.style.width = o;
			this.qWidth = v;
		}
		return v;
	}
	,set_height: function(v) {
		if(this.qHeight != v) {
			var o;
			if(v != null) o = v + "px"; else o = "";
			this.component.style.height = o;
			if(this.qEditable) this.qTextArea.style.height = o;
			this.qHeight = v;
		}
		return v;
	}
	,_measure_pre: function() {
		var o = flash.Lib.jsHelper();
		var s = o.style;
		var q = this.component.style;
		var i;
		i = q.length;
		while(--i >= 0) s[q[i]] = q[q[i]];
		o.innerHTML = this.component.innerHTML;
		return o;
	}
	,_measure_post: function(o) {
		var i;
		var s = o.style;
		i = s.length;
		while(--i >= 0) s[s[i]] = "";
		o.innerHTML = "";
	}
	,get_textWidth: function() {
		if(this.get_stage() == null) {
			var o = this._measure_pre();
			var r = o.clientWidth;
			this._measure_post(o);
			return r;
		}
		return this.component.clientWidth;
	}
	,get_textHeight: function() {
		if(this.get_stage() == null) {
			var o = this._measure_pre();
			var r = o.clientHeight;
			this._measure_post(o);
			return r;
		}
		return this.component.clientHeight;
	}
	,get_numLines: function() {
		var r = 0;
		var p = 0;
		var d = this.get_text();
		var l = d.length;
		while(p < l) {
			r++;
			if((p = d.indexOf("\n",p) + 1) == 0) p = l;
		}
		return r;
	}
	,set_autoSize: function(v) {
		if(this.autoSize != v) {
			if((this.autoSize = v) != "NONE") this.set_width(this.set_height(null));
		}
		return v;
	}
	,set_type: function(v) {
		var z = v == "INPUT";
		var o = this;
		var c;
		var e;
		var q;
		var t;
		var text;
		var f;
		if(z != o.qEditable) {
			c = o.component;
			text = o.get_text();
			o.set_text(text != ""?"":" ");
			if(o.qEditable = z) {
				c.appendChild(e = flash.Lib.jsNode(this.multiline?"textarea":"input"));
				e.value = text + " ";
				if((t = this.maxChars) > 0) e.maxLength = t; else e.maxLength = 2147483647;
				t = e.style;
				t.border = "0";
				t.background = "transparent";
				if((f = o.qWidth) != null) t.width = f + "px";
				if((f = o.qHeight) != null) t.height = f + "px";
				o.qTextArea = e;
			} else {
				c.removeChild(o.qTextArea);
				o.qTextArea = null;
			}
			o.set_text(text);
		}
		return v;
	}
	,set_multiline: function(v) {
		if(this.multiline != v) {
			this.multiline = v;
			if(this.qEditable) {
				this.set_type("DYNAMIC");
				this.set_type("INPUT");
			}
		}
		return v;
	}
	,set_maxChars: function(v) {
		if(this.maxChars != v) {
			this.maxChars = v;
			if(this.qEditable) if(v > 0) this.qTextArea.maxLength = v; else this.qTextArea.maxLength = 2147483647;
		}
		return v;
	}
	,set_selectable: function(v) {
		if(this.selectable != v) {
			var s = this.component.style;
			var q;
			if(this.selectable = v) q = null; else q = "none";
			s.setProperty("-webkit-touch-callout",q,null);
			s.setProperty("cursor",v?"":"default",null);
			flash.Lib.setCSSProperties(s,"user-select",q,47);
		}
		return v;
	}
	,giveFocus: function() {
		(this.qEditable?this.qTextArea:this.component).focus();
	}
	,get_selectionBeginIndex: function() {
		if(this.qEditable) return this.qTextArea.selectionStart; else return 0;
	}
	,get_selectionEndIndex: function() {
		if(this.qEditable) return this.qTextArea.selectionEnd; else return 0;
	}
	,set_selectionBeginIndex: function(v) {
		if(this.qEditable && this.get_selectionBeginIndex() != v) this.qTextArea.selectionStart = v;
		return v;
	}
	,set_selectionEndIndex: function(v) {
		if(this.qEditable && this.get_selectionEndIndex() != v) this.qTextArea.selectionEnd = v;
		return v;
	}
	,get_selectedText: function() {
		var a = this.qTextArea.selectionStart;
		var b = this.qTextArea.selectionEnd;
		var c;
		if(b < a) {
			c = a;
			a = b;
			b = c;
		}
		if(this.qEditable) return this.qTextArea.value.substring(a,b); else return null;
	}
	,hitTestLocal: function(x,y,p,v) {
		return (!v || this.visible) && x >= 0 && y >= 0 && x < this.get_width() && y < this.get_height();
	}
	,addEventListener: function(type,listener,useCapture,priority,weak) {
		if(weak == null) weak = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		var o = this.component;
		if(this.qEditable) this.component = this.qTextArea;
		flash.display.InteractiveObject.prototype.addEventListener.call(this,type,listener,useCapture,priority,weak);
		if(this.qEditable) this.component = o;
	}
	,removeEventListener: function(type,listener,useCapture,priority,weak) {
		if(weak == null) weak = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		var o = this.component;
		if(this.qEditable) this.component = this.qTextArea;
		flash.display.InteractiveObject.prototype.removeEventListener.call(this,type,listener,useCapture,priority,weak);
		if(this.qEditable) this.component = o;
	}
	,__class__: flash.text.TextField
	,__properties__: $extend(flash.display.InteractiveObject.prototype.__properties__,{set_type:"set_type",get_textWidth:"get_textWidth",get_textHeight:"get_textHeight",set_text:"set_text",get_text:"get_text",set_selectionEndIndex:"set_selectionEndIndex",get_selectionEndIndex:"get_selectionEndIndex",set_selectionBeginIndex:"set_selectionBeginIndex",get_selectionBeginIndex:"get_selectionBeginIndex",get_selectedText:"get_selectedText",set_selectable:"set_selectable",get_numLines:"get_numLines",set_multiline:"set_multiline",set_maxChars:"set_maxChars",set_borderColor:"set_borderColor",set_border:"set_border",get_border:"get_border",set_backgroundColor:"set_backgroundColor",set_background:"set_background",get_background:"get_background",set_autoSize:"set_autoSize"})
});
flash.text.TextFieldAutoSize = function() { };
$hxClasses["flash.text.TextFieldAutoSize"] = flash.text.TextFieldAutoSize;
flash.text.TextFieldAutoSize.__name__ = ["flash","text","TextFieldAutoSize"];
flash.text.TextFormat = function(in_font,in_size,in_color,in_bold,in_italic,in_underline,in_url,in_target,in_align,in_leftMargin,in_rightMargin,in_indent,in_leading) {
	this.font = in_font;
	this.size = in_size;
	this.color = in_color;
	this.bold = in_bold;
	this.italic = in_italic;
	this.underline = in_underline;
	this.url = in_url;
	this.target = in_target;
	this.align = in_align;
	this.leftMargin = in_leftMargin;
	this.rightMargin = in_rightMargin;
	this.indent = in_indent;
	this.leading = in_leading;
};
$hxClasses["flash.text.TextFormat"] = flash.text.TextFormat;
flash.text.TextFormat.__name__ = ["flash","text","TextFormat"];
flash.text.TextFormat.translateFont = function(n) {
	switch(n) {
	case "_sans":
		return "sans-serif";
	case "_serif":
		return "sans";
	case "_typewriter":
		return "monospace";
	default:
		if(n == null) return "sans-serif";
		return n;
	}
};
flash.text.TextFormat.prototype = {
	align: null
	,blockIndent: null
	,bold: null
	,bullet: null
	,color: null
	,display: null
	,font: null
	,indent: null
	,italic: null
	,kerning: null
	,leading: null
	,leftMargin: null
	,letterSpacing: null
	,rightMargin: null
	,size: null
	,tabStops: null
	,target: null
	,underline: null
	,url: null
	,clone: function() {
		var o = new flash.text.TextFormat(this.font,this.size,this.color,this.bold,this.italic,this.underline,this.url,this.target);
		o.align = this.align;
		o.leftMargin = this.leftMargin;
		o.rightMargin = this.rightMargin;
		o.indent = this.indent;
		o.leading = this.leading;
		o.blockIndent = this.blockIndent;
		o.bullet = this.bullet;
		o.display = this.display;
		o.kerning = this.kerning;
		o.letterSpacing = this.letterSpacing;
		o.tabStops = this.tabStops;
		return o;
	}
	,get_fontStyle: function() {
		return (this.bold?"bold ":"") + (this.italic?"italic ":"") + this.size + "px " + flash.text.TextFormat.translateFont(this.font);
	}
	,__class__: flash.text.TextFormat
};
flash.ui = {};
flash.ui.Keyboard = function() { };
$hxClasses["flash.ui.Keyboard"] = flash.ui.Keyboard;
flash.ui.Keyboard.__name__ = ["flash","ui","Keyboard"];
flash.ui.Keyboard.isAccessible = function() {
	return false;
};
flash.ui.Multitouch = function() { };
$hxClasses["flash.ui.Multitouch"] = flash.ui.Multitouch;
flash.ui.Multitouch.__name__ = ["flash","ui","Multitouch"];
flash.ui.MultitouchInputMode = $hxClasses["flash.ui.MultitouchInputMode"] = { __ename__ : true, __constructs__ : ["GESTURE","NONE","TOUCH_POINT"] };
flash.ui.MultitouchInputMode.GESTURE = ["GESTURE",0];
flash.ui.MultitouchInputMode.GESTURE.toString = $estr;
flash.ui.MultitouchInputMode.GESTURE.__enum__ = flash.ui.MultitouchInputMode;
flash.ui.MultitouchInputMode.NONE = ["NONE",1];
flash.ui.MultitouchInputMode.NONE.toString = $estr;
flash.ui.MultitouchInputMode.NONE.__enum__ = flash.ui.MultitouchInputMode;
flash.ui.MultitouchInputMode.TOUCH_POINT = ["TOUCH_POINT",2];
flash.ui.MultitouchInputMode.TOUCH_POINT.toString = $estr;
flash.ui.MultitouchInputMode.TOUCH_POINT.__enum__ = flash.ui.MultitouchInputMode;
flash.utils = {};
flash.utils.ByteArray = function() {
	this.littleEndian = false;
	this.length = 0;
	this._nmeResizeBuffer(this.allocated = this.position = 0);
};
$hxClasses["flash.utils.ByteArray"] = flash.utils.ByteArray;
flash.utils.ByteArray.__name__ = ["flash","utils","ByteArray"];
flash.utils.ByteArray.fromBytes = function(inBytes) {
	var r = new flash.utils.ByteArray();
	r.byteView = new Uint8Array(inBytes.b);
	r.set_length(r.byteView.length);
	r.allocated = r.length;
	return r;
};
flash.utils.ByteArray.nmeOfBuffer = function(buffer) {
	var r = new flash.utils.ByteArray();
	r.set_length(r.allocated = buffer.byteLength);
	r.data = new DataView(buffer);
	r.byteView = new Uint8Array(buffer);
	return r;
};
flash.utils.ByteArray.prototype = {
	bytesAvailable: null
	,length: null
	,objectEncoding: null
	,position: null
	,allocated: null
	,byteView: null
	,data: null
	,littleEndian: null
	,__get: function(pos) {
		return this.data.getUint8(pos);
	}
	,__set: function(pos,v) {
		this.data.setUint8(pos,v);
	}
	,_getUTFBytesCount: function(value) {
		var r = 0;
		var i = -1;
		var l = value.length;
		var c;
		var count = 0;
		while(++i < l) {
			c = value.charCodeAt(i);
			if(c <= 127) r += 1; else if(c <= 2047) r += 2; else if(c <= 65535) r += 3; else r += 4;
		}
		return r;
	}
	,_nmeResizeBuffer: function(len) {
		var oldByteView = this.byteView;
		var newByteView = new Uint8Array(len);
		if(oldByteView != null) {
			if(oldByteView.length <= len) newByteView.set(oldByteView); else newByteView.set(oldByteView.subarray(0,len));
		}
		this.byteView = newByteView;
		this.data = new DataView(newByteView.buffer);
	}
	,clear: function() {
		this.set_length(this.position = 0);
	}
	,nmeFromBytes: function(inBytes) {
		this.byteView = new Uint8Array(inBytes.b);
		this.set_length(this.byteView.length);
		this.allocated = this.length;
	}
	,nmeGet: function(pos) {
		return this.data.getUint8(pos);
	}
	,nmeGetBuffer: function() {
		return this.data.buffer;
	}
	,nmeSet: function(p,v) {
		this.data.setUint8(p,v);
	}
	,readBoolean: function() {
		return this.data.getUint8(this.position++) != 0;
	}
	,readByte: function() {
		return this.data.getUint8(this.position++);
	}
	,readBytes: function(bytes,offset,length) {
		if(offset == null) offset = 0;
		if(length == null) length = this.length;
		if(offset < 0 || length < 0) throw new flash.errors.IOError("Read error - Out of bounds");
		var l = offset + length;
		if(bytes.length < l) bytes.set_length(l);
		bytes.byteView.set(this.byteView.subarray(this.position,this.position + length),offset);
		bytes.position = offset;
		this.position += length;
		if(bytes.position + length > bytes.length) bytes.set_length(bytes.position + length);
	}
	,readDouble: function() {
		var r = this.data.getFloat64(this.position,this.littleEndian);
		this.position += 8;
		return r;
	}
	,readFloat: function() {
		var r = this.data.getFloat32(this.position,this.littleEndian);
		this.position += 4;
		return r;
	}
	,readFullBytes: function(bytes,pos,len) {
		if(this.length < len) this.set_length(len);
		var _g1 = pos;
		var _g = pos + len;
		while(_g1 < _g) {
			var i = _g1++;
			this.data.setInt8(this.position++,bytes.b[i]);
		}
	}
	,readInt: function() {
		var r = this.data.getInt32(this.position,this.littleEndian);
		this.position += 4;
		return r;
	}
	,readShort: function() {
		var r = this.data.getInt16(this.position,this.littleEndian);
		this.position += 2;
		return r;
	}
	,readUnsignedByte: function() {
		return this.data.getUint8(this.position++);
	}
	,readUnsignedInt: function() {
		var uInt = this.data.getUint32(this.position,this.littleEndian);
		this.position += 4;
		return uInt;
	}
	,readUnsignedShort: function() {
		var r = this.data.getUint16(this.position,this.littleEndian);
		this.position += 2;
		return r;
	}
	,readUTF: function() {
		return this.readUTFBytes(this.readUnsignedShort());
	}
	,readUTFBytes: function(len) {
		var r = "";
		var max = this.position + len;
		while(this.position < max) {
			var c = this.data.getUint8(this.position++);
			if(c < 128) {
				if(c == 0) break;
				r += String.fromCharCode(c);
			} else if(c < 224) r += String.fromCharCode((c & 63) << 6 | this.data.getUint8(this.position++) & 127); else if(c < 240) {
				var c2 = this.data.getUint8(this.position++);
				r += String.fromCharCode((c & 31) << 12 | (c2 & 127) << 6 | this.data.getUint8(this.position++) & 127);
			} else {
				var c21 = this.data.getUint8(this.position++);
				var c3 = this.data.getUint8(this.position++);
				r += String.fromCharCode((c & 15) << 18 | (c21 & 127) << 12 | c3 << 6 & 127 | this.data.getUint8(this.position++) & 127);
			}
		}
		return r;
	}
	,toString: function() {
		var o = this.position;
		var r;
		this.position = 0;
		r = this.readUTFBytes(this.length);
		this.position = o;
		return r;
	}
	,toBase64: function() {
		var o = this;
		var q = o.position;
		var l = o.length;
		var p = -1;
		var v = o.data;
		var r = "";
		var m = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
		var a;
		var b;
		var c;
		while(++p < l) {
			a = v.getUint8(p);
			if(++p < l) b = v.getUint8(p); else b = 0;
			if(++p < l) c = v.getUint8(p); else c = 0;
			r += m.charAt(a >> 2) + m.charAt((a & 3) << 4 | b >> 4) + (p - 1 < l?m.charAt((b & 15) << 2 | c >> 6):"=") + (p < l?m.charAt(c & 63):"=");
		}
		return r;
	}
	,writeBoolean: function(v) {
		this.writeByte(v?1:0);
	}
	,writeByte: function(v) {
		var l = this.position + 1;
		if(this.length < l) this.set_length(l);
		var data = this.data;
		data.setInt8(this.position,v);
		this.position += 1;
	}
	,writeBytes: function(bytes,offset,length) {
		if(offset < 0 || length < 0) throw new flash.errors.IOError("Write error - Out of bounds");
		var l = this.position + length;
		if(this.length < l) this.set_length(l);
		this.byteView.set(bytes.byteView.subarray(offset,offset + length),this.position);
		this.position += length;
	}
	,writeDouble: function(x) {
		var l = this.position + 8;
		if(this.length < l) this.set_length(l);
		this.data.setFloat64(this.position,x,this.littleEndian);
		this.position += 8;
	}
	,writeFloat: function(x) {
		var l = this.position + 4;
		if(this.length < l) this.set_length(l);
		this.data.setFloat32(this.position,x,this.littleEndian);
		this.position += 4;
	}
	,writeInt: function(value) {
		var l = this.position + 4;
		if(this.length < l) this.set_length(l);
		this.data.setInt32(this.position,value,this.littleEndian);
		this.position += 4;
	}
	,writeShort: function(value) {
		var l = this.position + 2;
		if(this.length < l) this.set_length(l);
		this.data.setInt16(this.position,value,this.littleEndian);
		this.position += 2;
	}
	,writeUnsignedInt: function(value) {
		var l = this.position + 4;
		if(this.length < l) this.set_length(l);
		this.data.setUint32(this.position,value,this.littleEndian);
		this.position += 4;
	}
	,writeUnsignedShort: function(value) {
		var l = this.position + 2;
		if(this.length < l) this.set_length(l);
		this.data.setUint16(this.position,value,this.littleEndian);
		this.position += 2;
	}
	,writeUTF: function(value) {
		this.writeUnsignedShort(this._getUTFBytesCount(value));
		this.writeUTFBytes(value);
	}
	,writeUTFBytes: function(value) {
		var i = -1;
		var l = value.length;
		var c;
		while(++i < l) {
			c = value.charCodeAt(i);
			if(c <= 127) this.writeByte(c); else if(c <= 2047) {
				this.writeByte(192 | c >> 6);
				this.writeByte(128 | c & 63);
			} else if(c <= 65535) {
				this.writeByte(224 | c >> 12);
				this.writeByte(128 | c >> 6 & 63);
				this.writeByte(128 | c & 63);
			} else {
				this.writeByte(240 | c >> 18);
				this.writeByte(128 | c >> 12 & 63);
				this.writeByte(128 | c >> 6 & 63);
				this.writeByte(128 | c & 63);
			}
		}
	}
	,get_bytesAvailable: function() {
		return this.length - this.position;
	}
	,get_endian: function() {
		if(this.littleEndian) return "littleEndian"; else return "bigEndian";
	}
	,set_endian: function(endian) {
		this.littleEndian = endian == "littleEndian";
		return endian;
	}
	,set_length: function(value) {
		if(this.allocated < value) this._nmeResizeBuffer(this.allocated = Std["int"](Math.max(value,this.allocated * 2))); else if(this.allocated > value) this._nmeResizeBuffer(this.allocated = value);
		return this.length = value;
	}
	,__class__: flash.utils.ByteArray
	,__properties__: {set_length:"set_length",set_endian:"set_endian",get_endian:"get_endian",get_bytesAvailable:"get_bytesAvailable"}
};
flash.utils.Endian = function() { };
$hxClasses["flash.utils.Endian"] = flash.utils.Endian;
flash.utils.Endian.__name__ = ["flash","utils","Endian"];
haxe.StackItem = $hxClasses["haxe.StackItem"] = { __ename__ : true, __constructs__ : ["CFunction","Module","FilePos","Method","LocalFunction"] };
haxe.StackItem.CFunction = ["CFunction",0];
haxe.StackItem.CFunction.toString = $estr;
haxe.StackItem.CFunction.__enum__ = haxe.StackItem;
haxe.StackItem.Module = function(m) { var $x = ["Module",1,m]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.StackItem.FilePos = function(s,file,line) { var $x = ["FilePos",2,s,file,line]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.StackItem.Method = function(classname,method) { var $x = ["Method",3,classname,method]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.StackItem.LocalFunction = function(v) { var $x = ["LocalFunction",4,v]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.CallStack = function() { };
$hxClasses["haxe.CallStack"] = haxe.CallStack;
haxe.CallStack.__name__ = ["haxe","CallStack"];
haxe.CallStack.callStack = function() {
	var oldValue = Error.prepareStackTrace;
	Error.prepareStackTrace = function(error,callsites) {
		var stack = [];
		var _g = 0;
		while(_g < callsites.length) {
			var site = callsites[_g];
			++_g;
			var method = null;
			var fullName = site.getFunctionName();
			if(fullName != null) {
				var idx = fullName.lastIndexOf(".");
				if(idx >= 0) {
					var className = HxOverrides.substr(fullName,0,idx);
					var methodName = HxOverrides.substr(fullName,idx + 1,null);
					method = haxe.StackItem.Method(className,methodName);
				}
			}
			stack.push(haxe.StackItem.FilePos(method,site.getFileName(),site.getLineNumber()));
		}
		return stack;
	};
	var a = haxe.CallStack.makeStack(new Error().stack);
	a.shift();
	Error.prepareStackTrace = oldValue;
	return a;
};
haxe.CallStack.exceptionStack = function() {
	return [];
};
haxe.CallStack.toString = function(stack) {
	var b = new StringBuf();
	var _g = 0;
	while(_g < stack.length) {
		var s = stack[_g];
		++_g;
		b.b += "\nCalled from ";
		haxe.CallStack.itemToString(b,s);
	}
	return b.b;
};
haxe.CallStack.itemToString = function(b,s) {
	switch(s[1]) {
	case 0:
		b.b += "a C function";
		break;
	case 1:
		var m = s[2];
		b.b += "module ";
		if(m == null) b.b += "null"; else b.b += "" + m;
		break;
	case 2:
		var line = s[4];
		var file = s[3];
		var s1 = s[2];
		if(s1 != null) {
			haxe.CallStack.itemToString(b,s1);
			b.b += " (";
		}
		if(file == null) b.b += "null"; else b.b += "" + file;
		b.b += " line ";
		if(line == null) b.b += "null"; else b.b += "" + line;
		if(s1 != null) b.b += ")";
		break;
	case 3:
		var meth = s[3];
		var cname = s[2];
		if(cname == null) b.b += "null"; else b.b += "" + cname;
		b.b += ".";
		if(meth == null) b.b += "null"; else b.b += "" + meth;
		break;
	case 4:
		var n = s[2];
		b.b += "local function #";
		if(n == null) b.b += "null"; else b.b += "" + n;
		break;
	}
};
haxe.CallStack.makeStack = function(s) {
	if(typeof(s) == "string") {
		var stack = s.split("\n");
		var m = [];
		var _g = 0;
		while(_g < stack.length) {
			var line = stack[_g];
			++_g;
			m.push(haxe.StackItem.Module(line));
		}
		return m;
	} else return s;
};
haxe.Log = function() { };
$hxClasses["haxe.Log"] = haxe.Log;
haxe.Log.__name__ = ["haxe","Log"];
haxe.Log.trace = function(v,infos) {
	js.Boot.__trace(v,infos);
};
haxe.Timer = function(time_ms) {
	var me = this;
	this.id = setInterval(function() {
		me.run();
	},time_ms);
};
$hxClasses["haxe.Timer"] = haxe.Timer;
haxe.Timer.__name__ = ["haxe","Timer"];
haxe.Timer.delay = function(f,time_ms) {
	var t = new haxe.Timer(time_ms);
	t.run = function() {
		t.stop();
		f();
	};
	return t;
};
haxe.Timer.measure = function(f,pos) {
	var t0 = haxe.Timer.stamp();
	var r = f();
	haxe.Log.trace(haxe.Timer.stamp() - t0 + "s",pos);
	return r;
};
haxe.Timer.stamp = function() {
	return new Date().getTime() / 1000;
};
haxe.Timer.prototype = {
	id: null
	,stop: function() {
		if(this.id == null) return;
		clearInterval(this.id);
		this.id = null;
	}
	,run: function() {
	}
	,__class__: haxe.Timer
};
haxe.Unserializer = function(buf) {
	this.buf = buf;
	this.length = buf.length;
	this.pos = 0;
	this.scache = new Array();
	this.cache = new Array();
	var r = haxe.Unserializer.DEFAULT_RESOLVER;
	if(r == null) {
		r = Type;
		haxe.Unserializer.DEFAULT_RESOLVER = r;
	}
	this.setResolver(r);
};
$hxClasses["haxe.Unserializer"] = haxe.Unserializer;
haxe.Unserializer.__name__ = ["haxe","Unserializer"];
haxe.Unserializer.initCodes = function() {
	var codes = new Array();
	var _g1 = 0;
	var _g = haxe.Unserializer.BASE64.length;
	while(_g1 < _g) {
		var i = _g1++;
		codes[haxe.Unserializer.BASE64.charCodeAt(i)] = i;
	}
	return codes;
};
haxe.Unserializer.prototype = {
	buf: null
	,pos: null
	,length: null
	,cache: null
	,scache: null
	,resolver: null
	,setResolver: function(r) {
		if(r == null) this.resolver = { resolveClass : function(_) {
			return null;
		}, resolveEnum : function(_1) {
			return null;
		}}; else this.resolver = r;
	}
	,get: function(p) {
		return this.buf.charCodeAt(p);
	}
	,readDigits: function() {
		var k = 0;
		var s = false;
		var fpos = this.pos;
		while(true) {
			var c = this.buf.charCodeAt(this.pos);
			if(c != c) break;
			if(c == 45) {
				if(this.pos != fpos) break;
				s = true;
				this.pos++;
				continue;
			}
			if(c < 48 || c > 57) break;
			k = k * 10 + (c - 48);
			this.pos++;
		}
		if(s) k *= -1;
		return k;
	}
	,unserializeObject: function(o) {
		while(true) {
			if(this.pos >= this.length) throw "Invalid object";
			if(this.buf.charCodeAt(this.pos) == 103) break;
			var k = this.unserialize();
			if(!(typeof(k) == "string")) throw "Invalid object key";
			var v = this.unserialize();
			o[k] = v;
		}
		this.pos++;
	}
	,unserializeEnum: function(edecl,tag) {
		if(this.get(this.pos++) != 58) throw "Invalid enum format";
		var nargs = this.readDigits();
		if(nargs == 0) return Type.createEnum(edecl,tag);
		var args = new Array();
		while(nargs-- > 0) args.push(this.unserialize());
		return Type.createEnum(edecl,tag,args);
	}
	,unserialize: function() {
		var _g = this.get(this.pos++);
		switch(_g) {
		case 110:
			return null;
		case 116:
			return true;
		case 102:
			return false;
		case 122:
			return 0;
		case 105:
			return this.readDigits();
		case 100:
			var p1 = this.pos;
			while(true) {
				var c = this.buf.charCodeAt(this.pos);
				if(c >= 43 && c < 58 || c == 101 || c == 69) this.pos++; else break;
			}
			return Std.parseFloat(HxOverrides.substr(this.buf,p1,this.pos - p1));
		case 121:
			var len = this.readDigits();
			if(this.get(this.pos++) != 58 || this.length - this.pos < len) throw "Invalid string length";
			var s = HxOverrides.substr(this.buf,this.pos,len);
			this.pos += len;
			s = decodeURIComponent(s.split("+").join(" "));
			this.scache.push(s);
			return s;
		case 107:
			return Math.NaN;
		case 109:
			return Math.NEGATIVE_INFINITY;
		case 112:
			return Math.POSITIVE_INFINITY;
		case 97:
			var buf = this.buf;
			var a = new Array();
			this.cache.push(a);
			while(true) {
				var c1 = this.buf.charCodeAt(this.pos);
				if(c1 == 104) {
					this.pos++;
					break;
				}
				if(c1 == 117) {
					this.pos++;
					var n = this.readDigits();
					a[a.length + n - 1] = null;
				} else a.push(this.unserialize());
			}
			return a;
		case 111:
			var o = { };
			this.cache.push(o);
			this.unserializeObject(o);
			return o;
		case 114:
			var n1 = this.readDigits();
			if(n1 < 0 || n1 >= this.cache.length) throw "Invalid reference";
			return this.cache[n1];
		case 82:
			var n2 = this.readDigits();
			if(n2 < 0 || n2 >= this.scache.length) throw "Invalid string reference";
			return this.scache[n2];
		case 120:
			throw this.unserialize();
			break;
		case 99:
			var name = this.unserialize();
			var cl = this.resolver.resolveClass(name);
			if(cl == null) throw "Class not found " + name;
			var o1 = Type.createEmptyInstance(cl);
			this.cache.push(o1);
			this.unserializeObject(o1);
			return o1;
		case 119:
			var name1 = this.unserialize();
			var edecl = this.resolver.resolveEnum(name1);
			if(edecl == null) throw "Enum not found " + name1;
			var e = this.unserializeEnum(edecl,this.unserialize());
			this.cache.push(e);
			return e;
		case 106:
			var name2 = this.unserialize();
			var edecl1 = this.resolver.resolveEnum(name2);
			if(edecl1 == null) throw "Enum not found " + name2;
			this.pos++;
			var index = this.readDigits();
			var tag = Type.getEnumConstructs(edecl1)[index];
			if(tag == null) throw "Unknown enum index " + name2 + "@" + index;
			var e1 = this.unserializeEnum(edecl1,tag);
			this.cache.push(e1);
			return e1;
		case 108:
			var l = new List();
			this.cache.push(l);
			var buf1 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) l.add(this.unserialize());
			this.pos++;
			return l;
		case 98:
			var h = new haxe.ds.StringMap();
			this.cache.push(h);
			var buf2 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) {
				var s1 = this.unserialize();
				h.set(s1,this.unserialize());
			}
			this.pos++;
			return h;
		case 113:
			var h1 = new haxe.ds.IntMap();
			this.cache.push(h1);
			var buf3 = this.buf;
			var c2 = this.get(this.pos++);
			while(c2 == 58) {
				var i = this.readDigits();
				h1.set(i,this.unserialize());
				c2 = this.get(this.pos++);
			}
			if(c2 != 104) throw "Invalid IntMap format";
			return h1;
		case 77:
			var h2 = new haxe.ds.ObjectMap();
			this.cache.push(h2);
			var buf4 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) {
				var s2 = this.unserialize();
				h2.set(s2,this.unserialize());
			}
			this.pos++;
			return h2;
		case 118:
			var d;
			var s3 = HxOverrides.substr(this.buf,this.pos,19);
			d = HxOverrides.strDate(s3);
			this.cache.push(d);
			this.pos += 19;
			return d;
		case 115:
			var len1 = this.readDigits();
			var buf5 = this.buf;
			if(this.get(this.pos++) != 58 || this.length - this.pos < len1) throw "Invalid bytes length";
			var codes = haxe.Unserializer.CODES;
			if(codes == null) {
				codes = haxe.Unserializer.initCodes();
				haxe.Unserializer.CODES = codes;
			}
			var i1 = this.pos;
			var rest = len1 & 3;
			var size;
			size = (len1 >> 2) * 3 + (rest >= 2?rest - 1:0);
			var max = i1 + (len1 - rest);
			var bytes = haxe.io.Bytes.alloc(size);
			var bpos = 0;
			while(i1 < max) {
				var c11 = codes[StringTools.fastCodeAt(buf5,i1++)];
				var c21 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c11 << 2 | c21 >> 4);
				var c3 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c21 << 4 | c3 >> 2);
				var c4 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c3 << 6 | c4);
			}
			if(rest >= 2) {
				var c12 = codes[StringTools.fastCodeAt(buf5,i1++)];
				var c22 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c12 << 2 | c22 >> 4);
				if(rest == 3) {
					var c31 = codes[StringTools.fastCodeAt(buf5,i1++)];
					bytes.set(bpos++,c22 << 4 | c31 >> 2);
				}
			}
			this.pos += len1;
			this.cache.push(bytes);
			return bytes;
		case 67:
			var name3 = this.unserialize();
			var cl1 = this.resolver.resolveClass(name3);
			if(cl1 == null) throw "Class not found " + name3;
			var o2 = Type.createEmptyInstance(cl1);
			this.cache.push(o2);
			o2.hxUnserialize(this);
			if(this.get(this.pos++) != 103) throw "Invalid custom data";
			return o2;
		default:
		}
		this.pos--;
		throw "Invalid char " + this.buf.charAt(this.pos) + " at position " + this.pos;
	}
	,__class__: haxe.Unserializer
};
haxe.io = {};
haxe.io.Bytes = function(length,b) {
	this.length = length;
	this.b = b;
};
$hxClasses["haxe.io.Bytes"] = haxe.io.Bytes;
haxe.io.Bytes.__name__ = ["haxe","io","Bytes"];
haxe.io.Bytes.alloc = function(length) {
	var a = new Array();
	var _g = 0;
	while(_g < length) {
		var i = _g++;
		a.push(0);
	}
	return new haxe.io.Bytes(length,a);
};
haxe.io.Bytes.prototype = {
	length: null
	,b: null
	,set: function(pos,v) {
		this.b[pos] = v & 255;
	}
	,__class__: haxe.io.Bytes
};
haxe.ds.IntMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.IntMap"] = haxe.ds.IntMap;
haxe.ds.IntMap.__name__ = ["haxe","ds","IntMap"];
haxe.ds.IntMap.__interfaces__ = [IMap];
haxe.ds.IntMap.prototype = {
	h: null
	,set: function(key,value) {
		this.h[key] = value;
	}
	,get: function(key) {
		return this.h[key];
	}
	,exists: function(key) {
		return this.h.hasOwnProperty(key);
	}
	,remove: function(key) {
		if(!this.h.hasOwnProperty(key)) return false;
		delete(this.h[key]);
		return true;
	}
	,keys: function() {
		var a = [];
		for( var key in this.h ) {
		if(this.h.hasOwnProperty(key)) a.push(key | 0);
		}
		return HxOverrides.iter(a);
	}
	,iterator: function() {
		return { ref : this.h, it : this.keys(), hasNext : function() {
			return this.it.hasNext();
		}, next : function() {
			var i = this.it.next();
			return this.ref[i];
		}};
	}
	,__class__: haxe.ds.IntMap
};
haxe.ds.StringMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.StringMap"] = haxe.ds.StringMap;
haxe.ds.StringMap.__name__ = ["haxe","ds","StringMap"];
haxe.ds.StringMap.__interfaces__ = [IMap];
haxe.ds.StringMap.prototype = {
	h: null
	,set: function(key,value) {
		this.h["$" + key] = value;
	}
	,get: function(key) {
		return this.h["$" + key];
	}
	,exists: function(key) {
		return this.h.hasOwnProperty("$" + key);
	}
	,remove: function(key) {
		key = "$" + key;
		if(!this.h.hasOwnProperty(key)) return false;
		delete(this.h[key]);
		return true;
	}
	,keys: function() {
		var a = [];
		for( var key in this.h ) {
		if(this.h.hasOwnProperty(key)) a.push(key.substr(1));
		}
		return HxOverrides.iter(a);
	}
	,iterator: function() {
		return { ref : this.h, it : this.keys(), hasNext : function() {
			return this.it.hasNext();
		}, next : function() {
			var i = this.it.next();
			return this.ref["$" + i];
		}};
	}
	,__class__: haxe.ds.StringMap
};
haxe.io.Eof = function() { };
$hxClasses["haxe.io.Eof"] = haxe.io.Eof;
haxe.io.Eof.__name__ = ["haxe","io","Eof"];
haxe.io.Eof.prototype = {
	toString: function() {
		return "Eof";
	}
	,__class__: haxe.io.Eof
};
haxe.xml = {};
haxe.xml.Parser = function() { };
$hxClasses["haxe.xml.Parser"] = haxe.xml.Parser;
haxe.xml.Parser.__name__ = ["haxe","xml","Parser"];
haxe.xml.Parser.parse = function(str) {
	var doc = Xml.createDocument();
	haxe.xml.Parser.doParse(str,0,doc);
	return doc;
};
haxe.xml.Parser.doParse = function(str,p,parent) {
	if(p == null) p = 0;
	var xml = null;
	var state = 1;
	var next = 1;
	var aname = null;
	var start = 0;
	var nsubs = 0;
	var nbrackets = 0;
	var c = str.charCodeAt(p);
	var buf = new StringBuf();
	while(!(c != c)) {
		switch(state) {
		case 0:
			switch(c) {
			case 10:case 13:case 9:case 32:
				break;
			default:
				state = next;
				continue;
			}
			break;
		case 1:
			switch(c) {
			case 60:
				state = 0;
				next = 2;
				break;
			default:
				start = p;
				state = 13;
				continue;
			}
			break;
		case 13:
			if(c == 60) {
				var child = Xml.createPCData(buf.b + HxOverrides.substr(str,start,p - start));
				buf = new StringBuf();
				parent.addChild(child);
				nsubs++;
				state = 0;
				next = 2;
			} else if(c == 38) {
				buf.addSub(str,start,p - start);
				state = 18;
				next = 13;
				start = p + 1;
			}
			break;
		case 17:
			if(c == 93 && str.charCodeAt(p + 1) == 93 && str.charCodeAt(p + 2) == 62) {
				var child1 = Xml.createCData(HxOverrides.substr(str,start,p - start));
				parent.addChild(child1);
				nsubs++;
				p += 2;
				state = 1;
			}
			break;
		case 2:
			switch(c) {
			case 33:
				if(str.charCodeAt(p + 1) == 91) {
					p += 2;
					if(HxOverrides.substr(str,p,6).toUpperCase() != "CDATA[") throw "Expected <![CDATA[";
					p += 5;
					state = 17;
					start = p + 1;
				} else if(str.charCodeAt(p + 1) == 68 || str.charCodeAt(p + 1) == 100) {
					if(HxOverrides.substr(str,p + 2,6).toUpperCase() != "OCTYPE") throw "Expected <!DOCTYPE";
					p += 8;
					state = 16;
					start = p + 1;
				} else if(str.charCodeAt(p + 1) != 45 || str.charCodeAt(p + 2) != 45) throw "Expected <!--"; else {
					p += 2;
					state = 15;
					start = p + 1;
				}
				break;
			case 63:
				state = 14;
				start = p;
				break;
			case 47:
				if(parent == null) throw "Expected node name";
				start = p + 1;
				state = 0;
				next = 10;
				break;
			default:
				state = 3;
				start = p;
				continue;
			}
			break;
		case 3:
			if(!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57 || c == 58 || c == 46 || c == 95 || c == 45)) {
				if(p == start) throw "Expected node name";
				xml = Xml.createElement(HxOverrides.substr(str,start,p - start));
				parent.addChild(xml);
				state = 0;
				next = 4;
				continue;
			}
			break;
		case 4:
			switch(c) {
			case 47:
				state = 11;
				nsubs++;
				break;
			case 62:
				state = 9;
				nsubs++;
				break;
			default:
				state = 5;
				start = p;
				continue;
			}
			break;
		case 5:
			if(!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57 || c == 58 || c == 46 || c == 95 || c == 45)) {
				var tmp;
				if(start == p) throw "Expected attribute name";
				tmp = HxOverrides.substr(str,start,p - start);
				aname = tmp;
				if(xml.exists(aname)) throw "Duplicate attribute";
				state = 0;
				next = 6;
				continue;
			}
			break;
		case 6:
			switch(c) {
			case 61:
				state = 0;
				next = 7;
				break;
			default:
				throw "Expected =";
			}
			break;
		case 7:
			switch(c) {
			case 34:case 39:
				state = 8;
				start = p;
				break;
			default:
				throw "Expected \"";
			}
			break;
		case 8:
			if(c == str.charCodeAt(start)) {
				var val = HxOverrides.substr(str,start + 1,p - start - 1);
				xml.set(aname,val);
				state = 0;
				next = 4;
			}
			break;
		case 9:
			p = haxe.xml.Parser.doParse(str,p,xml);
			start = p;
			state = 1;
			break;
		case 11:
			switch(c) {
			case 62:
				state = 1;
				break;
			default:
				throw "Expected >";
			}
			break;
		case 12:
			switch(c) {
			case 62:
				if(nsubs == 0) parent.addChild(Xml.createPCData(""));
				return p;
			default:
				throw "Expected >";
			}
			break;
		case 10:
			if(!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57 || c == 58 || c == 46 || c == 95 || c == 45)) {
				if(start == p) throw "Expected node name";
				var v = HxOverrides.substr(str,start,p - start);
				if(v != parent.get_nodeName()) throw "Expected </" + parent.get_nodeName() + ">";
				state = 0;
				next = 12;
				continue;
			}
			break;
		case 15:
			if(c == 45 && str.charCodeAt(p + 1) == 45 && str.charCodeAt(p + 2) == 62) {
				parent.addChild(Xml.createComment(HxOverrides.substr(str,start,p - start)));
				p += 2;
				state = 1;
			}
			break;
		case 16:
			if(c == 91) nbrackets++; else if(c == 93) nbrackets--; else if(c == 62 && nbrackets == 0) {
				parent.addChild(Xml.createDocType(HxOverrides.substr(str,start,p - start)));
				state = 1;
			}
			break;
		case 14:
			if(c == 63 && str.charCodeAt(p + 1) == 62) {
				p++;
				var str1 = HxOverrides.substr(str,start + 1,p - start - 2);
				parent.addChild(Xml.createProcessingInstruction(str1));
				state = 1;
			}
			break;
		case 18:
			if(c == 59) {
				var s = HxOverrides.substr(str,start,p - start);
				if(s.charCodeAt(0) == 35) {
					var i;
					if(s.charCodeAt(1) == 120) i = Std.parseInt("0" + HxOverrides.substr(s,1,s.length - 1)); else i = Std.parseInt(HxOverrides.substr(s,1,s.length - 1));
					buf.add(String.fromCharCode(i));
				} else if(!haxe.xml.Parser.escapes.exists(s)) buf.b += Std.string("&" + s + ";"); else buf.add(haxe.xml.Parser.escapes.get(s));
				start = p + 1;
				state = next;
			}
			break;
		}
		c = StringTools.fastCodeAt(str,++p);
	}
	if(state == 1) {
		start = p;
		state = 13;
	}
	if(state == 13) {
		if(p != start || nsubs == 0) parent.addChild(Xml.createPCData(buf.b + HxOverrides.substr(str,start,p - start)));
		return p;
	}
	throw "Unexpected end";
};
var lime = {};
lime.math = {};
lime.math.Vector2 = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
};
$hxClasses["lime.math.Vector2"] = lime.math.Vector2;
lime.math.Vector2.__name__ = ["lime","math","Vector2"];
lime.math.Vector2.distance = function(pt1,pt2) {
	var dx = pt1.x - pt2.x;
	var dy = pt1.y - pt2.y;
	return Math.sqrt(dx * dx + dy * dy);
};
lime.math.Vector2.interpolate = function(pt1,pt2,f) {
	return new lime.math.Vector2(pt2.x + f * (pt1.x - pt2.x),pt2.y + f * (pt1.y - pt2.y));
};
lime.math.Vector2.polar = function(len,angle) {
	return new lime.math.Vector2(len * Math.cos(angle),len * Math.sin(angle));
};
lime.math.Vector2.prototype = {
	length: null
	,x: null
	,y: null
	,add: function(v) {
		return new lime.math.Vector2(v.x + this.x,v.y + this.y);
	}
	,clone: function() {
		return new lime.math.Vector2(this.x,this.y);
	}
	,equals: function(toCompare) {
		return toCompare != null && toCompare.x == this.x && toCompare.y == this.y;
	}
	,normalize: function(thickness) {
		if(this.x == 0 && this.y == 0) return; else {
			var norm = thickness / Math.sqrt(this.x * this.x + this.y * this.y);
			this.x *= norm;
			this.y *= norm;
		}
	}
	,offset: function(dx,dy) {
		this.x += dx;
		this.y += dy;
	}
	,setTo: function(xa,ya) {
		this.x = xa;
		this.y = ya;
	}
	,subtract: function(v) {
		return new lime.math.Vector2(this.x - v.x,this.y - v.y);
	}
	,__toFlashPoint: function() {
		return null;
	}
	,get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y);
	}
	,__class__: lime.math.Vector2
	,__properties__: {get_length:"get_length"}
};
openfl.AssetCache = function() {
	this.__enabled = true;
	this.bitmapData = new haxe.ds.StringMap();
	this.font = new haxe.ds.StringMap();
	this.sound = new haxe.ds.StringMap();
};
$hxClasses["openfl.AssetCache"] = openfl.AssetCache;
openfl.AssetCache.__name__ = ["openfl","AssetCache"];
openfl.AssetCache.prototype = {
	bitmapData: null
	,font: null
	,sound: null
	,get_enabled: function() {
		return this.__enabled;
	}
	,set_enabled: function(v) {
		return this.__enabled = v;
	}
	,__enabled: null
	,clear: function(prefix) {
		if(prefix == null) {
			this.bitmapData = new haxe.ds.StringMap();
			this.font = new haxe.ds.StringMap();
			this.sound = new haxe.ds.StringMap();
		} else {
			var $it0 = this.bitmapData.keys();
			while( $it0.hasNext() ) {
				var key = $it0.next();
				if(StringTools.startsWith(key,prefix)) this.bitmapData.remove(key);
			}
			var $it1 = this.font.keys();
			while( $it1.hasNext() ) {
				var key1 = $it1.next();
				if(StringTools.startsWith(key1,prefix)) this.font.remove(key1);
			}
			var $it2 = this.sound.keys();
			while( $it2.hasNext() ) {
				var key2 = $it2.next();
				if(StringTools.startsWith(key2,prefix)) this.sound.remove(key2);
			}
		}
	}
	,getBitmapData: function(id) {
		return this.bitmapData.get(id);
	}
	,getFont: function(id) {
		return this.font.get(id);
	}
	,getSound: function(id) {
		return this.sound.get(id);
	}
	,hasBitmapData: function(id) {
		return this.bitmapData.exists(id);
	}
	,hasFont: function(id) {
		return this.font.exists(id);
	}
	,hasSound: function(id) {
		return this.sound.exists(id);
	}
	,removeBitmapData: function(id) {
		return this.bitmapData.remove(id);
	}
	,removeFont: function(id) {
		return this.font.remove(id);
	}
	,removeSound: function(id) {
		return this.sound.remove(id);
	}
	,setBitmapData: function(id,v) {
		this.bitmapData.set(id,v);
	}
	,setFont: function(id,v) {
		this.font.set(id,v);
	}
	,setSound: function(id,v) {
		this.sound.set(id,v);
	}
	,__class__: openfl.AssetCache
	,__properties__: {set_enabled:"set_enabled",get_enabled:"get_enabled"}
};
openfl.Assets = function() { };
$hxClasses["openfl.Assets"] = openfl.Assets;
openfl.Assets.__name__ = ["openfl","Assets"];
openfl.Assets.exists = function(id,type) {
	openfl.Assets.initialize();
	var r = false;
	if(type == null) type = openfl.AssetType.BINARY;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) r = lr != null && lr.exists(sn,type); else null;
	return r;
};
openfl.Assets.getBitmapData = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	var r = null;
	var c;
	var b;
	if(useCache && (c = openfl.Assets.cache).get_enabled() && c.bitmapData.exists(id) && openfl.Assets.isValidBitmapData(b = openfl.Assets.cache.bitmapData.get(id))) return b;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,openfl.AssetType.IMAGE)) {
			r = lr.getBitmapData(sn);
			if(useCache) {
				if(c.get_enabled()) c.bitmapData.set(id,r);
			} else r = r.clone();
		} else null;
	} else null;
	return r;
};
openfl.Assets.getBytes = function(id) {
	openfl.Assets.initialize();
	var r = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,openfl.AssetType.BINARY)) {
			if(lr.isLocal(sn,openfl.AssetType.BINARY)) r = lr.getBytes(sn); else null;
		} else null;
	} else null;
	return r;
};
openfl.Assets.getFont = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	var r = null;
	if(useCache && openfl.Assets.cache.get_enabled() && openfl.Assets.cache.font.exists(id)) return openfl.Assets.cache.font.get(id);
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,openfl.AssetType.FONT)) {
			if(lr.isLocal(sn,openfl.AssetType.FONT)) {
				r = lr.getFont(sn);
				if(useCache && openfl.Assets.cache.get_enabled()) openfl.Assets.cache.font.set(id,r);
			} else null;
		} else null;
	} else null;
	return r;
};
openfl.Assets.getLibrary = function(name) {
	return openfl.Assets.libraries.get(name == null || name == ""?"default":name);
};
openfl.Assets.getMovieClip = function(id) {
	openfl.Assets.initialize();
	var r = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,openfl.AssetType.MOVIE_CLIP)) {
			if(lr.isLocal(sn,openfl.AssetType.MOVIE_CLIP)) r = lr.getMovieClip(sn); else null;
		} else null;
	} else null;
	return r;
};
openfl.Assets.getMusic = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	var r = null;
	if(useCache && openfl.Assets.cache.get_enabled() && openfl.Assets.cache.sound.exists(id)) {
		var s = openfl.Assets.cache.sound.get(id);
		return s;
	}
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,openfl.AssetType.MUSIC)) {
			if(lr.isLocal(sn,openfl.AssetType.MUSIC)) {
				r = lr.getMusic(sn);
				if(useCache && openfl.Assets.cache.get_enabled()) openfl.Assets.cache.sound.set(id,r);
			} else null;
		} else null;
	} else null;
	return r;
};
openfl.Assets.getPath = function(id) {
	openfl.Assets.initialize();
	var r = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,null)) r = lr.getPath(sn); else null;
	} else null;
	return r;
};
openfl.Assets.getSound = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	var r = null;
	if(useCache && openfl.Assets.cache.get_enabled() && openfl.Assets.cache.sound.exists(id)) {
		var s = openfl.Assets.cache.sound.get(id);
		return s;
	}
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,openfl.AssetType.SOUND)) {
			if(lr.isLocal(sn,openfl.AssetType.SOUND)) {
				r = lr.getMusic(sn);
				if(useCache && openfl.Assets.cache.get_enabled()) openfl.Assets.cache.sound.set(id,r);
			} else null;
		} else null;
	} else null;
	return r;
};
openfl.Assets.getText = function(id) {
	openfl.Assets.initialize();
	var r = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(lr.exists(sn,openfl.AssetType.TEXT)) {
			if(lr.isLocal(sn,openfl.AssetType.TEXT)) r = lr.getText(sn); else null;
		} else null;
	} else null;
	return r;
};
openfl.Assets.initialize = function() {
	if(!openfl.Assets.initialized) {
		openfl.Assets.registerLibrary("default",new DefaultAssetLibrary());
		openfl.Assets.initialized = true;
	}
};
openfl.Assets.isLocal = function(id,type,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	var r = false;
	if(useCache && openfl.Assets.cache.get_enabled()) {
		if(type == openfl.AssetType.IMAGE || type == null) {
			if(openfl.Assets.cache.bitmapData.exists(id)) return true;
		}
		if(type == openfl.AssetType.FONT || type == null) {
			if(openfl.Assets.cache.font.exists(id)) return true;
		}
		if(type == openfl.AssetType.SOUND || type == openfl.AssetType.MUSIC || type == null) {
			if(openfl.Assets.cache.sound.exists(id)) return true;
		}
	}
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) r = lr.isLocal(sn,type); else null;
	return r;
};
openfl.Assets.isValidBitmapData = function(bitmapData) {
	return true;
};
openfl.Assets.isValidSound = function(sound) {
	return true;
};
openfl.Assets.list = function(type) {
	openfl.Assets.initialize();
	var r = [];
	var $it0 = openfl.Assets.libraries.iterator();
	while( $it0.hasNext() ) {
		var o = $it0.next();
		var m = o.list(type);
		if(m != null) r = r.concat(m);
	}
	return r;
};
openfl.Assets.loadBitmapData = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.get_enabled() && openfl.Assets.cache.bitmapData.exists(id)) {
		var b = openfl.Assets.cache.bitmapData.get(id);
		handler(b);
		return;
	}
	var r = null;
	var sn2 = null;
	var lr2 = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(r = lr.exists(sn,openfl.AssetType.IMAGE)) {
			sn2 = sn;
			lr2 = lr;
		}
	} else null;
	if(r != null) {
		if(r) {
			if(useCache && openfl.Assets.cache.get_enabled()) lr2.loadBitmapData(sn2,function(b1) {
				openfl.Assets.cache.bitmapData.set(id,b1);
				handler(b1);
			}); else lr2.loadBitmapData(sn2,handler);
			return;
		} else null;
	}
	handler(null);
};
openfl.Assets.loadBytes = function(id,handler) {
	openfl.Assets.initialize();
	var r = false;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(r = lr.exists(sn,openfl.AssetType.BINARY)) lr.loadBytes(sn,handler); else null;
	} else null;
	if(r) return;
	handler(null);
};
openfl.Assets.loadFont = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.get_enabled() && openfl.Assets.cache.font.exists(id)) {
		handler(openfl.Assets.cache.font.get(id));
		return;
	}
	var lr2 = null;
	var sn2 = null;
	var r = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(r = lr.exists(sn,openfl.AssetType.FONT)) {
			lr2 = lr;
			sn2 = sn;
		}
	} else null;
	if(r != null) {
		if(r) {
			if(useCache && openfl.Assets.cache.get_enabled()) lr2.loadFont(sn2,function(o) {
				openfl.Assets.cache.font.set(id,o);
				handler(o);
			}); else lr2.loadFont(sn2,handler);
			return;
		} else null;
	}
	handler(null);
};
openfl.Assets.loadLibrary = function(name,handler) {
	openfl.Assets.initialize();
	var data = openfl.Assets.getText("libraries/" + name + ".dat");
	if(data != null && data != "") {
		var unserializer = new haxe.Unserializer(data);
		unserializer.setResolver({ resolveEnum : openfl.Assets.resolveEnum, resolveClass : openfl.Assets.resolveClass});
		var library = unserializer.unserialize();
		openfl.Assets.libraries.set(name,library);
		library.load(handler);
	} else null;
};
openfl.Assets.loadMusic = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.get_enabled() && openfl.Assets.cache.sound.exists(id)) {
		var sound = openfl.Assets.cache.sound.get(id);
		handler(sound);
		return;
	}
	var lr2 = null;
	var sn2 = null;
	var r = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(r = lr.exists(sn,openfl.AssetType.MUSIC)) {
			lr2 = lr;
			sn2 = sn;
		}
	} else null;
	if(r != null) {
		if(r) {
			if(useCache && openfl.Assets.cache.get_enabled()) lr2.loadMusic(sn2,function(s) {
				openfl.Assets.cache.sound.set(id,s);
				handler(s);
			}); else lr2.loadMusic(sn2,handler);
			return;
		} else null;
	}
	handler(null);
};
openfl.Assets.loadMovieClip = function(id,handler) {
	openfl.Assets.initialize();
	var r = false;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(r = lr.exists(sn,openfl.AssetType.MOVIE_CLIP)) lr.loadMovieClip(sn,handler); else null;
	} else null;
	if(r) return;
	handler(null);
};
openfl.Assets.loadSound = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.get_enabled() && openfl.Assets.cache.sound.exists(id)) {
		var sound = openfl.Assets.cache.sound.get(id);
		handler(sound);
		return;
	}
	var lr2 = null;
	var sn2 = null;
	var r = null;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(r = lr.exists(sn,openfl.AssetType.SOUND)) {
			lr2 = lr;
			sn2 = sn;
		}
	} else null;
	if(r != null) {
		if(r) {
			if(useCache && openfl.Assets.cache.get_enabled()) lr2.loadSound(sn2,function(s) {
				openfl.Assets.cache.sound.set(id,s);
				handler(s);
			}); else lr2.loadSound(sn2,handler);
			return;
		} else null;
	}
	handler(null);
};
openfl.Assets.loadText = function(id,handler) {
	openfl.Assets.initialize();
	var r = false;
	var i = id.indexOf(":");
	var ln = id.substring(0,i);
	var sn = id.substring(i + 1);
	var lr = openfl.Assets.getLibrary(ln);
	if(lr != null) {
		if(r = lr.exists(sn,openfl.AssetType.TEXT)) lr.loadText(sn,handler); else null;
	} else null;
	if(r) return;
	handler(null);
};
openfl.Assets.registerLibrary = function(name,library) {
	if(openfl.Assets.libraries.exists(name)) openfl.Assets.unloadLibrary(name);
	openfl.Assets.libraries.set(name,library);
};
openfl.Assets.resolveClass = function(name) {
	return Type.resolveClass(name);
};
openfl.Assets.resolveEnum = function(name) {
	var value = Type.resolveEnum(name);
	return value;
};
openfl.Assets.unloadLibrary = function(name) {
	openfl.Assets.initialize();
	var $it0 = openfl.Assets.cache.bitmapData.keys();
	while( $it0.hasNext() ) {
		var key = $it0.next();
		if(key.substring(0,key.indexOf(":")) == name) openfl.Assets.cache.bitmapData.remove(key);
	}
	openfl.Assets.libraries.remove(name);
};
openfl.AssetData = function() {
};
$hxClasses["openfl.AssetData"] = openfl.AssetData;
openfl.AssetData.__name__ = ["openfl","AssetData"];
openfl.AssetData.prototype = {
	id: null
	,path: null
	,type: null
	,__class__: openfl.AssetData
};
openfl.AssetType = $hxClasses["openfl.AssetType"] = { __ename__ : true, __constructs__ : ["BINARY","FONT","IMAGE","MOVIE_CLIP","MUSIC","SOUND","TEMPLATE","TEXT"] };
openfl.AssetType.BINARY = ["BINARY",0];
openfl.AssetType.BINARY.toString = $estr;
openfl.AssetType.BINARY.__enum__ = openfl.AssetType;
openfl.AssetType.FONT = ["FONT",1];
openfl.AssetType.FONT.toString = $estr;
openfl.AssetType.FONT.__enum__ = openfl.AssetType;
openfl.AssetType.IMAGE = ["IMAGE",2];
openfl.AssetType.IMAGE.toString = $estr;
openfl.AssetType.IMAGE.__enum__ = openfl.AssetType;
openfl.AssetType.MOVIE_CLIP = ["MOVIE_CLIP",3];
openfl.AssetType.MOVIE_CLIP.toString = $estr;
openfl.AssetType.MOVIE_CLIP.__enum__ = openfl.AssetType;
openfl.AssetType.MUSIC = ["MUSIC",4];
openfl.AssetType.MUSIC.toString = $estr;
openfl.AssetType.MUSIC.__enum__ = openfl.AssetType;
openfl.AssetType.SOUND = ["SOUND",5];
openfl.AssetType.SOUND.toString = $estr;
openfl.AssetType.SOUND.__enum__ = openfl.AssetType;
openfl.AssetType.TEMPLATE = ["TEMPLATE",6];
openfl.AssetType.TEMPLATE.toString = $estr;
openfl.AssetType.TEMPLATE.__enum__ = openfl.AssetType;
openfl.AssetType.TEXT = ["TEXT",7];
openfl.AssetType.TEXT.toString = $estr;
openfl.AssetType.TEXT.__enum__ = openfl.AssetType;
function $iterator(o) { if( o instanceof Array ) return function() { return HxOverrides.iter(o); }; return typeof(o.iterator) == 'function' ? $bind(o,o.iterator) : o.iterator; }
var $_, $fid = 0;
function $bind(o,m) { if( m == null ) return null; if( m.__id__ == null ) m.__id__ = $fid++; var f; if( o.hx__closures__ == null ) o.hx__closures__ = {}; else f = o.hx__closures__[m.__id__]; if( f == null ) { f = function(){ return f.method.apply(f.scope, arguments); }; f.scope = o; f.method = m; o.hx__closures__[m.__id__] = f; } return f; }
(function() {
	flash.display.DisplayObject.routedEvents = new haxe.ds.StringMap();
	var m = ["mouseMove","mouseOver","mouseOut","mouseClick","mouseDown","mouseUp","rightClick","rightMouseDown","rightMouseUp","middleClick","middleMouseDown","middleMouseUp","mouseWheel"];
	var i = -1;
	var l = m.length;
	while(++i < l) flash.display.DisplayObject.routedEvents.set(m[i],1);
})();
String.prototype.__class__ = $hxClasses.String = String;
String.__name__ = ["String"];
$hxClasses.Array = Array;
Array.__name__ = ["Array"];
Date.prototype.__class__ = $hxClasses.Date = Date;
Date.__name__ = ["Date"];
var Int = $hxClasses.Int = { __name__ : ["Int"]};
var Dynamic = $hxClasses.Dynamic = { __name__ : ["Dynamic"]};
var Float = $hxClasses.Float = Number;
Float.__name__ = ["Float"];
var Bool = $hxClasses.Bool = Boolean;
Bool.__ename__ = ["Bool"];
var Class = $hxClasses.Class = { __name__ : ["Class"]};
var Enum = { };
flash.Lib.__init();
Math.NaN = Number.NaN;
Math.NEGATIVE_INFINITY = Number.NEGATIVE_INFINITY;
Math.POSITIVE_INFINITY = Number.POSITIVE_INFINITY;
$hxClasses.Math = Math;
Math.isFinite = function(i) {
	return isFinite(i);
};
Math.isNaN = function(i1) {
	return isNaN(i1);
};
if(Array.prototype.indexOf) HxOverrides.indexOf = function(a,o,i) {
	return Array.prototype.indexOf.call(a,o,i);
};
Xml.Element = "element";
Xml.PCData = "pcdata";
Xml.CData = "cdata";
Xml.Comment = "comment";
Xml.DocType = "doctype";
Xml.ProcessingInstruction = "processingInstruction";
Xml.Document = "document";
haxe.Resource.content = [{ name : "__ASSET__font_04b_03___ttf", data : "b3k0Omhhc2hxOjExMW95Njphc2NlbnRkNzY4eTQ6ZGF0YWFkMzg0ZDg5NC45NzZkMzg0ZDY0MS4wMjRkMTI4ZDY0MS4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMTI4ZDg5NmQwZDg5NmQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMzg0ZDUxMmQzODRkNjQwZDUxMmQ2NDBkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZoeTY6X3dpZHRoZDY0MHk0OnhNYXhkNTEyeTQ6eE1pbmQweTQ6eU1heGQ1MTJ5NDp5TWluZDB5NzpfaGVpZ2h0ZDUxMnk3OmxlYWRpbmdkMHk3OmRlc2NlbnRkMjU2eTg6Y2hhckNvZGVpMTExeTE1OmxlZnRzaWRlQmVhcmluZ2QweTEyOmFkdmFuY2VXaWR0aGQ2NDB5ODpjb21tYW5kc2FpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoyMjNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIyM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTEwb1IxZDc2OFIyYWQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkNjQwZDM4NGQ2NDBkMzg0ZDEwMjRkMTI4ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMGQ1MTJkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ2NDBoUjNkNjQwUjRkNTEyUjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMTBSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaGc6MjIyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMjJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEwOW9SMWQ3NjhSMmFkMGQ1MTJkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkMTAyNGQzODRkMTAyNGQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQwZDUxMmQ1MTJkMTAyNGQ2NDBkMTAyNGQ2NDBkNjQwZDUxMmQ2NDBkNTEyZDEwMjRoUjNkNzY4UjRkNjQwUjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMDlSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMjFvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIyMVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTA4b1IxZDc2OFIyYWQxMjhkMzg0ZDBkMzg0ZDBkMTAyNGQxMjhkMTAyNGQxMjhkMzg0aFIzZDI1NlI0ZDEyOFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMTA4UjEyZDBSMTNkMjU2UjE0YWkxaTJpMmkyaTJoZzoyMjBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIyMFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTA3b1IxZDc2OFIyYWQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQxMjhkNzY4ZDEyOGQzODRkMGQzODRkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMzg0ZDg5NmQzODRkNjQwZDUxMmQ1MTJkMzg0ZDUxMmQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQ1MTJkMTAyNGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMDdSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjE5b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMTlSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEwNm9SMWQ3NjhSMmFkMjU2ZDM4NGQxMjhkMzg0ZDEyOGQ1MTJkMjU2ZDUxMmQyNTZkMzg0ZDI1NmQ2NDBkMTI4ZDY0MGQxMjhkMTE1MmQyNTZkMTE1MmQyNTZkNjQwZDEyOGQxMTUyZDBkMTE1MmQwZDEyODBkMTI4ZDEyODBkMTI4ZDExNTJoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZC0yNTZSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMDZSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjE4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMThSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEwNW9SMWQ3NjhSMmFkMTI4ZDM4NGQwZDM4NGQwZDUxMmQxMjhkNTEyZDEyOGQzODRkMTI4ZDY0MGQwZDY0MGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDY0MGhSM2QyNTZSNGQxMjhSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTEwNVIxMmQwUjEzZDI1NlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjIxN29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjE3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMDRvUjFkNzY4UjJhZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMTI4ZDUxMmQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkNjQwZDM4NGQ2NDBkMzg0ZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMDRSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIxNm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjE2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMDNvUjFkNzY4UjJhZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2ZDEyOGQxMTUyZDM4NGQxMTUyZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ2NDBkMTI4ZDY0MGQxMjhkNTEyZDUxMmQ1MTJkNTEyZDExNTJkMzg0ZDExNTJkMzg0ZDEyODBkMTI4ZDEyODBkMTI4ZDExNTJoUjNkNjQwUjRkNTEyUjVkMFI2ZDUxMlI3ZC0yNTZSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMDNSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmhnOjIxNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjE1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMDJvUjFkNzY4UjJhZDM4NGQzODRkMjU2ZDM4NGQyNTZkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQxMjhkNTEyZDEyOGQ2NDBkMGQ2NDBkMGQ3NjhkMTI4ZDc2OGQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ1MTJkMTI4ZDUxMmhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTEwMlIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoyMTRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIxNFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTAxb1IxZDc2OFIyYWQyNTZkNzY2Ljk3NmQyNTZkNjQxLjAyNGQxMjhkNjQxLjAyNGQxMjhkNzY2Ljk3NmQyNTZkNzY2Ljk3NmQxMjhkMTAyNGQxMjhkODk2ZDBkODk2ZDBkNjQwZDEyOGQ2NDBkMTI4ZDUxMmQzODRkNTEyZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkNzY4ZDI1NmQ3NjhkMjU2ZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTAxUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoyMTNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIxM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTAwb1IxZDc2OFIyYWQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQzODRkNjQxLjAyNGQxMjhkNjQxLjAyNGQxMjhkODk0Ljk3NmQxMjhkNjQwZDEyOGQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDUxMmQzODRkNTEyZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmQwZDg5NmQwZDY0MGQxMjhkNjQwaFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMTAwUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MjEyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMTJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjk5b1IxZDc2OFIyYWQzODRkNjQwZDM4NGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDM4NGQ2NDBkMTI4ZDY0MGQwZDY0MGQwZDg5NmQxMjhkODk2ZDEyOGQ2NDBkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpOTlSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjExb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMTFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjk4b1IxZDc2OFIyYWQzODRkNjQwZDUxMmQ2NDBkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDBkMTAyNGQwZDM4NGQxMjhkMzg0ZDEyOGQ1MTJkMzg0ZDUxMmQzODRkNjQwZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpOThSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMTBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIxMFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTdvUjFkNzY4UjJhZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2ZDEyOGQ2NDBkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ2NDBkMTI4ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkMFI4ZDUxMlI5ZDBSMTBkMjU2UjExaTk3UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJoZzoyMDlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwOVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTZvUjFkNzY4UjJhZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQxMjhkNjQwZDI1NmQ2NDBkMjU2ZDUxMmQxMjhkNTEyZDEyOGQ2NDBoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZDM4NFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTk2UjEyZDBSMTNkMzg0UjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjA4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMDhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjk1b1IxZDc2OFIyYWQwZDg5NmQwZDEwMjRkNTEyZDEwMjRkNTEyZDg5NmQwZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkMTI4UjdkMFI4ZDEyOFI5ZDBSMTBkMjU2UjExaTk1UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJoZzoyMDdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwN1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTRvUjFkNzY4UjJhZDEyOGQzODRkMTI4ZDUxMmQyNTZkNTEyZDI1NmQzODRkMTI4ZDM4NGQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMGQ1MTJkMGQ2NDBkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwaFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QzODRSOGQ2NDBSOWQwUjEwZDI1NlIxMWk5NFIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMDZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwNlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTNvUjFkNzY4UjJhZDI1NmQxMDI0ZDI1NmQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkODk2ZDBkODk2ZDBkMTAyNGQyNTZkMTAyNGhSM2QzODRSNGQyNTZSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTkzUjEyZDBSMTNkMzg0UjE0YWkxaTJpMmkyaTJpMmkyaTJpMmhnOjIwNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjA1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo5Mm9SMWQ3NjhSMmFkMjU2ZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDEyOGQzODRkMTI4ZDUxMmQwZDUxMmQwZDM4NGQxMjhkMzg0ZDUxMmQ4OTZkMzg0ZDg5NmQzODRkNzY4ZDUxMmQ3NjhkNTEyZDg5NmQzODRkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQzODRkNjQwZDM4NGQ3NjhkNjQwZDEwMjRkNTEyZDEwMjRkNTEyZDg5NmQ2NDBkODk2ZDY0MGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpOTJSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMDRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwNFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTFvUjFkNzY4UjJhZDBkMzg0ZDBkMTAyNGQyNTZkMTAyNGQyNTZkODk2ZDEyOGQ4OTZkMTI4ZDUxMmQyNTZkNTEyZDI1NmQzODRkMGQzODRoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk5MVIxMmQwUjEzZDM4NFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJoZzoyMDNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTBvUjFkNzY4UjJhZDM4NGQzODRkMGQzODRkMGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDM4NGQ2NDBkMzg0ZDM4NGQyNTZkNjQwZDEyOGQ2NDBkMTI4ZDc2OGQyNTZkNzY4ZDI1NmQ2NDBkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQ3NjhkMGQ3NjhkMGQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpOTBSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJoZzoyMDJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwMlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODlvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ2NDBkMTI4ZDY0MGQxMjhkMzg0ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkMzg0ZDg5NmQ1MTJkODk2ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDEyOGQ4OTZkMTI4ZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODlSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMDFvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwMVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODhvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ2NDBkMTI4ZDY0MGQxMjhkMzg0ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDM4NGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkMTI4ZDc2OGQwZDc2OGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDc2OGQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkNzY4ZDM4NGQ3NjhkMzg0ZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk4OFIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjIwMG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjAwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo4N29SMWQ3NjhSMmFkMTI4ZDM4NGQwZDM4NGQwZDg5NmQxMjhkODk2ZDEyOGQzODRkMzg0ZDUxMmQyNTZkNTEyZDI1NmQ4OTZkMzg0ZDg5NmQzODRkNTEyZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDM4NGQ1MTJkODk2ZDY0MGQ4OTZkNjQwZDM4NGQ1MTJkMzg0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOTlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5OVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODZvUjFkNzY4UjJhZDBkODk2ZDEyOGQ4OTZkMTI4ZDM4NGQwZDM4NGQwZDg5NmQyNTZkODk2ZDM4NGQ4OTZkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ4OTZkMzg0ZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDM4NGQzODRkMzg0ZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTg2UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOThvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5OFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODVvUjFkNzY4UjJhZDM4NGQ4OTZkNTEyZDg5NmQ1MTJkMzg0ZDM4NGQzODRkMzg0ZDg5NmQxMjhkMzg0ZDBkMzg0ZDBkODk2ZDEyOGQ4OTZkMTI4ZDM4NGQxMjhkODk2ZDEyOGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTg1UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE5N29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTk3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo4NG9SMWQ3NjhSMmFkMTI4ZDEwMjRkMjU2ZDEwMjRkMjU2ZDUxMmQzODRkNTEyZDM4NGQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkMTAyNGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTg0UjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmhnOjE5Nm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTk2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo4M29SMWQ3NjhSMmFkMGQ2NDBkMTI4ZDY0MGQxMjhkNTEyZDBkNTEyZDBkNjQwZDEyOGQzODRkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQzODRkMTI4ZDM4NGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkNTEyZDg5NmQ1MTJkNzY4ZDM4NGQ3NjhkMzg0ZDg5NmQ1MTJkODk2ZDBkODk2ZDBkMTAyNGQzODRkMTAyNGQzODRkODk2ZDBkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODNSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOTVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODJvUjFkNzY4UjJhZDUxMmQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQwZDEwMjRkMGQzODRkMzg0ZDM4NGQzODRkNTEwLjk3NmQxMjhkNTEwLjk3NmQxMjhkNzY2Ljk3NmQzODRkNzY2Ljk3NmQzODRkNTEyZDUxMmQ1MTJkNTEyZDc2OGQzODRkNzY4ZDM4NGQ4OTZkNTEyZDg5NmQ1MTJkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTgyUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTk0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxOTRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjgxb1IxZDc2OFIyYWQzODRkODk0Ljk3NmQzODRkNTEzLjAyNGQxMjhkNTEzLjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQxMjhkODk2ZDBkODk2ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkNTEyZDUxMmQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDEwMjRkNTEyZDExNTJkMzg0ZDExNTJkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkLTEyOFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTgxUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTkzb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxOTNSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjgwb1IxZDc2OFIyYWQzODRkNTEyZDUxMmQ1MTJkNTEyZDc2OGQzODRkNzY4ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQwZDEwMjRkMGQzODRkMzg0ZDM4NGQzODRkNTEyZDEyOGQ3NjYuOTc2ZDM4NGQ3NjYuOTc2ZDM4NGQ1MTMuMDI0ZDEyOGQ1MTMuMDI0ZDEyOGQ3NjYuOTc2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODBSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOTJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5MlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NzlvUjFkNzY4UjJhZDM4NGQ4OTQuOTc2ZDM4NGQ1MTMuMDI0ZDEyOGQ1MTMuMDI0ZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDEyOGQ4OTZkMGQ4OTZkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDM4NGQzODRkMzg0ZDUxMmQ1MTJkNTEyZDUxMmQ4OTZkMzg0ZDg5NmQzODRkMTAyNGQxMjhkMTAyNGQxMjhkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNzlSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTkxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxOTFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjc4b1IxZDc2OFIyYWQzODRkNzY4ZDM4NGQxMDI0ZDUxMmQxMDI0ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQzODRkNzY4ZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTc4UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE5MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTkwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3N29SMWQ3NjhSMmFkMTI4ZDUxMmQxMjhkMzg0ZDBkMzg0ZDBkMTAyNGQxMjhkMTAyNGQxMjhkNjQwZDI1NmQ2NDBkMjU2ZDUxMmQxMjhkNTEyZDI1NmQ3NjhkMzg0ZDc2OGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQ1MTJkNTEyZDM4NGQ1MTJkMzg0ZDY0MGQ1MTJkNjQwZDUxMmQxMDI0ZDY0MGQxMDI0ZDY0MGQzODRkNTEyZDM4NGQ1MTJkNTEyaFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNzdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE4OW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTg5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3Nm9SMWQ3NjhSMmFkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQzODRkMGQzODRkMGQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNzZSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJoZzoxODhvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE4OFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NzVvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ3NjhkMjU2ZDc2OGQyNTZkNjQwZDEyOGQ2NDBkMTI4ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDM4NGQ4OTZkMzg0ZDc2OGQyNTZkNzY4ZDI1NmQ4OTZkMzg0ZDg5NmQ1MTJkMTAyNGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk3NVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTg3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxODdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjc0b1IxZDc2OFIyYWQyNTZkMzg0ZDI1NmQ1MTJkMzg0ZDUxMmQzODRkODk2ZDUxMmQ4OTZkNTEyZDM4NGQyNTZkMzg0ZDBkNzY4ZDBkODk2ZDEyOGQ4OTZkMTI4ZDc2OGQwZDc2OGQxMjhkODk2ZDEyOGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTc0UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxODZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE4NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NzNvUjFkNzY4UjJhZDI1NmQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDg5NmQwZDg5NmQwZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQyNTZkODk2ZDI1NmQ1MTJoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk3M1IxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmhnOjE4NW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTg1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3Mm9SMWQ3NjhSMmFkMzg0ZDY0MGQxMjhkNjQwZDEyOGQzODRkMGQzODRkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ3NjhkMzg0ZDc2OGQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkMzg0ZDM4NGQzODRkMzg0ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTcyUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTg0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxODRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjcxb1IxZDc2OFIyYWQ1MTJkNTEyZDUxMmQzODRkMTI4ZDM4NGQxMjhkNTEyZDUxMmQ1MTJkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ1MTJkNTEyZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmQzODRkODk2ZDM4NGQ3NjhkMjU2ZDc2OGQyNTZkNjQwZDUxMmQ2NDBkNTEyZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk3MVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE4M29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTgzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3MG9SMWQ3NjhSMmFkMTI4ZDc2OGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQwZDM4NGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDc2OGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTcwUjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxODJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE4MlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjlvUjFkNzY4UjJhZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDBkMzg0ZDBkMTAyNGQzODRkMTAyNGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTY5UjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTgxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxODFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjY4b1IxZDc2OFIyYWQzODRkODk0Ljk3NmQzODRkNTEzLjAyNGQxMjhkNTEzLjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQzODRkMTAyNGQwZDEwMjRkMGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNjhSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE4MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTgwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo2N29SMWQ3NjhSMmFkMzg0ZDUxMmQzODRkMzg0ZDEyOGQzODRkMTI4ZDUxMmQzODRkNTEyZDEyOGQ1MTJkMGQ1MTJkMGQ4OTZkMTI4ZDg5NmQxMjhkNTEyZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQzODRkMTAyNGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTY3UjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3OW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTc5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo2Nm9SMWQ3NjhSMmFkMTI4ZDYzOC45NzZkMzg0ZDYzOC45NzZkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDYzOC45NzZkMzg0ZDc2OS4wMjRkMTI4ZDc2OS4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMzg0ZDc2OS4wMjRkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDBkMTAyNGQwZDM4NGQzODRkMzg0ZDM4NGQ1MTJkNTEyZDUxMmQ1MTJkNjQwZDM4NGQ2NDBkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk2NlIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTc4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNzhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjY1b1IxZDc2OFIyYWQxMjhkNTEyZDEyOGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDBkMTAyNGQwZDUxMmQxMjhkNTEyZDM4NGQ3NjhkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDc2OGQzODRkNzY4aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNjVSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTc3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNzdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjY0b1IxZDc2OFIyYWQ1MTJkODk0Ljk3NmQ1MTJkNzY4ZDM4NGQ3NjhkMzg0ZDg5NC45NzZkNTEyZDg5NC45NzZkNTEyZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDg5NC45NzZkMjU2ZDg5NC45NzZkMjU2ZDY0MGQ1MTJkNjQwZDUxMmQ1MTMuMDI0ZDY0MGQ1MTJkNjQwZDg5NmQ1MTJkODk2ZDUxMmQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDUxMmQzODRkNTEyZDUxMmQ2NDBkNTEyaFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNjRSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNzZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE3NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjNvUjFkNzY4UjJhZDBkMzg0ZDBkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQwZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQzODRkNTEyZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQxMjhkNjQwZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTYzUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNzVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE3NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjJvUjFkNzY4UjJhZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQxMjhkNTEyZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDg5NmQyNTZkODk2ZDI1NmQ3NjhkMTI4ZDc2OGQxMjhkODk2ZDI1NmQ3NjhkMzg0ZDc2OGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmQwZDg5NmQwZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk2MlIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3NG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTc0UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo2MW9SMWQ3NjhSMmFkMGQ1MTJkMGQ2NDBkMzg0ZDY0MGQzODRkNTEyZDBkNTEyZDBkNzY4ZDBkODk2ZDM4NGQ4OTZkMzg0ZDc2OGQwZDc2OGhSM2Q1MTJSNGQzODRSNWQwUjZkNTEyUjdkMTI4UjhkNTEyUjlkMFIxMGQyNTZSMTFpNjFSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNzNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE3M1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjBvUjFkNzY4UjJhZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDY0MGQyNTZkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQyNTZkMzg0ZDI1NmQ1MTJkMGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNzY4ZDI1NmQ4OTZkMjU2ZDc2OGQxMjhkNzY4ZDEyOGQ4OTZkMjU2ZDg5NmQzODRkMTAyNGQzODRkODk2ZDI1NmQ4OTZkMjU2ZDEwMjRkMzg0ZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk2MFIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3Mm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTcyUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo1OW9SMWQ3NjhSMmFkMTI4ZDUxMmQwZDUxMmQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMTI4ZDc2OGQwZDc2OGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDc2OGhSM2QyNTZSNGQxMjhSNWQwUjZkNTEyUjdkMFI4ZDUxMlI5ZDBSMTBkMjU2UjExaTU5UjEyZDBSMTNkMjU2UjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTcxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNzFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU4b1IxZDc2OFIyYWQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMGQ1MTJkMGQ2NDBkMGQ4OTZkMTI4ZDg5NmQxMjhkNzY4ZDBkNzY4ZDBkODk2aFIzZDI1NlI0ZDEyOFI1ZDBSNmQ1MTJSN2QxMjhSOGQ1MTJSOWQwUjEwZDI1NlIxMWk1OFIxMmQwUjEzZDI1NlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTcwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo1N29SMWQ3NjhSMmFkMTI4ZDUxMy4wMjRkMTI4ZDYzOC45NzZkMzg0ZDYzOC45NzZkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDg5NmQzODRkODk2ZDM4NGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkNTEyZDUxMmQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTU3UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTY5b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjlSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU2b1IxZDc2OFIyYWQzODRkNjM4Ljk3NmQzODRkNTEzLjAyNGQxMjhkNTEzLjAyNGQxMjhkNjM4Ljk3NmQzODRkNjM4Ljk3NmQzODRkODk0Ljk3NmQzODRkNzY5LjAyNGQxMjhkNzY5LjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQxMjhkODk2ZDBkODk2ZDBkNzY4ZDEyOGQ3NjhkMTI4ZDY0MGQwZDY0MGQwZDUxMmQxMjhkNTEyZDEyOGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDY0MGQzODRkNjQwZDM4NGQ3NjhkNTEyZDc2OGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTU2UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTY4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU1b1IxZDc2OFIyYWQwZDM4NGQwZDUxMmQzODRkNTEyZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkMzg0ZDBkMzg0ZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ3NjhkMTI4ZDc2OGQxMjhkMTAyNGQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ3NjhoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk1NVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTY3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU0b1IxZDc2OFIyYWQzODRkODk0Ljk3NmQzODRkNzY5LjAyNGQxMjhkNzY5LjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQxMjhkODk2ZDBkODk2ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDM4NGQ2NDBkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ4OTZkMzg0ZDg5NmQzODRkMTAyNGQxMjhkMTAyNGQxMjhkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNTRSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNjZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE2NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NTNvUjFkNzY4UjJhZDEyOGQ2NDBkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQzODRkMGQzODRkMGQ3NjhkMzg0ZDc2OGQzODRkNjQwZDEyOGQ2NDBkNTEyZDc2OGQzODRkNzY4ZDM4NGQ4OTZkNTEyZDg5NmQ1MTJkNzY4ZDM4NGQxMDI0ZDM4NGQ4OTZkMGQ4OTZkMGQxMDI0ZDM4NGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNTNSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNjVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE2NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NTJvUjFkNzY4UjJhZDEyOGQ2NDEuMDI0ZDEyOGQ3NjhkMjU2ZDc2OGQyNTZkNjQxLjAyNGQxMjhkNjQxLjAyNGQzODRkMzg0ZDM4NGQ3NjhkNTEyZDc2OGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMjU2ZDEwMjRkMjU2ZDg5NmQwZDg5NmQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMjU2ZDUxMmQyNTZkMzg0ZDM4NGQzODRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk1MlIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTY0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjUxb1IxZDc2OFIyYWQwZDM4NGQwZDUxMmQzODRkNTEyZDM4NGQzODRkMGQzODRkMzg0ZDY0MGQ1MTJkNjQwZDUxMmQ1MTJkMzg0ZDUxMmQzODRkNjQwZDEyOGQ2NDBkMTI4ZDc2OGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQ1MTJkODk2ZDUxMmQ3NjhkMzg0ZDc2OGQzODRkODk2ZDUxMmQ4OTZkMGQ4OTZkMGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMGQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk1MVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE2M29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTYzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo1MG9SMWQ3NjhSMmFkMGQzODRkMGQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDBkMzg0ZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkNTEyZDM4NGQ1MTJkMzg0ZDY0MGQxMjhkNjQwZDEyOGQ3NjhkMzg0ZDc2OGQzODRkNjQwZDEyOGQ2NDBkMGQxMDI0ZDUxMmQxMDI0ZDUxMmQ4OTZkMTI4ZDg5NmQxMjhkNzY4ZDBkNzY4ZDBkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTUwUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaGc6MTYyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjQ5b1IxZDc2OFIyYWQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkMzg0ZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDEwMjRoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk0OVIxMmQwUjEzZDM4NFIxNGFpMWkyaTJpMmkyaTJpMmhnOjE2MW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTYxUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo0OG9SMWQ3NjhSMmFkMzg0ZDg5NC45NzZkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMTI4ZDg5NmQwZDg5NmQwZDUxMmQxMjhkNTEyZDEyOGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk0OFIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNjBvUjFkNzY4UjJhaFIzZDUxMlI0ZDBSNWQwUjZkMFI3ZDBSOGQwUjlkMFIxMGQyNTZSMTFpMTYwUjEyZDBSMTNkNTEyUjE0YWhnOjQ3b1IxZDc2OFIyYWQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQzODRkNTEyZDM4NGQ2NDBkNTEyZDM4NGQ1MTJkNTEyZDY0MGQ1MTJkNjQwZDM4NGQ1MTJkMzg0ZDEyOGQ4OTZkMjU2ZDg5NmQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDg5NmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ3NjhkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNDdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNTlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1OVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDZvUjFkNzY4UjJhZDBkMTAyNGQxMjhkMTAyNGQxMjhkODk2ZDBkODk2ZDBkMTAyNGhSM2QyNTZSNGQxMjhSNWQwUjZkMTI4UjdkMFI4ZDEyOFI5ZDBSMTBkMjU2UjExaTQ2UjEyZDBSMTNkMjU2UjE0YWkxaTJpMmkyaTJoZzoxNThvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1OFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDVvUjFkNzY4UjJhZDBkNjQwZDBkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQwZDY0MGhSM2Q1MTJSNGQzODRSNWQwUjZkMzg0UjdkMjU2UjhkMzg0UjlkMFIxMGQyNTZSMTFpNDVSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmhnOjE1N29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTU3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo0NG9SMWQ3NjhSMmFkMTI4ZDEwMjRkMjU2ZDEwMjRkMjU2ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDBkMTE1MmQxMjhkMTE1MmQxMjhkMTAyNGQwZDEwMjRkMGQxMTUyaFIzZDM4NFI0ZDI1NlI1ZDBSNmQxMjhSN2QtMTI4UjhkMTI4UjlkMFIxMGQyNTZSMTFpNDRSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNTZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDNvUjFkNzY4UjJhZDEyOGQ4OTZkMjU2ZDg5NmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDBkNjQwZDBkNzY4ZDEyOGQ3NjhkMTI4ZDg5NmhSM2Q1MTJSNGQzODRSNWQwUjZkNTEyUjdkMTI4UjhkNTEyUjlkMFIxMGQyNTZSMTFpNDNSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNTVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDJvUjFkNzY4UjJhZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQwZDUxMmQxMjhkNTEyZDI1NmQ2NDBkMjU2ZDUxMmQxMjhkNTEyZDEyOGQ2NDBkMjU2ZDY0MGQzODRkNTEyZDM4NGQzODRkMjU2ZDM4NGQyNTZkNTEyZDM4NGQ1MTJkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNzY4ZDEyOGQ3NjhkMzg0ZDc2OGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQzODRkNzY4aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QyNTZSOGQ2NDBSOWQwUjEwZDI1NlIxMWk0MlIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE1NG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTU0UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo0MW9SMWQ3NjhSMmFkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDBkMzg0ZDI1NmQ1MTJkMTI4ZDUxMmQxMjhkODk2ZDI1NmQ4OTZkMjU2ZDUxMmQxMjhkODk2ZDBkODk2ZDBkMTAyNGQxMjhkMTAyNGQxMjhkODk2aFIzZDM4NFI0ZDI1NlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNDFSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTUzb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNTNSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjQwb1IxZDc2OFIyYWQyNTZkMzg0ZDEyOGQzODRkMTI4ZDUxMmQyNTZkNTEyZDI1NmQzODRkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ1MTJkMjU2ZDEwMjRkMjU2ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDI1NmQxMDI0aFIzZDM4NFI0ZDI1NlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNDBSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTUyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNTJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjM5b1IxZDc2OFIyYWQxMjhkMzg0ZDBkMzg0ZDBkNjQwZDEyOGQ2NDBkMTI4ZDM4NGhSM2QyNTZSNGQxMjhSNWQwUjZkNjQwUjdkMzg0UjhkNjQwUjlkMFIxMGQyNTZSMTFpMzlSMTJkMFIxM2QyNTZSMTRhaTFpMmkyaTJpMmhnOjE1MW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTUxUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzozOG9SMWQ3NjhSMmFkMzg0ZDc2OS4wMjRkMTI4ZDc2OS4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMzg0ZDc2OS4wMjRkNjQwZDEwMjRkNTEyZDEwMjRkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDM4NGQ2NDBkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ2NDBkNjQwZDY0MGQ2NDBkNzY4ZDUxMmQ3NjhkNTEyZDg5NmQ2NDBkODk2ZDY0MGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMzhSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNTBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1MFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MzdvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDM4NGQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDEwMjRkMjU2ZDc2OGQzODRkNzY4ZDM4NGQ2NDBkMjU2ZDY0MGQyNTZkNzY4ZDUxMmQ4OTZkNTEyZDEwMjRkNjQwZDEwMjRkNjQwZDg5NmQ1MTJkODk2aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMzdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNDlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0OVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MzZvUjFkNzY4UjJhZDM4NGQzODRkMjU2ZDM4NGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDY0MGQwZDY0MGQwZDc2OGQyNTZkNzY4ZDI1NmQ2NDBkNTEyZDY0MGQ1MTJkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQwZDg5NmQwZDEwMjRkMjU2ZDEwMjRkMjU2ZDExNTJkMzg0ZDExNTJkMzg0ZDg5NmQ1MTJkODk2ZDUxMmQ3NjhkMjU2ZDc2OGQyNTZkODk2ZDBkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QtMTI4UjhkNjQwUjlkMFIxMGQyNTZSMTFpMzZSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTQ4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNDhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjM1b1IxZDc2OFIyYWQ2NDBkNjQwZDY0MGQ1MTJkNTEyZDUxMmQ1MTJkMzg0ZDM4NGQzODRkMzg0ZDUxMmQyNTZkNTEyZDI1NmQzODRkMTI4ZDM4NGQxMjhkNTEyZDBkNTEyZDBkNjQwZDEyOGQ2NDBkMTI4ZDc2OGQwZDc2OGQwZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMzg0ZDg5NmQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkODk2ZDY0MGQ4OTZkNjQwZDc2OGQ1MTJkNzY4ZDUxMmQ2NDBkNjQwZDY0MGQzODRkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQzODRkNjQwZDM4NGQ3NjhoUjNkNzY4UjRkNjQwUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkzNVIxMmQwUjEzZDc2OFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjE0N29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTQ3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzozNG9SMWQ3NjhSMmFkMGQ2NDBkMTI4ZDY0MGQxMjhkMzg0ZDBkMzg0ZDBkNjQwZDI1NmQ2NDBkMzg0ZDY0MGQzODRkMzg0ZDI1NmQzODRkMjU2ZDY0MGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMzg0UjhkNjQwUjlkMFIxMGQyNTZSMTFpMzRSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNDZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MzNvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ3NjhkMTI4ZDc2OGQxMjhkMzg0ZDEyOGQ4OTZkMGQ4OTZkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZoUjNkMjU2UjRkMTI4UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkzM1IxMmQwUjEzZDI1NlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE0NW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTQ1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzozMm9SMWQ3NjhSMmFoUjNkNTEyUjRkMFI1ZDBSNmQwUjdkMFI4ZDBSOWQwUjEwZDI1NlIxMWkzMlIxMmQwUjEzZDUxMlIxNGFoZzoxNDRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0NFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTQzb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNDNSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI1NW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjU1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNDJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0MlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjU0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNTRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE0MW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTQxUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNTNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI1M1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTQwb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNDBSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI1Mm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjUyUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzOVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjUxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNTFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEzOG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTM4UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNTBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI1MFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTM3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMzdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0OW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQ5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzNlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjQ4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNDhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEzNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTM1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNDdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI0N1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTM0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMzRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0Nm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQ2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjQ1b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNDVSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEzMm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTMyUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNDRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI0NFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTMxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMzFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0M29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzMFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjQyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNDJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEyOW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTI5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNDFvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI0MVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTI4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMjhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEyN1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjM5b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzlSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEyNm9SMWQ3NjhSMmFkMTI4ZDM4NGQxMjhkNTEyZDI1NmQ1MTJkMjU2ZDM4NGQxMjhkMzg0ZDBkNjQwZDEyOGQ2NDBkMTI4ZDUxMmQwZDUxMmQwZDY0MGQzODRkNTEyZDUxMmQ1MTJkNTEyZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwaFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QzODRSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjZSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjIzOG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjM4UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjVvUjFkNzY4UjJhZDI1NmQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDI1NmQ2NDBkMjU2ZDM4NGQxMjhkODk2ZDBkODk2ZDBkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDg5NmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ3NjhoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjVSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMzdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIzN1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTI0b1IxZDc2OFIyYWQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDM4NGQwZDM4NGQwZDEwMjRoUjNkMjU2UjRkMTI4UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjRSMTJkMFIxM2QyNTZSMTRhaTFpMmkyaTJpMmhnOjIzNm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjM2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjNvUjFkNzY4UjJhZDEyOGQzODRkMTI4ZDY0MGQyNTZkNjQwZDI1NmQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDEyOGQzODRkMGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNzY4ZDEyOGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMjU2ZDg5NmQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjNSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJoZzoyMzVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIzNVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTIyb1IxZDc2OFIyYWQwZDUxMmQwZDY0MGQyNTZkNjQwZDI1NmQ3NjhkMzg0ZDc2OGQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQwZDUxMmQxMjhkODk2ZDBkODk2ZDBkMTAyNGQ1MTJkMTAyNGQ1MTJkODk2ZDI1NmQ4OTZkMjU2ZDc2OGQxMjhkNzY4ZDEyOGQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMjJSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaGc6MjM0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEyMW9SMWQ3NjhSMmFkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ1MTJkMzg0ZDEwMjRkMzg0ZDExNTJkNTEyZDExNTJkNTEyZDUxMmQzODRkNTEyZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQzODRkMTAyNGQxMjhkMTE1MmQxMjhkMTI4MGQzODRkMTI4MGQzODRkMTE1MmQxMjhkMTE1MmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkLTI1NlI4ZDUxMlI5ZDBSMTBkMjU2UjExaTEyMVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIzM29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjMzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjBvUjFkNzY4UjJhZDBkNTEyZDBkNjQwZDEyOGQ2NDBkMTI4ZDUxMmQwZDUxMmQzODRkNTEyZDI1NmQ1MTJkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDY0MGQxMjhkNjQwZDEyOGQ4OTZkMjU2ZDg5NmQyNTZkNjQwZDEyOGQ4OTZkMGQ4OTZkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMzg0ZDEwMjRkMzg0ZDg5NmQyNTZkODk2ZDI1NmQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTIwUjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjMyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExOW9SMWQ3NjhSMmFkMTI4ZDUxMmQwZDUxMmQwZDc2OGQxMjhkNzY4ZDEyOGQ1MTJkNTEyZDc2OGQ2NDBkNzY4ZDY0MGQ1MTJkNTEyZDUxMmQ1MTJkNzY4ZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDUxMmQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDEwMjRkMzg0ZDEwMjRkNTEyZDEwMjRkNTEyZDc2OGQzODRkNzY4ZDM4NGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE5UjEyZDBSMTNkNzY4UjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjMxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExOG9SMWQ3NjhSMmFkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ1MTJkMzg0ZDUxMmQzODRkNzY4ZDEyOGQ3NjhkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ3NjhkMTI4ZDc2OGQyNTZkODk2ZDM4NGQ4OTZkMzg0ZDc2OGQyNTZkNzY4ZDI1NmQ4OTZkMTI4ZDEwMjRkMjU2ZDEwMjRkMjU2ZDg5NmQxMjhkODk2ZDEyOGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE4UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjMwb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzBSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExN29SMWQ3NjhSMmFkMzg0ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDUxMmQxMDI0ZDUxMmQ1MTJkMzg0ZDUxMmQzODRkODk2ZDEyOGQ1MTJkMGQ1MTJkMGQ4OTZkMTI4ZDg5NmQxMjhkNTEyaFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE3UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIyOW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTZvUjFkNzY4UjJhZDI1NmQzODRkMTI4ZDM4NGQxMjhkNTEyZDBkNTEyZDBkNjQwZDEyOGQ2NDBkMTI4ZDg5NmQyNTZkODk2ZDI1NmQ2NDBkMzg0ZDY0MGQzODRkNTEyZDI1NmQ1MTJkMjU2ZDM4NGQzODRkMTAyNGQzODRkODk2ZDI1NmQ4OTZkMjU2ZDEwMjRkMzg0ZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMTZSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjI4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMjhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExNW9SMWQ3NjhSMmFkMTI4ZDUxMmQxMjhkNjQwZDBkNjQwZDBkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQ1MTJkNjQwZDUxMmQ1MTJkMTI4ZDUxMmQwZDg5NmQwZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQ1MTJkODk2ZDUxMmQ3NjhkMjU2ZDc2OGQyNTZkODk2ZDBkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE1UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjIyN29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTRvUjFkNzY4UjJhZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDM4NGQ2NDBkMzg0ZDUxMmQxMjhkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMGQ1MTJkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ3NjhoUjNkNTEyUjRkMzg0UjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMTRSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjIyNm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTNvUjFkNzY4UjJhZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2ZDEyOGQ2NDBkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQxMjgwZDM4NGQxMjgwZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ2NDBkMTI4ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkLTI1NlI4ZDUxMlI5ZDBSMTBkMjU2UjExaTExM1IxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmhnOjIyNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTJvUjFkNzY4UjJhZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDEyODBkMGQxMjgwZDBkNTEyZDM4NGQ1MTJkMzg0ZDY0MGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQzODRkNjQxLjAyNGQxMjhkNjQxLjAyNGQxMjhkODk0Ljk3NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkLTI1NlI4ZDUxMlI5ZDBSMTBkMjU2UjExaTExMlIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIyNG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI0UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZ2h5ODpmb250TmFtZXk1OjA0YjAzZw"},{ name : "__ASSET__font_5", data : "b3k0Omhhc2hxOjExMW95Njphc2NlbnRkNzY4eTQ6ZGF0YWFkMzg0ZDg5NC45NzZkMzg0ZDY0MS4wMjRkMTI4ZDY0MS4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMTI4ZDg5NmQwZDg5NmQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMzg0ZDUxMmQzODRkNjQwZDUxMmQ2NDBkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZoeTY6X3dpZHRoZDY0MHk0OnhNYXhkNTEyeTQ6eE1pbmQweTQ6eU1heGQ1MTJ5NDp5TWluZDB5NzpfaGVpZ2h0ZDUxMnk3OmxlYWRpbmdkMHk3OmRlc2NlbnRkMjU2eTg6Y2hhckNvZGVpMTExeTE1OmxlZnRzaWRlQmVhcmluZ2QweTEyOmFkdmFuY2VXaWR0aGQ2NDB5ODpjb21tYW5kc2FpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoyMjNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIyM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTEwb1IxZDc2OFIyYWQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkNjQwZDM4NGQ2NDBkMzg0ZDEwMjRkMTI4ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMGQ1MTJkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ2NDBoUjNkNjQwUjRkNTEyUjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMTBSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaGc6MjIyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMjJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEwOW9SMWQ3NjhSMmFkMGQ1MTJkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkMTAyNGQzODRkMTAyNGQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQwZDUxMmQ1MTJkMTAyNGQ2NDBkMTAyNGQ2NDBkNjQwZDUxMmQ2NDBkNTEyZDEwMjRoUjNkNzY4UjRkNjQwUjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMDlSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMjFvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIyMVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTA4b1IxZDc2OFIyYWQxMjhkMzg0ZDBkMzg0ZDBkMTAyNGQxMjhkMTAyNGQxMjhkMzg0aFIzZDI1NlI0ZDEyOFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMTA4UjEyZDBSMTNkMjU2UjE0YWkxaTJpMmkyaTJoZzoyMjBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIyMFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTA3b1IxZDc2OFIyYWQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQxMjhkNzY4ZDEyOGQzODRkMGQzODRkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMzg0ZDg5NmQzODRkNjQwZDUxMmQ1MTJkMzg0ZDUxMmQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQ1MTJkMTAyNGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMDdSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjE5b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMTlSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEwNm9SMWQ3NjhSMmFkMjU2ZDM4NGQxMjhkMzg0ZDEyOGQ1MTJkMjU2ZDUxMmQyNTZkMzg0ZDI1NmQ2NDBkMTI4ZDY0MGQxMjhkMTE1MmQyNTZkMTE1MmQyNTZkNjQwZDEyOGQxMTUyZDBkMTE1MmQwZDEyODBkMTI4ZDEyODBkMTI4ZDExNTJoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZC0yNTZSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMDZSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjE4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMThSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEwNW9SMWQ3NjhSMmFkMTI4ZDM4NGQwZDM4NGQwZDUxMmQxMjhkNTEyZDEyOGQzODRkMTI4ZDY0MGQwZDY0MGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDY0MGhSM2QyNTZSNGQxMjhSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTEwNVIxMmQwUjEzZDI1NlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjIxN29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjE3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMDRvUjFkNzY4UjJhZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMTI4ZDUxMmQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkNjQwZDM4NGQ2NDBkMzg0ZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMDRSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIxNm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjE2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMDNvUjFkNzY4UjJhZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2ZDEyOGQxMTUyZDM4NGQxMTUyZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ2NDBkMTI4ZDY0MGQxMjhkNTEyZDUxMmQ1MTJkNTEyZDExNTJkMzg0ZDExNTJkMzg0ZDEyODBkMTI4ZDEyODBkMTI4ZDExNTJoUjNkNjQwUjRkNTEyUjVkMFI2ZDUxMlI3ZC0yNTZSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMDNSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmhnOjIxNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjE1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMDJvUjFkNzY4UjJhZDM4NGQzODRkMjU2ZDM4NGQyNTZkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQxMjhkNTEyZDEyOGQ2NDBkMGQ2NDBkMGQ3NjhkMTI4ZDc2OGQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ1MTJkMTI4ZDUxMmhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTEwMlIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoyMTRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIxNFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTAxb1IxZDc2OFIyYWQyNTZkNzY2Ljk3NmQyNTZkNjQxLjAyNGQxMjhkNjQxLjAyNGQxMjhkNzY2Ljk3NmQyNTZkNzY2Ljk3NmQxMjhkMTAyNGQxMjhkODk2ZDBkODk2ZDBkNjQwZDEyOGQ2NDBkMTI4ZDUxMmQzODRkNTEyZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkNzY4ZDI1NmQ3NjhkMjU2ZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTAxUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoyMTNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIxM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTAwb1IxZDc2OFIyYWQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQzODRkNjQxLjAyNGQxMjhkNjQxLjAyNGQxMjhkODk0Ljk3NmQxMjhkNjQwZDEyOGQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDUxMmQzODRkNTEyZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmQwZDg5NmQwZDY0MGQxMjhkNjQwaFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMTAwUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MjEyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMTJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjk5b1IxZDc2OFIyYWQzODRkNjQwZDM4NGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDM4NGQ2NDBkMTI4ZDY0MGQwZDY0MGQwZDg5NmQxMjhkODk2ZDEyOGQ2NDBkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpOTlSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjExb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMTFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjk4b1IxZDc2OFIyYWQzODRkNjQwZDUxMmQ2NDBkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDBkMTAyNGQwZDM4NGQxMjhkMzg0ZDEyOGQ1MTJkMzg0ZDUxMmQzODRkNjQwZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpOThSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMTBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIxMFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTdvUjFkNzY4UjJhZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2ZDEyOGQ2NDBkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ2NDBkMTI4ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkMFI4ZDUxMlI5ZDBSMTBkMjU2UjExaTk3UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJoZzoyMDlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwOVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTZvUjFkNzY4UjJhZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQxMjhkNjQwZDI1NmQ2NDBkMjU2ZDUxMmQxMjhkNTEyZDEyOGQ2NDBoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZDM4NFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTk2UjEyZDBSMTNkMzg0UjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjA4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMDhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjk1b1IxZDc2OFIyYWQwZDg5NmQwZDEwMjRkNTEyZDEwMjRkNTEyZDg5NmQwZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkMTI4UjdkMFI4ZDEyOFI5ZDBSMTBkMjU2UjExaTk1UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJoZzoyMDdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwN1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTRvUjFkNzY4UjJhZDEyOGQzODRkMTI4ZDUxMmQyNTZkNTEyZDI1NmQzODRkMTI4ZDM4NGQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMGQ1MTJkMGQ2NDBkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwaFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QzODRSOGQ2NDBSOWQwUjEwZDI1NlIxMWk5NFIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMDZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwNlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTNvUjFkNzY4UjJhZDI1NmQxMDI0ZDI1NmQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkODk2ZDBkODk2ZDBkMTAyNGQyNTZkMTAyNGhSM2QzODRSNGQyNTZSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTkzUjEyZDBSMTNkMzg0UjE0YWkxaTJpMmkyaTJpMmkyaTJpMmhnOjIwNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjA1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo5Mm9SMWQ3NjhSMmFkMjU2ZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDEyOGQzODRkMTI4ZDUxMmQwZDUxMmQwZDM4NGQxMjhkMzg0ZDUxMmQ4OTZkMzg0ZDg5NmQzODRkNzY4ZDUxMmQ3NjhkNTEyZDg5NmQzODRkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQzODRkNjQwZDM4NGQ3NjhkNjQwZDEwMjRkNTEyZDEwMjRkNTEyZDg5NmQ2NDBkODk2ZDY0MGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpOTJSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMDRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwNFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTFvUjFkNzY4UjJhZDBkMzg0ZDBkMTAyNGQyNTZkMTAyNGQyNTZkODk2ZDEyOGQ4OTZkMTI4ZDUxMmQyNTZkNTEyZDI1NmQzODRkMGQzODRoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk5MVIxMmQwUjEzZDM4NFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJoZzoyMDNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6OTBvUjFkNzY4UjJhZDM4NGQzODRkMGQzODRkMGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDM4NGQ2NDBkMzg0ZDM4NGQyNTZkNjQwZDEyOGQ2NDBkMTI4ZDc2OGQyNTZkNzY4ZDI1NmQ2NDBkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQ3NjhkMGQ3NjhkMGQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpOTBSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJoZzoyMDJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwMlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODlvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ2NDBkMTI4ZDY0MGQxMjhkMzg0ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkMzg0ZDg5NmQ1MTJkODk2ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDEyOGQ4OTZkMTI4ZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODlSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMDFvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIwMVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODhvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ2NDBkMTI4ZDY0MGQxMjhkMzg0ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDM4NGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkMTI4ZDc2OGQwZDc2OGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDc2OGQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkNzY4ZDM4NGQ3NjhkMzg0ZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk4OFIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjIwMG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjAwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo4N29SMWQ3NjhSMmFkMTI4ZDM4NGQwZDM4NGQwZDg5NmQxMjhkODk2ZDEyOGQzODRkMzg0ZDUxMmQyNTZkNTEyZDI1NmQ4OTZkMzg0ZDg5NmQzODRkNTEyZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDM4NGQ1MTJkODk2ZDY0MGQ4OTZkNjQwZDM4NGQ1MTJkMzg0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOTlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5OVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODZvUjFkNzY4UjJhZDBkODk2ZDEyOGQ4OTZkMTI4ZDM4NGQwZDM4NGQwZDg5NmQyNTZkODk2ZDM4NGQ4OTZkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ4OTZkMzg0ZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDM4NGQzODRkMzg0ZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTg2UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOThvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5OFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODVvUjFkNzY4UjJhZDM4NGQ4OTZkNTEyZDg5NmQ1MTJkMzg0ZDM4NGQzODRkMzg0ZDg5NmQxMjhkMzg0ZDBkMzg0ZDBkODk2ZDEyOGQ4OTZkMTI4ZDM4NGQxMjhkODk2ZDEyOGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTg1UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE5N29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTk3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo4NG9SMWQ3NjhSMmFkMTI4ZDEwMjRkMjU2ZDEwMjRkMjU2ZDUxMmQzODRkNTEyZDM4NGQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkMTAyNGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTg0UjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmhnOjE5Nm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTk2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo4M29SMWQ3NjhSMmFkMGQ2NDBkMTI4ZDY0MGQxMjhkNTEyZDBkNTEyZDBkNjQwZDEyOGQzODRkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQzODRkMTI4ZDM4NGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkNTEyZDg5NmQ1MTJkNzY4ZDM4NGQ3NjhkMzg0ZDg5NmQ1MTJkODk2ZDBkODk2ZDBkMTAyNGQzODRkMTAyNGQzODRkODk2ZDBkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODNSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOTVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6ODJvUjFkNzY4UjJhZDUxMmQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQwZDEwMjRkMGQzODRkMzg0ZDM4NGQzODRkNTEwLjk3NmQxMjhkNTEwLjk3NmQxMjhkNzY2Ljk3NmQzODRkNzY2Ljk3NmQzODRkNTEyZDUxMmQ1MTJkNTEyZDc2OGQzODRkNzY4ZDM4NGQ4OTZkNTEyZDg5NmQ1MTJkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTgyUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTk0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxOTRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjgxb1IxZDc2OFIyYWQzODRkODk0Ljk3NmQzODRkNTEzLjAyNGQxMjhkNTEzLjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQxMjhkODk2ZDBkODk2ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkNTEyZDUxMmQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDEwMjRkNTEyZDExNTJkMzg0ZDExNTJkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkLTEyOFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTgxUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTkzb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxOTNSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjgwb1IxZDc2OFIyYWQzODRkNTEyZDUxMmQ1MTJkNTEyZDc2OGQzODRkNzY4ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQwZDEwMjRkMGQzODRkMzg0ZDM4NGQzODRkNTEyZDEyOGQ3NjYuOTc2ZDM4NGQ3NjYuOTc2ZDM4NGQ1MTMuMDI0ZDEyOGQ1MTMuMDI0ZDEyOGQ3NjYuOTc2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpODBSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoxOTJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE5MlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NzlvUjFkNzY4UjJhZDM4NGQ4OTQuOTc2ZDM4NGQ1MTMuMDI0ZDEyOGQ1MTMuMDI0ZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDEyOGQ4OTZkMGQ4OTZkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDM4NGQzODRkMzg0ZDUxMmQ1MTJkNTEyZDUxMmQ4OTZkMzg0ZDg5NmQzODRkMTAyNGQxMjhkMTAyNGQxMjhkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNzlSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTkxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxOTFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjc4b1IxZDc2OFIyYWQzODRkNzY4ZDM4NGQxMDI0ZDUxMmQxMDI0ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQzODRkNzY4ZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTc4UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE5MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTkwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3N29SMWQ3NjhSMmFkMTI4ZDUxMmQxMjhkMzg0ZDBkMzg0ZDBkMTAyNGQxMjhkMTAyNGQxMjhkNjQwZDI1NmQ2NDBkMjU2ZDUxMmQxMjhkNTEyZDI1NmQ3NjhkMzg0ZDc2OGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQ1MTJkNTEyZDM4NGQ1MTJkMzg0ZDY0MGQ1MTJkNjQwZDUxMmQxMDI0ZDY0MGQxMDI0ZDY0MGQzODRkNTEyZDM4NGQ1MTJkNTEyaFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNzdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE4OW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTg5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3Nm9SMWQ3NjhSMmFkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQzODRkMGQzODRkMGQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNzZSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJoZzoxODhvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE4OFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NzVvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ3NjhkMjU2ZDc2OGQyNTZkNjQwZDEyOGQ2NDBkMTI4ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDM4NGQ4OTZkMzg0ZDc2OGQyNTZkNzY4ZDI1NmQ4OTZkMzg0ZDg5NmQ1MTJkMTAyNGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkNTEyZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk3NVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTg3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxODdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjc0b1IxZDc2OFIyYWQyNTZkMzg0ZDI1NmQ1MTJkMzg0ZDUxMmQzODRkODk2ZDUxMmQ4OTZkNTEyZDM4NGQyNTZkMzg0ZDBkNzY4ZDBkODk2ZDEyOGQ4OTZkMTI4ZDc2OGQwZDc2OGQxMjhkODk2ZDEyOGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTc0UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxODZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE4NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NzNvUjFkNzY4UjJhZDI1NmQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDg5NmQwZDg5NmQwZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQyNTZkODk2ZDI1NmQ1MTJoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk3M1IxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmhnOjE4NW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTg1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3Mm9SMWQ3NjhSMmFkMzg0ZDY0MGQxMjhkNjQwZDEyOGQzODRkMGQzODRkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ3NjhkMzg0ZDc2OGQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkMzg0ZDM4NGQzODRkMzg0ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTcyUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTg0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxODRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjcxb1IxZDc2OFIyYWQ1MTJkNTEyZDUxMmQzODRkMTI4ZDM4NGQxMjhkNTEyZDUxMmQ1MTJkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ1MTJkNTEyZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmQzODRkODk2ZDM4NGQ3NjhkMjU2ZDc2OGQyNTZkNjQwZDUxMmQ2NDBkNTEyZDEwMjRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk3MVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE4M29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTgzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo3MG9SMWQ3NjhSMmFkMTI4ZDc2OGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQwZDM4NGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDc2OGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTcwUjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxODJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE4MlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjlvUjFkNzY4UjJhZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDBkMzg0ZDBkMTAyNGQzODRkMTAyNGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTY5UjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTgxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxODFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjY4b1IxZDc2OFIyYWQzODRkODk0Ljk3NmQzODRkNTEzLjAyNGQxMjhkNTEzLjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQzODRkMTAyNGQwZDEwMjRkMGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNjhSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjE4MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTgwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo2N29SMWQ3NjhSMmFkMzg0ZDUxMmQzODRkMzg0ZDEyOGQzODRkMTI4ZDUxMmQzODRkNTEyZDEyOGQ1MTJkMGQ1MTJkMGQ4OTZkMTI4ZDg5NmQxMjhkNTEyZDM4NGQxMDI0ZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQzODRkMTAyNGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTY3UjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3OW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTc5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo2Nm9SMWQ3NjhSMmFkMTI4ZDYzOC45NzZkMzg0ZDYzOC45NzZkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDYzOC45NzZkMzg0ZDc2OS4wMjRkMTI4ZDc2OS4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMzg0ZDc2OS4wMjRkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDBkMTAyNGQwZDM4NGQzODRkMzg0ZDM4NGQ1MTJkNTEyZDUxMmQ1MTJkNjQwZDM4NGQ2NDBkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk2NlIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTc4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNzhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjY1b1IxZDc2OFIyYWQxMjhkNTEyZDEyOGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDBkMTAyNGQwZDUxMmQxMjhkNTEyZDM4NGQ3NjhkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDc2OGQzODRkNzY4aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNjVSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTc3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNzdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjY0b1IxZDc2OFIyYWQ1MTJkODk0Ljk3NmQ1MTJkNzY4ZDM4NGQ3NjhkMzg0ZDg5NC45NzZkNTEyZDg5NC45NzZkNTEyZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDg5NC45NzZkMjU2ZDg5NC45NzZkMjU2ZDY0MGQ1MTJkNjQwZDUxMmQ1MTMuMDI0ZDY0MGQ1MTJkNjQwZDg5NmQ1MTJkODk2ZDUxMmQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDUxMmQzODRkNTEyZDUxMmQ2NDBkNTEyaFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNjRSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNzZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE3NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjNvUjFkNzY4UjJhZDBkMzg0ZDBkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQwZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQzODRkNTEyZDM4NGQ2NDBkMTI4ZDY0MGQxMjhkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQxMjhkNjQwZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTYzUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNzVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE3NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjJvUjFkNzY4UjJhZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQxMjhkNTEyZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDg5NmQyNTZkODk2ZDI1NmQ3NjhkMTI4ZDc2OGQxMjhkODk2ZDI1NmQ3NjhkMzg0ZDc2OGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmQwZDg5NmQwZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk2MlIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3NG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTc0UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo2MW9SMWQ3NjhSMmFkMGQ1MTJkMGQ2NDBkMzg0ZDY0MGQzODRkNTEyZDBkNTEyZDBkNzY4ZDBkODk2ZDM4NGQ4OTZkMzg0ZDc2OGQwZDc2OGhSM2Q1MTJSNGQzODRSNWQwUjZkNTEyUjdkMTI4UjhkNTEyUjlkMFIxMGQyNTZSMTFpNjFSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNzNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE3M1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NjBvUjFkNzY4UjJhZDEyOGQ2NDBkMjU2ZDY0MGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDY0MGQyNTZkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQyNTZkMzg0ZDI1NmQ1MTJkMGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNzY4ZDI1NmQ4OTZkMjU2ZDc2OGQxMjhkNzY4ZDEyOGQ4OTZkMjU2ZDg5NmQzODRkMTAyNGQzODRkODk2ZDI1NmQ4OTZkMjU2ZDEwMjRkMzg0ZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk2MFIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3Mm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTcyUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo1OW9SMWQ3NjhSMmFkMTI4ZDUxMmQwZDUxMmQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMTI4ZDc2OGQwZDc2OGQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDc2OGhSM2QyNTZSNGQxMjhSNWQwUjZkNTEyUjdkMFI4ZDUxMlI5ZDBSMTBkMjU2UjExaTU5UjEyZDBSMTNkMjU2UjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTcxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNzFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU4b1IxZDc2OFIyYWQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMGQ1MTJkMGQ2NDBkMGQ4OTZkMTI4ZDg5NmQxMjhkNzY4ZDBkNzY4ZDBkODk2aFIzZDI1NlI0ZDEyOFI1ZDBSNmQ1MTJSN2QxMjhSOGQ1MTJSOWQwUjEwZDI1NlIxMWk1OFIxMmQwUjEzZDI1NlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE3MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTcwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo1N29SMWQ3NjhSMmFkMTI4ZDUxMy4wMjRkMTI4ZDYzOC45NzZkMzg0ZDYzOC45NzZkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDg5NmQzODRkODk2ZDM4NGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkNTEyZDUxMmQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTU3UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTY5b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjlSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU2b1IxZDc2OFIyYWQzODRkNjM4Ljk3NmQzODRkNTEzLjAyNGQxMjhkNTEzLjAyNGQxMjhkNjM4Ljk3NmQzODRkNjM4Ljk3NmQzODRkODk0Ljk3NmQzODRkNzY5LjAyNGQxMjhkNzY5LjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQxMjhkODk2ZDBkODk2ZDBkNzY4ZDEyOGQ3NjhkMTI4ZDY0MGQwZDY0MGQwZDUxMmQxMjhkNTEyZDEyOGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDY0MGQzODRkNjQwZDM4NGQ3NjhkNTEyZDc2OGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDg5NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTU2UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTY4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU1b1IxZDc2OFIyYWQwZDM4NGQwZDUxMmQzODRkNTEyZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkMzg0ZDBkMzg0ZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ3NjhkMTI4ZDc2OGQxMjhkMTAyNGQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ3NjhoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk1NVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTY3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjU0b1IxZDc2OFIyYWQzODRkODk0Ljk3NmQzODRkNzY5LjAyNGQxMjhkNzY5LjAyNGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQxMjhkODk2ZDBkODk2ZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDM4NGQ2NDBkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ4OTZkMzg0ZDg5NmQzODRkMTAyNGQxMjhkMTAyNGQxMjhkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNTRSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNjZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE2NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NTNvUjFkNzY4UjJhZDEyOGQ2NDBkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQzODRkMGQzODRkMGQ3NjhkMzg0ZDc2OGQzODRkNjQwZDEyOGQ2NDBkNTEyZDc2OGQzODRkNzY4ZDM4NGQ4OTZkNTEyZDg5NmQ1MTJkNzY4ZDM4NGQxMDI0ZDM4NGQ4OTZkMGQ4OTZkMGQxMDI0ZDM4NGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNTNSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNjVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE2NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NTJvUjFkNzY4UjJhZDEyOGQ2NDEuMDI0ZDEyOGQ3NjhkMjU2ZDc2OGQyNTZkNjQxLjAyNGQxMjhkNjQxLjAyNGQzODRkMzg0ZDM4NGQ3NjhkNTEyZDc2OGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMjU2ZDEwMjRkMjU2ZDg5NmQwZDg5NmQwZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMjU2ZDUxMmQyNTZkMzg0ZDM4NGQzODRoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk1MlIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTY0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjUxb1IxZDc2OFIyYWQwZDM4NGQwZDUxMmQzODRkNTEyZDM4NGQzODRkMGQzODRkMzg0ZDY0MGQ1MTJkNjQwZDUxMmQ1MTJkMzg0ZDUxMmQzODRkNjQwZDEyOGQ2NDBkMTI4ZDc2OGQzODRkNzY4ZDM4NGQ2NDBkMTI4ZDY0MGQ1MTJkODk2ZDUxMmQ3NjhkMzg0ZDc2OGQzODRkODk2ZDUxMmQ4OTZkMGQ4OTZkMGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMGQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk1MVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE2M29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTYzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo1MG9SMWQ3NjhSMmFkMGQzODRkMGQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDBkMzg0ZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkNTEyZDM4NGQ1MTJkMzg0ZDY0MGQxMjhkNjQwZDEyOGQ3NjhkMzg0ZDc2OGQzODRkNjQwZDEyOGQ2NDBkMGQxMDI0ZDUxMmQxMDI0ZDUxMmQ4OTZkMTI4ZDg5NmQxMjhkNzY4ZDBkNzY4ZDBkMTAyNGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNjQwUjdkMFI4ZDY0MFI5ZDBSMTBkMjU2UjExaTUwUjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaGc6MTYyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNjJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjQ5b1IxZDc2OFIyYWQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkMzg0ZDBkMzg0ZDBkNTEyZDEyOGQ1MTJkMTI4ZDEwMjRoUjNkMzg0UjRkMjU2UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk0OVIxMmQwUjEzZDM4NFIxNGFpMWkyaTJpMmkyaTJpMmhnOjE2MW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTYxUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo0OG9SMWQ3NjhSMmFkMzg0ZDg5NC45NzZkMzg0ZDUxMy4wMjRkMTI4ZDUxMy4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMTI4ZDg5NmQwZDg5NmQwZDUxMmQxMjhkNTEyZDEyOGQzODRkMzg0ZDM4NGQzODRkNTEyZDUxMmQ1MTJkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWk0OFIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNjBvUjFkNzY4UjJhaFIzZDUxMlI0ZDBSNWQwUjZkMFI3ZDBSOGQwUjlkMFIxMGQyNTZSMTFpMTYwUjEyZDBSMTNkNTEyUjE0YWhnOjQ3b1IxZDc2OFIyYWQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQzODRkNTEyZDM4NGQ2NDBkNTEyZDM4NGQ1MTJkNTEyZDY0MGQ1MTJkNjQwZDM4NGQ1MTJkMzg0ZDEyOGQ4OTZkMjU2ZDg5NmQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDg5NmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ3NjhkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNDdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNTlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1OVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDZvUjFkNzY4UjJhZDBkMTAyNGQxMjhkMTAyNGQxMjhkODk2ZDBkODk2ZDBkMTAyNGhSM2QyNTZSNGQxMjhSNWQwUjZkMTI4UjdkMFI4ZDEyOFI5ZDBSMTBkMjU2UjExaTQ2UjEyZDBSMTNkMjU2UjE0YWkxaTJpMmkyaTJoZzoxNThvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1OFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDVvUjFkNzY4UjJhZDBkNjQwZDBkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQwZDY0MGhSM2Q1MTJSNGQzODRSNWQwUjZkMzg0UjdkMjU2UjhkMzg0UjlkMFIxMGQyNTZSMTFpNDVSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmhnOjE1N29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTU3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo0NG9SMWQ3NjhSMmFkMTI4ZDEwMjRkMjU2ZDEwMjRkMjU2ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDBkMTE1MmQxMjhkMTE1MmQxMjhkMTAyNGQwZDEwMjRkMGQxMTUyaFIzZDM4NFI0ZDI1NlI1ZDBSNmQxMjhSN2QtMTI4UjhkMTI4UjlkMFIxMGQyNTZSMTFpNDRSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNTZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDNvUjFkNzY4UjJhZDEyOGQ4OTZkMjU2ZDg5NmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDBkNjQwZDBkNzY4ZDEyOGQ3NjhkMTI4ZDg5NmhSM2Q1MTJSNGQzODRSNWQwUjZkNTEyUjdkMTI4UjhkNTEyUjlkMFIxMGQyNTZSMTFpNDNSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNTVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1NVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6NDJvUjFkNzY4UjJhZDEyOGQ1MTJkMTI4ZDM4NGQwZDM4NGQwZDUxMmQxMjhkNTEyZDI1NmQ2NDBkMjU2ZDUxMmQxMjhkNTEyZDEyOGQ2NDBkMjU2ZDY0MGQzODRkNTEyZDM4NGQzODRkMjU2ZDM4NGQyNTZkNTEyZDM4NGQ1MTJkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNzY4ZDEyOGQ3NjhkMzg0ZDc2OGQzODRkNjQwZDI1NmQ2NDBkMjU2ZDc2OGQzODRkNzY4aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ2NDBSN2QyNTZSOGQ2NDBSOWQwUjEwZDI1NlIxMWk0MlIxMmQwUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE1NG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTU0UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzo0MW9SMWQ3NjhSMmFkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDBkMzg0ZDI1NmQ1MTJkMTI4ZDUxMmQxMjhkODk2ZDI1NmQ4OTZkMjU2ZDUxMmQxMjhkODk2ZDBkODk2ZDBkMTAyNGQxMjhkMTAyNGQxMjhkODk2aFIzZDM4NFI0ZDI1NlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNDFSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTUzb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNTNSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjQwb1IxZDc2OFIyYWQyNTZkMzg0ZDEyOGQzODRkMTI4ZDUxMmQyNTZkNTEyZDI1NmQzODRkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ1MTJkMjU2ZDEwMjRkMjU2ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDI1NmQxMDI0aFIzZDM4NFI0ZDI1NlI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpNDBSMTJkMFIxM2QzODRSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTUyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNTJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjM5b1IxZDc2OFIyYWQxMjhkMzg0ZDBkMzg0ZDBkNjQwZDEyOGQ2NDBkMTI4ZDM4NGhSM2QyNTZSNGQxMjhSNWQwUjZkNjQwUjdkMzg0UjhkNjQwUjlkMFIxMGQyNTZSMTFpMzlSMTJkMFIxM2QyNTZSMTRhaTFpMmkyaTJpMmhnOjE1MW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTUxUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzozOG9SMWQ3NjhSMmFkMzg0ZDc2OS4wMjRkMTI4ZDc2OS4wMjRkMTI4ZDg5NC45NzZkMzg0ZDg5NC45NzZkMzg0ZDc2OS4wMjRkNjQwZDEwMjRkNTEyZDEwMjRkNTEyZDg5NmQzODRkODk2ZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNTEyZDEyOGQ1MTJkMTI4ZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDM4NGQ2NDBkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ2NDBkNjQwZDY0MGQ2NDBkNzY4ZDUxMmQ3NjhkNTEyZDg5NmQ2NDBkODk2ZDY0MGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMzhSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJoZzoxNTBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE1MFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MzdvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkMzg0ZDUxMmQzODRkMzg0ZDM4NGQzODRkNjQwZDUxMmQ2NDBkNTEyZDM4NGQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDEwMjRkMjU2ZDc2OGQzODRkNzY4ZDM4NGQ2NDBkMjU2ZDY0MGQyNTZkNzY4ZDUxMmQ4OTZkNTEyZDEwMjRkNjQwZDEwMjRkNjQwZDg5NmQ1MTJkODk2aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ2NDBSN2QwUjhkNjQwUjlkMFIxMGQyNTZSMTFpMzdSMTJkMFIxM2Q3NjhSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNDlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0OVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MzZvUjFkNzY4UjJhZDM4NGQzODRkMjU2ZDM4NGQyNTZkNTEyZDEyOGQ1MTJkMTI4ZDY0MGQwZDY0MGQwZDc2OGQyNTZkNzY4ZDI1NmQ2NDBkNTEyZDY0MGQ1MTJkNTEyZDM4NGQ1MTJkMzg0ZDM4NGQwZDg5NmQwZDEwMjRkMjU2ZDEwMjRkMjU2ZDExNTJkMzg0ZDExNTJkMzg0ZDg5NmQ1MTJkODk2ZDUxMmQ3NjhkMjU2ZDc2OGQyNTZkODk2ZDBkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QtMTI4UjhkNjQwUjlkMFIxMGQyNTZSMTFpMzZSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaGc6MTQ4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNDhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjM1b1IxZDc2OFIyYWQ2NDBkNjQwZDY0MGQ1MTJkNTEyZDUxMmQ1MTJkMzg0ZDM4NGQzODRkMzg0ZDUxMmQyNTZkNTEyZDI1NmQzODRkMTI4ZDM4NGQxMjhkNTEyZDBkNTEyZDBkNjQwZDEyOGQ2NDBkMTI4ZDc2OGQwZDc2OGQwZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDI1NmQxMDI0ZDI1NmQ4OTZkMzg0ZDg5NmQzODRkMTAyNGQ1MTJkMTAyNGQ1MTJkODk2ZDY0MGQ4OTZkNjQwZDc2OGQ1MTJkNzY4ZDUxMmQ2NDBkNjQwZDY0MGQzODRkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQzODRkNjQwZDM4NGQ3NjhoUjNkNzY4UjRkNjQwUjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkzNVIxMmQwUjEzZDc2OFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjE0N29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTQ3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzozNG9SMWQ3NjhSMmFkMGQ2NDBkMTI4ZDY0MGQxMjhkMzg0ZDBkMzg0ZDBkNjQwZDI1NmQ2NDBkMzg0ZDY0MGQzODRkMzg0ZDI1NmQzODRkMjU2ZDY0MGhSM2Q1MTJSNGQzODRSNWQwUjZkNjQwUjdkMzg0UjhkNjQwUjlkMFIxMGQyNTZSMTFpMzRSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNDZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0NlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MzNvUjFkNzY4UjJhZDEyOGQzODRkMGQzODRkMGQ3NjhkMTI4ZDc2OGQxMjhkMzg0ZDEyOGQ4OTZkMGQ4OTZkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZoUjNkMjU2UjRkMTI4UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkzM1IxMmQwUjEzZDI1NlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE0NW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTQ1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzozMm9SMWQ3NjhSMmFoUjNkNTEyUjRkMFI1ZDBSNmQwUjdkMFI4ZDBSOWQwUjEwZDI1NlIxMWkzMlIxMmQwUjEzZDUxMlIxNGFoZzoxNDRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0NFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTQzb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNDNSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI1NW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjU1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxNDJvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTE0MlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjU0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNTRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjE0MW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTQxUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNTNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI1M1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTQwb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxNDBSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI1Mm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjUyUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzlvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzOVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjUxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNTFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEzOG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTM4UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNTBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI1MFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTM3b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMzdSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0OW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQ5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzZvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzNlIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjQ4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNDhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEzNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTM1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNDdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI0N1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTM0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMzRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0Nm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQ2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzNvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzM1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjQ1b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNDVSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEzMm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTMyUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNDRvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI0NFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTMxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMzFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0M29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMzBvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEzMFIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjQyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyNDJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEyOW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMTI5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoyNDFvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTI0MVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTI4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkxMjhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjI0MG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjQwUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTEyN1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjM5b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzlSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEyNm9SMWQ3NjhSMmFkMTI4ZDM4NGQxMjhkNTEyZDI1NmQ1MTJkMjU2ZDM4NGQxMjhkMzg0ZDBkNjQwZDEyOGQ2NDBkMTI4ZDUxMmQwZDUxMmQwZDY0MGQzODRkNTEyZDUxMmQ1MTJkNTEyZDM4NGQzODRkMzg0ZDM4NGQ1MTJkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwaFIzZDY0MFI0ZDUxMlI1ZDBSNmQ2NDBSN2QzODRSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjZSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjIzOG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjM4UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjVvUjFkNzY4UjJhZDI1NmQzODRkMGQzODRkMGQ1MTJkMTI4ZDUxMmQxMjhkNjQwZDI1NmQ2NDBkMjU2ZDM4NGQxMjhkODk2ZDBkODk2ZDBkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDg5NmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDY0MGQyNTZkNjQwZDI1NmQ3NjhoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjVSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkxaTJpMmkyaTJoZzoyMzdvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIzN1IxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTI0b1IxZDc2OFIyYWQwZDEwMjRkMTI4ZDEwMjRkMTI4ZDM4NGQwZDM4NGQwZDEwMjRoUjNkMjU2UjRkMTI4UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjRSMTJkMFIxM2QyNTZSMTRhaTFpMmkyaTJpMmhnOjIzNm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjM2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjNvUjFkNzY4UjJhZDEyOGQzODRkMTI4ZDY0MGQyNTZkNjQwZDI1NmQ1MTJkMzg0ZDUxMmQzODRkMzg0ZDEyOGQzODRkMGQ3NjhkMTI4ZDc2OGQxMjhkNjQwZDBkNjQwZDBkNzY4ZDEyOGQxMDI0ZDM4NGQxMDI0ZDM4NGQ4OTZkMjU2ZDg5NmQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMjNSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJoZzoyMzVvUjFkNzY4UjJhZDY0LjUxMmQxMDI0ZDY0LjUxMmQyNTZkNDQ4LjUxMmQyNTZkNDQ4LjUxMmQxMDI0ZDY0LjUxMmQxMDI0ZDEyOGQ5NTkuNDg4ZDM4NGQ5NTkuNDg4ZDM4NGQzMTkuNDg3ZDEyOGQzMTkuNDg3ZDEyOGQ5NTkuNDg4aFIzZDUxMlI0ZDQ0OC41MTJSNWQ2NC41MTJSNmQ3NjhSN2QwUjhkNzAzLjQ4OFI5ZDBSMTBkMjU2UjExaTIzNVIxMmQ2NC41MTJSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MTIyb1IxZDc2OFIyYWQwZDUxMmQwZDY0MGQyNTZkNjQwZDI1NmQ3NjhkMzg0ZDc2OGQzODRkNjQwZDUxMmQ2NDBkNTEyZDUxMmQwZDUxMmQxMjhkODk2ZDBkODk2ZDBkMTAyNGQ1MTJkMTAyNGQ1MTJkODk2ZDI1NmQ4OTZkMjU2ZDc2OGQxMjhkNzY4ZDEyOGQ4OTZoUjNkNjQwUjRkNTEyUjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMjJSMTJkMFIxM2Q2NDBSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaGc6MjM0b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzRSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjEyMW9SMWQ3NjhSMmFkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ1MTJkMzg0ZDEwMjRkMzg0ZDExNTJkNTEyZDExNTJkNTEyZDUxMmQzODRkNTEyZDM4NGQ4OTZkMTI4ZDg5NmQxMjhkMTAyNGQzODRkMTAyNGQxMjhkMTE1MmQxMjhkMTI4MGQzODRkMTI4MGQzODRkMTE1MmQxMjhkMTE1MmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkLTI1NlI4ZDUxMlI5ZDBSMTBkMjU2UjExaTEyMVIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIzM29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjMzUjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMjBvUjFkNzY4UjJhZDBkNTEyZDBkNjQwZDEyOGQ2NDBkMTI4ZDUxMmQwZDUxMmQzODRkNTEyZDI1NmQ1MTJkMjU2ZDY0MGQzODRkNjQwZDM4NGQ1MTJkMjU2ZDY0MGQxMjhkNjQwZDEyOGQ4OTZkMjU2ZDg5NmQyNTZkNjQwZDEyOGQ4OTZkMGQ4OTZkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMzg0ZDEwMjRkMzg0ZDg5NmQyNTZkODk2ZDI1NmQxMDI0ZDM4NGQxMDI0aFIzZDUxMlI0ZDM4NFI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTIwUjEyZDBSMTNkNTEyUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjMyb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzJSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExOW9SMWQ3NjhSMmFkMTI4ZDUxMmQwZDUxMmQwZDc2OGQxMjhkNzY4ZDEyOGQ1MTJkNTEyZDc2OGQ2NDBkNzY4ZDY0MGQ1MTJkNTEyZDUxMmQ1MTJkNzY4ZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNzY4ZDM4NGQ3NjhkMzg0ZDUxMmQxMjhkMTAyNGQyNTZkMTAyNGQyNTZkNzY4ZDEyOGQ3NjhkMTI4ZDEwMjRkMzg0ZDEwMjRkNTEyZDEwMjRkNTEyZDc2OGQzODRkNzY4ZDM4NGQxMDI0aFIzZDc2OFI0ZDY0MFI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE5UjEyZDBSMTNkNzY4UjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTFpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjMxb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzFSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExOG9SMWQ3NjhSMmFkMzg0ZDc2OGQ1MTJkNzY4ZDUxMmQ1MTJkMzg0ZDUxMmQzODRkNzY4ZDEyOGQ3NjhkMTI4ZDUxMmQwZDUxMmQwZDg5NmQxMjhkODk2ZDEyOGQ3NjhkMTI4ZDc2OGQyNTZkODk2ZDM4NGQ4OTZkMzg0ZDc2OGQyNTZkNzY4ZDI1NmQ4OTZkMTI4ZDEwMjRkMjU2ZDEwMjRkMjU2ZDg5NmQxMjhkODk2ZDEyOGQxMDI0aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE4UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMWkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjMwb1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMzBSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExN29SMWQ3NjhSMmFkMzg0ZDg5NmQxMjhkODk2ZDEyOGQxMDI0ZDUxMmQxMDI0ZDUxMmQ1MTJkMzg0ZDUxMmQzODRkODk2ZDEyOGQ1MTJkMGQ1MTJkMGQ4OTZkMTI4ZDg5NmQxMjhkNTEyaFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE3UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIyOW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI5UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTZvUjFkNzY4UjJhZDI1NmQzODRkMTI4ZDM4NGQxMjhkNTEyZDBkNTEyZDBkNjQwZDEyOGQ2NDBkMTI4ZDg5NmQyNTZkODk2ZDI1NmQ2NDBkMzg0ZDY0MGQzODRkNTEyZDI1NmQ1MTJkMjU2ZDM4NGQzODRkMTAyNGQzODRkODk2ZDI1NmQ4OTZkMjU2ZDEwMjRkMzg0ZDEwMjRoUjNkNTEyUjRkMzg0UjVkMFI2ZDY0MFI3ZDBSOGQ2NDBSOWQwUjEwZDI1NlIxMWkxMTZSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmkyaTJpMWkyaTJpMmkyaGc6MjI4b1IxZDc2OFIyYWQ2NC41MTJkMTAyNGQ2NC41MTJkMjU2ZDQ0OC41MTJkMjU2ZDQ0OC41MTJkMTAyNGQ2NC41MTJkMTAyNGQxMjhkOTU5LjQ4OGQzODRkOTU5LjQ4OGQzODRkMzE5LjQ4N2QxMjhkMzE5LjQ4N2QxMjhkOTU5LjQ4OGhSM2Q1MTJSNGQ0NDguNTEyUjVkNjQuNTEyUjZkNzY4UjdkMFI4ZDcwMy40ODhSOWQwUjEwZDI1NlIxMWkyMjhSMTJkNjQuNTEyUjEzZDUxMlIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmhnOjExNW9SMWQ3NjhSMmFkMTI4ZDUxMmQxMjhkNjQwZDBkNjQwZDBkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQ1MTJkNjQwZDUxMmQ1MTJkMTI4ZDUxMmQwZDg5NmQwZDEwMjRkMzg0ZDEwMjRkMzg0ZDg5NmQ1MTJkODk2ZDUxMmQ3NjhkMjU2ZDc2OGQyNTZkODk2ZDBkODk2aFIzZDY0MFI0ZDUxMlI1ZDBSNmQ1MTJSN2QwUjhkNTEyUjlkMFIxMGQyNTZSMTFpMTE1UjEyZDBSMTNkNjQwUjE0YWkxaTJpMmkyaTJpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjIyN29SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI3UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTRvUjFkNzY4UjJhZDM4NGQ1MTJkMjU2ZDUxMmQyNTZkNjQwZDM4NGQ2NDBkMzg0ZDUxMmQxMjhkNzY4ZDI1NmQ3NjhkMjU2ZDY0MGQxMjhkNjQwZDEyOGQ1MTJkMGQ1MTJkMGQxMDI0ZDEyOGQxMDI0ZDEyOGQ3NjhoUjNkNTEyUjRkMzg0UjVkMFI2ZDUxMlI3ZDBSOGQ1MTJSOWQwUjEwZDI1NlIxMWkxMTRSMTJkMFIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJpMmkyaTJpMmhnOjIyNm9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI2UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTNvUjFkNzY4UjJhZDEyOGQ4OTQuOTc2ZDM4NGQ4OTQuOTc2ZDM4NGQ2NDEuMDI0ZDEyOGQ2NDEuMDI0ZDEyOGQ4OTQuOTc2ZDEyOGQ2NDBkMTI4ZDUxMmQ1MTJkNTEyZDUxMmQxMjgwZDM4NGQxMjgwZDM4NGQxMDI0ZDEyOGQxMDI0ZDEyOGQ4OTZkMGQ4OTZkMGQ2NDBkMTI4ZDY0MGhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkLTI1NlI4ZDUxMlI5ZDBSMTBkMjU2UjExaTExM1IxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTFpMmkyaTJpMmkyaTJpMmkyaTJpMmhnOjIyNW9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI1UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZzoxMTJvUjFkNzY4UjJhZDM4NGQ2NDBkNTEyZDY0MGQ1MTJkODk2ZDM4NGQ4OTZkMzg0ZDEwMjRkMTI4ZDEwMjRkMTI4ZDEyODBkMGQxMjgwZDBkNTEyZDM4NGQ1MTJkMzg0ZDY0MGQxMjhkODk0Ljk3NmQzODRkODk0Ljk3NmQzODRkNjQxLjAyNGQxMjhkNjQxLjAyNGQxMjhkODk0Ljk3NmhSM2Q2NDBSNGQ1MTJSNWQwUjZkNTEyUjdkLTI1NlI4ZDUxMlI5ZDBSMTBkMjU2UjExaTExMlIxMmQwUjEzZDY0MFIxNGFpMWkyaTJpMmkyaTJpMmkyaTJpMmkyaTFpMmkyaTJpMmhnOjIyNG9SMWQ3NjhSMmFkNjQuNTEyZDEwMjRkNjQuNTEyZDI1NmQ0NDguNTEyZDI1NmQ0NDguNTEyZDEwMjRkNjQuNTEyZDEwMjRkMTI4ZDk1OS40ODhkMzg0ZDk1OS40ODhkMzg0ZDMxOS40ODdkMTI4ZDMxOS40ODdkMTI4ZDk1OS40ODhoUjNkNTEyUjRkNDQ4LjUxMlI1ZDY0LjUxMlI2ZDc2OFI3ZDBSOGQ3MDMuNDg4UjlkMFIxMGQyNTZSMTFpMjI0UjEyZDY0LjUxMlIxM2Q1MTJSMTRhaTFpMmkyaTJpMmkxaTJpMmkyaTJoZ2h5ODpmb250TmFtZXk1OjA0YjAzZw"}];
com.haxepunk.HaxePunkLogo.preload();
(function() {
	var a = Event.prototype;
	var b = flash.events.Event.prototype;
	a.clone = b.clone;
	a.isDefaultPrevented = b.isDefaultPrevented;
	a.get_target = b.get_target;
	a.set_target = b.set_target;
	a.get_currentTarget = b.get_currentTarget;
	a.set_currentTarget = b.set_currentTarget;
})();
ApplicationMain.config = { antialiasing : 0, background : 0, borderless : false, depthBuffer : false, fps : 60, fullscreen : false, height : 600, orientation : "", resizable : false, stencilBuffer : false, title : "HXPTest", vsync : false, width : 800};
ApplicationMain.embeds = 0;
js.Boot.__toStr = {}.toString;
flash.geom.Matrix.pool = [];
flash.Lib.qTimeStamp = Date.now() + 0;
flash.Lib.mouseX = 0;
flash.Lib.mouseY = 0;
flash.geom.Transform.DEG_TO_RAD = Math.PI / 180.0;
haxe.ds.ObjectMap.count = 0;
com.haxepunk.HXP.VERSION = "2.5.3";
com.haxepunk.HXP.INT_MIN_VALUE = -2147483648;
com.haxepunk.HXP.INT_MAX_VALUE = 2147483647;
com.haxepunk.HXP.blackColor = 0;
com.haxepunk.HXP.frameRate = 0;
com.haxepunk.HXP.rate = 1;
com.haxepunk.HXP.defaultFont = "font/04B_03__.ttf";
com.haxepunk.HXP.camera = new flash.geom.Point();
com.haxepunk.HXP.tweener = new com.haxepunk.Tweener();
com.haxepunk.HXP.focused = false;
com.haxepunk.HXP.orientations = [];
com.haxepunk.HXP.randomSeed = 0;
com.haxepunk.HXP.log = Reflect.makeVarArgs(function(data) {
	if(com.haxepunk.HXP._console != null) com.haxepunk.HXP._console.log(data);
});
com.haxepunk.HXP.watch = Reflect.makeVarArgs(function(properties) {
	if(com.haxepunk.HXP._console != null) com.haxepunk.HXP._console.watch(properties);
});
com.haxepunk.HXP._bitmap = new haxe.ds.StringMap();
com.haxepunk.HXP._seed = 0;
com.haxepunk.HXP._volume = 1;
com.haxepunk.HXP._pan = 0;
com.haxepunk.HXP._soundTransform = new flash.media.SoundTransform();
com.haxepunk.HXP.point = new flash.geom.Point();
com.haxepunk.HXP.point2 = new flash.geom.Point();
com.haxepunk.HXP.zero = new flash.geom.Point();
com.haxepunk.HXP.rect = new flash.geom.Rectangle();
com.haxepunk.HXP.matrix = new flash.geom.Matrix();
com.haxepunk.HXP.sprite = new flash.display.Sprite();
com.haxepunk.Entity._EMPTY = new com.haxepunk.Entity();
com.haxepunk.debug.Console.BIG_WIDTH_THRESHOLD = 420;
com.haxepunk.graphics.Image.TINTING_MULTIPLY = 0.0;
com.haxepunk.graphics.Image.TINTING_COLORIZE = 1.0;
com.haxepunk.graphics.Image._flips = new haxe.ds.ObjectMap();
com.haxepunk.graphics.Text.tag_re = new EReg("<([^>]+)>([^(?:</)]+)</[^>]+>","g");
com.haxepunk.graphics.atlas.Atlas.smooth = false;
com.haxepunk.graphics.atlas.AtlasData.BLEND_NONE = 0;
com.haxepunk.graphics.atlas.AtlasData.BLEND_ADD = 65536;
com.haxepunk.graphics.atlas.AtlasData.BLEND_NORMAL = 0;
com.haxepunk.graphics.atlas.AtlasData.BLEND_MULTIPLY = 131072;
com.haxepunk.graphics.atlas.AtlasData.BLEND_SCREEN = 262144;
com.haxepunk.graphics.atlas.AtlasData._dataPool = new haxe.ds.StringMap();
com.haxepunk.graphics.atlas.AtlasData._uniqueId = 0;
com.haxepunk.masks.Polygon.EPSILON = 0.000000001;
com.haxepunk.masks.Polygon.firstProj = new com.haxepunk.math.Projection();
com.haxepunk.masks.Polygon.secondProj = new com.haxepunk.math.Projection();
com.haxepunk.masks.Polygon.vertical = new flash.geom.Point(0,1);
com.haxepunk.masks.Polygon.horizontal = new flash.geom.Point(1,0);
com.haxepunk.masks.SlopedGrid._emptyTile = { type : com.haxepunk.masks.TileType.Empty};
com.haxepunk.tweens.TweenEvent.START = "start";
com.haxepunk.tweens.TweenEvent.UPDATE = "update";
com.haxepunk.tweens.TweenEvent.FINISH = "finish";
com.haxepunk.utils.Draw._matrix = new flash.geom.Matrix();
com.haxepunk.utils.Ease.B1 = 0.36363636363636365;
com.haxepunk.utils.Ease.B2 = 0.72727272727272729;
com.haxepunk.utils.Ease.B3 = 0.54545454545454541;
com.haxepunk.utils.Ease.B4 = 0.90909090909090906;
com.haxepunk.utils.Ease.B5 = 0.81818181818181823;
com.haxepunk.utils.Ease.B6 = 0.95454545454545459;
com.haxepunk.utils.Gesture.TAP = 1;
com.haxepunk.utils.Gesture.DOUBLE_TAP = 2;
com.haxepunk.utils.Gesture.LONG_PRESS = 3;
com.haxepunk.utils.Gesture.MOVE = 4;
com.haxepunk.utils.Gesture.PINCH = 5;
com.haxepunk.utils.Gesture.TWO_FINGER_TAP = 6;
com.haxepunk.utils.Gesture.longPressTime = 0.5;
com.haxepunk.utils.Gesture.doubleTapTime = 0.5;
com.haxepunk.utils.Gesture.deadZone = 5;
com.haxepunk.utils.Gesture.enabled = false;
com.haxepunk.utils.Gesture.gestures = new haxe.ds.IntMap();
com.haxepunk.utils.Gesture._lastTap = 0;
com.haxepunk.utils.HaxelibInfo.$name = "HaxePunk";
com.haxepunk.utils.HaxelibInfo.license = "MIT";
com.haxepunk.utils.HaxelibInfo.tags = ["flash","game","cpp","openfl"];
com.haxepunk.utils.HaxelibInfo.description = "A Haxe port of the FlashPunk AS3 engine.";
com.haxepunk.utils.HaxelibInfo.contributors = ["heardtheword","_ibilon"];
com.haxepunk.utils.HaxelibInfo.releasenote = "See CHANGELOG";
com.haxepunk.utils.HaxelibInfo.version = "2.5.3";
com.haxepunk.utils.HaxelibInfo.url = "http://haxepunk.com";
com.haxepunk.utils.HaxelibInfo.install = { 'openfl-ouya' : ""};
com.haxepunk.utils.HaxelibInfo.dependencies = { openfl : "", lime : ""};
com.haxepunk.utils.Input.keyString = "";
com.haxepunk.utils.Input.multiTouchSupported = false;
com.haxepunk.utils.Input.kKeyStringMax = 100;
com.haxepunk.utils.Input._enabled = false;
com.haxepunk.utils.Input._key = new haxe.ds.IntMap();
com.haxepunk.utils.Input._keyNum = 0;
com.haxepunk.utils.Input._press = new Array();
com.haxepunk.utils.Input._pressNum = 0;
com.haxepunk.utils.Input._release = new Array();
com.haxepunk.utils.Input._releaseNum = 0;
com.haxepunk.utils.Input._mouseWheelDelta = 0;
com.haxepunk.utils.Input._touches = new haxe.ds.IntMap();
com.haxepunk.utils.Input._touchOrder = new Array();
com.haxepunk.utils.Input._joysticks = new haxe.ds.IntMap();
com.haxepunk.utils.Input._control = new haxe.ds.StringMap();
com.haxepunk.utils.Input._nativeCorrection = new haxe.ds.StringMap();
com.haxepunk.utils.Joystick.deadZone = 0.15;
com.haxepunk.utils.OUYA_GAMEPAD.O_BUTTON = 0;
com.haxepunk.utils.OUYA_GAMEPAD.U_BUTTON = 1;
com.haxepunk.utils.OUYA_GAMEPAD.Y_BUTTON = 2;
com.haxepunk.utils.OUYA_GAMEPAD.A_BUTTON = 3;
com.haxepunk.utils.OUYA_GAMEPAD.LB_BUTTON = 4;
com.haxepunk.utils.OUYA_GAMEPAD.RB_BUTTON = 5;
com.haxepunk.utils.OUYA_GAMEPAD.BACK_BUTTON = 20;
com.haxepunk.utils.OUYA_GAMEPAD.START_BUTTON = 20;
com.haxepunk.utils.OUYA_GAMEPAD.LEFT_ANALOGUE_BUTTON = 6;
com.haxepunk.utils.OUYA_GAMEPAD.RIGHT_ANALOGUE_BUTTON = 7;
com.haxepunk.utils.OUYA_GAMEPAD.LEFT_TRIGGER_BUTTON = 12;
com.haxepunk.utils.OUYA_GAMEPAD.RIGHT_TRIGGER_BUTTON = 13;
com.haxepunk.utils.OUYA_GAMEPAD.DPAD_UP = 8;
com.haxepunk.utils.OUYA_GAMEPAD.DPAD_DOWN = 9;
com.haxepunk.utils.OUYA_GAMEPAD.DPAD_LEFT = 10;
com.haxepunk.utils.OUYA_GAMEPAD.DPAD_RIGHT = 11;
com.haxepunk.utils.OUYA_GAMEPAD.HOME_BUTTON = 16777234;
com.haxepunk.utils.OUYA_GAMEPAD.LEFT_ANALOGUE_X = 0;
com.haxepunk.utils.OUYA_GAMEPAD.LEFT_ANALOGUE_Y = 1;
com.haxepunk.utils.OUYA_GAMEPAD.RIGHT_ANALOGUE_X = 5;
com.haxepunk.utils.OUYA_GAMEPAD.RIGHT_ANALOGUE_Y = 4;
com.haxepunk.utils.OUYA_GAMEPAD.LEFT_TRIGGER = 2;
com.haxepunk.utils.OUYA_GAMEPAD.RIGHT_TRIGGER = 3;
com.haxepunk.utils.XBOX_GAMEPAD.A_BUTTON = 10;
com.haxepunk.utils.XBOX_GAMEPAD.B_BUTTON = 11;
com.haxepunk.utils.XBOX_GAMEPAD.X_BUTTON = 12;
com.haxepunk.utils.XBOX_GAMEPAD.Y_BUTTON = 13;
com.haxepunk.utils.XBOX_GAMEPAD.LB_BUTTON = 8;
com.haxepunk.utils.XBOX_GAMEPAD.RB_BUTTON = 9;
com.haxepunk.utils.XBOX_GAMEPAD.BACK_BUTTON = 5;
com.haxepunk.utils.XBOX_GAMEPAD.START_BUTTON = 4;
com.haxepunk.utils.XBOX_GAMEPAD.LEFT_ANALOGUE_BUTTON = 6;
com.haxepunk.utils.XBOX_GAMEPAD.RIGHT_ANALOGUE_BUTTON = 7;
com.haxepunk.utils.XBOX_GAMEPAD.XBOX_BUTTON = 14;
com.haxepunk.utils.XBOX_GAMEPAD.DPAD_UP = 0;
com.haxepunk.utils.XBOX_GAMEPAD.DPAD_DOWN = 1;
com.haxepunk.utils.XBOX_GAMEPAD.DPAD_LEFT = 2;
com.haxepunk.utils.XBOX_GAMEPAD.DPAD_RIGHT = 3;
com.haxepunk.utils.XBOX_GAMEPAD.LEFT_ANALOGUE_X = 0;
com.haxepunk.utils.XBOX_GAMEPAD.LEFT_ANALOGUE_Y = 1;
com.haxepunk.utils.XBOX_GAMEPAD.RIGHT_ANALOGUE_X = 2;
com.haxepunk.utils.XBOX_GAMEPAD.RIGHT_ANALOGUE_Y = 3;
com.haxepunk.utils.XBOX_GAMEPAD.LEFT_TRIGGER = 4;
com.haxepunk.utils.XBOX_GAMEPAD.RIGHT_TRIGGER = 5;
com.haxepunk.utils.PS3_GAMEPAD.TRIANGLE_BUTTON = 12;
com.haxepunk.utils.PS3_GAMEPAD.CIRCLE_BUTTON = 13;
com.haxepunk.utils.PS3_GAMEPAD.X_BUTTON = 14;
com.haxepunk.utils.PS3_GAMEPAD.SQUARE_BUTTON = 15;
com.haxepunk.utils.PS3_GAMEPAD.L1_BUTTON = 10;
com.haxepunk.utils.PS3_GAMEPAD.R1_BUTTON = 11;
com.haxepunk.utils.PS3_GAMEPAD.L2_BUTTON = 8;
com.haxepunk.utils.PS3_GAMEPAD.R2_BUTTON = 9;
com.haxepunk.utils.PS3_GAMEPAD.SELECT_BUTTON = 0;
com.haxepunk.utils.PS3_GAMEPAD.START_BUTTON = 3;
com.haxepunk.utils.PS3_GAMEPAD.PS_BUTTON = 16;
com.haxepunk.utils.PS3_GAMEPAD.LEFT_ANALOGUE_BUTTON = 1;
com.haxepunk.utils.PS3_GAMEPAD.RIGHT_ANALOGUE_BUTTON = 2;
com.haxepunk.utils.PS3_GAMEPAD.DPAD_UP = 4;
com.haxepunk.utils.PS3_GAMEPAD.DPAD_DOWN = 6;
com.haxepunk.utils.PS3_GAMEPAD.DPAD_LEFT = 7;
com.haxepunk.utils.PS3_GAMEPAD.DPAD_RIGHT = 5;
com.haxepunk.utils.PS3_GAMEPAD.LEFT_ANALOGUE_X = 0;
com.haxepunk.utils.PS3_GAMEPAD.LEFT_ANALOGUE_Y = 1;
com.haxepunk.utils.PS3_GAMEPAD.TRIANGLE_BUTTON_PRESSURE = 16;
com.haxepunk.utils.PS3_GAMEPAD.CIRCLE_BUTTON_PRESSURE = 17;
com.haxepunk.utils.PS3_GAMEPAD.X_BUTTON_PRESSURE = 18;
com.haxepunk.utils.PS3_GAMEPAD.SQUARE_BUTTON_PRESSURE = 19;
com.haxepunk.utils.Key.ANY = -1;
com.haxepunk.utils.Key.LEFT = 37;
com.haxepunk.utils.Key.UP = 38;
com.haxepunk.utils.Key.RIGHT = 39;
com.haxepunk.utils.Key.DOWN = 40;
com.haxepunk.utils.Key.ENTER = 13;
com.haxepunk.utils.Key.COMMAND = 15;
com.haxepunk.utils.Key.CONTROL = 17;
com.haxepunk.utils.Key.SPACE = 32;
com.haxepunk.utils.Key.SHIFT = 16;
com.haxepunk.utils.Key.BACKSPACE = 8;
com.haxepunk.utils.Key.CAPS_LOCK = 20;
com.haxepunk.utils.Key.DELETE = 46;
com.haxepunk.utils.Key.END = 35;
com.haxepunk.utils.Key.ESCAPE = 27;
com.haxepunk.utils.Key.HOME = 36;
com.haxepunk.utils.Key.INSERT = 45;
com.haxepunk.utils.Key.TAB = 9;
com.haxepunk.utils.Key.PAGE_DOWN = 34;
com.haxepunk.utils.Key.PAGE_UP = 33;
com.haxepunk.utils.Key.LEFT_SQUARE_BRACKET = 219;
com.haxepunk.utils.Key.RIGHT_SQUARE_BRACKET = 221;
com.haxepunk.utils.Key.TILDE = 192;
com.haxepunk.utils.Key.A = 65;
com.haxepunk.utils.Key.B = 66;
com.haxepunk.utils.Key.C = 67;
com.haxepunk.utils.Key.D = 68;
com.haxepunk.utils.Key.E = 69;
com.haxepunk.utils.Key.F = 70;
com.haxepunk.utils.Key.G = 71;
com.haxepunk.utils.Key.H = 72;
com.haxepunk.utils.Key.I = 73;
com.haxepunk.utils.Key.J = 74;
com.haxepunk.utils.Key.K = 75;
com.haxepunk.utils.Key.L = 76;
com.haxepunk.utils.Key.M = 77;
com.haxepunk.utils.Key.N = 78;
com.haxepunk.utils.Key.O = 79;
com.haxepunk.utils.Key.P = 80;
com.haxepunk.utils.Key.Q = 81;
com.haxepunk.utils.Key.R = 82;
com.haxepunk.utils.Key.S = 83;
com.haxepunk.utils.Key.T = 84;
com.haxepunk.utils.Key.U = 85;
com.haxepunk.utils.Key.V = 86;
com.haxepunk.utils.Key.W = 87;
com.haxepunk.utils.Key.X = 88;
com.haxepunk.utils.Key.Y = 89;
com.haxepunk.utils.Key.Z = 90;
com.haxepunk.utils.Key.F1 = 112;
com.haxepunk.utils.Key.F2 = 113;
com.haxepunk.utils.Key.F3 = 114;
com.haxepunk.utils.Key.F4 = 115;
com.haxepunk.utils.Key.F5 = 116;
com.haxepunk.utils.Key.F6 = 117;
com.haxepunk.utils.Key.F7 = 118;
com.haxepunk.utils.Key.F8 = 119;
com.haxepunk.utils.Key.F9 = 120;
com.haxepunk.utils.Key.F10 = 121;
com.haxepunk.utils.Key.F11 = 122;
com.haxepunk.utils.Key.F12 = 123;
com.haxepunk.utils.Key.F13 = 124;
com.haxepunk.utils.Key.F14 = 125;
com.haxepunk.utils.Key.F15 = 126;
com.haxepunk.utils.Key.DIGIT_0 = 48;
com.haxepunk.utils.Key.DIGIT_1 = 49;
com.haxepunk.utils.Key.DIGIT_2 = 50;
com.haxepunk.utils.Key.DIGIT_3 = 51;
com.haxepunk.utils.Key.DIGIT_4 = 52;
com.haxepunk.utils.Key.DIGIT_5 = 53;
com.haxepunk.utils.Key.DIGIT_6 = 54;
com.haxepunk.utils.Key.DIGIT_7 = 55;
com.haxepunk.utils.Key.DIGIT_8 = 56;
com.haxepunk.utils.Key.DIGIT_9 = 57;
com.haxepunk.utils.Key.NUMPAD_0 = 96;
com.haxepunk.utils.Key.NUMPAD_1 = 97;
com.haxepunk.utils.Key.NUMPAD_2 = 98;
com.haxepunk.utils.Key.NUMPAD_3 = 99;
com.haxepunk.utils.Key.NUMPAD_4 = 100;
com.haxepunk.utils.Key.NUMPAD_5 = 101;
com.haxepunk.utils.Key.NUMPAD_6 = 102;
com.haxepunk.utils.Key.NUMPAD_7 = 103;
com.haxepunk.utils.Key.NUMPAD_8 = 104;
com.haxepunk.utils.Key.NUMPAD_9 = 105;
com.haxepunk.utils.Key.NUMPAD_ADD = 107;
com.haxepunk.utils.Key.NUMPAD_DECIMAL = 110;
com.haxepunk.utils.Key.NUMPAD_DIVIDE = 111;
com.haxepunk.utils.Key.NUMPAD_ENTER = 108;
com.haxepunk.utils.Key.NUMPAD_MULTIPLY = 106;
com.haxepunk.utils.Key.NUMPAD_SUBTRACT = 109;
flash.media.Sound.library = new haxe.ds.StringMap();
flash.system.System.useCodePage = false;
flash.ui.Multitouch.supportsTouchEvents = false;
flash.ui.Multitouch.maxTouchPoints = 0;
haxe.Unserializer.DEFAULT_RESOLVER = Type;
haxe.Unserializer.BASE64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:";
haxe.xml.Parser.escapes = (function($this) {
	var $r;
	var h = new haxe.ds.StringMap();
	h.set("lt","<");
	h.set("gt",">");
	h.set("amp","&");
	h.set("quot","\"");
	h.set("apos","'");
	h.set("nbsp",String.fromCharCode(160));
	$r = h;
	return $r;
}(this));
openfl.Assets.cache = new openfl.AssetCache();
openfl.Assets.libraries = new haxe.ds.StringMap();
openfl.Assets.initialized = false;
ApplicationMain.main();
})();
