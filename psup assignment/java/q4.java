import java.util.*;
class EvenCheck {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = input.nextInt();
        if (num % 2 == 0) {
            System.out.println("The number is even.");
        }
        input.close();
    }
}