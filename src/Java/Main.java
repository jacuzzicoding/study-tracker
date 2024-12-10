//
// Main.java (to replace main.cpp)
//

public class Main {
    public static void main(String[] args) {
        // Main program logic (STILL IN C++ NEEDS UPDATED)
        std::string name;
    welcomeMessage(name); //this will print the welcome message
    std::vector<Subject> subjects; //make a dynamic array to hold subjects using a container

    loadSubjects(subjects); //this will load the subjects from the file, using the function from tracker.cpp

    addSubject(subjects);
    addSubject(subjects);
    addSubject(subjects);

    addTask(subjects);
    addTask(subjects);
    addTask(subjects);
    addTask(subjects);
    addTask(subjects);

    for (Subject subject : subjects) {
        std::cout << subject.name << std::endl;
        for (std::string task : subject.tasks) {
            std::cout << task << " ";
        }
        std::cout << std::endl;
    }
}
    }
}
