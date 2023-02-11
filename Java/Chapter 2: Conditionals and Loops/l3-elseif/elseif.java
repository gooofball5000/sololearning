public class elseif {
    public static void main(String[] args) {
        // else-if statements
            // Instead of nesting a whole bunch of if statements, use else-if statements

        // For example:
        int age = 25;
        if(age <= 0) {
            System.out.println("ERROR!");
        } else if(age <= 16) {
            System.out.println("Too young");
        } else if(age < 100) {
            System.out.println("Welcome!");
        } else {
            System.out.println("Really?");
        }
        // This specific example isn't great, because it could be replaced with a switch, but it works for someone who doesn't know
    }
}