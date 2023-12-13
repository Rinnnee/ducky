package lab5_2;

public class Triangle extends Geometry{
    public Triangle(){
    }

    public Triangle(double length){
        super(length);
    }

    public double calculatePerimeter(){
        return 3*getLength();
    }

    public double calculateArea(){
        return (Math.sqrt(3)/4)*Math.pow(getLength(),2);
    }
}
