package ;

import com.haxepunk.Entity;

/**
 * ...
 * @author Gavin Gassmann
 */
class TurBackdrop extends Entity
{
	var following:Player;
	public function new(player:Player) {
		super(player.x, player.y);
		following = player;
	}
	override public function update():Void 
	{
		super.update();
		x = following.x - 100 + 5;
		y = following.y - 80 + 5;
	}
}