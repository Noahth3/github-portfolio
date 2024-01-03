//*******************************************************************************************************
//
//          File:                       Validator.java
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
//          This program verifys user's input.
//
//          Other files required:
//          -CustomerApplication.java    
//          -CustomerDBMS.java
//
//*******************************************************************************************************

import java.util.Scanner;

//*******************************************************************************************************

public class Validator 
{
    private static Scanner keyboard = new Scanner(System.in);

//*******************************************************************************************************
    
    public static int getInt(String prompt)
    {
       String input;
       int num = 0;
       boolean check = false;
       
       while(check == false)
       {
            try
            {
                System.out.print(prompt);
                input = keyboard.nextLine();
                num = Integer.parseInt(input);
                check = true;
            }
            catch (NumberFormatException err)
            {
                System.out.println("Error! Invalid integer value. Try again");
            }
       }
       return num;
    }
    
//*******************************************************************************************************
    
    public static int getInttWithinRange(String prompt, int min, int max)
    {
        int num = 0;
        boolean check = false;
        
        while(check == false)
        {
            num = getInt(prompt);
            if( num < min || num > max)
            {
               System.out.println("Values should more than " + max + "and less than " + min); 
            }
            else
            {
                check = true;
            }
        }
        return num;
    }
    
//*******************************************************************************************************
        
    public static String getRequiredString(String prompt)
    {
        String input = null;
        boolean check = false;
        while(check == false)
        {
            System.out.print(prompt); 
            input = keyboard.nextLine();
            if(input.equals("") || input == null)
            {
                System.out.println("Invailid input, try again.");
            } 
            else
            {
                check = true;
            }
        }
        return input;
    }
    
//*******************************************************************************************************
    
    public static String getChoiceString(Scanner sc, String prompt, String s1, String s2) 
    {
        String input = null;
        boolean check = false;
 
        while(check == false)
        {
            input = getRequiredString(prompt);
            if (input.equalsIgnoreCase(s1) || input.equalsIgnoreCase(s2)) 
            { 
                check = true;
            }
            else
            {
                System.out.println("Error! Entry must be 'y' or 'n'. Try again."); 
            }
        }
        return input;
    }
}


