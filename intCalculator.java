import java.util.Scanner;
public class intCalculator {
    public static void main(String[] args) {
        // Declare variables
        double num1, num2, result;
        Scanner input = new  Scanner(System.in); // Create Scanner object for user input

        // Prompt user for operation choice
        System.out.println("Choose an operator: +, -, *, or /");
       char operator = input.next().charAt(0); // Read the first character of the input

        // Prompt user for numbers
        System.out.println("Enter first number:");
        num1 = input.nextDouble(); // Read the first number
        System.out.println("Enter second number:");
        num2 = input.nextDouble(); // Read the second number

        // Use switch statement to perform the selected operation
        switch (operator) {
            case '+':
                result = num1 + num2;
                System.out.println("Addition is: " + num1 + " + " + num2 + " = " + result);
                break;
            case '-':
                result = num1 - num2;
                System.out.println("Subtraction is: " + num1 + " - " + num2 + " = " + result);
                break;
            case '*':
                result = num1 * num2;
                System.out.println("Multiplication is: " + num1 + " * " + num2 + " = " + result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    System.out.println("Division is: " + num1 + " / " + num2 + " = " + result);
                } else {
                    System.out.println("Error: Division by zero is not allowed.");
                }
                break;
            // Handle invalid operator input
            default:
                System.out.println("Invalid operator! Please choose a valid operation.");
                break;
        }

        input.close(); // Close the scanner
    }
}
