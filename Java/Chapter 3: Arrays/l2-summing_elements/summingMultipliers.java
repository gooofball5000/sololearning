// === SUMMING MULTIPLIERS ===
// You are given a program that takes the length of the array as the first input, creates it, and then takes the next inputs as elements of the array

// Task: Complete the program to go through the array and calculate the sum of the numbers that are multiples of 4

// Sample input:
    /* 
     * 5
     * 4
     * 9
     * 16
     * 2
     * 7
     */

// Sample output:
    // 20


/* Original code
import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       int length = scanner.nextInt();
       int[] array =  new int[length];
       for (int i = 0; i < length; i++) {
           array[i] = scanner.nextInt();
       }

       //your code goes here
       
   }
}
*/

/* Working code
import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       int length = scanner.nextInt();
       int[] array =  new int[length];
       for (int i = 0; i < length; i++) {
           array[i] = scanner.nextInt();
       }

       //your code goes here
       int sum = 0;
       for(int i = 0; i < array.length; i++) {
           if(array[i] % 4 == 0) {
               sum += array[i];
           }
       }
       System.out.println(sum);
   }
}
*/

// Code that compiles
import java.util.Scanner;

public class summingMultipliers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int length = scanner.nextInt();
        int[] array =  new int[length];
        for (int i = 0; i < length; i++) {
            array[i] = scanner.nextInt();
        }

        //your code goes here
        int sum = 0;
        for(int i = 0; i < array.length; i++) {
            if(array[i] % 4 == 0) {
                sum += array[i];
            }
        }
        System.out.println(sum);
    }
}