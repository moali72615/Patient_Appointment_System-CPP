package main_menu.room_status;
import java.util.Scanner;

public class room_status {
    public static String status;
    public void setstatus() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Room Status Available or Not .");
        status = input.nextLine();
    }
    public void showstatus() {
        System.out.println("Current Room Status is : " + status);
    }
}