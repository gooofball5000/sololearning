// ===  LET'S EXPLORE ===
// You're a tour manager and need a program that will identify small countries. A country is considered small if its population is under 10000 and its area is 
// under 10000 hectares.

// Task: The given program takes population and area as input. Complete the program to output "small country" if both conditions are met. Don't output anything 
// otherwise.

// Sample input:
    // 9955
    // 7522

// Sample output:
    // small country

// Hint: Use && to combine conditions


/* Original code
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
       Scanner read = new Scanner(System.in);
       int population = read.nextInt();
       int area = read.nextInt();
        //Complete the code
        
   }
   
}
*/

/* Working code
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
      Scanner read = new Scanner(System.in);
      int population = read.nextInt();
      int area = read.nextInt();
      //Complete the code
      if(population < 10000 && area < 10000) {
         System.out.println("small country");
      }  
   }
   
}
*/

// Code that compiles
import java.util.Scanner;

public class letsExplore {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int population = read.nextInt();
        int area = read.nextInt();
        //Complete the code
        if(population < 10000 && area < 10000) {
            System.out.println("small country");
        }  
    }   
}