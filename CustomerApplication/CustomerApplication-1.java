//*******************************************************************************************************
//
//          File:                       CustomerApplication.java
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
//          This program allows the user to make changes or view the customer  
//          database through a menu.
//
//          Other files required:
//          -Validator.java    
//          -CustomerDBMS.java
//
//*******************************************************************************************************

import java.util.Scanner;

//*******************************************************************************************************

public class CustomerApplication 
{

    public static void main(String[] args) 
    {
        String customerNum = "",
                prompt;
        int option = 0,
                input_MIN = 1,
                input_MAX = 4;
        boolean quit = false;
        
        Scanner keyboard = new Scanner (System.in);
        
        CustomerDBMS ds = new CustomerDBMS();
        //ds.createTable();
        while(!quit)
        {
            System.out.print("*************************************************\n" 
                + "1. View all customer information\n"
                + "2. Insert a customer\n"
                + "3. Delete a customer's information\n"
                + "4. Quit\n");
            prompt = "Enter a choice: ";
            option = Validator.getInttWithinRange(prompt, input_MIN, input_MAX);

            if(option == 1)
            {
                ds.display();
            }
            else if(option == 2)
            {
                ds.insert();
            }
            else if(option == 3)
            {
                ds.delete(customerNum);
            }
            else if(option == 4)
            {
                ds.count();
                System.out.println();
                System.out.println("Thank you for using the customer system!");
                quit = true;
            }
        }
    }
}

/*OUTPUT
*************************************************
1. View all customer information
2. Insert a customer
3. Delete a customer's information
4. Quit
Enter a choice: 1
All Customers
------------------------------------------------------------------------------------------------------------------------------------------
104        Noah Thomas               983 tom dr.               wensville    MO 54687
105        Donte                     874 donho rd.             westville    NJ 45623
106        Jane                      657 rose rd.              roserville   WY 45743
101        Nick Thomas               983 tom dr.               wensville    MO 54687
102        Jansen                    764 boom rd.              johnvillve   MN 73645
------------------------------------------------------------------------------------------------------------------------------------------
*************************************************
1. View all customer information
2. Insert a customer
3. Delete a customer's information
4. Quit
Enter a choice: 2
Customer Number: 123
Customer Name: StarBucks
Address: 100 Webster St.
City: Webster
State: MO
Zip: 63119
*************************************************
1. View all customer information
2. Insert a customer
3. Delete a customer's information
4. Quit
Enter a choice: 1
All Customers
------------------------------------------------------------------------------------------------------------------------------------------
104        Noah Thomas               983 tom dr.               wensville    MO 54687
105        Donte                     874 donho rd.             westville    NJ 45623
106        Jane                      657 rose rd.              roserville   WY 45743
101        Nick Thomas               983 tom dr.               wensville    MO 54687
102        Jansen                    764 boom rd.              johnvillve   MN 73645
123        StarBucks                 100 Webster St.           Webster      MO 63119
------------------------------------------------------------------------------------------------------------------------------------------
*************************************************
1. View all customer information
2. Insert a customer
3. Delete a customer's information
4. Quit
Enter a choice: 3
Customer Number: 123
Successfully Deleted!
*************************************************
1. View all customer information
2. Insert a customer
3. Delete a customer's information
4. Quit
Enter a choice: 1
All Customers
------------------------------------------------------------------------------------------------------------------------------------------
104        Noah Thomas               983 tom dr.               wensville    MO 54687
105        Donte                     874 donho rd.             westville    NJ 45623
106        Jane                      657 rose rd.              roserville   WY 45743
101        Nick Thomas               983 tom dr.               wensville    MO 54687
102        Jansen                    764 boom rd.              johnvillve   MN 73645
------------------------------------------------------------------------------------------------------------------------------------------
*************************************************
1. View all customer information
2. Insert a customer
3. Delete a customer's information
4. Quit
Enter a choice: 4
There is 5 customers

Thank you for using the customer system!*/