import java.util.*;
class PassCheck {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter marks: ");
        int marks = input.nextInt();
        if (marks >= 40) {
            System.out.println("The student has passed.");
        }
        input.close();
    }
}