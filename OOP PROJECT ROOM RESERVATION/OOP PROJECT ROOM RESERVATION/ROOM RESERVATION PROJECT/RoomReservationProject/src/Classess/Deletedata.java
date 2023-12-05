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
public class Deletedata {
    private int id;

    public Deletedata(int id) {
        this.id = id;
        delete(id);
    }
    public void delete(int id)
    {
        Connecting x=new Connecting();
        x.delete(id);
        
        
        
    }
    
    
    
    
    
}
