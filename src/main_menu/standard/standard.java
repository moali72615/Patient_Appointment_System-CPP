package main_menu.standard;
import java.util.Scanner;
import main_menu.room.Room;

public class standard extends Room {
    Scanner Input = new Scanner(System.in);
    public void standardfeature() {
        System.out.println("Thanks For Confirming \n These are The Features of Standard");
        System.out.println("1. Only one Bed ");
        System.out.println("2. Attach Bathroom");
        System.out.println("Note : \n The Rent of This class is Bugget Freindly");
        System.out.println("And Its Price is Pkr :" + room_price);
    }
    public void showstandardfeature() {
        showroom();
    }
}