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
public class UserInfo 
{
private String firstname;
private String lastname;
private String CNIC;
private String address;
private String mobile;
private String email;
private String username;
private String password;

    public UserInfo(String firstname, String lastname, String CNIC, String address, String mobile, String email, String username, String password) {
        this.firstname = firstname;
        this.lastname = lastname;
        this.CNIC = CNIC;
        this.address = address;
        this.mobile = mobile;
        this.email = email;
        this.username = username;
        this.password = password;
        save();
    }
    public void save()
    {
        Connecting x=new Connecting();
        x.saveuserinfo(firstname, lastname, CNIC, address, mobile, email, username, password);
    }

}
