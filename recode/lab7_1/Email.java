package lab7_1;

public class Email implements ToolBox{
    private String emailAddress;
    private String localPart;
    private String domainName;
    private String password;

    public Email(){
    }

    public Email(String emailAddress, String password){
        this.emailAddress = emailAddress;
        this.password = password;
        String[] ss = this.emailAddress.split("@");
        localPart = ss[0];
        domainName = ss[1];
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
