/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GUIS;
import Classess.*;
/**
 *
 * @author Dell
 */
public class AdminRoombookingForm extends javax.swing.JFrame {

    /**
     * Creates new form Homepage
     */
    public AdminRoombookingForm() {
        initComponents();
    }
String value;




    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jButton3 = new javax.swing.JButton();
        jButton6 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        buttonGroup1 = new javax.swing.ButtonGroup();
        buttonGroup2 = new javax.swing.ButtonGroup();
        buttonGroup3 = new javax.swing.ButtonGroup();
        jPanel1 = new javax.swing.JPanel();
        jPanel5 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jPanel8 = new javax.swing.JPanel();
        jLabel3 = new javax.swing.JLabel();
        txtfname = new javax.swing.JTextField();
        jLabel11 = new javax.swing.JLabel();
        txtnoofdays = new javax.swing.JTextField();
        NoofPeople = new javax.swing.JTextField();
        jLabel12 = new javax.swing.JLabel();
        jLabel14 = new javax.swing.JLabel();
        jLabel15 = new javax.swing.JLabel();
        jLabel16 = new javax.swing.JLabel();
        jLabel17 = new javax.swing.JLabel();
        lblBookingCharges = new javax.swing.JLabel();
        jLabel18 = new javax.swing.JLabel();
        lblRoomCharges = new javax.swing.JLabel();
        lblServiceCharges = new javax.swing.JLabel();
        lblSecurityCharges = new javax.swing.JLabel();
        jLabel26 = new javax.swing.JLabel();
        jLabel27 = new javax.swing.JLabel();
        jLabel19 = new javax.swing.JLabel();
        txttotal = new javax.swing.JTextField();
        jButton8 = new javax.swing.JButton();
        jButton9 = new javax.swing.JButton();
        jButton10 = new javax.swing.JButton();
        ComboService = new javax.swing.JComboBox();
        ComboRoomtype = new javax.swing.JComboBox();
        Comborooms = new javax.swing.JComboBox();
        jPanel2 = new javax.swing.JPanel();
        jPanel3 = new javax.swing.JPanel();
        jPanel6 = new javax.swing.JPanel();

