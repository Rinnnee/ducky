package lab4_2;

public class Customer {
    private String cname;
    private String cid;
    private String ctype;

    public Customer(){
    }

    public Customer(String cid, String cname, String ctype){
        this.cid = cid;
        this.cname = cname;
        this.ctype = ctype;
    }

    public String getCname(){
        return cname;
    }

    public void setCname(String cname){
        this.cname = cname;
    }

    public String getCid(){
        return cid;
    }

    public void setCid(String cid){
        this.cid = cid;
    }

    public String getCtype(){
        return ctype;
    }

    public void setCtype(String ctype){
        this.ctype = ctype;
    }
}
