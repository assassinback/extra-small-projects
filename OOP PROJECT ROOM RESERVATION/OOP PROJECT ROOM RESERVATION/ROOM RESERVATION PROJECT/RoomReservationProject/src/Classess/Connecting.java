/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Classess;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.sql.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JOptionPane;
import javax.swing.*;
import net.proteanit.sql.DbUtils;
import java.awt.*;
/**
 *
 * @author zulfi computer
 */
public class Connecting {
    Connection conn=null;
    ResultSet rs=null;
    PreparedStatement pstmt=null;
    Statement st=null;
    private String id;
    private String name;
    public static Connection setConnection(){
        String dataSourceName="Database.accdb";
        String dir = System.getProperty("user.dir");
        String url = "jdbc:ucanaccess://"+dir+"/" + dataSourceName;
        Connection con=null;
        try {
              con = DriverManager.getConnection(url);
        }
        catch(Exception sqlEx){
                    System.out.println(sqlEx);
        } 
        return con;
    }

    public boolean matchPassword(String user, String pass){
        boolean successful =false;
        try {
            Connection con = setConnection();  
            Statement st = con.createStatement();
            String sql =
                 "SELECT * FROM Admin where Username = '"+user+"'";
            ResultSet rs = st.executeQuery(sql);
            while(rs.next()){
              String userName = rs.getString("Username");
              String password = rs.getString("password");
              if(user.equals(userName) && pass.equals(password))
                  successful = true;
              else
                  successful = false;
            }
            con.close();
        }
        catch(Exception sqlEx){
                    JOptionPane.showMessageDialog(null, sqlEx);
        }     
        return successful;
    }
    
