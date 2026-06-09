package main_menu.bill;
import java.util.Scanner;
import main_menu.card_payment.card_payment;
import main_menu.cash_payment.cash_payment;
import main_menu.discount.discount;
import main_menu.online_payment.online_payment;
import main_menu.recipet.recipet;

public class bill {
    public int room_price;
    public int days;
    public double total_bill;
    private int type;
    public int totalbill;
    public int choice;
    public void billcalculation() {
        Scanner Input = new Scanner(System.in);
        System.out.println("Enter The Price of Your Room per day ");
        room_price = Input.nextInt();
        System.out.println("Enter No Of Days Your Stayed .");
        days = Input.nextInt();
        Input.nextLine();
        System.out.println("Enter Your Room Type or Class Like \n Press 1 for Delux \n Press 2 for Vip \n Press 3 for Standard ");
        type = Input.nextInt();
        if (type == 1) {
            System.out.println("Now Select Payment Method \n Press 1 For Cash \n Press 2 For Card Payment \n Press 3 For Online Payment");
            choice = Input.nextInt();
            switch (choice) {
            case 1: {
                cash_payment cp = new cash_payment(days);
                cp.cashpay();
                cp.showcash();
                discount dis = new discount();
                dis.applydiscount(cp.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            case 2: {
                card_payment cp1 = new card_payment(days);
                cp1.cardpay();
                cp1.showcard();
                discount dis = new discount();
                dis.applydiscount(cp1.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            case 3: {
                online_payment op = new online_payment(days);
                op.onlinepay();
                op.showonline();
                discount dis = new discount();
                dis.applydiscount(op.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            default: {
                System.out.println("Error !!! Enter Correct keyword ");
            }
            }
        }
        if (type == 2) {
            System.out.println("Now Select Payment Method \n Press 1 For Cash \n Press 2 For Card Payment \n Press 3 For Online Payment");
            choice = Input.nextInt();
            switch (choice) {
            case 1: {
                cash_payment cp = new cash_payment(days);
                cp.cashpay();
                cp.showcash();
                discount dis = new discount();
                dis.applydiscount(cp.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            case 2: {
                card_payment cp1 = new card_payment(days);
                cp1.cardpay();
                cp1.showcard();
                discount dis = new discount();
                dis.applydiscount(cp1.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            case 3: {
                online_payment op = new online_payment(days);
                op.onlinepay();
                op.showonline();
                discount dis = new discount();
                dis.applydiscount(op.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            default: {
                System.out.println("Error !!! Enter Correct keyword ");
            }
            }
        }
        if (type == 3) {
            System.out.println("Now Select Payment Method \n Press 1 For Cash \n Press 2 For Card Payment \n Press 3 For Online Payment");
            choice = Input.nextInt();
            switch (choice) {
            case 1: {
                cash_payment cp = new cash_payment(days);
                cp.cashpay();
                cp.showcash();
                discount dis = new discount();
                dis.applydiscount(cp.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            case 2: {
                card_payment cp1 = new card_payment(days);
                cp1.cardpay();
                cp1.showcard();
                discount dis = new discount();
                dis.applydiscount(cp1.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            case 3: {
                online_payment op = new online_payment(days);
                op.onlinepay();
                op.showonline();
                discount dis = new discount();
                dis.applydiscount(op.bill, days);
                recipet r = new recipet();
                r.showrecipet();
                break;
            }
            default: {
                System.out.println("Error !!! Enter Correct keyword ");
            }
            }
        }
    }
    public void showbill() {
        System.out.println("Pkr : " + totalbill);
        System.out.println("Thanks For Using The System ");
    }
}