import java.util.*;
class PasswordCheck {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter password: ");
        String password = input.next();
        if (password.equals("admin123")) {
            System.out.println("Welcome");
        }
        input.close();
    }
}