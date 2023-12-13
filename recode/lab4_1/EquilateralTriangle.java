package lab4_1;

public class EquilateralTriangle {
    private String eid = "";
    private double length = 0;

    public EquilateralTriangle() {
    }

    public EquilateralTriangle(String eid) {
        this.eid = eid;
    }

    public EquilateralTriangle(String eid, double length) {
        this.eid = eid;
        this.length = length;
    }

    public String getType() {
        return getClass().getSimpleName();
    }

    public void setEid(String eid) {
        this.eid = eid;
    }

    public String getEid() {
        return eid;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getLength() {
        return length;
    }

    public double getArea() {
        return (Math.sqrt(3)/4)*length * length;
    }

    public double getPerimeter() {
        return length * 3;
    }
}
