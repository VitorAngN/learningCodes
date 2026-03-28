package Rpg;

import java.util.ArrayList;
import java.awt.Graphics;
import java.util.List;

public class World {
	public List<Background> backgrounds = new ArrayList<Background>();
	
	public World() {
		for(int xx = 0; xx < 15; xx++) {
			backgrounds.add(new Background(xx*69, 0));
			
			
		}
		
		
	}
	
	
	
	public void render(Graphics g) {
		for(int i = 0; i < backgrounds.size(); i++) {
			backgrounds.get(i).render(g);
			
			
			
		}
		
		
		
	}
}
