#include "tracker.h"
#include <iostream>
#include <fstream> 

//here we will put the actual function definitions for main.cpp to use (protypes in tracker.h)

/*this will load the array of subjects from our subjects.txt file*/
void loadSubjects(std:vector<Subject> &subjects) { //make a dynamic array to hold subjects using a container
    std::cout << "Loading subjects..." << std::endl; //loading message to show that the program is working
    std::ifstream inFile("subjects.txt");  // open file for reading
    //check if the file exists
    if (!inFile) { //if the file does not exist
        std::cout << "Error: No Such File Exists. Creating New File" << std::endl; //print the error message
        std::ofstream outFile("subjects.txt"); //use ofstream to make a new blank text file
        return; //return nothing if the file does not exist
    }
    //read the file if it exists
    else {
        std::cout << "File found. Reading..." << std::endl; //print that the file was found
    }
    std::string subjectName; 
    int hours;
    while (inFile >> subjectName >> hours) { //while the file is being read
        subjects.push_back({subjectName, hours});  // add each subject to the vector in the struct
    }

    inFile.close(); //close the file
}

void saveSubjects() {
    std::cout << "Saving subjects..." << std::endl;
}

void addSubject() {
    std::cout << "Adding a subject..." << std::endl;
}
void welcomeMessage() {
 std::cout << "Hello! Welcome to Sebastian and Brock's study tracker!" << std::endl; 
}  