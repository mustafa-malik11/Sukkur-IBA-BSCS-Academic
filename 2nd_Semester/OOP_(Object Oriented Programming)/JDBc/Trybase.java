
package trybase;

import java.util.*;
import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.ResultSet;
import java.util.Scanner;

public class Trybase {


    public static void main(String[] args) {
        // TODO code application logic here
        
        final String ur="jdbc:mysql://localhost:3306/siba";
        final String un="root";
        final String psd="";
        final String q="select * from student";
        
        
        int cms=0;
        String name=null;
        int dno=0;
        
        
        try(Connection con1=DriverManager.getConnection(ur, un, psd);
                Statement sment1=con1.createStatement();)
        {
            ResultSet result1=sment1.executeQuery(q);
            
            
            while(result1.next())
            {
                
                System.out.println("Cms id =  "+result1.getInt("cmsid"));
                System.out.println("Name of Student =  "+result1.getString("sname"));
                System.out.println("department no =  "+result1.getInt("deptno"));
                
                System.out.println("****************************************************************");
            }
            result1.close();
            
            
            System.out.println();
            System.out.println("            ------------  INSERT THE DATA ------------");
            System.out.println();
            System.out.println("****************************************************************");
          
          Scanner inp = new Scanner(System.in);
          
          System.out.println("are you want insert more data in database   Y/N");    
          
          
         char check=inp.next().charAt(0);

        if(check=='y')
          {
            
            System.out.println("Enter cms id : ");
            // inp is a scanner;
            cms= inp.nextInt();
            
            inp.nextLine();
                        
            System.out.println("Enter Students Name ");
            name = inp.nextLine();
            
            System.out.println("Enter Your Age ");
            dno = inp.nextInt();
            
          System.out.println("****************************************************************");

          int i=  sment1.executeUpdate("insert into student (cmsid, Sname, deptno) values ('"+cms+"', '"+name+"', '"+dno+"')");
          
          if (i>0){
             System.out.println("Recorcd inserted Succesefully"); 
          } 
          
          
          System.out.println("****************************************************************");
            System.out.println();            
            System.out.println("            ------------  AFTER INSERT THE DATA ------------");
            System.out.println();  
          System.out.println("****************************************************************");
          
          
          ResultSet result2 =sment1.executeQuery(q);
          
          while(result2.next())
          {      
                System.out.println("Cms id =  "+result1.getInt("cmsid"));
                System.out.println("Name of Student =  "+result1.getString("sname"));
                System.out.println("department no =  "+result1.getInt("deptno"));
                
                System.out.println("****************************************************************");    
          }
          result2.close();
          
          System.out.println("****************************************************************");
          
        }
        }       
        
        catch(Exception e)
        {
            System.out.println(e);
        }
        
        
    }
    
}
