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
public class Mahasiswa {
    private String nim;
    private String nama;
    private Prodi prodi;
    
    public void setNIM(String nim) {
        this.nim = nim;
    }
    
    public void setNama(String nama) {
        this.nama = nama;
    }
    
    public void setProdi(Prodi prodi) {
        this.prodi = prodi;
    }
    
    public String getNIM() {
        return this.nim;
    }
    
    public String getNama() {
        return this.nama;
    }
    
    public String getProdi() {
        return this.prodi.getNama() + " " + this.prodi.getKode();
    }
    
    public int getAngkatan() {
        String angkatan = this.nim.substring(4,6);
        int result = Integer.parseInt(angkatan);
        
        if (result >= 0 && result <= 20) {
            result = 2000 + result;
        } else if (result >= 21 && result <= 89) {
            result = 0;
        } else if (result >= 90 && result <= 99) {
            result = 1900 + result;
        }
        
        return result;
    }
}
