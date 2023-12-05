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
public class Membership {
    private String customerID;
     private String customerName;
      private String customerAddress;
       private String customerCountry;
        private String customerContact;
        private String age;
        private String joindate;
         private String customerPassword;

    public Membership(String customerID,String customerPassword,String customerName,String age,String customerAddress,String customerContact,String customerCountry,String joindate) {
        this.customerID = customerID;
        this.customerName = customerName;
        this.customerAddress = customerAddress;
        this.customerCountry = customerCountry;
        this.customerContact = customerContact;
        this.joindate = joindate;
        this.customerPassword = customerPassword;
        this.age=age;
        addtoJDBC();
    }
    public void addtoJDBC()
    {
        connecting a=new connecting();
        a.Register(customerID,customerPassword,customerName,age,customerAddress,customerContact,customerCountry,joindate);
    }
    
         
}