    public boolean MemberMatch(String user, String pass){
        boolean successful =false;
        try {
            Connection con = setConnection();  
            Statement st = con.createStatement();
            String sql =
                 "SELECT * FROM Memberinfo where UserName = '"+user+"'";
            ResultSet rs = st.executeQuery(sql);
            while(rs.next()){
              String userName = rs.getString("UserName");
              String password = rs.getString("Password");
              if(user.equals(userName) && pass.equals(password))
                  successful = true;
              else
                  successful = false;
            }
            con.close();
        }
        catch(Exception sqlEx){
                    System.out.println(sqlEx);
        }     
        return successful;
    }
    public void saveuserinfo(String FirstName,String LastName,String CNIC,String address,String mobile,String emailaddress,String username,String password)
    {
        try {
            String sql="insert into Memberinfo(FirstName,LastName,CNIC,address,mobile,emailaddress,username,password) values(?,?,?,?,?,?,?,?)";
            String query="SELECT username from MemberInfo";
            conn=setConnection();
            Statement st=conn.createStatement();
            PreparedStatement pstmt = conn.prepareStatement(sql);
            ResultSet rs=st.executeQuery(query);
            while(rs.next())
            {
            if(rs.getString("username").equals(username))
            {
            JOptionPane.showMessageDialog(null, "NOT Saved username already exist");
            break;
            }
            else
            {
            if(rs.isLast())
            {
            pstmt.setString(1, FirstName);
            pstmt.setString(2, LastName);
            pstmt.setString(3, CNIC);
            pstmt.setString(4, address);
            pstmt.setString(5, mobile);
            pstmt.setString(6, emailaddress);
            pstmt.setString(7, username);
            pstmt.setString(8, password);
            pstmt.executeUpdate();
            JOptionPane.showMessageDialog(null, "CONGRATS! YOU ARE OUR MEMBER NOW!");
            }
            }
            }
            
            conn.close();
        } catch (Exception ex) {
            System.out.println(ex);
        }
    }
    public void login(String username,String password)
    {
        
            String sql="Select username,password from MemberInfo";
            try {
                conn=setConnection();
                st=conn.createStatement();
                rs=st.executeQuery(sql);
                while(rs.next())
                {
                    if(rs.getString("username").equals(username)&&rs.getString("password").equals(password))
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
                System.out.println(ex);
            }
        
    }
    public void adminLogin(String username,String password)
    {
        String sql="Select username,password from Admin";
            try {
                conn=setConnection();
                st=conn.createStatement();
                rs=st.executeQuery(sql);
                while(rs.next())
                {
                    if(rs.getString("username").equals(username)&&rs.getString("password").equals(password))
                    {
                        JOptionPane.showMessageDialog(null, "Welcome");
                        break;
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
                System.out.println(ex);
            }
    }
    public void bookroom(String Name,String NbDays,String NbPeoples,String roomtype,String nbrooms,String services,String RoomCharges,String BookingCharges,String ServiceCharges,String SecurityCharges,String total)
    {
        try {
        String sql="insert into roombooked(Name,nbrooms,NbDays,NbPeoples,services,roomtype,BookingCharges,RoomCharges,ServiceCharges,SecurityCharges,TOTAL) values(?,?,?,?,?,?,?,?,?,?,?)";
        conn=setConnection();
        PreparedStatement pstmt = conn.prepareStatement(sql);
        pstmt.setString(1, Name);
            pstmt.setString(2, nbrooms);
            pstmt.setString(3, NbDays);
            pstmt.setString(4, NbPeoples);
            pstmt.setString(5, services);
            pstmt.setString(6, roomtype);
            pstmt.setString(7, BookingCharges);
            pstmt.setString(8, RoomCharges);
            pstmt.setString(9, ServiceCharges);
            pstmt.setString(10,SecurityCharges);       
            pstmt.setString(11,total);       
            pstmt.executeUpdate();
            JOptionPane.showMessageDialog(null, "Thanks For Booking Room");
        
        } catch (Exception ex) {
            System.out.println(ex);
        }   
    }
    public void addTotal(String total)
    {
        try {
            String sql="Insert into roombooked(total) values(?)";
            conn=setConnection();
            PreparedStatement pstmt = conn.prepareStatement(sql);
            pstmt.setString(1,total);
            pstmt.executeUpdate();
            JOptionPane.showMessageDialog(null, "Info saved");
        } catch (SQLException ex) {
            Logger.getLogger(Connecting.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    public int bookedroom(int rooms,int counter)
    {
        try {
            counter=0;
            String sql="Select Name from RoomBooked";
            conn=setConnection();
            st=conn.createStatement();
            rs=st.executeQuery(sql);
            rooms=200;
            while(rs.next())
            {
                counter++;  
            }
        } catch (Exception ex) {
            System.out.println(ex);
        }
        return counter;
    }
    public void fetchdata(JTable BookRoomTable){
       
 try{
                      
            conn=  setConnection();
        String query="Select RoomID,Name,nbrooms,nbPeoples,TOTAL from RoomBooked";
        
          Statement st = conn.createStatement();
            rs=st.executeQuery(query);            
            BookRoomTable.setModel(DbUtils.resultSetToTableModel(rs));
            st.close();
            conn.close();  
 }
 catch(Exception e){
        JOptionPane.showMessageDialog(null, e);
        }
    }
    public void checkmemberinfo(JTable BookRoomTable){
       
        try{
        conn= setConnection();
        String query="Select ID,FirstName,LastName,Cnic,Address,Mobile,EmailAddress from MemberInfo";
        Statement st = conn.createStatement();
        rs=st.executeQuery(query);            
         BookRoomTable.setModel(DbUtils.resultSetToTableModel(rs));
        st.close();
        conn.close();  
        }
        catch(Exception e){
        JOptionPane.showMessageDialog(null, e);
        }
    }
    public int payment(String id)
    {
        int total=0;
        try {
            String sql="Select * from RoomBooked where id= "+id;
            conn=setConnection();
            st=conn.createStatement();
            rs=st.executeQuery(sql);
            int x=Integer.parseInt(rs.getString("BookingCharges"));
            int y=Integer.parseInt(rs.getString("RoomCharges"));
            int z=Integer.parseInt(rs.getString("ServiceCharges"));
            int a=Integer.parseInt(rs.getString("SecurityCharges"));
            total=x+y+z+a;
            
            
            
        }
        catch (SQLException ex) {
            JOptionPane.showMessageDialog(null, ex);
        }
        return total;
    }
    public void delete(int id)
    {
        try {
            JOptionPane.showConfirmDialog(null, "sure?");
            conn=setConnection();
            st=conn.createStatement();
            
            st.execute("DELETE FROM MemberInfo WHERE ID = "+id);
            JOptionPane.showMessageDialog(null, "Deleted");
            
        } catch (SQLException ex) {
            JOptionPane.showMessageDialog(null, ex);
        }
    }
    
    
    public void find(int id,JTable table){
        
        try {
            String sql="Select * FROM MemberInfo WHERE ID = "+id;
            conn=setConnection();
            st=conn.createStatement();
            rs=st.executeQuery(sql);
            table.setModel(DbUtils.resultSetToTableModel(rs));
        } catch (SQLException ex) {
            Logger.getLogger(Connecting.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void findbooking(int id,JTable table){
        
        try {
            String sql="Select RoomID,Name,nbrooms,nbPeoples,TOTAL from RoomBooked WHERE RoomID = "+id;
            conn=setConnection();
            st=conn.createStatement();
            rs=st.executeQuery(sql);
            table.setModel(DbUtils.resultSetToTableModel(rs));
        } catch (SQLException ex) {
            Logger.getLogger(Connecting.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void pay(String accountno,String clearence){
        
        try {
            String sql = "insert into RoomBooked (AccountNo , Clearence) values (?,?)";
            conn=setConnection();
            PreparedStatement pstmt = conn.prepareStatement(sql);
            pstmt.setString(12, accountno);
            pstmt.setString(13, clearence);
            pstmt.executeUpdate();
            JOptionPane.showMessageDialog(null, "Payed");
            
            
            
        } catch (SQLException ex) {
            Logger.getLogger(Connecting.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    
}
