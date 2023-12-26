public class Main {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5.0, 3.0);
        double area = rectangle.calculateArea();

        FileHandler fileHandler = new FileHandler();
        fileHandler.writeAreaToFile(area);

        System.out.println("Calculated Area: " + area);
    }
}
