#include <string>
#include <vector>

// Example struct for a Subject object just to get us started
struct Subject {
    std::string name;
    std::vector<std::string> tasks;
    int hoursStudied;
    // int grade; // Uncomment if needed later

    // Constructor to initialize name and hoursStudied
    Subject(const std::string& name = "", int hoursStudied = 0)
        : name(name), hoursStudied(hoursStudied) {}
};

//function prototypes
void loadSubjects(std::vector<Subject>& subjects); //this will load the array of subjects from our subjects.txt file
void saveSubjects(/*filler declaration*/); //this will save the array of subjects to our subjects.txt file
void addSubject(std::vector<Subject>& subjects); //this will add a subject to the array of subjects
void addTask(std::vector<Subject>& subjects); //this will add a task to a single subject
void welcomeMessage(std::string name); //this will print the welcome message
bool inputCheck(std::string& str); //this will check to see that there are no special characters in an input
