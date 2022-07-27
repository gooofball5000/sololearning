public class enhancedloop {
    public static void main(String[] args) {
        // Enhanced For Loop
            // The enhanced for loop (aka a for each loop) is used to traverse elements in arrays. These are commonly used to eliminate bugs and makes code easier
            // to read

        // For example
        int[] primes = {2, 3, 5, 7, 11, 13};
        for(int t: primes) {
            System.out.println(t);
        }

            // The enhanced for loop declares a variable with a compatible type with the elements of the array being accessed. The variable will be available within
            // the for block, and its value will be the same as the current array element. So, on each interation of the loop, the variable t will be equal to the
            // corresponding element in the array
    }
}