package lab5_2;

public class Geometry {
    private double length;
    private double perimeter;
    private double area;

    public Geometry(){
    }

    public Geometry(double length){
        this.length = length;
    }

    public double getLength(){
        return length;
    }

    public void setLength(double length){
        this.length = length;
    }

    public double getPerimeter(){
        return perimeter;
    }

    public void setPerimeter(double perimeter){
        this.perimeter = perimeter;
    }

    public double getArea(){
        return area;
    }

    public void setArea(double area){
        this.area = area;
    }

    public double calculatePerimeter(){
        return 0;
    }

    public double calculateArea(){
        return 0;
    }

    public String getGeoType(){
        return getClass().getSimpleName();
    }
}
