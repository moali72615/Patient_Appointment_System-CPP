package main_menu;

import java.util.Scanner;

public class room_management {
    Room r1 = new Room();

    public void addRoom() {
        Scanner input = new Scanner(System.in);

        r1.setroom();

        System.out.println("Room Added Successfully");
    }

    public void viewrooms() {
        r1.showroom();
    }
}
