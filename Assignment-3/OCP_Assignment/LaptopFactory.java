class LaptopFactory implements DeviceFactory {
    @Override
    public DeviceDetails createDevice() {
        return new Laptop();
    }
}
