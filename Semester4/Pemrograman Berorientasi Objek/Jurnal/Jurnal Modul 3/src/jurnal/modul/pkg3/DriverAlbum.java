/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurnal.modul.pkg3;

/**
 *
 * @author ASUS
 */
public class DriverAlbum {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Song song1 = new Song();
        Song song2 = new Song();
        
        Album album1 = new Album();
        
        song1.setTitle("Melukis Senja");
        song1.setArtist("Budi Doremi");
        song1.setDuration(240);
        
        song2.setTitle("Photograph");
        song2.setArtist("Ed Sheeran");
        song2.setDuration(274);
        
        album1.setTotalSong(2);
        album1.setTitle("Pernah Hits");
        album1.setYear(2021);
        album1.addSong(song1);
        album1.addSong(song2);
        
        album1.displayInfo();
    }
    
}
