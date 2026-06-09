package main_menu;

public class Feedback {
    // static means shared by all objects
    public static String feedback;

    public void setfeed() {
        java.util.Scanner input = new java.util.Scanner(System.in);

        System.out.println("Enter Your Feedback");

        feedback = input.nextLine();
    }

    public void showfeed() {
        System.out.println("Feedback is: " + feedback);
    }
}
