import java.util.ArrayList;
public class collegeList {
	
	private ArrayList<student> arr;

	public collegeList(){
		arr = new ArrayList<student>();
	}

	public void addStudents(ArrayList<student> studentList){
	
		for (student x : studentList){

			arr.add(x);

		}

	}

	public void printStudents(){

		for (student x : arr){

			System.out.println(x.getfName() + " is attending " + x.getAttendingCollege());
		
		}

	}


}
