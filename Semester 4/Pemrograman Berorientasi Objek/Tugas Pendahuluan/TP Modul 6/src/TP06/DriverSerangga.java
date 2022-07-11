/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP06;

/**
 *
 * @author ASUS
 */
public class DriverSerangga {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Semut S = new Semut("Hitam", 60, 80);
        System.out.println("Warna semut  : " + S.getWarna());
        S.info();
        S.gerak(new int[]{70, 90});
        S.info();
        Lebah L = new Lebah("Kuning", 20, 30, 40);
        System.out.println("Warna lebah  : " + L.getWarna());
        L.info();
        L.terbang(55, 65, 75);
        L.info();
        L.gerak(new int[]{25, 35, 45});
        L.info();
    }
    
}
