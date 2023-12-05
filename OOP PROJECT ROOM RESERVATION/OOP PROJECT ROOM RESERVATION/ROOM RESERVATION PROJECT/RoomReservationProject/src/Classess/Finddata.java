/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classess;

/**
 *
 * @author Fall2015
 */
import Classess.*;
import javax.swing.*;
public class Finddata {
    private int id;
    

    public Finddata(int id,JTable table) {
        this.id = id;
        
        
        find(id,table);
    }
    public void find(int id,JTable table)
    {
        Connecting x=new Connecting();
        x.find(id,table);
    }
}
