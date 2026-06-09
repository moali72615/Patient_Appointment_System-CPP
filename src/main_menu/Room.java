package main_menu;

import java.util.Scanner;

public class Room {
    public int room_no;
    public String room_type;
    public double room_price;

    public void setroom() {
        // for admin

        Scanner Input = new Scanner(System.in);

        System.out.println("Enter Your Room Number .");

        room_no = Input.nextInt();

        Input.nextLine();

        System.out.println("Enter Your Room Type .");

        room_type = Input.nextLine();

        System.out.println("Enter Room Price .");

        room_price = Input.nextDouble();
    }

    public void showroom() {
        // for user

        System.out.println("Room Number is . " + room_no);
        System.out.println("Room Type is ." + room_type);
        System.out.println("Room Price is . " + room_price);
    }
}
