package lab8_2;
import java.util.Scanner;
public class MainClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Calculator calc = new Calculator("Casio AX-120ST");
        System.out.println(calc.getName());
        System.out.print("Enter an equation: ");
        String str = sc.nextLine();
        findResult(str, calc);
        sc.close();
    }

    public static void findResult(String s, Calculator c){
        String[] ss = s.split(" ");
        double total = 0;
        double n2 = 0; 
        
        try{
            if(ss.length%2==0){
                throw new EquationException("Incomplete equation");
            }
            checkLetter(ss[0]);
            total = Double.parseDouble(ss[0]);
            for(int x = 1 ; x<ss.length ; x+=2){
                checkLetter(ss[x+1]);
                n2 = Double.parseDouble(ss[x+1]);
                switch(ss[x]){
                    case "+":
                        total = c.add(total, n2);
                        break;
                    case "-":
                        total = c.subtract(total, n2);
                        break;
                    case "*":
                        total = c.multiply(total, n2);
                        break;
                    case "/":
                        if(n2==0){
                            throw new ArithmeticException("Division by zero");
                        }
                        total = c.divide(total, n2);
                        break;
                    default:
                        throw new OperatorException(c.getName()+" dose not have the "+ss[x]+" operator");
                }
            }
            System.out.println(s+" = "+total);
        }
        catch(Exception e){
            if(e.getClass().getSimpleName().equals("ArithmeticException")){
                System.out.println("An exception occurred: "+e.getClass().getName());
            }
            System.out.println(e.getMessage());
        }
    }

    public static void checkLetter(String s)throws NonDigitException{
        for(char c : s.toCharArray()){
            if(Character.isLetter(c)){
                throw new NonDigitException(s+" contains non-digit characters");
            }
        }
    }
}
