public class forloops {
    public static void main(String[] args) {
        // For Loops
            // There exists a more useful loop structure called a for loop, which lets you initalize a variable, test a condition, and increment/decrement a 
            // variable

        // For example:
        for(int count = 0; count < 10; count++) {
            System.out.println(count);
        }

            // A for loop can test for any type of condition, and any type of inc/dec (really any type of assignment operation), including none at all

        // For example:
        for(int x = 0; x <= 10; x += 2) {
            System.out.println(x);
        }
    }
}