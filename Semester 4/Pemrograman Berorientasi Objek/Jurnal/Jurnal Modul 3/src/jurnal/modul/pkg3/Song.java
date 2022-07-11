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
public class Song {
    private String title;
    private String artist;
    private int duration;
    
    public void setTitle(String title) {
        if (title != null) {
            this.title = title;
        }
    }
    
    public void setArtist(String artist) {
        if (artist != null) {
            this.artist = artist;
        }
    }
    
    public void setDuration(int duration) {
        if (duration != 0) {
            this.duration = duration;
        }
    }
    
    public String getTitle() {
        return this.title;
    }
    
    public String getArtist() {
        return this.artist;
    }
    
    public String getDuration() {
        int menit = this.duration / 60;
        int detik = this.duration % 60;

        String result = menit + ":" + detik;
        return result;
    }
    
    public String play() {
        String durasi = null;
        if (this.duration / 60 < 2 ) {
            durasi = "Short";
        } else if (this.duration / 60 >= 2 && this.duration / 60 <= 4) {
            durasi = "Intermediate";
        } else {
            durasi = "Long";
        }
        return durasi;
    }
}
