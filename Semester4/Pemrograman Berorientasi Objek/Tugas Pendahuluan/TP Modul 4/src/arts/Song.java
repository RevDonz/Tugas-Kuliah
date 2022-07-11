/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arts;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.Period;
import java.util.Date;
import jobs.Artist;

/**
 *
 * @author ASUS
 */
public class Song {
    String title;
    Artist artist;
    Date release;
    
    public Song(String title, Artist artist, String _release) throws ParseException {
        this.title = title;
        this.artist = artist;
        SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd");
        Date dateNow = format.parse(_release);
        this.release = dateNow;
    }
    
    public void displayInfo() throws ParseException {
        System.out.println("Title   : " + this.title);
        System.out.println("Artist  : " + this.artist.getName());
        System.out.println("Release : " + this.getRelease());
        System.out.println("Artist age is " + this.artist.getAge()+ " when song released\n");
    }
    
    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public Artist getArtist() {
        return artist;
    }

    public void setArtist(Artist artist) {
        this.artist = artist;
    }

    public String getRelease() {
        Date tgl = this.release;
        SimpleDateFormat format = new SimpleDateFormat("dd MMMM yyyy");
        String date = format.format(tgl);
        
        return date;
    }

    public void setRelease(Date release) {
        this.release = release;
    }
    
}
