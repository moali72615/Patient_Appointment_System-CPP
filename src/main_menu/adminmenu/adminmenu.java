package main_menu.adminmenu;
import java.util.Scanner;
import main_menu.feedback.Feedback;
import main_menu.admin.admin;
import main_menu.booking.booking;
import main_menu.complaints.complaints;
import main_menu.monthly_income.monthly_income;
import main_menu.room_management.room_management;
import main_menu.room_status.room_status;

public class adminmenu extends admin {
    public int admin_choice;
    public void showmenu() {
        Scanner Input;
        Input = new Scanner(System.in);
        room_management rm = new room_management();
        do {
            System.out.println("Press 1 To Add Room");
            System.out.println("Press 2 To View Room");
            System.out.println("Press 3 To View Bookings");
            System.out.println("Press 4 To Update Room Status");
            System.out.println("Press 5 To View Total Income Generated this Month");
            System.out.println("Press 6 to See Feedbacks");
            System.out.println("Press 7 To See Complaints");
            System.out.println("Press 8 To Exit From Admin Menu ");
            admin_choice = Input.nextInt();
            if (admin_choice == 1) {
                rm.addRoom();
            }
            if (admin_choice == 2) {
                rm.viewrooms();
            }
            if (admin_choice == 3) {
                booking bok = new booking();
                bok.showbookinng();
            }
            if (admin_choice == 4) {
                room_status rs = new room_status();
                rs.setstatus();
            }
            if (admin_choice == 5) {
                monthly_income mi = new monthly_income();
                mi.showincome();
            }
            if (admin_choice == 6) {
                Feedback Feed = new Feedback();
                Feed.showfeed();
            }
            if (admin_choice == 7) {
                complaints cpl = new complaints();
                cpl.showcomplaints();
            }
        } while (admin_choice != 8);
    }
}