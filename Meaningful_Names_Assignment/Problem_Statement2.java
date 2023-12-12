import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Product {
    private String name;
    private double price;
    private int quantity;

    public Product(String name, double price, int quantity) {
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    public String getProductName() {
        return name;
    }

    public double getProductPrice() {
        return price;
    }

    public int getProductQuantity() {
        return quantity;
    }

    public void setProductQuantity(int newQuantity) {
        this.quantity = newQuantity;
    }
}

class Inventory {
    private List<Product> productList;

    public Inventory() {
        this.productList = new ArrayList<>();
    }

    public void addProduct(Product product) {
        productList.add(product);
    }

    public List<Product> getProducts() {
        return productList;
    }
}

public class Main {
    public static void main(String[] args) {
        Inventory inventory = new Inventory();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nInventory Management System");
            System.out.println("1. Add Product");
            System.out.println("2. Display Inventory");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");

            int userChoice = scanner.nextInt();

            switch (userChoice) {
                case 1:
                    System.out.print("Enter product name: ");
                    String productName = scanner.next();
                    System.out.print("Enter product price: ");
                    double productPrice = scanner.nextDouble();
                    System.out.print("Enter product qty: ");
                    int productQuantity = scanner.nextInt();

                    Product newProduct = new Product(productName, productPrice, productQuantity);
                    inventory.addProduct(newProduct);

                    System.out.println("Product added successfully!");
                    break;

                case 2:
                    System.out.println("\nCurrent Invoice:");
                    List<Product> productList = inventory.getProducts();
                    for (Product product : productList) {
                        System.out.println("Product Name: " + product.getProductName() +
                                ", Product Price: $" + product.getProductPrice() +
                                ", Product Quantity: " + product.getProductQuantity());
                    }
                    break;

                case 3:
                    System.out.println("Exiting program. Goodbye!");
                    System.exit(0);

                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
            }
        }
    }
}
