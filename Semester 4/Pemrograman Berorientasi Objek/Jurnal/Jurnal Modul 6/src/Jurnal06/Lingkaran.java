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
public class Lingkaran extends Bentuk implements BangunDatar {
    private int jari_jari;

    public Lingkaran(String nama, int jari_jari) {
        super(nama);
        this.jari_jari = jari_jari;
    }
    
    public double hitungKeliling() {
        double hasil;
        if (this.jari_jari % 7 == 0) {
            return 2 * 22 * this.jari_jari / 7;
        } else {
            return 2 * 3.14 * this.jari_jari;
        }
    }
    
    public double hitungLuas() {
        if (this.jari_jari % 7 == 0) {
            return 22 * Math.pow(jari_jari, 2) / 7;
        } else {
            return 3.14 * Math.pow(jari_jari, 2);
        }
    }
    
    public void info() {
        System.out.println("Nama Lingkaran    : " + this.getNama());
        System.out.println("Panjang jari-jari : " + this.jari_jari);
        System.out.println("Luas              : " + this.hitungLuas());
        System.out.println("Keliling          : " + this.hitungKeliling());
    }
    
}
