import java.util.*;
class BeverageMenu {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter beverage choice (1: Tea, 2: Coffee, 3: Juice): ");
        int choice = input.nextInt();
        switch (choice) {
            case 1: System.out.println("Tea"); break;
            case 2: System.out.println("Coffee"); break;
            case 3: System.out.println("Juice"); break;
            default: System.out.println("Invalid choice"); break;
        }
        input.close();
    }
}