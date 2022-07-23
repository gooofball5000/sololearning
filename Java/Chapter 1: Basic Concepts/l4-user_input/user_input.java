import java.util.Scanner;

public class user_input {
    public static void main(String[] args) {
        // Getting user input
            // Java provides many different ways of getting user input, but the most common (and maybe easiest) is the Scanner object. Scanner must be imported
            // before it can be used

            // In order to use Scanner, an instance must be created. For example:
        Scanner myVar = new Scanner(System.in);

        //Now different kinds of input data can be read through the class. Here are some methods that are available through the Scanner class:
            // Read a byte - nextByte()
            // Read a short - nextShort()
            // Read an int - nextInt()
            // Read a long - nextLong()
            // Read a float - nextFloat()
            // Read a double - nextDouble()
            // Read a boolean - nextBoolean()
            // Read a complete line - nextLine()
            // Read a word - next()
            
        // Example:
        Scanner usrVar = new Scanner(System.in);
        System.out.println(usrVar.nextLine());
    }

}