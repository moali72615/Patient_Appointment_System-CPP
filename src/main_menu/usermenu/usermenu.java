package main_menu.usermenu;
import java.util.Scanner;
import main_menu.feedback.Feedback;
import main_menu.bill.bill;
import main_menu.booking.booking;
import main_menu.complaints.complaints;
import main_menu.delux_room.delux_room;
import main_menu.management.management;
import main_menu.rating.rating;
import main_menu.rules.rules;
import main_menu.standard.standard;
import main_menu.user.user;
import main_menu.vip_room.vip_room;

public class usermenu extends user {
    public int user_choice;
    public void showmenu() {
        Scanner Input;
        Input = new Scanner(System.in);
        do {
            System.out.println("Press 1 To Check Room Availability ");
            System.out.println("Press 2 To Book Room");
            System.out.println("Press 3 To Check In");
            System.out.println("Press 4 To Check Out");
            System.out.println("Press 5 To Check Your Total Bill");
            System.out.println("Press 6 To Give FeedBack ");
            System.out.println("Press 7 to See The Rules Of Our Hotel ");
            System.out.println("Press 8 To Complaints");
            System.out.println("Press 9 To Give Ratings");
            System.out.println("Press 10 To Exit....");
            user_choice = Input.nextInt();
            if (user_choice == 1) {
                System.out.println("Rooms Are Available !!");
            }
            if (user_choice == 2) {
                booking bk = new booking();
                bk.bookroom();
                System.out.println("Kindly Select Room Type ");
                System.out.println("Press 1 For Delux Rooms");
                System.out.println("Press 2 For VIP Rooms");
                System.out.println("Press 3 For Standard Rooms");
                int room_choice = Input.nextInt();
                switch (room_choice) {
                case 1: {
                    delux_room dr2 = new delux_room();
                    dr2.setdelux();
                    dr2.showfeature_delux();
                    dr2.showdelux();
                    break;
                }
                case 2: {
                    vip_room vpr2 = new vip_room();
                    vpr2.setvip();
                    vpr2.showfeature_vip();
                    vpr2.showvip();
                    break;
                }
                case 3: {
                    standard str = new standard();
                    str.setroom();
                    str.standardfeature();
                    str.showstandardfeature();
                    break;
                }
                default: {
                    System.out.println("Inavlid key Word !! \n Enter Correct Key Words");
                }
                }
            }
            if (user_choice == 3) {
                management m22 = new management();
                m22.checkin();
            }
            if (user_choice == 4) {
                management m33 = new management();
                m33.checkout();
            }
            if (user_choice == 5) {
                bill bll = new bill();
                bll.billcalculation();
                bll.showbill();
            }
            if (user_choice == 6) {
                Feedback Feed = new Feedback();
                Feed.setfeed();
            }
            if (user_choice == 7) {
                rules rl1 = new rules();
                rl1.showrules();
            }
            if (user_choice == 8) {
                complaints cp = new complaints();
                cp.setcomplains();
            }
            if (user_choice == 9) {
                rating rt = new rating();
                rt.setstar();
            }
        } while (user_choice != 10);
    }
}