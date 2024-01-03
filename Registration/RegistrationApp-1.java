//*******************************************************************************************************
//
//          File:                       RegistrationApp.java
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
//          This program runs the app created by the app created in scene builder.      
//
//          Other files required:           
//          -RegistrationController.java
//          -Primary.fxml
//          -Validator.java
//
//*******************************************************************************************************

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.io.IOException;

//*******************************************************************************************************

public class RegistrationApp extends Application 
{

    private static Scene scene;

//*******************************************************************************************************    
    
    @Override
    public void start(Stage stage) throws IOException 
    {
        scene = new Scene(loadFXML("primary"), 640, 480);
        stage.setScene(scene);
        stage.show();
    }
    
//*******************************************************************************************************

    static void setRoot(String fxml) throws IOException 
    {
        scene.setRoot(loadFXML(fxml));
    }
    
//*******************************************************************************************************

    private static Parent loadFXML(String fxml) throws IOException 
    {
        FXMLLoader fxmlLoader = new FXMLLoader(App.class.getResource(fxml + ".fxml"));
        return fxmlLoader.load();
    }
    
//*******************************************************************************************************    

    public static void main(String[] args) 
    {
        launch();
    }

}