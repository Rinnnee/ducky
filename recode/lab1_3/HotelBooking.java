package lab1_3;
import java.util.Scanner;
public class HotelBooking {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        final double ROOM = 5000;
        final double ROOM1 = 7000;
        final double FOOD = 150;
        final double TABLE = 500;
        final double VAT = 0.0175;
        double total = 0;
        double totalwithvat = 0;

        System.out.println("Do you want to book the hotel room(s)?");
        String yn = sc.nextLine();
        if(yn.equals("yes")){
            System.out.println("Please choose a room type:");
            String rt = sc.nextLine();
            if(rt.equals("extra")){
                total += ROOM1;
            }
            else{
                total += ROOM;
            }
            System.out.println("How many rooms?");
            int nr = sc.nextInt();
            sc.nextLine();
            total *= nr;
            System.out.println("Breakfast included?");
            String ynf = sc.nextLine();
            if(ynf.equals("yes")){
                total += nr*FOOD;
            }
        }
        else{
            System.out.println("Do you want to reserve the table(s)?");
            String ynt = sc.nextLine();
            if(ynt.equals("yes")){
                total += TABLE;
                System.out.println("How many tables?");
                int nt = sc.nextInt();
                sc.nextLine();
                total *= nt;
            }
        }
        totalwithvat = total*VAT+total;
        System.out.printf("You need to pay "+totalwithvat+" baht (service charge included).");
        sc.close();
    }
}
