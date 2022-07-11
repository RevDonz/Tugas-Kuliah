/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurnal09;

import java.util.Comparator;

/**
 *
 * @author ASUS
 */
public class NameComparator implements Comparator<Email>{
    @Override
    public int compare(Email o1, Email o2) {
        return (o1.getSender().compareTo(o2.getSender()));
    }
}
