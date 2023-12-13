package lab4_2;

public class Food {
    private String fname;
    private String fid;
    private double price;

    public Food(){
    }

    public Food(String fid, String fname, double price){
        this.fid = fid;
        this.fname = fname;
        this.price = price;
    }

    public String getFname(){
        return fname;
    }

    public void setFname(String fname){
        this.fname = fname;
    }

    public String getFid(){
        return fid;
    }

    public void setFid(String fid){
        this.fid = fid;
    }

    public double getPrice(){
        return price;
    }

    public void setPrice(double price){
        this.price = price;
    }
}
