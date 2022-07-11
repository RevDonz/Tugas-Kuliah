/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Jurnal06;

/**
 *
 * @author ASUS
 */
public class DriverBentuk {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Kubus K = new Kubus("Klub", 5);
        Lingkaran L = new Lingkaran("Sirkel", 14);
        PrismaSegi3 PS3 = new PrismaSegi3("Traienggel Prism", 6, 7, 10);
        PersegiPanjang PP = new PersegiPanjang("Rektenggel", 8, 9);

        L.info();
        PP.info();
        K.info();
        PS3.info();
    }
    
}
