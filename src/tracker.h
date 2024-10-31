#include <string>
#include <vector>

// Example struct for a Subject object just to get us started
struct Subject {
    std::string name;
    int hoursStudied;
//  int grade; //i don't know if we are going to use this yet, but i'm putting it here just in case
};

//function prototypes
void loadSubjects(std::vector<Subject>& subjects); //this will load the array of subjects from our subjects.txt file
void saveSubjects(/*filler declaration*/); //this will save the array of subjects to our subjects.txt file
void addSubject(/*filler declaration*/); //this will add a subject to the array of subjects
void welcomeMessage(std::string name); //this will print the welcome message