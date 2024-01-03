//*******************************************************************************************************
//
//          File:                       CustomerDBMS.java
//
//          Student:                    Noah Thomas
//
//          Assignment:                 Assignment #11
//
//          Course Name:                JAVA I
//
//          Course Number:              COSC 2050 - 01
//
//          Due:                        May 11, 2022
//
//
//          This program counts how customers there is, inserts, deletes, and 
//          displays a customer's information on a database table.
//
//          Other files required:
//          -Validator.java    
//          -CustomerApplication.java
//
//*******************************************************************************************************

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

//*******************************************************************************************************

public class CustomerDBMS 
{
    
    private static Scanner keyboard = new Scanner(System.in);    
    
//*******************************************************************************************************
 
    public void createTable()
    {
        try
        {
            final String DB_URL = "jdbc:derby://localhost:1527/db;create=true"; 
            Connection conn = DriverManager.getConnection(DB_URL); 
            Statement stmt = conn.createStatement(); 
            String sql;
            
            sql = "CREATE TABLE Customer" +
            "( CustomerNum CHAR(10) NOT NULL PRIMARY KEY, " +
            "  Name CHAR(25),"    +
            "  Address CHAR(25)," +
            "  City CHAR(12),"    +
            "  State CHAR(2),"    +
            "  Zip CHAR(5) )";
            
            stmt.execute(sql);
            stmt.close();
            conn.close();
        }
        catch(Exception ex)
        {
            System.out.println("Error: " + ex.getMessage());
        }   
    }
    
//*******************************************************************************************************
    
    public void insert()
    {           
        String prompt,
                customerNum = "",
                customerName = "",
                address = "",
                city = "",
                state = "",
                zip = "";
        
        prompt = "Customer Number: ";
        customerNum = Validator.getRequiredString(prompt);
        prompt = "Customer Name: ";
        customerName = Validator.getRequiredString(prompt);
        prompt = "Address: ";
        address = Validator.getRequiredString(prompt);
        prompt = "City: ";
        city = Validator.getRequiredString(prompt);
        prompt = "State: ";
        state = Validator.getRequiredString(prompt);
        prompt = "Zip: ";
        zip = Validator.getRequiredString(prompt);;
        
        try
        {
            final String DB_URL = "jdbc:derby://localhost:1527/db;create=true"; 
            Connection conn = DriverManager.getConnection(DB_URL); 
            Statement stmt = conn.createStatement(); 
            String sql;
            sql = "INSERT INTO Customer "
                    + "(CustomerNumber, Name, Address, City, State, Zip)"
                    + "VALUES ('" + customerNum + "', '" + customerName + "', '" 
                    + address + "', '" + city + "', '" + state 
                    + "', '" + zip + "')";   
            stmt.executeUpdate(sql);
            stmt.close();
            conn.close();
        }
        catch(Exception ex)
        {
            System.out.println("Error: " + ex.getMessage());
        }
    }
    
//*******************************************************************************************************
    
    public void delete(String customerNum)
    {
        String prompt;
        try
        {
            final String DB_URL = "jdbc:derby://localhost:1527/db;create=true"; 
            Connection conn = DriverManager.getConnection(DB_URL); 
            Statement stmt = conn.createStatement(); 
            String sql;
            
            prompt = "Customer Number: ";
            customerNum = Validator.getRequiredString(prompt);
            sql = "DELETE FROM customer WHERE CustomerNumber LIKE '%" + customerNum + "%'";
            stmt.executeUpdate(sql);
            stmt.close();
            System.out.println("Successfully Deleted!");
            conn.close();
        }
        catch(Exception ex)
        {
            System.out.println("Error: " + ex.getMessage());  
        }
    }
    
//*******************************************************************************************************
    
    public void count()
    {
        try
        {
            final String DB_URL = "jdbc:derby://localhost:1527/db;create=true"; 
            Connection conn = DriverManager.getConnection(DB_URL); 
            Statement stmt = conn.createStatement(); 
 
            String sql = "SELECT COUNT(*) FROM Customer"; 
            ResultSet result = stmt.executeQuery(sql);           
            if (result.next())
            {
                int c = result.getInt(1);
                System.out.println("There is " + c + " customers");
            }
            stmt.close();
            conn.close();
        }
        catch(Exception ex)
        {
            System.out.println("Error: " + ex.getMessage());  
        }
    }
    
//*******************************************************************************************************
    
    public void display()
    {
        try
        {
            final String DB_URL = "jdbc:derby://localhost:1527/db;create=true"; 
            Connection conn = DriverManager.getConnection(DB_URL); 
            Statement stmt = conn.createStatement(); 
            
            String sql = "SELECT * FROM Customer";
            ResultSet result = stmt.executeQuery(sql);
            
            System.out.println("All Customers\n"
                    + "--------------------------------------------------------"
                    + "--------------------------------------------------------"
                    + "--------------------------");
            while(result.next())
            {
                System.out.printf("%10s %25s %25s %12s %2s %5s\n", result.getString("customerNumber"),
                        result.getString("Name"),
                        result.getString("address"),
                        result.getString("city"),
                        result.getString("state"),
                        result.getString("zip"));
            }
            System.out.println("------------------------------"
                    + "------------------------------------------------------"
                    + "------------------------------------------------------");
            stmt.close();
            conn.close();
        }
        catch(Exception ex)
        {
            System.out.println("Error: " + ex.getMessage());  
        }
    }
}

