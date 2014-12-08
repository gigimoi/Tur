package ;
import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import lime.math.Vector2;

/**
 * ...
 * @author Gavin Gassmann
 */
class Player extends Entity {
	public function new(x:Int, y:Int) {
		super(x * 10, y * 10);
		setHitbox(4, 9, -4, -1);
		sprite = new Spritemap("graphics/player.png", 10, 10);
		sprite.add("idle", [0]);
		sprite.add("walk", [1, 2, 3, 2], 7);
		sprite.add("fall", [4, 5, 4, 5], 4);
		sprite.add("jump", [6]);
		sprite.play("idle");
		sprite.smooth = false;
		graphic = sprite;
		
		magic = new Magic(x, y);
		magic.inert = true;
		
		Input.define("left", [Key.LEFT, Key.A]);
        Input.define("right", [Key.RIGHT, Key.D]);
		Input.define("jump", [Key.UP, Key.SPACE, Key.W]);
		
		velocity = new Vector2(0, 0);
		
		fireCooldown = 0;
	}
	override public function update():Void  {
		super.update();
		velocity.x = 0;
        if (Input.check("left")) {
            velocity.x -= 0.5;
        }
        if (Input.check("right")) {
            velocity.x += 0.5;
        }
		
		if (velocity.x == 0) {
            sprite.play("idle");
        }
        else {
            sprite.play("walk");
            sprite.flipped = fireCooldown >= 2 ? sprite.flipped : velocity.x < 0;
        }
		velocity.y += 0.09;
		moveBy(velocity.x, velocity.y, ["block", "blockFlammable"], true);
		var onGround = collideTypes(["block", "blockFlammable"], x, y + 1) != null;
		if (onGround) {
			velocity.y = 0;
			if (Input.pressed("jump")) {
				velocity.y -= 2.3;
			}
		}
		else {
			if (velocity.y >= 0) {
				sprite.play("fall");
			} else {
				if (collideTypes(["block", "blockFlammable"], x, y - 1) != null) {
					velocity.y = 0;
				}
				sprite.play("jump");
			}
		}
		this.scene.camera.x = x - 100 + 5;
		this.scene.camera.y = y - 80 + 5;
		
		magic.lifetime = 10;
		magic.x = x + 7.5;
		if (sprite.flipped) {
			magic.x -= 5;
		}
		magic.y = y - .5;
		fireCooldown--;
		if (fireCooldown <= 0 && Input.mouseDown) {
			var mx = HXP.screen.mouseX + this.scene.camera.x;
			var my = HXP.screen.mouseY + this.scene.camera.y;
			for (i in 1...cast (Math.random() * 2 + 3)) {
				var mag = new Magic(magic.x, magic.y);
				var velocity:Vector2 = new Vector2(
					magic.x - mx + 1.5 + (Math.random() - 0.5) * 8,
					magic.y - my + 1.5 + (Math.random() - 0.5) * 8
				);
				velocity.normalize(-1);
				mag.velocity = velocity;
				mag.lifetime += cast (Math.random() * 10);
				mag.whitelistCollisions.push(this);
				scene.add(mag);
			}
			
			if (mx < x + 5) {
				sprite.flipped = true;
			} else {
				sprite.flipped = false;
			}
			fireCooldown = 5;
		}
		
	}
	private var sprite:Spritemap;
	private var velocity:Vector2;
	public var magic:Magic;
	private var fireCooldown:Int;
}