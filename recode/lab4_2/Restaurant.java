package lab4_2;

public class Restaurant {
    public static void main(String[] args) {
        Customer c1 = new Customer("D000001", "Tony", "Diamond");
        Customer c2 = new Customer("G000002", "John", "Gold");
        Customer c3 = new Customer("S000003", "Peter", "Student");
        Customer c4 = new Customer("S000004", "Gwen", "Student");
        Customer c5 = new Customer("N000005", "Harry", "General");
        
        Food f1 = new Food("F001", "Spaghetti", 365);
        Food f2 = new Food("F002", "Pizza", 450);
        Food f3 = new Food("F003", "Hamburger", 270);
        Food f4 = new Food("F004", "Taco", 200);
        Food f5 = new Food("F005", "French Fries", 150);
        Food f6 = new Food("F006", "Steak", 355);
        
        Order o1 = new Order(c1);
        Order o2 = new Order(c2);
        Order o3 = new Order(c3);
        Order o4 = new Order(c4);
        Order o5 = new Order(c5);
        
        o1.cart(f1);
        o1.cart(f2);
        o1.cart(f6);
        
        bill(o1);
        
        o2.cart(f2);
        o2.cart(f3);
        
        bill(o2);
        
        o3.cart(f1);
        o3.cart(f2);
        o3.cart(f3);
        o3.cart(f6);
        
        bill(o3);
        
        o4.cart(f1);
        
        bill(o4);
        
        o5.cart(f2);
        o5.cart(f4);
        o5.cart(f5);
        
        bill(o5);
    }

    public static void bill(Order o) {
        if(o.getCustomer().getCtype().equals("General")){
            System.out.printf("%s[%s] have pay %.1f Bath\n",o.getCustomer().getCname(),o.getCustomer().getCtype(),o.getTotalPrice());
        }
        else{
            System.out.printf("%s[%s] have got a discount of %.1f Bath and have to pay %.1f Bath\n",o.getCustomer().getCname(),o.getCustomer().getCtype(),o.getDiscount(),o.getTotalPrice());
        }
        System.out.println();
    }
}
