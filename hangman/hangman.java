public class hangman {
	
	// Words

	String[] words = {"Hello", "World", "Lu"};;

	public hangman(){
		System.out.println("Let's play Hangman!");
	}

	// Choose a word

	String randomWord = words[(int)(Math.random()*2)+0];
	String[] outline = new String[randomWord.length()];

	// Print out Word Outline

	public void printOutline(){
		for (int i = 0 ; i < randomWord.length() ; i++){
			System.out.print("_ ");
			outline[i] = "_";
		}
	}

	// Show correct letters and reveals

	public void guess(char guessChar){

		for (int i = 0 ; i < randomWord.length() ; i++){

		}

	}

	// *OPTIONAL* Print out hangman

}
