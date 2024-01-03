//*******************************************************************************************************
//
//          File:                       RegistrationController.java
//
//          Student:                    Noah Thomas
//
//          Assignment:                 Assignment #9
//
//          Course Name:                JAVA I
//
//          Course Number:              COSC 2050 - 01
//
//          Due:                        April 19, 2022
//
//
//          This program gives a user a temporary password by the information that user types in. 
//
//          Other files required:           
//          -RegistrationApp.java
//          -Primary.fxml
//          -Validator.java
//
//*******************************************************************************************************

import java.io.IOException;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

//*******************************************************************************************************

public class RegistrationController 
{

    @FXML
    private TextField firstNameTextField;
    @FXML
    private TextField yearOfBirthTextField;
    @FXML
    private TextField lastNameTextField;
    @FXML
    private Button registerButton;
    @FXML
    private TextField outputTextField;
    @FXML
    private Label resultMessage;
    
//*******************************************************************************************************

    @FXML
    private void clickedRegisterButton(ActionEvent event) 
    {
        String err_msg = new String();
        String FirstName = firstNameTextField.getText();
        String LastName = lastNameTextField.getText();
        String YearOfBirth = yearOfBirthTextField.getText();
        Validator v = new Validator();
        err_msg += v.getRequiredString(FirstName, "First name ");
        err_msg += v.getRequiredString(LastName, "Last name ");
        err_msg += v.getRequiredString(YearOfBirth, "Year of birth ");
        
        if (err_msg.isEmpty())
        {
            outputTextField.setText(FirstName+"*"+YearOfBirth);
            resultMessage.setText("Welcome " + FirstName + " " + LastName + "!");
        }
        else
        {
            resultMessage.setText("");
            resultMessage.setText("An error has occurred, please fill in all the information.");
        }
        
    }
    
//*******************************************************************************************************

    @FXML
    private void clickedExitButton(ActionEvent event) 
    {
        System.exit(0);
    }
    
    
}
