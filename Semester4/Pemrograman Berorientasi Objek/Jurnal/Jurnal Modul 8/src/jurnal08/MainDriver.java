/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurnal08;

import java.time.LocalDateTime;

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
        Email[] emails = new Email[2];
        
        Email.EmailTable email = new Email.EmailTable();
        email.outputQueryCreate();
        
        emails[0] = new Email(1, "doni@gmail.com", "Reminder Tugas", "Jangan lupa kerja kelompok ya ges ya", LocalDateTime.now(), true);
        emails[1] = new Email(2, "rama@gmail.com", "Reminder Praktikum", "Jangan lupa hari ini ada praktikum ya teman-teman", LocalDateTime.now(), false);
        
        System.out.println("Query input data ke tabel " + email.table_name + " : ");
        System.out.println("INSERT INTO " + email.table_name + " VALUES");
        for (int i = 0; i < emails.length; i++) {
            emails[i].outputQueryInsert();
            if(i+1 == emails.length) {
                System.out.println(";");
            } else {
                System.out.println(",");
            }
        }
    }
    
}
