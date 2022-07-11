/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurnal08;

import java.time.LocalDateTime;

/**
 *
 * @author ASUS
 */
public class Email {
    private int id ;
    private String sender;
    private String subject;
    private String content;
    private LocalDateTime datetime;
    private boolean starred;
    
    public Email(int id, String sender, String subject, String content, LocalDateTime datetime, boolean starred) {
        this.id = id;
        this.sender = sender;
        this.subject = subject;
        this.content = content;
        this.datetime = datetime;
        this.starred = starred;
    }
    
    public void outputQueryInsert() {
        System.out.print("(" + getId() + ", '" + getSender() + "', '" + getSubject() + "', '" + getContent() + "', '" + getDatetime() + "', " + isStarred() + ")");
    }
    
    public static class EmailTable {
        public static final String table_name = "emails";
        public static final String id = "email_id";
        public static final String sender = "from";
        public static final String subject = "subject";
        public static final String content = "content";
        public static final String datetime = "date_time";
        public static final String star = "starred";
        
        public static void outputQueryCreate() {
            System.out.println("Query pembuatan tabel " + table_name + " : ");
            System.out.println("CREATE TABLE " + table_name + " (");
            System.out.println("\t" + id + " INT PRIMARY KEY,");
            System.out.println("\t" + sender + " VARHCAR(100),");
            System.out.println("\t" + subject + " VARHCAR(100),");
            System.out.println("\t" + content + " TEXT,");
            System.out.println("\t" + datetime + " DATETIME,");
            System.out.println("\t" + star + " INT(1) DEFAULT 0");
            System.out.println(");");
        }   
    }
    
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getSender() {
        return sender;
    }

    public void setSender(String sender) {
        this.sender = sender;
    }

    public String getSubject() {
        return subject;
    }

    public void setSubject(String subject) {
        this.subject = subject;
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
    }

    public LocalDateTime getDatetime() {
        return datetime;
    }

    public void setDatetime(LocalDateTime datetime) {
        this.datetime = datetime;
    }

    public boolean isStarred() {
        return starred;
    }

    public void setStarred(boolean starred) {
        this.starred = starred;
    }
}
