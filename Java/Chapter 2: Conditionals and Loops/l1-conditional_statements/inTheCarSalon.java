// === IN THE CAR SALON ===
// You have $12,000 to buy a car

// Task: You're given a program which takes the price of car as an input, output "yes" if the price is lower than or equal to 12,000
// Sample input: 11000
// Sample output: yes

// Hint: Use the if statement to check the required condition


/* Original code
import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       
       Scanner scanner = new Scanner(System.in);
       int price = scanner.nextInt();
       //complete the code
       

     
   }
}
*/

/* Working code
import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       
       Scanner scanner = new Scanner(System.in);
       int price = scanner.nextInt();
       //complete the code
       int MAX_PRICE = 12000;
       if(price <= MAX_PRICE) {
           System.out.println("yes");
       }
     
   }
}
*/

// Code that compiles
import java.util.Scanner;

public class inTheCarSalon {
   public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       int price = scanner.nextInt();
       //complete the code
       
       int MAX_PRICE = 12000;
       if(price <= MAX_PRICE) {
           System.out.println("yes");
       }
     
   }
}