import java.util.*;
class UppercaseCheck {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char ch = input.next().charAt(0);
        if (ch >= 'A' && ch <= 'Z') {
            System.out.println("The character is uppercase.");
        }
        else {
            System.out.println("The character is not uppercase.");
        }
        input.close();
    }
}