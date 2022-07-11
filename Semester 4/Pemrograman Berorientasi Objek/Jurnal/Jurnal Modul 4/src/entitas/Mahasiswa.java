/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package entitas;

import relasi.AmbilMK;

/**
 *
 * @author ASUS
 */
public class Mahasiswa {
    String nim;
    String nama;
    String kelas;
    String prodi;
    
    public Mahasiswa(String nim, String nama, int nokelas) {
        int angkatan;
        String prodiMhs;
        String kelas;
        
        prodiMhs = cariProdi(nim);
        
        angkatan = Integer.parseInt(nim.substring(4, 6))+24;
        if (nokelas < 10) {
            kelas = "0" + Integer.toString(nokelas);
        } else {
            kelas = Integer.toString(nokelas);
        }
        this.kelas = prodiMhs + "-" + Integer.toString(angkatan) + "-" + kelas;
        this.nim = nim;
        this.nama = nama;
    }
    
    public String cariProdi(String nim) {
        switch (nim.substring(0,4)) {
            case "1301":
                return "IF";
            case "1302":
                return "SE";
            default:
                return "IT";
        }
    }
    
    public double hitungIPK(AmbilMK ambilmk[], String angkatan) {
        int sks = 0;
        double ip = 0;
        for (AmbilMK a: ambilmk) {
            String Nim = a.getMahasiswa().getNim();
            if (Nim == this.nim && a.getTahunAjaran().equals(angkatan)) {
                sks += a.getMataKuliah().getSks();
                String indeks = a.getNilai();
                switch (indeks) {
                    case "A":
                        ip += a.getMataKuliah().getSks()*4;
                        break;
                    case "AB":
                        ip += a.getMataKuliah().getSks()*3.5;
                        break;
                    case "B":
                        ip += a.getMataKuliah().getSks()*3;
                        break;
                    case "BC":
                        ip += a.getMataKuliah().getSks()*2.5;
                        break;
                    case "C":
                        ip += a.getMataKuliah().getSks()*2;
                        break;
                    case "D":
                        ip += a.getMataKuliah().getSks()*1;
                    default:
                        break;
                }
            }
        }
        return Math.round((ip/sks)*100)/100.0;
    }
    
    public String getNim() {
        return nim;
    }

    public void setNim(String nim) {
        this.nim = nim;
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getKelas() {
        return kelas;
    }

    public void setKelas(String kelas) {
        this.kelas = kelas;
    }

    public String getProdi() {
        return prodi;
    }

    public void setProdi(String prodi) {
        this.prodi = prodi;
    }
}
