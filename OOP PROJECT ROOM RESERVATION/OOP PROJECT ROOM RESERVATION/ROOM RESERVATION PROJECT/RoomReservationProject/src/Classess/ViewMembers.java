/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classess;

import javax.swing.JTable;

/**
 *
 * @author zulfi computer
 */
public class ViewMembers {
    JTable BookRoomTable;

    public ViewMembers(JTable BookRoomTable) {
        this.BookRoomTable = BookRoomTable;
        checkinfo();
    }
    public void checkinfo()
    {
        Connecting x=new Connecting();
        x.checkmemberinfo(BookRoomTable);
    }
}
