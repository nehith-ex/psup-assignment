import java.util.*;
class PositiveNegativeCheck {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = input.nextInt();
        if (num >= 0) {
            System.out.println("The number is positive.");
        } else {
            System.out.println("The number is negative.");
        }
        input.close();
    }
}