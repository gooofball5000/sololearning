// === SAFETY FIRST ===
// You're creating a bank security system. The user must insert the correct password in order to access payments. The password is 8819. 

// Task: Write a program that will continuously take a password as input and output Write password, until the client inserts the correct password

// Sample input:
    // 3332
    // 8819

// Sample output:
    // Write password
    // Write password


/* Original code
import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
	   Scanner read = new Scanner(System.in);
           int password = 0;
          
	}
}
*/

/* Working code
import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
	   Scanner read = new Scanner(System.in);
           int password = 0;
          do {
              System.out.println("Write password");
              password = read.nextInt();
          } while(password != 8819);
	}
}
*/

// Code that compiles
import java.util.Scanner;

public class safetyFirst {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int password = 0;
        do {
            System.out.println("Write password");
            password = read.nextInt();
        } while(password != 8819);
        
    }
}