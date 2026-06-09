package main_menu;

import java.util.Scanner;

public class complaints extends room_management {
    Scanner Input = new Scanner(System.in);
    public static String compl;

    public void setcomplains() {
        System.out.println("Press Y To complain \n Press N To not Complain");
        String choice = Input.nextLine();
        if (choice.equalsIgnoreCase("y")) {
            System.out.println("Enter Complains ... ");
            compl = Input.nextLine();
        } else if (choice.equalsIgnoreCase("n")) {
            System.out.println("Thanks For Trusting Us");
        } else {
            System.out.println("Enter Correct Keyword");
        }
    }

    public void showcomplaints() {
        System.out.println("The Complains Are ... \n" + compl);
    }
}
