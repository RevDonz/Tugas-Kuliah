/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP09;

import java.time.LocalDate;
import java.time.Month;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author ASUS
 */
public class DriverGeneric {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        List<Side> A = new ArrayList<Side>();
        A.add(new Side("Nilai", 60));
        A.add(new Side("Tahun", 2022));
        
        List<Side> B = new ArrayList<Side>();
        B.add(new Side(LocalDate.of(2002, Month.APRIL, 8), 9.6));
        B.add(new Side(LocalDate.of(2003, Month.FEBRUARY, 20), 7.8));
        
        System.out.println("ArrayList A");
        for (Side side : A) {
            System.out.println("Type left : " + side.getLeft().getClass());
            System.out.println("Nilai left : " + side.getLeft());
            System.out.println("Type right : " + side.getRight().getClass());
            System.out.println("Nilai right : " + side.getRight());
        }
        
        System.out.println("\nArrayList B");
        for (Side side : B) {
            System.out.println("Type left : " + side.getLeft().getClass());
            System.out.println("Nilai left : " + side.getLeft());
            System.out.println("Type right : " + side.getRight().getClass());
            System.out.println("Nilai right : " + side.getRight());
        }
    }
}
