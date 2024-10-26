//this will be our main file, using the functions we will set up in the other files

#include <iostream>
#include "tracker.h"

int main() {
    //putting this here for now, but i'll move it to a different file later once we actually get our functions set up
    std::cout << "Hello! Welcome to Sebastian and Brock's study tracker!" << std::endl; 
    return 0;

    loadSubjects(); //this will load the subjects from the file, using the function from tracker.cpp
}