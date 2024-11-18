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

/*Function Prototypes*/
void loadSubjects(vector<Subject>& subjects); //this will load the array of subjects from our subjects.txt file
void saveSubjects(/*filler declaration*/); //this will save the array of subjects to our subjects.txt file
void addSubject(vector<Subject>& subjects); //this will add a subject to the array of subjects
void addTask(Subject& name); //take the subject, add the task to it and return 
void welcomeMessage(string name); //this will print the welcome message
void displayView(string name); //print name (string), tasks (vector), time (int), call convertTime()
void convertTime(); //turn seconds to minutes for the display view 

/*CSV Parsing Prototypes*/
vector<string> parseTaskArray(const string& taskString); //parse the string of tasks into a vector of strings
string formatTaskArray(const vector<string>& tasks); //format the vector of tasks into a string so it can be written to the csv
Subject parseRow(const string& csvLine); //parse a row of the csv into a Subject object using the struct
string formatRow(const Subject& subject); //formats a Subject object into a string
void readCSV(vector<Subject>& subjects); //reads the csv file and fills the vector of subjects
void writeCSV(const vector<Subject>& subjects); //writes to the csv file with the vector of subjects

/*
Example CSV file (putting this here so we can finish the actual functions to use this format)
subject_name,time_in_seconds,[task1,task2,task3]
Math,3600,[Review calculus,Practice integrals]
Physics,7200,[Read chapter 1,Lab prep]
*/