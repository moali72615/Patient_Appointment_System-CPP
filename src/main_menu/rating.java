package main_menu;

import java.util.Scanner;

public class rating extends Feedback {
    Scanner Input = new Scanner(System.in);
    public static int stars;

    public void setstar() {
        System.out.println("Enter The Rating You Gave to us 1 to 5 ");
        stars = Input.nextInt();
        System.out.println("Thanks For Giving The Rating .... ");
    }

    public void showstar() {
        System.out.println("Rating :" + stars + "/5");
    }
}
