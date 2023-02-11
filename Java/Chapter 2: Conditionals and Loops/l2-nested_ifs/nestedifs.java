public class nestedifs {
    public static void main(String[] args) {
        // Nested if statements
            // You can use if statements inside other if statements, including if-else statements

        // For example:
        int age = 25;
        if(age > 0) {
            if(age > 16) {
                System.out.println("Welcome!");
            } else {
                System.out.println("Too young");
            }
        } else {
            System.out.println("ERROR!");
        }
    }
}