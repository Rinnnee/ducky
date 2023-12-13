package lab7_1;
import java.util.Scanner;
public class Person implements UserToolBox{
    private String fullName;
    private String firstName;
    private String middleName;
    private String lastName;
    private Email email;

    public Person(){
    }

    public Person(String fullName, Email email){
        this.fullName = fullName;
        setNamesOfUser(fullName);
        this.email = email;
    }

    public void setNamesOfUser(String fullName){
        String[] ss = fullName.split(" ");
        firstName = ss[0];
        middleName = ss[1];
        lastName = ss[2]; 
    }

    public String getFullName(){
        return fullName;
    }

    public String getFirstName(){
        return firstName;
    }

    public String getMiddleName(){
        return middleName;
    }

    public String getLastName(){
        return lastName;
    }

    public Email getEmail(){
        return email;
    }

    public void getInfo(){
        System.out.println("Full Name: "+getFullName());
        System.out.println("First Name: "+getFirstName());
        System.out.println("Middle Name: "+getMiddleName());
        System.out.println("Last Name: "+getLastName());
        email.getInfo();
    }

    public void verifyUser(Scanner sc){
        System.out.printf("Enter the password of \"%s\": ",email.getEmailAddress());
        String pass = sc.nextLine();
        if(pass.equals(getEmail().getPassword())){
            getInfo();
        }
        else{
            System.out.println("You don't have permission to access the account data!");
        }
    }
}