        jButton3.setBackground(new java.awt.Color(0, 102, 0));
        jButton3.setForeground(new java.awt.Color(255, 255, 255));
        jButton3.setText("Booked Rooms");
        jButton3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton3ActionPerformed(evt);
            }
        });

        jButton6.setBackground(new java.awt.Color(0, 102, 0));
        jButton6.setForeground(new java.awt.Color(255, 255, 255));
        jButton6.setText("View Members");

        jButton2.setBackground(new java.awt.Color(0, 102, 0));
        jButton2.setForeground(new java.awt.Color(255, 255, 255));
        jButton2.setText("Log Out");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setInheritsPopupMenu(true);
        jPanel1.setPreferredSize(new java.awt.Dimension(700, 500));
        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel5.setBackground(new java.awt.Color(255, 255, 255));

        jLabel1.setIcon(new javax.swing.ImageIcon(getClass().getResource("/GUIS/logo.png"))); // NOI18N

        jPanel8.setBackground(new java.awt.Color(255, 255, 255));
        jPanel8.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel3.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel3.setText("Name");
        jPanel8.add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(19, 37, 43, -1));

        txtfname.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtfnameActionPerformed(evt);
            }
        });
        jPanel8.add(txtfname, new org.netbeans.lib.awtextra.AbsoluteConstraints(66, 32, 108, 30));

        jLabel11.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel11.setText("No Of Days");
        jPanel8.add(jLabel11, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 40, 71, -1));
        jPanel8.add(txtnoofdays, new org.netbeans.lib.awtextra.AbsoluteConstraints(310, 30, 43, 30));

        NoofPeople.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NoofPeopleActionPerformed(evt);
            }
        });
        jPanel8.add(NoofPeople, new org.netbeans.lib.awtextra.AbsoluteConstraints(490, 30, 43, 30));

        jLabel12.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel12.setText("No Of People");
        jPanel8.add(jLabel12, new org.netbeans.lib.awtextra.AbsoluteConstraints(390, 40, -1, -1));

        jLabel14.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel14.setForeground(new java.awt.Color(153, 0, 0));
        jLabel14.setText("Room Type");
        jPanel8.add(jLabel14, new org.netbeans.lib.awtextra.AbsoluteConstraints(19, 101, -1, -1));

        jLabel15.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel15.setForeground(new java.awt.Color(153, 0, 0));
        jLabel15.setText("No of Rooms");
        jPanel8.add(jLabel15, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 150, -1, -1));

        jLabel16.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel16.setForeground(new java.awt.Color(153, 0, 0));
        jLabel16.setText("Services");
        jPanel8.add(jLabel16, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 200, -1, -1));

        jLabel17.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel17.setText("Booking Charges");
        jPanel8.add(jLabel17, new org.netbeans.lib.awtextra.AbsoluteConstraints(382, 101, -1, -1));

        lblBookingCharges.setForeground(new java.awt.Color(102, 153, 0));
        lblBookingCharges.setText("500");
        jPanel8.add(lblBookingCharges, new org.netbeans.lib.awtextra.AbsoluteConstraints(525, 102, -1, -1));

        jLabel18.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel18.setText("Room Charges");
        jPanel8.add(jLabel18, new org.netbeans.lib.awtextra.AbsoluteConstraints(382, 122, -1, -1));

        lblRoomCharges.setForeground(new java.awt.Color(102, 153, 0));
        lblRoomCharges.setText("00");
        jPanel8.add(lblRoomCharges, new org.netbeans.lib.awtextra.AbsoluteConstraints(525, 123, -1, -1));

        lblServiceCharges.setForeground(new java.awt.Color(102, 153, 0));
        lblServiceCharges.setText("00");
        jPanel8.add(lblServiceCharges, new org.netbeans.lib.awtextra.AbsoluteConstraints(525, 144, -1, -1));

        lblSecurityCharges.setForeground(new java.awt.Color(102, 153, 0));
        lblSecurityCharges.setText("250");
        jPanel8.add(lblSecurityCharges, new org.netbeans.lib.awtextra.AbsoluteConstraints(525, 165, -1, -1));

        jLabel26.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel26.setText("Service Charges");
        jPanel8.add(jLabel26, new org.netbeans.lib.awtextra.AbsoluteConstraints(382, 143, -1, -1));

        jLabel27.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel27.setText("Security Charges");
        jPanel8.add(jLabel27, new org.netbeans.lib.awtextra.AbsoluteConstraints(382, 164, -1, -1));

        jLabel19.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel19.setText("Total");
        jPanel8.add(jLabel19, new org.netbeans.lib.awtextra.AbsoluteConstraints(382, 199, -1, -1));

        txttotal.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txttotalActionPerformed(evt);
            }
        });
        jPanel8.add(txttotal, new org.netbeans.lib.awtextra.AbsoluteConstraints(495, 197, 58, -1));

        jButton8.setBackground(new java.awt.Color(0, 102, 0));
        jButton8.setForeground(new java.awt.Color(255, 255, 255));
        jButton8.setText("Book");
        jButton8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton8ActionPerformed(evt);
            }
        });
        jPanel8.add(jButton8, new org.netbeans.lib.awtextra.AbsoluteConstraints(498, 252, -1, -1));

        jButton9.setBackground(new java.awt.Color(0, 102, 0));
        jButton9.setForeground(new java.awt.Color(255, 255, 255));
        jButton9.setText("Back>>");
        jButton9.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton9ActionPerformed(evt);
            }
        });
        jPanel8.add(jButton9, new org.netbeans.lib.awtextra.AbsoluteConstraints(409, 252, -1, -1));

        jButton10.setBackground(new java.awt.Color(0, 102, 0));
        jButton10.setForeground(new java.awt.Color(255, 255, 255));
        jButton10.setText("Done");
        jButton10.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton10ActionPerformed(evt);
            }
        });
        jPanel8.add(jButton10, new org.netbeans.lib.awtextra.AbsoluteConstraints(334, 252, -1, -1));

        ComboService.setBackground(new java.awt.Color(0, 102, 0));
        ComboService.setForeground(new java.awt.Color(255, 255, 255));
        ComboService.setModel(new javax.swing.DefaultComboBoxModel(new String[] { "Select", "Normal", "Luxury", "No Service" }));
        ComboService.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ComboServiceActionPerformed(evt);
            }
        });
        jPanel8.add(ComboService, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 200, -1, -1));

        ComboRoomtype.setBackground(new java.awt.Color(0, 102, 0));
        ComboRoomtype.setForeground(new java.awt.Color(255, 255, 255));
        ComboRoomtype.setModel(new javax.swing.DefaultComboBoxModel(new String[] { "Select", "Normal", "Luxury", "Queen" }));
        ComboRoomtype.setDebugGraphicsOptions(javax.swing.DebugGraphics.BUFFERED_OPTION);
        ComboRoomtype.setInheritsPopupMenu(true);
        ComboRoomtype.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ComboRoomtypeActionPerformed(evt);
            }
        });
        jPanel8.add(ComboRoomtype, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 100, -1, -1));

        Comborooms.setBackground(new java.awt.Color(0, 102, 0));
        Comborooms.setForeground(new java.awt.Color(255, 255, 255));
        Comborooms.setModel(new javax.swing.DefaultComboBoxModel(new String[] { "Select", "1", "3", "5" }));
        Comborooms.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ComboroomsActionPerformed(evt);
            }
        });
        jPanel8.add(Comborooms, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 150, -1, -1));

        javax.swing.GroupLayout jPanel5Layout = new javax.swing.GroupLayout(jPanel5);
        jPanel5.setLayout(jPanel5Layout);
        jPanel5Layout.setHorizontalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addContainerGap(147, Short.MAX_VALUE)
                .addComponent(jLabel1)
                .addGap(136, 136, 136))
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addGap(46, 46, 46)
                .addComponent(jPanel8, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel5Layout.setVerticalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addGap(19, 19, 19)
                .addComponent(jLabel1)
                .addGap(18, 18, 18)
                .addComponent(jPanel8, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGap(15, 15, 15))
        );

        jPanel1.add(jPanel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 60, -1, 440));

        jPanel2.setBackground(new java.awt.Color(204, 0, 0));

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 780, Short.MAX_VALUE)
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 230, Short.MAX_VALUE)
        );

        jPanel1.add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 780, 230));

        jPanel3.setBackground(new java.awt.Color(102, 153, 0));

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 780, Short.MAX_VALUE)
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 644, Short.MAX_VALUE)
        );

        jPanel1.add(jPanel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 370, 780, -1));

        jPanel6.setBackground(new java.awt.Color(255, 255, 255));

        javax.swing.GroupLayout jPanel6Layout = new javax.swing.GroupLayout(jPanel6);
        jPanel6.setLayout(jPanel6Layout);
        jPanel6Layout.setHorizontalGroup(
            jPanel6Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 780, Short.MAX_VALUE)
        );
        jPanel6Layout.setVerticalGroup(
            jPanel6Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 140, Short.MAX_VALUE)
        );

        jPanel1.add(jPanel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 230, 780, 140));

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 556, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jButton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton3ActionPerformed
       
        // TODO add your handling code here:
    }//GEN-LAST:event_jButton3ActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
       ;// TODO add your handling code here:
    }//GEN-LAST:event_jButton2ActionPerformed

    private void txtfnameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtfnameActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtfnameActionPerformed

    private void NoofPeopleActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NoofPeopleActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_NoofPeopleActionPerformed

    private void txttotalActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txttotalActionPerformed
 
        // TODO add your handling code here:
    }//GEN-LAST:event_txttotalActionPerformed

    private void jButton8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton8ActionPerformed

