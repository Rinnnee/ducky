package lab2_2;
import java.util.Scanner;
import java.util.Arrays;
import java.text.DecimalFormat;
public class StudentsScore {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        DecimalFormat m = new DecimalFormat("0.00");
        DecimalFormat s = new DecimalFormat("#.####");
        System.out.print("Enter the number of students: ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        double sum = 0;
        double mean = 0;
        double sd = 0;
        for(int x = 0 ; x<arr.length ; x++){
            while(true){
                System.out.print("Enter student "+(x+1)+" score: ");
                int score = sc.nextInt();
                if(score>=0 && score<=100){
                    arr[x] = score;
                    sum += score;
                    break;
                }
                else{
                    System.out.println("Please enter the score 0-100");
                }
            }
        }
        System.out.println("\n======== Summary ========");
        System.out.println(Arrays.toString(arr));
        System.out.println("Summation: "+sum);
        mean = sum/size;
        System.out.println("Mean: "+m.format(mean));
        for(double x : arr){
            sd += Math.pow(x-mean,2);
        }
        sd = Math.sqrt(sd/size);
        System.out.println("SD: "+s.format(sd));
        sc.close();
    }    
}
