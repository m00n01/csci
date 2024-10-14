public class game{

	// Combine both board and game
	String name;
	boolean playerMove = true;
	
	
	static String[][] theBoard = {{"-","-","-"},
						   {"-","-","-"},
						   {"-","-","-"}};

	public game(String name){
		this.name = name;
	}

	// Prints out the board
	public static void printBoard(){

		System.out.println();
		for (int r = 0 ; r < theBoard.length ; r++){
			for (int c = 0 ; c < theBoard.length ; c++){
				
				System.out.print(theBoard[r][c] + " ");

			}
			System.out.println();
		}
		System.out.println();
	}

	public void placeMark(int row, int column, boolean isPlayer){

		if (checkAvailablity(row, column) && isPlayer){
			theBoard[row-1][column-1] = "X";
		} else if (checkAvailablity(row, column) && !isPlayer){
			theBoard[row-1][column-1] = "O";
		} else {
			System.out.println("That spot is already taken!");
		}
		
		printBoard();

	}

	public void botPlacesMark(){

		int num1 = (int)(Math.random()*3)+1;
		int num2 = (int)(Math.random()*3)+1;

		if (checkAvailablity(num1, num2)){
			placeMark(num1, num2, false);
		} else {
			num1 = (int)(Math.random()*3)+1;
			num2 = (int)(Math.random()*3)+1;
		}
	}


	private boolean checkAvailablity(int row, int column){
		
		if (theBoard[row-1][column-1] == "-"){
			return true;
		}
		return false;
	}

}