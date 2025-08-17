import java.util.*;
class FuelType {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter fuel type (1: Petrol, 2: Diesel, 3: Electric): ");
        int choice = input.nextInt();
        switch (choice) {
            case 1: System.out.println("Petrol"); break;
            case 2: System.out.println("Diesel"); break;
            case 3: System.out.println("Electric"); break;
            default: System.out.println("Invalid choice"); break;
        }
        input.close();
    }
}