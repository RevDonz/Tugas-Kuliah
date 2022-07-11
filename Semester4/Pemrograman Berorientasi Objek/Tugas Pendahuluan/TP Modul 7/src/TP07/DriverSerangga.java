/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP07;

/**
 *
 * @author ASUS
 */
public class DriverSerangga {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Serangga serangga1;
        
        Koordinat posisi1 = new Koordinat(10, 20);
        Koordinat posisi2 = new Koordinat(50, 70);
        Koordinat3D posisi3 = new Koordinat3D(30, 40, 50);
        Koordinat3D posisi4 = new Koordinat3D(60, 30, 80);
        
        serangga1 = new Semut("Hitam", posisi1);
        serangga1.info();
        serangga1.gerak(posisi2);
        serangga1.info();
        
        serangga1 = new Lebah("Kuning", posisi3);
        serangga1.info();
        serangga1.gerak(posisi4);
        serangga1.info();
    }
    
}
