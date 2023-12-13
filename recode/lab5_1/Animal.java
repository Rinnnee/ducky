package lab5_1;

public class Animal {
    private String name = "";
    private int age = 0;
    private String colour = "";
    public Animal() {
        System.out.println("New " + this.getClass().getSimpleName() + " object is created.");
    }

    public Animal(String name, int age, String colour) {
        this.name = name;
        this.age = age;
        this.colour = colour;
        System.out.println("This " + this.age + "-year-old " + this.colour + " " +this.getClass().getSimpleName() + " is named " + this.name + ".");
    }

    public void makeNoise() {
        System.out.println(getName() + " is making a noise.");
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getColour() {
        return colour;
    }

    public void setColour(String colour) {
        this.colour = colour;
    }
}
