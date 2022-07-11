/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Driver;

import entitas.Mahasiswa;
import entitas.MataKuliah;
import relasi.AmbilMK;

/**
 *
 * @author ASUS
 */
public class DriverAmbilMK {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Mahasiswa mhs1 = new Mahasiswa("1302091000", "Bertholdt Hoover", 1);
        Mahasiswa mhs2 = new Mahasiswa("1303209999", "Reiner Braun", 12);
        MataKuliah PBO = new MataKuliah("CII3B4", "Pemrograman Berorientasi Objek", 4);
        MataKuliah KPL = new MataKuliah("CII3H4", "Konstruksi Perangkat Lunakk", 4);
        MataKuliah APB = new MataKuliah("CTI3I4", "Aplikasi Perangkat Bergerak", 3);
        AmbilMK [] mk = new AmbilMK[7];
        mk[0] = new AmbilMK(PBO, mhs1, "A", "20/21");
        mk[1] = new AmbilMK(KPL, mhs1, "C", "20/21");
        mk[2] = new AmbilMK(APB, mhs1, "AB", "20/21");
        mk[3] = new AmbilMK(PBO, mhs2, "B", "20/21");
        mk[4] = new AmbilMK(KPL, mhs2, "A", "20/21");
        mk[5] = new AmbilMK(APB, mhs2, "BC", "19/20");
        mk[6] = new AmbilMK(KPL, mhs2, "D", "19/20");
        
        String tahunAjaran1 = mk[0].getTahunAjaran();
        String tahunAjaran2 = mk[3].getTahunAjaran();
        String tahunAjaran3 = mk[3].getTahunAjaran();
        
        double ipkMhs1 = mhs1.hitungIPK(mk, "20/21");
        double ipkMhs2 = mhs2.hitungIPK(mk, "20/21");
        double ipkMhs3 = mhs2.hitungIPK(mk, "19/20");
        System.out.println("IPK " + mhs1.getNama() + " (" + mhs1.getKelas() + ") TA " + tahunAjaran1 + ": " + ipkMhs1);
        System.out.println("IPK " + mhs2.getNama() + " (" + mhs2.getKelas() + ") TA " + tahunAjaran2 + ": " + ipkMhs2);
        System.out.println("IPK " + mhs2.getNama() + " (" + mhs2.getKelas() + ") TA " + tahunAjaran3 + ": " + ipkMhs3);

    }
    
}
