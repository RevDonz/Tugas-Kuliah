/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurnal09;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Collections;

/**
 *
 * @author ASUS
 */
public class MainDriver {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        ArrayList<Email> mails = new ArrayList<>();
        mails.add(new Email(1, "Eren Yeager", "Titan 1", "Hello, how are you?", LocalDate.of(2021, 5, 1), false));
        mails.add(new Email(2, "Armin Arlert", "Titan 2", "Let's meet tomorrow", LocalDate.of(2021, 4, 29), false));
        mails.add(new Email(3, "Mikasa Ackerman", "Titan 3", "Project Deadline", LocalDate.of(2021, 4, 30), true));
        
        System.out.println("Sort by date descending");
        Collections.sort(mails);
        for (Email mail : mails) {
            mail.display();
        }
        
        System.out.println("\nSort by Sender ascending");
        Collections.sort(mails, new NameComparator());
        for (Email mail : mails) {
            mail.display();
        }
        
        System.out.println("\nGet only starred mail");
        for (Email mail : mails) {
            if (mail.isStarred()) mail.display();
        }
    }
}
