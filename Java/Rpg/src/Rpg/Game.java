package Rpg;
import java.awt.Canvas;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.image.BufferStrategy;

import javax.swing.JFrame;

	public class Game extends Canvas implements Runnable, KeyListener{
		
		public static int WIDTH = 720, HEIGHT = 480;
		
		public Player player;
		public World world;
		public Enemy enemy;
		public Game() {
			this.addKeyListener(this);
			this.setPreferredSize(new Dimension(WIDTH,HEIGHT));
			player = new Player(660,420);
			enemy = new Enemy(0,0);
			world = new World();
			
		
				
			
			
		
		}
		public void tick() {
		player.tick();
			
			
		}
		public void render() {
		BufferStrategy bs = this.getBufferStrategy();
		if(bs == null) {
			this.createBufferStrategy(3);
			return;
		}
		
		Graphics g = bs.getDrawGraphics();
		
		g.setColor(Color.black);
		g.fillRect(0,0,WIDTH,HEIGHT);
		player.render(g);
		enemy.render(g);
		world.render(g);
		bs.show();
		
		}
		public static void main(String[]args) {
			Game game = new Game();
			JFrame frame = new JFrame();
			frame.add(game);
			frame.setTitle("GAME-RPG");
			frame.pack();
			frame.setLocationRelativeTo(null);
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			frame.setVisible(true);
			new Thread(game).start();
		}
			
		
		
		@Override
		public void run() {
		while(true) {
		System.out.println("Running");
		tick();
		render();
		while (player.spd == 7) {
			if(enemy.right) {
				enemy.x+=enemy.spd;
			}else if(enemy.left) {
				enemy.x-=enemy.spd;
			}
			if(enemy.up){
				enemy.y-=enemy.spd;
			}else if(enemy.down) {
				enemy.y+=enemy.spd;
			}
			
		}
		try {
			Thread.sleep(1000/60);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		}
		}
		@Override
		public void keyPressed(KeyEvent e) {
			if(e.getKeyCode() == KeyEvent.VK_D){
				player.right = true;
			}else if (e.getKeyCode() == KeyEvent.VK_A) {
				player.left = true;
			}
			
			if(e.getKeyCode() == KeyEvent.VK_W){
				player.up = true;
			}else if (e.getKeyCode() == KeyEvent.VK_S) {
				player.down = true;
			}
		
		}
		@Override
		public void keyReleased(KeyEvent e) {
			if(e.getKeyCode() == KeyEvent.VK_D){
				player.right = false;
			}else if (e.getKeyCode() == KeyEvent.VK_A) {
			player.left = false;
			}
			if(e.getKeyCode() == KeyEvent.VK_W){
				player.up = false;
			}else if (e.getKeyCode() == KeyEvent.VK_S) {
			player.down = false;
			}
		}
		
	}
