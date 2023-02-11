public class summingElements {
    public static void main(String[] args) {
        // Array Length
            // The length of an array can be accessed through its length property

        // For example
        char[] cstring = {'C', ' ', 'S', 'T', 'Y', 'L', 'E'};
        System.out.println(cstring.length);

            // Remember that even though the string length is 7, the last element in the array is 6

        // Arrays
            // Using for loops, it's possible to iterate through an array and do something to each index. In this case, it'll be used to sum all the elements in
            // an array

        // For example
        int[] arr = {6, 42, 3, 7};
        int sum = 0;
        for(int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        System.out.println(sum);
    }
}