import java.util.*;
class GradeClassifier {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter marks: ");
        int marks = input.nextInt();
        if (marks >= 90) {
            System.out.println("A");
        } else if (marks >= 75) {
            System.out.println("B");
        } else if (marks >= 50) {
            System.out.println("C");
        } else {
            System.out.println("Fail");
        }
        input.close();
    }
}