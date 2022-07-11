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
public class Segitiga extends BangunDatar {
    private int alas;
    private int tinggi;
    
    public int getAlas() {
        return alas;
    }

    public void setAlas(int alas) {
        this.alas = alas;
    }

    public int getTinggi() {
        return tinggi;
    }

    public void setTinggi(int tinggi) {
        this.tinggi = tinggi;
    }

    public Segitiga(String nama, int alas, int tinggi) {
        super(nama);
        this.alas = alas;
        this.tinggi = tinggi;
    }
    
    public double hitungLuas() {
        return this.alas * this.tinggi * 0.5;
    }
    
    static double hitungPitagoras(double alas, double tinggi) {
        double c = Math.sqrt((Math.pow(alas, 2) * 0.5) + Math.pow(tinggi, 2));
        return c;
    }
    
    public double hitungKeliling() {
        double sisiMiring = hitungPitagoras(alas, tinggi);
        return Math.round(sisiMiring + this.alas + this.tinggi);
    }
}
