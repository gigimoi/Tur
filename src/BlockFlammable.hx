package ;
import com.haxepunk.graphics.Image;
import lime.math.Vector2;

/**
 * ...
 * @author Gavin Gassmann
 */
class BlockFlammable extends Block {
	public function new(x:Int, y:Int) {
		super(x, y);
		var img = new Image("graphics/block2.png");
		img.smooth = false;
		this.graphic = img;
		this.type = "blockFlammable";
		fireTime = 0;
		fireTicker = 0;
	}
	override public function update():Void {
		super.update();
		if (onFire) {
			if (fireTime < 4) {
				fireTime += 0.01;
			} else {
				scene.remove(this);
				return;
			}
			fireTicker += fireTime;
			while (fireTicker > 1) {
				fireTicker--;
				var magic = new Magic(x - 1 + Math.random() * 9, y - 1 + Math.random() * 9);
				scene.add(magic);
				magic.velocity = new Vector2((Math.random() - 0.5) / 2.0, (Math.random() - 0.5) / 2.0);
				magic.lifetime = cast(magic.lifetime / 8 + Math.random() * 10);
				magic.whitelistCollisions.push(this);
			}
		} else { 
			if (fireTime > 0) {
				fireTime -= 0.1;
			}
		}
	}
	public var onFire:Bool;
	private var fireTime:Float;
	private var fireTicker:Float;
}