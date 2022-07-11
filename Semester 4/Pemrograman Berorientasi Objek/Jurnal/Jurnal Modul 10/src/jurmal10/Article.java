/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurmal10;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author ASUS
 */
public class Article {
    private String title;
    private String content;
    private Date date;

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        if (title.isEmpty()) {
            throw new IllegalArgumentException("Title tidak boleh kosong");
        } else if (title.length() > 10) {
            throw new IllegalArgumentException("Panjang title tidak boleh lebih dari 10 karakter");
        } else {
            this.title = title;
        }
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        if (content.isEmpty()) {
            throw new IllegalArgumentException("Content tidak boleh kosong");
        } else if (content.length() > 100) {
            throw new IllegalArgumentException("Panjang content tidak boleh lebih dari 100 karakter");
        } else {
            this.content = content;
        }
    }

    public Date getDate() {
        return date;
    }

    public void setDate(String date) throws ParseException {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd");
        this.date = simpleDateFormat.parse(date);
        System.out.println(this.date);
    }

}
