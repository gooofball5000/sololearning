public class logic {
    public static void main(String[] args) {
        // Logical Operators
            // Logical operators are used to combine multiple conditions

            // For example, say you had a program that should only say "Welcome" if the person is 18 or older AND has 500 dollars. You could implement such a
            // check by nesting an if statement, or you could use a conditional operator to do both checks at once

        // For example:
        int age = 26, money = 900;
        if(age >= 18 && money >= 500) {
            System.out.println("Welcome!");
        } else {
            System.out.println("Come back later");
        }

            // In this case, the whole statement will only return true if both statements checks return true

        // The OR Operator
            // The or operator returns true if any of its checks return true. Otherwise, false

        // For example:
        money = 400;
        if(age >= 18 || money >= 500) {
            System.out.println("Welcome!");
        } else {
            System.out.println("Come back later");
        }

            // This bit of code now prints true even though our patron doesn't have 500$

        // The NOT Operator
            // The not operator returns the opposite of its input. True becomes false, false become true

        // For example:
        age = 16;
        if(!(age > 18)) {
            System.out.println("Come back later");
        }
    }
}