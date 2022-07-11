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
public class Kubus extends Bentuk implements BangunRuang {
    private int sisi;

    public Kubus(String nama, int sisi) {
        super(nama);
        this.sisi = sisi;
    }
    
    public void info() {
        System.out.println("Nama Kubus     : " + this.getNama());
        System.out.println("Panjang sisi   : " + this.sisi);
        System.out.println("Luas Permukaan : " + this.hitungLuasPermukaan());
        System.out.println("Volume         : " + this.hitungVolume());
    }
    
    public double hitungLuasPermukaan() {
        return 6 * Math.pow(this.sisi, 2);
    }
    
    public double hitungVolume() {
        return Math.pow(this.sisi, 3);
    }
}