RoomBooking r= new RoomBooking(txtfname.getText(), txtnoofdays.getText(), NoofPeople.getText(), ComboRoomtype.getSelectedItem().toString(), Comborooms.getSelectedItem().toString(),ComboService.getSelectedItem().toString(), lblRoomCharges.getText(), lblBookingCharges.getText(), lblServiceCharges.getText(), lblSecurityCharges.getText(),txttotal.getText());
        
    
        
        
        // TODO add your handling code here:
    }//GEN-LAST:event_jButton8ActionPerformed

    private void jButton9ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton9ActionPerformed

BookedRoomViewForm b= new BookedRoomViewForm();
b.setVisible(true);
setVisible(false);

        // TODO add your handling code here:
    }//GEN-LAST:event_jButton9ActionPerformed

    private void jButton10ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton10ActionPerformed

       int a,b,c,d,tot;
        a=Integer.parseInt(lblBookingCharges.getText());
        b=Integer.parseInt(lblRoomCharges.getText());
        c=Integer.parseInt(lblServiceCharges.getText());
        d=Integer.parseInt(lblSecurityCharges.getText());
        tot=a+b+c+d;
        txttotal.setText(""+tot);
        
        
        
        
        
        
        // TODO add your handling code here:
    }//GEN-LAST:event_jButton10ActionPerformed

    private void ComboRoomtypeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ComboRoomtypeActionPerformed
       if(ComboRoomtype.getSelectedItem().equals("Normal")){
           lblRoomCharges.setText("500");
       }
       if(ComboRoomtype.getSelectedItem().equals("Luxury")){
           lblRoomCharges.setText("1000");
       }
       if(ComboRoomtype.getSelectedItem().equals("Queen")){
           lblRoomCharges.setText("1500");
       }
       

