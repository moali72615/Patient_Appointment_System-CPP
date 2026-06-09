package main_menu;

import java.util.Scanner;

public class vip_room extends Room {

    Scanner Input = new Scanner(System.in);

    public void setvip() {
        setroom();
    }

    public void showfeature_vip() {

        System.out.println("Welcome to our Vip room Management \n These are all the Features of Our VIP Room .");
        System.out.println("1. Private pool ");
        System.out.println("2. Vip Services");
        System.out.println("3. Bigger Tv ");
        System.out.println("NOTE : \n Something will be same In Delux and Vip room Like AC etc . ");
        System.out.println("And its Price per day is Pkr :" + room_price);
    }

    public void showvip() {
        showroom();
    }
}
