public class comments {
    public static void main(String[] args) {
        // Comments
            // The point of comments is to explain your code and make it easier to read. In my case, it's taking notes on the lessons Sololearn is providing
            // Comments can be single-line or multi-line. Characters in a comment are ignored by the Java compiler

            // Single-line comments are created with a "//", multi-line comments are opened with a "/*" and closed with a "*/"
            // Single-line comments comment everything to the end of a line, multi-line comments comment everything in the "/* */" pair (inclusive)
                // Note: Java does not support nested multi-line comments, but does support single-line comments in multi-line comments

        // This is a comment
        int x = 5; // This is a comment after a bit of code

            // Adding comments is good practice, because they can provide clarification to strange-looking pieces of code and make it easier for others (or your
            // future self) to read your code

        // Documentation Comments
            // Documentation comments are special comments that look like multi-line comments, the difference being they generate external documentation
            // These look similar to multi-line comments, but have 2 asterisks when opening instead of 1

            // For example:
        /** This is a documentation comment */
        /** This is also a
            documentation comment */

            // Javadoc is a tool that comes bundled with the JDK and is used for generating documentation in HTML from Java source code which has required 
            // documentation in a predefined format

            // When a documentation comment has more than 2 asterisks, Java assumes you're trying to make a block and ignores the rest of the asterisks

            // For example:
        /*********************** 
        
        This is the start of a method

        ************************/

            // To create documentation, run javadoc on a source file. In this case, it would be "javadoc comments.java"
    }
}