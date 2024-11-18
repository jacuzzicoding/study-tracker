#include <string>
#include <vector>

using namespace std; //decided this would be easier than typing std:: before everything, and we aren't using any other namespaces
// Example struct for a Subject object just to get us started
struct Subject {
    string name;
    int64_t timeInSeconds; //storing time as seconds, will convert to minutes for display. Using int64_t to avoid issues with larger numbers.
    vector<string> tasks; //we will use a vector to hold the tasks
    //int grade; //i don't know if we are going to use this yet, but i'm putting it here just in case
};

//function prototypes
void loadSubjects(vector<Subject>& subjects); //this will load the array of subjects from our subjects.txt file
void saveSubjects(/*filler declaration*/); //this will save the array of subjects to our subjects.txt file
void addSubject(vector<Subject>& subjects); //this will add a subject to the array of subjects
void addTask(Subject& name) //take the subject, add the task to it and return 
void welcomeMessage(string name); //this will print the welcome message
void displayView(string name); //print name (string), tasks (vector), time (int), call convertTime()
void convertTime(); //turn seconds to minutes for the display view 
