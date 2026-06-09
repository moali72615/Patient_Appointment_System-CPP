package main_menu.card_payment;
import java.util.Scanner;
import main_menu.payment.payment;

public class card_payment extends payment {
    protected int card_type;
    private String debit_card;
    private String credit_card;
    private String ATM;
    public card_payment(int d) {
        days = d;
    }
    public void cardpay()
    {
        Scanner Input = new Scanner(System.in);
        System.out.println("Enter Your Card Type like \n1. For Debit Card \n 2. For Credit Card \n 3. For ATM Card");
        card_type = Input.nextInt();
        Input.nextLine();
        if (card_type == 1) {
            System.out.println("Enter Your Debit Card Number Only ");
            debit_card = Input.nextLine();
            System.out.println("Length = " + debit_card.length());
            if (debit_card.length() >= 16 && debit_card.length() <= 18) {
                System.out.println("You Enter Debit Number \n Card Number : " + debit_card);
                System.out.println("Card Confirmed");
            } else {
                System.out.println("Enter Correct Keyword");
            }
        }
        if (card_type == 2) {
            System.out.println("Enter Your Credit Card Number Only ");
            credit_card = Input.nextLine();
            System.out.println("Length = " + credit_card.length());
            if (credit_card.length() >= 16 && credit_card.length() <= 18) {
                System.out.println("You Enter Credit Card Number \n Card Number : " + credit_card);
                System.out.println("Card Confirmed");
            } else {
                System.out.println("Enter Correct Keyword");
            }
        }
        if (card_type == 3) {
            System.out.println("Enter Your ATM Card Number Only ");
            ATM = Input.nextLine();
            System.out.println("Length = " + ATM.length());
            if (ATM.length() >= 16 && ATM.length() <= 18) {
                System.out.println("You Enter ATM Number \n Card Number : " + ATM);
                System.out.println("Card Confirmed");
            } else {
                System.out.println("Enter Correct Keyword");
            }
        }
    }
    public void showcard() {
        totall_bill = 3500 * days;
        bill = totall_bill * 3;
        System.out.println("Your Total Bill is :" + bill);
    }
}