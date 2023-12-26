public class Main {
    public static void main(String[] args) {
        DeviceFactory smartphoneFactory = new SmartphoneFactory();
        DeviceFactory laptopFactory = new LaptopFactory();

        DeviceDetails smartphone = smartphoneFactory.createDevice();
        DeviceDetails laptop = laptopFactory.createDevice();

        smartphone.displayDetails();
        laptop.displayDetails();
    }
}
