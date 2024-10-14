public class runner{
	public static void main(String[] args){

		hangman game = new hangman();

		game.printOutline();
		game.guess('o');

	}
}