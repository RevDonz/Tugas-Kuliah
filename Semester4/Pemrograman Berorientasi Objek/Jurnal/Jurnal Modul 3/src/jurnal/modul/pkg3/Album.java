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
public class Album {
    private String title;
    private int year;
    private int track;
    private Song [] songs = new Song[this.track];
    
    public void setTitle(String title) {
        if (title != null) {
            this.title = title;
        }
    }
    
    public void setYear(int year) {
        if (year != 0) {
            this.year = year;
        }
    }
    
    public void setTotalSong(int total) {
        this.track = 0;
        this.songs = new Song[total];
    }
    
    public String getTitle() {
        return this.title;
    }
    
    public int getYear() {
        return this.year;
    }
    
    public void addSong(Song songs) {
        this.songs[this.track] = songs;
        this.track++;
    }
    
    public void displayInfo() {
        System.out.println("Album Info");
        System.out.println("Title   : " + this.title);
        System.out.println("Year    : " + this.year);
        System.out.println("Song List");
        for (int i = 0; i < this.track; i++) {
            System.out.println(i+1 + ". Title    : " + this.songs[i].getTitle());
            System.out.println("   Artist   : " + this.songs[i].getArtist());
            System.out.println("   Duration : " + this.songs[i].getDuration());
            System.out.println("   Category : " + this.songs[i].play());
        }
    }
}
