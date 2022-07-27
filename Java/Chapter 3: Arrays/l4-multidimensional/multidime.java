public class multidime {
    public static void main(String[] args) {
        // Multidimensional Arrays
            // Multidimensional arrays are arrays that contain other arrays. The two dimensional array is the most basic form of multidimensional array

            // To create multidimensional arrays, place each array within its own set of curly brackets
        
            // For example:
            int[][] sample = {{1, 2, 3}, {4, 5, 6}};

                // This declares an array with two arrays as its elements. To access an element in a two dimensional array, you must provide 2 indexes:
                // 1 for the array, and another for the element in the array

            // For example
            System.out.println(sample[0][2]);

                // You are not limited to only 2 dimensions, it's just that people often don't go for high dimensional arrays because it gets EXTRMELY hard to
                // manage and can be nigh impossible to visualize. If you must use a multidimensional array, stick to 3 or less
    }
}