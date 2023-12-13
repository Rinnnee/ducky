package lab6_1;

public class Student extends Person{
    private String sid;
    private String major;

    public Student(String name, String gender, int age, String sid, String major){
        super(name, gender, age);
        this.sid = sid;
        this.major = major;
    }

    public String getSid(){
        return sid;
    }

    public void setSid(String sid){
        this.sid = sid;
    }

    public String getMajor(){
        return major;
    }

    public void setMajor(String major){
        this.major = major;
    }

    public void getDetails(){
        System.out.printf("%s's student ID is %s and s/he studies %s.\n",getName(),getSid(),getMajor());
    }
}
