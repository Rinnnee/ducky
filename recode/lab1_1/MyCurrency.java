package lab1_1;
import java.util.Scanner;
public class MyCurrency {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the desired currency: ");
        String cur = sc.nextLine();
        double total = 0;
        
        if (cur.equals("GBP")) {
            System.out.print("Enter amount of money: ");
            double amount = sc.nextDouble();
            total = amount * 42.50;
            System.out.println("It is equal to " + total + " THB.");
        } 
        else if (cur.equals("EUR")) {
            System.out.print("Enter the amount of money: ");
            double amount = sc.nextDouble();
            total = amount * 36.66;
            System.out.println("It is equal to " + total + " THB.");
        } 
        else {
            System.out.println("Please choose the proper currency (either GBP or EUR).");
        }
        sc.close();
    }
}
