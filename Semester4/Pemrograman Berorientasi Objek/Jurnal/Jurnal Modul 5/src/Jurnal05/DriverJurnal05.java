/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Jurnal05;

/**
 *
 * @author ASUS
 */
public class DriverJurnal05 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Serangga A = new Serangga("Merah", 20, 30);
        System.out.println("Posisi awal A: " + A.getPosisi().getX() + ", " + A.getPosisi().getY());
        
        A.gerak(40, 50);
        System.out.println("Posisi akhir A: " + A.getPosisi().getX() + ", " + A.getPosisi().getY());
        
        Semut B = new Semut("Hitam", 50, 80);
        System.out.println("Sarang B: " + B.getPosisi().getX() + ", " + B.getPosisi().getY());
        System.out.println("Lokasi awal B: " + B.getPosisi().getX() + ", " + B.getPosisi().getY());
        System.out.println("rute B:");
        if (B.getJmlRute() == 0) System.out.println("--");
        else for (Koordinat k: B.getRute())
                System.out.println("    " + k.getX() + ", " + k.getY());
        B.gerak(60, 100);
        B.gerak(70, 120);
        B.gerak(80, 140);
        System.out.println("Posisi gerak B: " + B.getPosisi().getX() + ", " + B.getPosisi().getY());
        System.out.println("rute B:");
        if (B.getJmlRute() == 0) System.out.println("--");
        else for (Koordinat k: B.getRute())
                System.out.println("    " + k.getX() + ", " + k.getY());
        B.kembaliKeSarang();
//        System.out.println("Posisi akhir B: " + B.getPosisi().getX() + ", " + B.getPosisi().getY());
        System.out.println("rute B:");
        if (B.getJmlRute() == 0) System.out.println("--");
        else for (Koordinat k: B.getRute())
                System.out.println("    " + k.getX() + ", " + k.getY());
    }
    
}
