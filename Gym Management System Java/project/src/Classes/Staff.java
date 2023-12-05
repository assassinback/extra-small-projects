/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classes;

/**
 *
 * @author Daniyal Shah
 */
public class Staff {
private String staffID;
private String staffName;
private String staffAddress;
private int staffContact;
private String position;
private Equipment a[];

    public Staff(String staffID, String staffName, String staffAddress, int staffContact, String position,int length) {
        this.staffID = staffID;
        this.staffName = staffName;
        this.staffAddress = staffAddress;
        this.staffContact = staffContact;
        this.position = position;
        a=new Equipment[length];
    }

    public String getStaffID() {
        return staffID;
    }

    public String getStaffName() {
        return staffName;
    }

    public String getStaffAddress() {
        return staffAddress;
    }

    public int getStaffContact() {
        return staffContact;
    }

    public String getPosition() {
        return position;
    }
    
    
    
    
    

}