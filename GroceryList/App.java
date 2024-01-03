//*******************************************************************************************************
//
//          File:                       GroceryList.java
//
//          Student:                    Noah Thomas
//
//          Assignment:                 Assignment #10
//
//          Course Name:                JAVA I
//
//          Course Number:              COSC 2050 - 01
//
//          Due:                        April 23, 2022
//
//
//          This program makes a grocery list entered by the user. 
//
//          Other files required:           
//          -N/A
//
//*******************************************************************************************************

package com.mycompany.groceries;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;
import javafx.scene.control.SelectionMode;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

//*******************************************************************************************************

public class App extends Application 
{      
    @Override
    public void start(Stage stage) 
    {
        Button addButton = new Button ("Add");
        Button clearButton = new Button ("Clear");
        Button removeButton = new Button ("Remove");
        
        Label itemLabel = new Label("Item:");
        Label listLabel = new Label("List:");
        Label error = new Label("Enter Grocery List");
        
        ListView<String> listView = new ListView<>();
        listView.setPrefSize(165, 170);
        listView.getSelectionModel().setSelectionMode(SelectionMode.MULTIPLE);
        
        TextField textField = new TextField();
        
        addButton.setOnAction(event -> 
        {
            String input = textField.getText();
            if(input.equals("") | input.equals(" "))
            {
                error.setText("Item not entered.");
            }
            else
            {
                listView.getItems().addAll(input); 
                error.setText("Success!");
            }
        }
        );
        
        clearButton.setOnAction(event ->
        {
            listView.getItems().clear();
        }
        );
        
        removeButton.setOnAction(event ->
        {
            if(listView.getSelectionModel().getSelectedIndex() != -1)
            {
                String selectItem = listView.getSelectionModel().getSelectedItem();
                listView.getItems().removeAll(selectItem);
                error.setText("Success!");
            }
            else
            {
                error.setText("Item not selected.");
            }
        }
        );
        
        HBox hboxTop = new HBox(20, itemLabel, textField, addButton);
        HBox hboxMiddle = new HBox(20, listLabel, listView);
        HBox hboxMiddle2 = new HBox(20, error);
        HBox hboxBottom = new HBox(20, clearButton, removeButton);
        VBox vbox = new VBox(20, hboxTop, hboxMiddle, hboxMiddle2, hboxBottom);
        hboxMiddle2.setAlignment(Pos.CENTER_LEFT);
        hboxBottom.setAlignment(Pos.BASELINE_RIGHT);
        vbox.setPadding(new Insets(10));       
        vbox.setAlignment(Pos.CENTER);       
        
        Scene scene = new Scene(vbox);
        stage.setTitle("Groceries");
        stage.setScene(scene);
        stage.show();
    }
    
//*******************************************************************************************************

    public static void main(String[] args) 
    {
        launch();
    }

}