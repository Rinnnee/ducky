package lab4_1;

public class Square {
    private String sid = "";
    private double length = 0;

    public Square() {
    }

    public Square(String sid) {
        this.sid = sid;
    }

    public Square(String sid, double length) {
        this.sid = sid;
        this.length = length;
    }

    public String getType() {
        return getClass().getSimpleName();
    }

    public void setSid(String sid) {
        this.sid = sid;
    }

    public String getSid() {
        return sid;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getLength() {
        return length;
    }

    public double getArea() {
        return length * length;
    }

    public double getPerimeter() {
        return length * 4;
    }
}
