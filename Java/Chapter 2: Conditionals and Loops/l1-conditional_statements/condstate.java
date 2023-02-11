public class condstate {
    public static void main(String[] args) {
        // Decision Making
            // Conditional statements do different things based on the input they're given. The if-statement is the most commonly used conditional, and tests if
            // something is true or false

        // For example
        int x = 7;
        if(x < 42) {
            System.out.println("Hi");
        }

            // If statements often make use of comparison operators, which return true or false. Here's a list of valid operators:
                // < less than (1 < 10 is true)
                // > greater than (11 > 10 is true)
                // != not equal to (1 != 2 is true)
                // == equal to (1 == 1 is true)
                // <= less than or equal to (-infinity -> 10 <= 10 is true)
                // >= greater than or equal to (infinity -> 10 >= 10 is true)

        // If-else statements
            // If statements can be followed by an optional else statement to do something if the if statement isn't true

        // For example:
        int age = 26;
        if(age < 16) {
            System.out.println("Too young");
        } else {
            System.out.println("Welcome!");
        }
    }
}