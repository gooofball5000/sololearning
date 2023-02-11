// === UNIVERSITY ADMISSION ===
// You are given code that takes the number of students who enter the university as input. Let's greet them! 

// Task: Complete the program to output "Welcome" for each student.

// Sample input: 2
// Sample output:
    // Welcome
    // Welcome

// Hint: Remember the semicolon (;) after initialization and condition in the syntax.


/* Original code
import java.util.Scanner;


public class Program
{
    public static void main(String[] args) {
	   Scanner scanner = new Scanner(System.in);
       int n = scanner.nextInt();  
      
	}
}
*/

/* Working code
import java.util.Scanner;


public class Program
{
    public static void main(String[] args) {
	   Scanner scanner = new Scanner(System.in);
       int n = scanner.nextInt();  
       
       for(int i = 0; i < n; i++) {
           System.out.println("Welcome");
       }
	}
}
*/

// Code that compiles
import java.util.Scanner;

public class uniAdmission {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();  
            
        for(int i = 0; i < n; i++) {
            System.out.println("Welcome");
        }
    }
}