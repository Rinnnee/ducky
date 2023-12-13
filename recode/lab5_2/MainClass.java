package lab5_2;
import java.text.DecimalFormat;
public class MainClass {
    public static void main(String[] args) {
        Geometry[] geometries = new Geometry[3];
        geometries[0] = new Triangle(4);
        geometries[1] = new Square(5);
        geometries[2] = new Circle(6);
        printDetails(geometries);
    }

    public static void printDetails(Geometry[] geometries) {
        DecimalFormat d = new DecimalFormat("#.##");
        for(Geometry g : geometries){
            g.setPerimeter(g.calculatePerimeter());
            g.setArea(g.calculateArea());
            System.out.println("This is a "+g.getGeoType());
            System.out.println("Length: "+d.format(g.getLength()));
            System.out.println("Perimeter: "+d.format(g.getPerimeter()));
            System.out.println("Area: "+d.format(g.getArea()));
            System.out.println();
        }
    }
}
