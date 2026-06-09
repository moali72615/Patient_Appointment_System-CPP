package main_menu;

public class discount {
    public void applydiscount(double bill, int days) {
        if (days >= 5 && days <= 10) {
            double discount_bill = bill - (bill * 0.10);

            System.out.println("Congrats! You are Eligible For Discount");
            System.out.println("Original Bill : " + bill);
            System.out.println("After 10% Discount : " + discount_bill);
        } else {
            System.out.println("Sorry, You Are Not Eligible For Discount");
            System.out.println("Your Bill : " + bill);
        }
    }
}
