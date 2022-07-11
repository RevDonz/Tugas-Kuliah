/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jobs;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.Period;
import java.util.Date;

/**
 *
 * @author ASUS
 */
public class Artist {
    private String name;
    private Date birthDate;
    private int age;
    
    public Artist(String name, String _birthdate) throws ParseException {
        this.name = name;
        SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd");
        Date birthDate = format.parse(_birthdate);
        
        this.birthDate = birthDate;
        
        int year = Integer.parseInt(_birthdate.substring(0, 4));
        int month = Integer.parseInt(_birthdate.substring(5, 7));
        int date = Integer.parseInt(_birthdate.substring(8));
        
        LocalDate birth = LocalDate.of(year, month, date);
        LocalDate now = LocalDate.now();
        Period umur = Period.between(birth, now);
        this.age = umur.getYears();
    }
    
    public String getName() {
        return name;
    }
    
    public Date getRealBirthDate() {
        return this.birthDate;
    }

    public String getBirthDate() {
        Date tgl = this.birthDate;
        SimpleDateFormat format = new SimpleDateFormat("dd MMMM yyyy");
        String date = format.format(tgl);
        
        return date;
    }

    public int getAge() {
        return age;
    }

    public void setBirthDate(Date birthDate) {
        this.birthDate = birthDate;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }
    
    public void displayInfo() {
        System.out.println("Artist Name : " + this.name);
        System.out.println("Birthdate   : " + this.getBirthDate());
        System.out.println("Age         : " + this.age + "\n");
    }
}
