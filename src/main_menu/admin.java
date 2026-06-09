package main_menu;

import java.util.Scanner;

public class admin {
    protected String admin_name;
    protected String admin_pass;

    // setting data
    public void setdata(String Admin_Name, String Admin_Pass) {
        this.admin_name = Admin_Name;
        this.admin_pass = Admin_Pass;
    }

    // getting data
    public void getdata() {
        Scanner Input = new Scanner(System.in);

        System.out.println("Enter Admin Name ");
        admin_name = Input.nextLine();

        System.out.println("Enter Admin Password");
        admin_pass = Input.nextLine();

        if (admin_name.equals("Admin") && admin_pass.equals("12345@GG")) {
            System.out.println("Logged In Successful");
        } else {
            System.out.println("Try Again");
        }
    }
}
