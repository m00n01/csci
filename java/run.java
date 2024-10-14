public class run{
    public static void main(String[] args){

    Student one = new Student("Daniel", 17, 12);
    Classroom myClass = new Classroom();
    
    myClass.addStudent(one);
    myClass.printClassroom();

    }
}