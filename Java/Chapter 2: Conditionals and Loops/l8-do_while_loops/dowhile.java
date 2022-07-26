public class dowhile {
    public static void main(String[] args) {
        // do-while Loops
            // A do-while loop is like a regular while loop, but the code inside of it will run at least once

        // For example:
        int x = 1;
        do {
            System.out.println(x);
            x--;
        } while(x > 5);

            // Although the conditional to run this loop will fail, the code will run at least once

        // Loop control statements
            // The break and continue statements change the loop's execution flow. The break statement "breaks" the loop and starts running the code immediately
            // after it. The continue statement skips the rest of the code inside the loop and retests the condition. It essentially skips to the next iteration

        // For example:
        x = 1;
        while(x > 0) {
            System.out.println(x);
            if(x == 4) {
                break;
            }
            x++;
        }

        for(int i = 10; i <= 40; i += 10) {
            if(i == 30) {
                continue;
            }
            System.out.println(i);
        }

    }
}