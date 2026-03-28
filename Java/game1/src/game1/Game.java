package game1;

import java.util.ArrayList;

public class Game {
	public static void main(String[] args) {
		Player player = new Player();
		ArrayList<Enemy> Enemys =  new ArrayList<Enemy>();
		Enemys.add(new Enemy(100));
		Enemys.add(new Enemy(100));
		Enemys.add(new Enemy(100));
		Enemys.add(new Enemy(100));
		Enemys.add(new Enemy(100));
		Enemys.get(0).receberVida();
		System.out.println(Enemys.get(0).vida);
		for(int i = 0; i < Enemys.size(); i++) {
			Enemy EnemyLocal = Enemys.get(i);
			if(i == 1) {
			EnemyLocal.tomarDano();
			System.out.println(EnemyLocal.vida);
				
				
			}else {
			System.out.println(EnemyLocal.vida);	
				
				
			}
		}
		
		
		
		
		/*System.out.println("estado atual:"+player.vida);
		player.ganharVida();
		System.out.println("estado atual:"+player.vida);
		player.ganharVida();
		System.out.println("estado atual:"+player.vida);
		player.perderVida();
		System.out.println("estado atual:"+player.vida);
		player.morreuP();
		System.out.println("estado atual:"+player.vida+" - player está morto");
		*/
		/*EnemyExten EED = new EnemyExten();
		EED.receberVida();
		System.out.println(EED.receberVida());
		EED.tomarDano();
		System.out.println("vida agora: "+EED.vida);
		*/
		
	}
}