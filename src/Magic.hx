package ;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Spritemap;
import lime.math.Vector2;

/**
 * ...
 * @author Gavin Gassmann
 */
class Magic extends Entity {
	public function new(x:Float, y:Float) {
		super(x, y);
		magic = new Spritemap("graphics/magic.png", 3, 5);
		magic.add("red", [0, 1, 2, 2], 15);
		magic.add("green", [3, 4, 5, 4], 15);
		magic.add("blue", [6, 7, 8, 7], 15);
		magic.add("purple", [9, 10, 11, 10], 15);
		magic.smooth = false;
		magic.play("red");
		setHitbox(1, 1, -1, -1);
		velocity = new Vector2(0, 0);
		graphic = magic;
		lifetime = 60;
		inert = false;
		whitelistCollisions = new Array<Entity>();
	}
	override public function render():Void 
	{
		x -= 1.5;
		y -= 1.5;
		super.render();
		x += 1.5;
		y += 1.5;
	}
	override public function update():Void {
		super.update();
		var collision = collideTypes(["block", "blockFlammable", "player"], x + velocity.x, y + velocity.y);
		if (collision != null && !Lambda.has(whitelistCollisions, collision)) {
			if (collision.type == "blockFlammable") {
				var flammable = cast(collision, BlockFlammable);
				flammable.onFire = true;
			}
			velocity = new Vector2(0, 0);
		} else {
			moveBy(velocity.x, velocity.y);
		}
		lifetime--;
		if (lifetime <= 0) {
			scene.remove(this);
		}
	}
	private var magic:Spritemap;
	public var velocity:Vector2;
	public var lifetime:Int;
	public var inert:Bool;
	public var whitelistCollisions:Array<Entity>;
}