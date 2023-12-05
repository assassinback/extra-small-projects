/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classess;

/**
 *
 * @author Dell
 */
public class Pay {
    
    private String accountno,clearence;

    public Pay(String accountno, String clearence) {
        this.accountno = accountno;
        this.clearence = clearence;
        save(accountno,clearence);
    }

    public Pay() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    public void save(String accountno,String clearence){
        Connecting x=new Connecting();
        x.pay(accountno, clearence);
        
    }
}
