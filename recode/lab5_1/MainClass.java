package lab5_1;

public class MainClass {
    public static void main(String[] args) {
        Animal anim1 = new Animal("Fredy", 5, "brown");
        anim1.makeNoise();
        
        System.out.println();

        Dog dog1 = new Dog();
        dog1.setName("Peter");
        dog1.makeNoise();
        
        System.out.println();
        
        Dog dog2 = new Dog("Dave", 2, "white");
        dog2.makeNoise();
        
        System.out.println();
        
        Cat cat1 = new Cat();
        cat1.setName("Kathy");
        cat1.makeNoise();
    }
}
