public class arrays {
    public static void main(String[] args) {
        // Arrays
            // An array is a collection of variables of the same type. It's often easier to store a list of variables as an array instead of making a seperate
            // variable for each value. To declare an array, postfix variable definitions with square brackets

        // For example
        int[] test_scores;

            // This isn't a complete definition because the capacity of the array hasn't been specified. To do this, use the new keyword

        // For example
        test_scores = new int[5];

            // This creates an integer array with a capacity of 5. To reference items in the array, stick a number in the brackets

        test_scores[0] = 90;

            // Note: Arrays are 0-indexed, meaning the first entry starts at 0 instead of 1

        // Initalizing arrays
            // Java has a shortcut that makes it easier to declare and fill an array with values. This is done with an array literal

        // For example
        String[] names = {"Dave", "John", "Nick", "Maxine", "Julia"};
        System.out.println(names[2]);

            // Use a comma seperated list to define values, and enclose it in curly brackets to initalize the array
    }
}