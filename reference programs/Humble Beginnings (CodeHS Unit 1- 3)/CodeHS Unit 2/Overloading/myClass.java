public class myClass {

    public String name;
    public int age;
    public int grade;

    public myClass(String name, int age){
        this.name = name;
        this.age = age;
        this.grade = 0;
    }

    public myClass(String name, int age, int grade){
        this.name = name;
        this.age = age;
        this.grade = grade;
    }

    public myClass(){
        this.name = "Daniel";
        this.age = 17;
        this.grade = 12;
    }
    
    public int getGrade(){
        return grade;
    }

    public String toString(){
        return name + " " + age + " " + grade;
    }
}
