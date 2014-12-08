import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Text.StyleType;
import com.haxepunk.HXP;
import com.haxepunk.Scene;

class MainScene extends Scene {
	public function new() {
		super();
	}
	public override function begin() {
		HXP.screen.scaleX = HXP.screen.scaleY = 4;
		HXP.resize(HXP.stage.stageWidth, HXP.stage.stageHeight);
		var player = new Player(5, 4);
		for (i in 0...10) {
			add(new Block(i, 5));
		}
		for (i in 0...15) {
			add(new Block(i + 9, 7));
		}
		for (i in 0...4) {
			add(new BlockFlammable(15 + i, 6));
		}
		add(player);
		add(player.magic);
		var backdrop = new TurBackdrop(player);
		add(backdrop);
	}
}