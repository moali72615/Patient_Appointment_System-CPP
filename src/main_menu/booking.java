package main_menu;

import java.util.Scanner;

public class booking extends room_management {

    public static String customer_name;
    public static int room_No;
    public static int days;

    public void bookroom() {
        Scanner Input = new Scanner(System.in);

        System.out.println("Enter Your Name");
        customer_name = Input.nextLine();

        System.out.println("Enter Room Number ");
        room_No = Input.nextInt();

        System.out.println("Enter No of Days");
        days = Input.nextInt();

        System.out.println("Your Room Is Booked successfully ");
    }

    public void showbookinng() {
        System.out.println("Room Booked For Mr/Mrs:  " + customer_name);
        System.out.println("Room Allote : " + room_No);
        System.out.println("For Days : " + days);
    }
}
