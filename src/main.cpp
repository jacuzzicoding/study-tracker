//this will be our main file, using the functions we will set up in the other files

#include <iostream>
#include "tracker.h"

int main() {
    welcomeMessage(); //this will print the welcome message

    loadSubjects(); //this will load the subjects from the file, using the function from tracker.cpp
}