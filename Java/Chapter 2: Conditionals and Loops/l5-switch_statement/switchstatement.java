public class switchstatement {
    public static void main(String[] args) {
        // The Switch Statement
            // A switch statement tests a variable against a list of possible values called cases

        // For example:
        int test = 5;
        switch(test) {
            case(5):
                System.out.println("You can do better than that!");
                break;
            case(7):
                System.out.println("That's better, but not the best");
                break;
            case(10):
                System.out.println("Perfect!");
                break;
        }

            // When the tested variable equals a case, the code inside of the case is executed until it hits a break statement.
            // There doesn't need to be a break for every case. If there is no break, the switch will continue executing code until it hits a break
            // A switch can have infinite cases, or at least as many as your computer can handle

        // The default statement
            // A switch can use a default case in case the input doesn't match any of the cases

        // For example:
        int day = 8;
        switch(day) {
            case(1):
                System.out.println("Monday");
                break;
            case(2):
                System.out.println("Tuesday");
                break;
            case(3):
                System.out.println("Wednesday");
                break;
            case(4):
                System.out.println("Thursday");
                break;
            case(5):
                System.out.println("Friday");
                break;
            case(6):
                System.out.println("Saturday");
                break;
            case(7):
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid day of the week. Please enter a number between 1 and 7 (inclusive)");
                break;
                
        }

            // Technically, there is no need to use a break on a default statement because it should be the last entry in the list. However, it doesn't hurt to
            // put it in just to be sure (or if you put the default statement first instead of last)

        // The Switch Expression
            // The switch expression allows multiple comma-seperated values per case and returns a value for the whole switch-case block

        // For example:
        day = 4; 
        String dayType = switch(day) {
                case 1, 2, 3, 4, 5 -> "Working day";
                case 6, 7 -> "Weekend";
                default -> "Invalid day";
            };
        System.out.println(dayType);

    }
}