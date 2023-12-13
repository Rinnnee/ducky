package lab4_1;

public class Geometry {
    public static void main(String[] args) {
        Square s1 = new Square("S001", 6);
        Square s2 = new Square("S002");
        Square s3 = new Square();
        
        EquilateralTriangle e1 = new EquilateralTriangle("E001", 9);
        EquilateralTriangle e2 = new EquilateralTriangle("E002");
        EquilateralTriangle e3 = new EquilateralTriangle();
        
        s2.setLength(23.4);
        s3.setSid("S003");
        s3.setLength(4.52);
        
        e2.setLength(13.5);
        e3.setEid("E003");
        e3.setLength(3.33);
        
        System.out.printf("%10s%25s%15s%10s%10s\n", "ID", "Type", "Length of Side","Area", "Perimeter");
        
        displaySquare(s1);
        displaySquare(s2);
        displaySquare(s3);
        
        displayEquilateralTriangle(e1);
        displayEquilateralTriangle(e2);
        displayEquilateralTriangle(e3);
    }

    public static void displaySquare(Square s){
        System.out.printf("%10s%25s%15.2f%10.2f%10.2f\n", s.getSid(), s.getType(),s.getLength(), s.getArea(), s.getPerimeter());
    }

    public static void displayEquilateralTriangle(EquilateralTriangle e){
        System.out.printf("%10s%25s%15.2f%10.2f%10.2f\n", e.getEid(), e.getType(),e.getLength(), e.getArea(), e.getPerimeter());
    }
}
