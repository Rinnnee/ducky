package lab6_1;
import lab6_2.IncomeTax;
public abstract class Employee extends Person implements IncomeTax{
    private String position;
    private double salary;
    
    public Employee(String name, String gender, int age, String position, double salary){
        super(name, gender, age);
        this.position = position;
        this.salary = salary;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    @Override
    public void getDetails() {
        System.out.println(getName() + " is currently working as a/an " + getClass().getSimpleName() +".");
    }

    public double calculateTaxableIncome(){
        return getSalary()*12;
    }

    public double calculateTax(){
        double s = calculateTaxableIncome();
        if(s>=0 && s<=150000){
            return 0;
        }
        else if(s>=150001 && s<=300000){
            return s*0.05;
        }
        else if(s>=300001 && s<=500000){
            return s*0.1;
        }
        else if(s>=500001 && s<=750000){
            return s*0.15;
        }
        else if(s>=750001 && s<=1000000){
            return s*0.2;
        }
        else if(s>=1000001 && s<=2000000){
            return s*0.25;
        }
        else if(s>=2000001 && s<=5000000){
            return s*0.3;
        }
        else if(s>=5000001){
            return s*0.35;
        }
        return 0;
    }
}
