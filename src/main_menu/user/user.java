package main_menu.user;
import java.util.Scanner;

public class user {
    protected String User_name;
    public void setdata(String user_name) {
        this.User_name = user_name;
    }
    public void getdata() {
        Scanner Input;
        Input = new Scanner(System.in);
        System.out.println("Enter Your Full Name... ");
        User_name = Input.nextLine();
        System.out.println("Thanks Mr or Mrs " + User_name);
    }
}