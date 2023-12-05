/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classess;

/**
 *
 * @author zulfi computer
 */import javax.swing.*;
public class bookedrooms {
    private int rooms=200;
    private int counter=0;
    private int bookedrooms=0;
    public bookedrooms(JLabel a,JLabel b) {
        rooms=200;
        bookedrooms=0;
        checkbookedrooms(a,b);
    }
    public void checkbookedrooms(JLabel a,JLabel b)
    {
        Connecting x=new Connecting();
        bookedrooms=x.bookedroom(rooms, counter);
        rooms=rooms-bookedrooms;
        a.setText(bookedrooms+"");
        b.setText(rooms+"");
    }
}
