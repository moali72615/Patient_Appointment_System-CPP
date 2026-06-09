package main_menu;

import java.util.Scanner;

public class online_payment extends payment {
    public int online;

    Scanner Input = new Scanner(System.in);

    public online_payment(int d) {
        days = d;
    }

    public void onlinepay() {
        System.out.println("Online Payment Available !!! ");
        System.out.println("Select option \n 1 For Easypaisa \n 2 For Jazz Cash");

        online = Input.nextInt();

        if (online == 1) {
            System.out.println("Thanks for Confirming \n Easypaisa Number is : 03xxxxxxxxx");
        }

        if (online == 2) {
            System.out.println("Thanks For Confirming \n Jazz Cash Number is : 03xxxxxxxxx");
        }
    }

    public void showonline() {
        totall_bill = 2000 * days;
        bill = totall_bill * 4;
        System.out.println("Your Total Bill is :" + bill);
    }
}
