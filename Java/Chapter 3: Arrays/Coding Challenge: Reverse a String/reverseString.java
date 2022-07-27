// ===== CODING CHALLENGE: REVERSE A STRING =====
// You're trying to finish a Sololearn course to brag to your friends, but because you're a tryhard you're going to 100% both the lessons and the projects. In
// this case, you need to reverse a string

// Task: The given code takes a string as input and converts it into a char array, which contains letters of the string as its elements. Write a program to take 
// a string as input and output its reverse

// Sample input:
    // Hello there

// Sample output:
    // ereht olleH

// Hint: You can loop through the char array, starting from the end, using arr.length to get the size of the array.


/* Original code
import java.util.Scanner;

public class Program
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String text = scanner.nextLine();
		char[] arr = text.toCharArray();
		
		//your code goes here
		
	}
}
*/

/* Working code
import java.util.Scanner;

public class Program
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String text = scanner.nextLine();
		char[] arr = text.toCharArray();
		
		//your code goes here
		for(int i = arr.length - 1; i >= 0; i--) {
			System.out.println(arr[i]);
		}
	}
}
*/

// Code that compiles
import java.util.Scanner;

public class reverseString {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String text = scanner.nextLine();
        char[] arr = text.toCharArray();

        //your code goes here
        for(int i = arr.length - 1; i >= 0; i--) {
            System.out.println(arr[i]);
        }
    }
}