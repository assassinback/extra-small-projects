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
import java.sql.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.*;
import java.awt.*;
public class connecting 
{

        
        Connection conn=null;
        ResultSet rs=null;
        Statement st=null;
    public Connection setConnection(){
        String dataSourceName="Gym Management.accdb";
        String dir=System.getProperty("user.dir");
        String url ="jdbc:ucanaccess://"+dir+"/"+dataSourceName;
        Connection con=null;
        try {
              con = DriverManager.getConnection(url);
        }
        catch(Exception sqlEx){
                    System.out.println(sqlEx);
        } 
        return con;
    }
    public void Register(String customerID,String customerPassword,String customerName,String age,String customerAddress,String customerContact,String customerCountry,String joindate)
    {
            try {
            conn=setConnection();
            
            Statement st=conn.createStatement();
            String sql="INSERT INTO UserInfo(customerID,customerPassword,customerName,age,customerAddress,customerContact,customerCountry,joindate)"+ " VALUES(?,?,?,?,?,?,?,?)";
            String query="SELECT customerID from UserInfo";
            PreparedStatement pstmt = conn.prepareStatement(sql);
            ResultSet rs=st.executeQuery(query);
            while(rs.next())
            {
            if(rs.getString("customerID").equals(customerID))
            {
            JOptionPane.showMessageDialog(null, "NOT Saved username already exist");
            break;
            }
            else
            {
            if(rs.isLast())
            {
            pstmt.setString(1, customerID);
            pstmt.setString(2, customerPassword);
            pstmt.setString(3, customerName);
            pstmt.setString(4, age);
            pstmt.setString(5, customerAddress);
            pstmt.setString(6, customerContact);
            pstmt.setString(7, customerCountry);
            pstmt.setString(8, joindate);
            pstmt.executeUpdate();
            JOptionPane.showMessageDialog(null, "Info saved");
            }
            }
            }
            
            conn.close();
            //st.close();
            } catch (Exception ex) {
                System.out.println(ex);
            }
            
    }
    public void login(String customerID,String customerPassword)
    {
        
            String sql="Select customerID,customerPassword from UserInfo";
            try {
                conn=setConnection();
                st=conn.createStatement();
                rs=st.executeQuery(sql);
                while(rs.next())
                {
                    if(rs.getString("customerID").equals(customerID)&&rs.getString("customerPassword").equals(customerPassword))
                    {
                        JOptionPane.showMessageDialog(null, "Welcome");
                    }
                    else
                    {
                        if(rs.isLast())
                        {
                            JOptionPane.showMessageDialog(null, "Incorrect info");
                        }
                    }
                }
            }
            catch (Exception ex) {
                Logger.getLogger(connecting.class.getName()).log(Level.SEVERE, null, ex);
            }
        
    }

    
  }