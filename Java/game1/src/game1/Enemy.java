package game1;

public class Enemy {
	public int vida = 100;
	public String nome = "Cachorro";
	public Enemy(int vida) {
		this.vida = vida;
		 
	}
	public void tomarDano() {
		vida--;
	}
	public int receberVida() {
		return vida;
		
	}
	public void curarVida() {
		vida += 1;
	}
}
