/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Main;

import arts.Song;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import jobs.Artist;

/**
 *
 * @author ASUS
 */
public class DriverSong {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws ParseException {
        // TODO code application logic here
        Artist ar1 = new Artist("Budi Doremi", "1984-09-19");
        Artist ar2 = new Artist("Ed Sheeran", "1991-02-17");
        Song song1 = new Song("Melukis Senja", ar1, "2020-06-29");
        Song song2 = new Song("Photograph", ar2, "2015-05-10");
        
        ar1.displayInfo();
        ar2.displayInfo();
        song1.displayInfo();
        song2.displayInfo();
    }
    
}
