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
public class userlogin {
    private String username,password;

    public userlogin(String username, String password) {
        this.username = username;
        this.password = password;
    }
    public void check()
    {
        Connecting x=new Connecting();
        x.login(username, password);
    }
    
    
}
