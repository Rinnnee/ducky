package lab5_2;

public class Square extends Geometry{
    public Square(){
    }

    public Square(double length){
        super(length);
    }

    public double calculatePerimeter(){
        return 4*getLength();
    }

    public double calculateArea(){
        return Math.pow(getLength(),2);
    }
}
