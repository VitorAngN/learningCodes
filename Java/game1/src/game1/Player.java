package game1;

public class Player {
	public int vida = 10;
	public String nome = "";
	
	public void perderVida() {
		vida -=1 ;
		}
	public void ganharVida() {
		vida += 1;
	}
	public void morreuP() {
		vida = 0;
	}
	
}
