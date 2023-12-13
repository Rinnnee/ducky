package lab8_2;

public class Calculator {
    private String name;

    public Calculator(){
    }

    public Calculator(String name){
        this.name = name;
    }

    public String getName(){
        return name;
    }
    
    public double add(double n1, double n2){
        return n1+n2;
    }

    public double subtract(double n1, double n2){
        return n1-n2;
    }

    public double multiply(double n1, double n2){
        return n1*n2;
    }

    public double divide(double n1, double n2){
        return n1/n2;
    }
}
