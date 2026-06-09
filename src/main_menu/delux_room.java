package main_menu;

import java.util.Scanner;

public class delux_room extends Room {
    Scanner Input = new Scanner(System.in);

    public void setdelux() {
        setroom();
    }

    public void showfeature_delux() {

        System.out.println("Welcome to Our Delux Room : \n These Are all The Features Of our Delux Room ");
        System.out.println("1. Free and Unlimited Wifi .");
        System.out.println("2. Room With Air Conditioner .");
        System.out.println("3. Breakfast .");
        System.out.println("\"NOTE\" : \n Their Will Be Charges of AC accrding to use. \n Wifi will Be Free totally \n Breakfast Charges and will be served At your room");
        System.out.println("And Its Price is Pkr :" + room_price);
    }

    public void showdelux() {
        showroom();
    }
}
