/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP05;

/**
 *
 * @author ASUS
 */
public class DriverTP05 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // Membuat Objek A dari Class Koordinat dengan constructor
        Koordinat A = new Koordinat(15, 12);
        
        // Membuat Objek B dari Class Koordinat3D dengan constructor
        Koordinat3D B = new Koordinat3D(10, 28, 30);
        // Menampilkan output jarang dengan method hitungJarak
        System.out.println(B.hitungJarak(A));
        
        // Membuat Objek C dari Class Koordinat dengan constructor
        Koordinat3D C = new Koordinat3D(11, 26, 32);
        System.out.println(C.hitungJarak(B));
        
        // Membuat Objek D dari Class Koordinat dengan constructor
        KoordinatWarna D = new KoordinatWarna(35, 60, "Hitam");
        System.out.println(B.hitungJarak(D));
        
        // Membuat Objek E dari Class Koordinat dengan constructor
        KoordinatWarna E = new KoordinatWarna(25, 50, "Putih");
        System.out.println(E.hitungJarak(D));
    }
    
}
