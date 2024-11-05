//this will be our main file, using the functions we will set up in the other files

#include <iostream>
#include "tracker.h"
#include <vector>

int main() {
    std::string name;
    welcomeMessage(name); //this will print the welcome message
    std::vector<Subject> subjects; //make a dynamic array to hold subjects using a container

    loadSubjects(subjects); //this will load the subjects from the file, using the function from tracker.cpp

    addSubject(subjects);
}