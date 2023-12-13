package lab7_2;
import lab7_1.*;
public class Email implements ToolBox{
    private String emailAddress;
    private String localPart;
    private String domainName;
    private String password;

    public Email(){
    }

    public Email(String localPart,String domainName, String password){
        this.localPart = localPart.toLowerCase();
        this.domainName = domainName.toLowerCase();
        emailAddress = this.localPart+"@"+this.domainName;
        this.password = password;
    }

    public String getEmailAddress(){
        return emailAddress;
    }

    public String getLocalPart(){
        return localPart;
    }

    public String getDomainName(){
        return domainName;
    }

    public String getPassword(){
        return password;
    }

    public void getInfo(){
        System.out.println("Email: "+getEmailAddress());
        System.out.println("Local Part: "+getLocalPart());
        System.out.println("Domain Name: "+getDomainName());
    }
}
