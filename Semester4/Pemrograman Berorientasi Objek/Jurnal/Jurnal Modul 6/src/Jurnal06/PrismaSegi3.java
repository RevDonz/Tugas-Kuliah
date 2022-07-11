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
public class PrismaSegi3 extends Bentuk implements BangunRuang {
    private int alas;
    private int tinggi;
    private int tinggiPrisma;
    
    public PrismaSegi3(String nama, int alas, int tinggi, int tinggiPrisma) {
        super(nama);
        this.alas = alas;
        this.tinggi = tinggi;
        this.tinggiPrisma = tinggiPrisma;
    }
    
    public void info() {
        System.out.println("Nama Prisma Segitiga : " + this.getNama());
        System.out.println("Alas Segitiga        : " + this.alas);
        System.out.println("Tinggi Segitiga      : " + this.tinggi);
        System.out.println("Tinggi Prisma        : " + this.tinggiPrisma);
        System.out.println("Luas Permukaan       : " + this.hitungLuasPermukaan());
        System.out.println("Volume               : " + this.hitungVolume());

    }
    
    public double hitungLuasPermukaan() {
        double luas = (2 * (this.alas * this.tinggi * 0.5)) + (3 * (this.alas * this.tinggiPrisma));
        return luas;
    }
    
    public double hitungVolume() {
        return ((this.alas * this.tinggi) * 0.5) * this.tinggiPrisma;
    }
}
