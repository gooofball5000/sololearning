// === MATRIX ===
// You are given a 3x3 matrix with numbers:
/*
int[][] matrix = {

    {8, 1, 6},

    {3, 5, 7},

    {4, 9, 0},

} 
*/

// Task: Output the numbers of the array, each on a new line. 

// Hint: You need to use two nested for loops to iterate over the array.


/* Original code
public class Main {
   public static void main(String[] args) {
       int[][] matrix = {
               {8, 1, 6},
               {3, 5, 7},
               {4, 9, 0},
       };
       //output the numbers
       
   }
}
*/

/* Working code
public class Main {
   public static void main(String[] args) {
       int[][] matrix = {
               {8, 1, 6},
               {3, 5, 7},
               {4, 9, 0},
       };
       //output the numbers
       for(int a = 0; a < 3; a++) {
           for(int b = 0; b < 3; b++) {
               System.out.println(matrix[a][b]);
           }
       }
   }
}
*/

// Code that compiles
public class matrix {
    public static void main(String[] args) {
        int[][] matrix = {
            {8, 1, 6},
            {3, 5, 7},
            {4, 9, 0},
        };
        
        //output the numbers
        for(int a = 0; a < 3; a++) {
            for(int b = 0; b < 3; b++) {
                System.out.println(matrix[a][b]);
            }
        }
    }
}