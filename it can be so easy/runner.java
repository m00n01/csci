import java.util.ArrayList;
public class runner{
	public static void main(String[] args){

		collegeList toPrint = new collegeList();
		ArrayList<student> list = new ArrayList<student>();

		for (int i = 0 ; i < 3 ; i++){

			String randName = "";
			String randlName = "";
			String randCollege = "";

			int rand = (int)(Math.random()*3)+1;

			if (rand == 1){
				randName = "John";
			} else if (rand == 2){
				randName = "Davis";
			} else {
				randName = "Lennon";
			}

			rand = (int)(Math.random()*3)+1;

			if (rand == 1){
				randlName = "Doe";
			} else if (rand == 2){
				randlName = "Chavez";
			} else {
				randlName = "Poor";
			}

			rand = (int)(Math.random()*3)+1;

			if (rand == 1){
				randCollege = "Harvard";
			} else if (rand == 2){
				randCollege = "Cal Poly Pomona";
			} else {
				randCollege = "Mt Sac Community College";
			}
			
			list.add(new student(randName, randlName, randCollege));

		}
		

		toPrint.addStudents(list);
		toPrint.printStudents();

	}
}