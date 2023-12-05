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
import javax.swing.JTextField;
public class RoomBooking {
    private String Name;
    private String NbDays;
    private String NbPeople;
    private String roomtype;
    private String nbrooms;
    private String services;
    private String RoomCharges;
    private String BookingCharges;
    private String ServiceCharges;
    private String SecurityCharges;
    private String total;

    public RoomBooking(String Name, String NbDays, String NbPeople, String roomtype, String nbrooms, String services, String RoomCharges, String BookingCharges, String ServiceCharges, String SecurityCharges,String total) {
        this.Name = Name;
        this.NbDays = NbDays;
        this.NbPeople = NbPeople;
        this.roomtype = roomtype;
        this.nbrooms = nbrooms;
        this.services = services;
        this.RoomCharges = RoomCharges;
        this.BookingCharges = BookingCharges;
        this.ServiceCharges = ServiceCharges;
        this.SecurityCharges = SecurityCharges;
        this.total=total;
        SaveBookedRoom();
    }

   
    
    
    public void SaveBookedRoom()
    {
        Connecting x=new Connecting();
        x.bookroom(Name, NbDays, NbPeople,roomtype,nbrooms, services, RoomCharges, BookingCharges, ServiceCharges, SecurityCharges,total);
        
    }
    
    
    
}
