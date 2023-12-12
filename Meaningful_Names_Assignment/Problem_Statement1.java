public class DataManipulator {
    int integerData;
    double decimalData;
    String textData;

    public void printCalculatedSum(int operand1, int operand2) {
        int sum = operand1 + operand2;
        System.out.println("Result: " + sum);
    }

    public void printUppercaseText(String originalText) {
        String updatedText = originalText.toUpperCase();
        System.out.println("Updated String: " + updatedText);
    }
}

public class Main {
    public static void main(String[] args) {
        DataManipulator manipulator = new DataManipulator();
        manipulator.integerData= 10;
        manipulator.decimalData = 20.5;
        manipulator.textData= "hello";
        
        manipulator.printCalculatedSum(manipulator.integerData, 5);
        manipulator.printUppercaseText("world");
    }
}