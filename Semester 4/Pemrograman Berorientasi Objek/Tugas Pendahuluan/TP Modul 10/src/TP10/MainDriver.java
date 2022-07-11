/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP10;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author ASUS
 */
public class MainDriver {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws Exception {
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);
        int input = 0;
        
        while (input != -99) {
            try {
                if (input < 0) {
                    throw new SmallIntegerException("Nilai kurang dari 0");
                } else if (input > 9) {
                    throw new SmallIntegerException("Nilai lebih dari 9");
                }
            } catch(InputMismatchException e) {
                System.out.println("Input not a number" + e);
                System.exit(0);
                scanner.next();
            } catch(SmallIntegerException e) {
                System.out.println(e);
                e.print();
            } 
            
            try {
                System.out.print("Masukkan angka : ");
                input = scanner.nextInt();
            } catch(InputMismatchException e) {
                System.out.println("Input not a number");
                System.exit(0);
            }
        }
    }
}