// TODO add your handling code here:
    }//GEN-LAST:event_ComboRoomtypeActionPerformed

    private void ComboroomsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ComboroomsActionPerformed

if(Comborooms.getSelectedItem().equals("1")){
           lblRoomCharges.setText("500");
       }
       if(Comborooms.getSelectedItem().equals("3")){
           lblRoomCharges.setText("1500");
       }
       if(Comborooms.getSelectedItem().equals("5")){
           lblRoomCharges.setText("7500");
       }








// TODO add your handling code here:
    }//GEN-LAST:event_ComboroomsActionPerformed

    private void ComboServiceActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ComboServiceActionPerformed
if(ComboService.getSelectedItem().equals("Normal")){
           lblServiceCharges.setText("250");
       }
       if(ComboService.getSelectedItem().equals("Luxury")){
           lblServiceCharges.setText("500");
       }
       if(ComboService.getSelectedItem().equals("No Service")){
           lblServiceCharges.setText("00");
       }        // TODO add your handling code here:
    }//GEN-LAST:event_ComboServiceActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(AdminRoombookingForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(AdminRoombookingForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(AdminRoombookingForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(AdminRoombookingForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new AdminRoombookingForm().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JComboBox ComboRoomtype;
    private javax.swing.JComboBox ComboService;
    private javax.swing.JComboBox Comborooms;
    private javax.swing.JTextField NoofPeople;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.ButtonGroup buttonGroup2;
    private javax.swing.ButtonGroup buttonGroup3;
    private javax.swing.JButton jButton10;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton3;
    private javax.swing.JButton jButton6;
    private javax.swing.JButton jButton8;
    private javax.swing.JButton jButton9;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel12;
    private javax.swing.JLabel jLabel14;
    private javax.swing.JLabel jLabel15;
    private javax.swing.JLabel jLabel16;
    private javax.swing.JLabel jLabel17;
    private javax.swing.JLabel jLabel18;
    private javax.swing.JLabel jLabel19;
    private javax.swing.JLabel jLabel26;
    private javax.swing.JLabel jLabel27;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel5;
    private javax.swing.JPanel jPanel6;
    private javax.swing.JPanel jPanel8;
    private javax.swing.JLabel lblBookingCharges;
    private javax.swing.JLabel lblRoomCharges;
    private javax.swing.JLabel lblSecurityCharges;
    private javax.swing.JLabel lblServiceCharges;
    private javax.swing.JTextField txtfname;
    private javax.swing.JTextField txtnoofdays;
    private javax.swing.JTextField txttotal;
    // End of variables declaration//GEN-END:variables
}
