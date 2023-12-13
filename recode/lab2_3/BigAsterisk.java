package lab2_3;
import java.util.Scanner;
public class BigAsterisk {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        while(true){
            System.out.print("Enter an odd number: ");
            n = sc.nextInt();
            if(n%2!=0){
                break;
            }
        }
        String[][] arr = new String[Math.abs(n)][Math.abs(n)];

        if(n>0){
            for(int x = 0 ; x<arr.length ; x++){
                for(int y = 0 ; y<arr.length ; y++){
                    if(y==x || y==n/2 || y==n-x-1 || x==n/2){
                        arr[x][y] = "* ";
                    }
                    else{
                        arr[x][y] = "  ";
                    }
                }
            }
        }
        else if(n<0){
            n = Math.abs(n);
            for(int x = 0 ; x<arr.length ; x++){
                for(int y = 0 ; y<arr.length ; y++){
                    if(y==x || y==n/2 || y==n-x-1 || x==n/2){
                        arr[x][y] = "  ";
                    }
                    else{
                        arr[x][y] = "* ";
                    }
                }
            }
        }
        for(int x = 0 ; x<arr.length ; x++){
            for(int y = 0 ; y<arr.length ; y++){
                System.out.print(arr[x][y]);
            }
            System.out.println();
        }
        sc.close();
    }
}
