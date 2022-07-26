public class whileloops {
    public static void main(String[] args) {
        // While loops
            // A loop statement makes it possible to repeatedly run a bit of code. While loops run code while a condition is true

        // For example
        int count = 0;
        while(count < 10) {
            System.out.println(count);
            count++;
        }

            // This while loop tests the condition "count < 10", which is true, so it runs the code. Once "count < 10" is no longer true, the loop stops. If the
            // count variable is never incremented, or gets decremented instead, the loop would never end

            // Once the expression returns false, the code in the while loop is skipped, and the code after it is ran

        // For example:
        System.out.println("Countdown Initiated...");
        count = 5;
        while(count > 0) {
            System.out.println(count);
            count--;
        }
        System.out.println("KABOOM!");
    }
}