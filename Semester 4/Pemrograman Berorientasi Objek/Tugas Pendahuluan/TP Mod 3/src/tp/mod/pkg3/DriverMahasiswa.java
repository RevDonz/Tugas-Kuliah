/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tp.mod.pkg3;

/**
 *
 * @author ASUS
 */
public class DriverMahasiswa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Mahasiswa mhs1 = new Mahasiswa();
        Mahasiswa mhs2 = new Mahasiswa();
        Mahasiswa mhs3 = new Mahasiswa();
        Prodi prd1 = new Prodi();
        Prodi prd2 = new Prodi();
        
        prd1.setKode("SE");
        prd1.setNama("Rekayasa Perangkat Lunak");
        
        prd2.setKode("IT");
        prd2.setNama("Teknologi Informasi");
        
        mhs1.setNama("Eren Yeager");
        mhs1.setNIM("1302191234");
        mhs1.setProdi(prd1);
        
        mhs2.setNama("Armin Arlert");
        mhs2.setNIM("1303205555");
        mhs2.setProdi(prd2);
        
        mhs3.setNama("Mikasa Ackerman");
        mhs3.setNIM("1302990001");
        mhs3.setProdi(prd1);
        
        System.out.println("Mahasiswa 1");
        System.out.println(mhs1.getNama());
        System.out.println(mhs1.getNIM());
        System.out.println(mhs1.getProdi());
        System.out.println(mhs1.getAngkatan());
        
        System.out.println("\nMahasiswa 2");
        System.out.println(mhs2.getNama());
        System.out.println(mhs2.getNIM());
        System.out.println(mhs2.getProdi());
        System.out.println(mhs2.getAngkatan());
        
        System.out.println("\nMahasiswa 3");
        System.out.println(mhs3.getNama());
        System.out.println(mhs3.getNIM());
        System.out.println(mhs3.getProdi());
        System.out.println(mhs3.getAngkatan());
    }
}