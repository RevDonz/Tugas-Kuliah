/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurmal10;

import java.util.Scanner;

/**
 *
 * @author ASUS
 */
public class MainDriver {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean isTitleValid = false, isContentValid = false, isDateValid = false;
        Article artikel = new Article();
        String input;
        
        System.out.println("Article Validator");
        
        do {
            try {
                System.out.print("Masukkan title : ");
                input = scanner.nextLine();
                artikel.setTitle(input);
                isTitleValid = true;
                System.out.println("Title Valid");
            } catch(Exception e) {
                System.out.println(e.getMessage());
            }
        } while (!isTitleValid);
        
        do {
            try {
                System.out.print("Masukkan content : ");
                input = scanner.nextLine();
                artikel.setContent(input);
                isContentValid = true;
                System.out.println("Content Valid");
            } catch(Exception e) {
                System.out.println(e.getMessage());
            }
        } while (!isContentValid);
        
        do {
            try {
                System.out.print("Masukkan tanggal : ");
                input = scanner.nextLine();
                artikel.setDate(input);
                isDateValid = true;
                System.out.println("Tanggal Valid");
            } catch(Exception e) {
                System.out.println("Format tanggal harus yyyy-MM-dd");
            }
        } while (!isDateValid);
    }
}
