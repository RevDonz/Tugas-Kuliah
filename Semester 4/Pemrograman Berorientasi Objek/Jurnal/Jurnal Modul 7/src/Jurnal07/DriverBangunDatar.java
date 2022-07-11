/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Jurnal07;
 
/**
 *
 * @author ASUS
 */
public class DriverBangunDatar {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        BangunDatar[] bangunDatar = new BangunDatar[3];
        bangunDatar[0] = new Lingkaran("Sirkel", 21);
        bangunDatar[1] = new PersegiPanjang("Rektenggel", 15, 8);
        bangunDatar[2] = new Segitiga("Segitiga", 10, 12);
        
        for (BangunDatar bangunDatar1 : bangunDatar) {
            System.out.println("Nama     : " + bangunDatar1.getNama());
            if (bangunDatar1 instanceof Segitiga) {
                System.out.println("Alas     : " + ((Segitiga) bangunDatar1).getAlas());
                System.out.println("Tinggi   : " + ((Segitiga) bangunDatar1).getTinggi());
            } else if (bangunDatar1 instanceof Lingkaran) {
                System.out.println("Jari-jari: " + ((Lingkaran) bangunDatar1).getJari_jari());
            } else if (bangunDatar1 instanceof PersegiPanjang) {
                System.out.println("Panjang  : " + ((PersegiPanjang) bangunDatar1).getPanjang());
                System.out.println("Lebar    : " + ((PersegiPanjang) bangunDatar1).getLebar());
            }
            System.out.println("Luas     : " + bangunDatar1.hitungLuas());
            System.out.println("Keliling : " + bangunDatar1.hitungKeliling());
            System.out.println();
        }
    }
}
