public class incdec {
    public static void main(String[] args) {
        // Increment operators
            // The increment and decrement operators exist to make incrementing and decrementing variables easier. Where you normally would use x = x + 1, you
            // can substitute it for ++x

        int x = 10;
        int y = 7;
        --x; // x now equals 9
        ++y; // y now equals 8

            // Prefix and postfix:
                // You can put the ++ / -- in 2 places, before and after the variable. Depending on where, the behavior of the inc/dec will act differently.
                // Prefixing the operator (++x) will immediately increment the value, then use the incremented value
                // Postfixing the operator (x++) will use the value, then increment

            // For example:
        int a = 100;
        int b;

        b = ++a; // b equals 101, a equals 101
        System.out.println("a = " + a + ", b = " + b);

        a = b--; // a equals 101, b equals 100
        System.out.println("a = " + a + ", b = " + b);

        // Assignment operators
            // The assignment operator (=) is simple, but it has a bunch of modifiers that make it more flexible. All of the primitive math operators can be
            // prefixed to the assignment operator and get the "operator and assignment" version (ex: +=, -=, *=, /=, %=)
    }
}