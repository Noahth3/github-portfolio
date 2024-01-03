//*******************************************************************************************************
//
//          File:                       PigLatin.java
//
//          Student:                    Noah Thomas
//
//          Assignment:                 Assignment #5
//
//          Course Name:                JAVA I
//
//          Course Number:              COSC 2050 - 01
//
//          Due:                        March 9, 2022
//
//
//          Reads a sentence from input and converts the sentence into pig latin.
//
//          Other files required:
//          -N/A
//                 
//*******************************************************************************************************

import java.util.ArrayList;
import javax.swing.JOptionPane;

//*******************************************************************************************************

public class PigLatinS 
{

    public static void main(String[] args) 
    {
        String input = "",
                sentencepart; 
        boolean check = false;
        while (check == false)
        {
            input = JOptionPane.showInputDialog("Enter a sentence: ");
            check = verifier(input);
        }
        if(check == true)
        {
            ArrayList<String> str = new ArrayList<String>();
       
            String [] tokens = input.split(" ");
            for(String s : tokens)
            {
                str.add(s.trim());
            }
       
            StringBuilder sentence = new StringBuilder();
            for (int i = 0; i < str.size(); i++)
            {
                sentencepart = lowerCase(str.get(i));
                sentencepart = replace(sentencepart);
                sentencepart = convert(sentencepart);
                sentencepart = delete(sentencepart);
                sentencepart = append(sentencepart);
                sentencepart = upperCase(sentencepart);
                sentence.append(sentencepart);
            }
            JOptionPane.showMessageDialog(null, sentence);
            System.exit(0);
        }
    }
    
//*******************************************************************************************************
    
    private static boolean verifier(String input) 
    {
        boolean check = false;
        char [] letter = input.toCharArray();
           
        if(input.equals(""))
        {
            JOptionPane.showMessageDialog(null, "Must enter a sentence");
            check = false;
        }
        else
        {
            check = true;
            for(int i = 0; check && i < letter.length; i++)
            {
                if(!Character.isLetter(letter[i]) && !Character.isWhitespace(letter[i]))
                {
                    JOptionPane.showMessageDialog(null, "Sentence can only contain letters and spaces");
                    check = false;
                } 
            }
        }
        return check;  
    }
    
//*******************************************************************************************************
    
    private static String replace(String input)
    {
        String input2 = input.replace('e','x');
 
        return input2;
    }
    
//*******************************************************************************************************
    
    private static String lowerCase(String input)
    {
        String input2 = input.toLowerCase();
        
        return input2;
    }
    
//*******************************************************************************************************
    
    private static String append(String input)
    {
        StringBuilder object = new StringBuilder(input);
        object.append("ay ");
        String input2 = object.toString();
        
        return input2;
    }
    
//*******************************************************************************************************
    
    private static String convert(String input)
    {
        StringBuilder object = new StringBuilder(input);
        object.append(input.charAt(0));
        String input2 = object.toString();
        
        return input2;
    }
    
//*******************************************************************************************************    
    
    private static String delete(String input)
    {
        StringBuilder object = new StringBuilder(input);
        object.deleteCharAt(0);
        String input2 = object.toString();
        
        return input2;
    }
    
//*******************************************************************************************************
    
    private static String upperCase(String input)
    {
        StringBuilder object = new StringBuilder(input);
        object.setCharAt(0, Character.toUpperCase(object.charAt(0)));
        String input2 = object.toString();
        return input2;
    }
}
