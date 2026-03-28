package Rpg;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Rectangle;

public class Enemy extends Rectangle{
	public boolean right, left, down, up;
	public int spd = 5;
	public Enemy(int x, int y){
		super(x,y,64,64);	
	}
	public void tick() {
		if(right) {
			x+=spd;
		}else if(left) {
			x-=spd;
		}
		if(up){
			y-=spd;
		}else if(down) {
			y+=spd;
		}
		
		
	}
	public void render(Graphics g) {
		g.setColor(Color.red);
		g.fillRect(x, y, width, height);
		
	}
}
