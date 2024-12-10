#include "tracker.h"
#include <iostream>
#include <fstream>
#include <algorithm>

//here we will put the actual function definitions for main.cpp to use (protypes in tracker.h)

/*this will load the array of subjects from our subjects.txt file*/
void saveSubjects() {
    std::cout << "Saving subjects..." << std::endl;
}

void addSubject(std::vector<Subject>& subjects) {
    std::string newName;
    bool subjectExists;

    do {
        std::cout << "Enter the name of the subject (No special characters): ";
        std::getline(std::cin, newName);

        // Check if the name already exists in the subjects vector
        subjectExists = std::any_of(subjects.begin(), subjects.end(),
            [&newName](const Subject& s) { return s.name == newName; });

        if (subjectExists) {
            std::cout << "Subject name already exists. Please choose a different name.\n";
        }
    } while (!inputCheck(newName) || subjectExists);  // Make sure input is valid and the name doesn't already exist

    // Create a new Subject and add it to the vector
    Subject newSubject(newName);
    subjects.push_back(newSubject);

    std::cout << "Subject '" << newName << "' added successfully.\n";
}

void addTask(std::vector<Subject>& subjects) {
    std::string subjectName;
    bool subjectFound = false;
    Subject* selectedSubject = nullptr;

    // Loop until a valid subject is found
    do {
        std::cout << "Enter the name of the subject you would like to add a task to: ";
        std::getline(std::cin, subjectName);

        // Use std::find_if to find the subject by name
        auto it = std::find_if(subjects.begin(), subjects.end(),
            [&subjectName](const Subject& s) { return s.name == subjectName; });

        if (it != subjects.end()) {
            selectedSubject = &(*it); // Point to the found Subject
            subjectFound = true;
        }
        else {
            std::cout << "Subject not found. Please enter a valid subject name.\n";
        }

    } while (!subjectFound);

    // Ask for task name and check for forbidden characters
    std::string task;
    do {
        std::cout << "Enter the name of the task (No special characters): ";
        std::getline(std::cin, task);
    } while (!inputCheck(task));

    // Add the task to the found subject
    selectedSubject->tasks.push_back(task);

    std::cout << "Task '" << task << "' added to subject '" << selectedSubject->name << "'.\n";
}

void welcomeMessage(std::string name) {
 std::cout << "Hello " << name << "!Welcome to Sebastian and Brock's study tracker!" << std::endl; 
}

bool inputCheck(std::string& str) {
    for (char c : str) {
        if (!isalnum(c) && c != ' ') {  // Allow only alphanumeric characters and spaces
            return false;
        }
    }
    return true;
}