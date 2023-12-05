/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classess;

/**
 *
 * @author zulfi computer
 */
import javax.swing.JTextArea;
public class payment 
{
    private String name;
    private String id;
    private String feedback;
    public payment(String name, String id,JTextArea a){
        this.name = name;
        this.id = id;
        next(a);
    }
    public void next(JTextArea a)
    {
        Connecting x=new Connecting();
        int total=x.payment(id);
        a.setText(total+"");
    }
}
