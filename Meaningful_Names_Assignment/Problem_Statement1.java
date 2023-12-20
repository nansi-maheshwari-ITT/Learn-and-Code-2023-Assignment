public class DataManipulator {
    int firstNumber;
    double secondNumber;
    String textData;

    public void printCalculatedSum(int operand1, int operand2) {
        int sum = operand1 + operand2;
        System.out.println("Result: " + sum);
    }

    public void printUppercaseText(String originalText) {
        textData = originalText.toUpperCase();
        System.out.println("Updated String: " + textData);
    }
}

public class Main {
    public static void main(String[] args) {
        DataManipulator manipulator = new DataManipulator();
        manipulator.firstNumber= 10;
        manipulator.secondNumber = 20.5;
        manipulator.textData= "hello";
        
        manipulator.printCalculatedSum(manipulator.firstNumber, 5);
        manipulator.printUppercaseText("world");
    }
}