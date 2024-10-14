import java.util.Scanner;
public class runner{
	public static void main(String[] args){

		game newGame = new game("Daniel");

		Scanner x = new Scanner(System.in);
		boolean didIWin = false;

		newGame.printBoard();
		while (!didIWin){
			System.out.println("Row: ");
			int row = x.nextInt();
			System.out.println("Col: ");
			int col = x.nextInt();

			newGame.placeMark(row, col, true);
			newGame.botPlacesMark();
		}

	}
}