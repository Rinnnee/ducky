package lab4_2;

public class Order {
    private Customer customer;
    private Food[] foods = new Food[10];
    double total = 0;
    public Order(){
    }

    public Order(Customer c){
        customer = c;
    }

    public Customer getCustomer(){
        return customer;
    }

    public void setCustomer(Customer c){
        customer = c;
    }

    public void cart(Food f){
        int count = 0;
        foods[count] = f;
        total += f.getPrice();
        System.out.printf("%s ordered %s: %.1f Bath\n",customer.getCname(),f.getFname(),f.getPrice());
    }

    public double getDiscount(){
        if(customer.getCtype().equals("Diamond")){
            return total*0.2;
        }
        else if(customer.getCtype().equals("Gold")){
            return total*0.1;
        }
        else if(customer.getCtype().equals("Student")){
            if(total*0.3>=300){
                return 300;
            }
            else{
                return total*0.3;
            }
        }
        return 0;
    }

    public double getTotalPrice(){
        return total-getDiscount();
    }
}
