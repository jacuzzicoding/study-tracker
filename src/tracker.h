#include <string>
#include <vector>

// Example struct for a Subject object just to get us started
struct Subject {
    std::string name;
    int hoursStudied;
//  int grade; //i don't know if we are going to use this yet, but i'm putting it here just in case
};

//function prototypes
void loadSubjects(/*filler declaration*/); 
void saveSubjects(/*filler declaration*/);
void addSubject(/*filler declaration*/);