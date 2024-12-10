//subject.java
//this will replace our Subject class from the C++ version
//


// Example struct for a Subject object just to get us started (C++ CODE MUST BE CHANGED)
struct Subject {
    std::string name;
    std::vector<std::string> tasks;
    int hoursStudied;
    // int grade; // Uncomment if needed later

    // Constructor to initialize name and hoursStudied
    Subject(const std::string& name = "", int hoursStudied = 0)
        : name(name), hoursStudied(hoursStudied) {}
};