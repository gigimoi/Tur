package ;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;

/**
 * ...
 * @author Gavin Gassmann
 */
class Block extends Entity {
	public function new(x:Int, y:Int) {
		super(x * 10, y * 10);
		var img = new Image("graphics/block1.png");
		img.smooth = false;
		this.graphic = img;
		setHitbox(10, 10);
		this.type = "block";
	}
}