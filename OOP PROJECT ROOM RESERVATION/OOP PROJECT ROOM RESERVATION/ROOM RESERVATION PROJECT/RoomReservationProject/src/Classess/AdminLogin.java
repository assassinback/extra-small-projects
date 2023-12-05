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
public class AdminLogin 
{
private String username;
private String password;

    public AdminLogin(String username, String password) {
        this.username = username;
        this.password = password;
        check();
    }
    public void check()
    {
        Connecting x=new Connecting();
        x.adminLogin(username, password);
    }

}
