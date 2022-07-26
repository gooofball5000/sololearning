// === MATH CLASS ===
// You're in math class, and your calculator broke. Luckily for you, your laptop is fine. Unluckily for you, all calculator programs in existance broke and you
// need to calculate the factorial of 5. Maybe your programming skills will save you

// Task: You're given a program which takes a number as input. Complete the program to calculate the factorial of the given number and output it. 

// Sample input: 6
// Sample output: 720

// Explanation: The factorial of a number is equal to the product of all numbers less than or equal to the given number. The factorial of 6 will be 
// 6*5*4*3*2*1 = 720. 

// Hint: Use while loop to calculate the factorial of the number. Use already defined fact variables in your calculations. 


/* Original code
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
            int  number = scanner.nextInt();
            int fact = 1;
            //your code goes here
            
    }
}
*/

/* Working code
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
            int  number = scanner.nextInt();
            int fact = 1;
            //your code goes here
            while(number > 0) {
                fact *= number;
                number--;
            }
            System.out.println(fact);
    }
}
*/

// Code that compiles
import java.util.Scanner;

public class mathClass {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int  number = scanner.nextInt();
        int fact = 1;
        
        //your code goes here
        while(number > 0) {
        fact *= number;
        number--;
        }
        System.out.println(fact);
    }
}