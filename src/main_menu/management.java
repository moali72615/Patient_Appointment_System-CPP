package main_menu;

import java.util.Scanner;

public class management {
    Scanner Input = new Scanner(System.in);
    private int rom_no;
    protected int hours;
    protected int mints;

    public void checkin() {
        System.out.println("Enter Your Room No ");
        rom_no = Input.nextInt();
        System.out.println("Enter The Time First Hours Like 2 etc ");
        hours = Input.nextInt();
        System.out.println("Now Enter Minutes Like 23 etc ");
        mints = Input.nextInt();
        System.out.println("Your Checked in At Time ");
        System.out.println(hours + ":" + mints);
        System.out.println("Checked In Successfull ");

    }

    public void checkout() {
        System.out.println("Enter Your Room No ");
        rom_no = Input.nextInt();
        System.out.println("Enter The Time First Hours Like 2 etc ");
        hours = Input.nextInt();
        System.out.println("Now Enter Minutes Like 23 etc ");
        mints = Input.nextInt();
        System.out.println("Your Checked Out Time is ");
        System.out.println(hours + ":" + mints);
        System.out.println("Checked Out Successfull ");
    }
}
