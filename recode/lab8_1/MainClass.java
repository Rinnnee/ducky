package lab8_1;

import java.util.Scanner;
public class MainClass {
    public static void main(String[] args) {
        try{
            int num1 = 0, num2 = 0;
            int[] arr1 = {20, 40, 45, 60, 75, 90};
            int[] arr2 = {1, 2, 0, 5, 3};
            
            Scanner sc = new Scanner(System.in);
            
            System.out.print("Enter num1: ");
            num1 = sc.nextInt();
            
            System.out.print("Enter num2: ");
            num2 = sc.nextInt();
            
            System.out.println(arr1[num1] + " / " + arr2[num2] + " = " + arr1[num1]/arr2[num2]);
            sc.close();
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("An exception occurred: "+e);
            System.out.println("The entered number exceeds the array size.");
        }
        catch(ArithmeticException e){
            System.out.println("An exception occurred: "+e);
            System.out.println("Division by zero is not allowed.");
        }
        catch(Exception e){
            System.out.println("An exception occurred: "+e);
            System.out.println("The index must be an integer.");
        }
    }
}
