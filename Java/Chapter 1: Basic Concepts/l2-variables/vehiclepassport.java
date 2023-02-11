// Note: This probably won't compile on its own, as this is the code solution to the Vehicle Passport exercise in Sololearn's built in tester. This code should
// work when pasted into the prompt


// === VEHICLE PASPORT ===
// You are given code which outputs the properties of a vehicle, but something is wrong. 
// Task: Fix the code to print the properties. 
// Output:
    // Name: Toyota
    // Engine: 4.7
    // Year: 2019

// Hint: Note carefully the types of variables. Change them to the appropriate type

/* Original code
public class Program
{
    public static void main(String[] args) {
        //fix the variable types 
        double name = "Toyota";
        int engine = 4.7;
        String year = 2019;
       
        System.out.println("Name: " + name);
        System.out.println("Engine: " + engine);
        System.out.println("Year: " + year);

	}
}
*/

/* Working code
public class Program
{
    public static void main(String[] args) {
        //fix the variable types 
        String name = "Toyota";
        double engine = 4.7;
        int year = 2019;
       
        System.out.println("Name: " + name);
        System.out.println("Engine: " + engine);
        System.out.println("Year: " + year);

	}
}
*/

// Code that compiles
public class vehiclepassport {
    public static void main(String[] args) {
        String name = "Toyota";
        double engine = 4.7;
        int year = 2019;
       
        System.out.println("Name: " + name);
        System.out.println("Engine: " + engine);
        System.out.println("Year: " + year);

	}
}