package main_menu.cash_payment;
import main_menu.payment.payment;

public class cash_payment extends payment {
    public cash_payment(int d) {
        days = d;
    }
    public void cashpay() {
        System.out.println("Payment Recieved By Cash ");
        totall_bill = 3000 * days;
        bill = totall_bill * 4;
    }
    public void showcash() {
        System.out.println("Your Total Bill is :" + bill);
    }
}