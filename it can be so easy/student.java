public class student {
	
	private String fname;
	private String lname;
	private String collegeAttending;

	public student(String fname, String lname, String collegeAttending){
		this.fname = fname;
		this.lname = lname;
		this.collegeAttending = collegeAttending;
	}

	public String getfName(){

		return fname;

	}

	public String getAttendingCollege(){

		return collegeAttending;

	}

}
