// ===== CODING CHALLENGE: TIME CONVERTER =====
// You've been kicked offline, and what's worse is that whatever operating system you were using has been replaced with a minimal arch install with only Java
// development tools. No internet connection, no package manager, no nothing. You need to convert days to seconds despite your current unfortunate situation, so
// get cracking

// Task: Given the amount of days as an input, output the amount of seconds in that many days
// Sample input: 12
// Sample output: 1036800

// Explanation: 12 days are 12*24 = 288 hours, which are 288*60 = 17280 minutes, which are 17280*60 = 1036800 seconds

/* Original code
import java.util.Scanner;

public class Program {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int days = scanner.nextInt();
		
		//your code goes here
		
	}
}
 */

/* Working code
import java.util.Scanner;

public class Program {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int days = scanner.nextInt();
		
		//your code goes here
		int HOURS_IN_DAY = 24;
		int MINUTES_IN_HOUR = 60;
		int SECONDS_IN_MINUTE = 60;

		int seconds = days * HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE;
		System.out.println(seconds);
	}
}
 */

// Code that compiles
import java.util.Scanner;

public class timeConverter {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int days = scanner.nextInt();
		
		//your code goes here
		int HOURS_IN_DAY = 24;
		int MINUTES_IN_HOUR = 60;
		int SECONDS_IN_MINUTE = 60;

		int seconds = days * HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE;
		System.out.println(seconds);
	}
}