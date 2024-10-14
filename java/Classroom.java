import java.util.ArrayList;
public class Classroom {

	ArrayList<Student> classroom;
	
	public Classroom(){

		classroom = new ArrayList<Student>();
		
	}

	public void addStudent(Student x){
		classroom.add(x);
		System.out.println("Added Student: " + x.getName());

	}

	public void printClassroom(){

		for (Student x : classroom){

			System.out.println(x.getName());

		}
		System.out.println("Classroom Size: " + classroom.size());

	}

}
