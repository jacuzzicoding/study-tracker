//subject.java
//this will replace our Subject class from the C++ version
//


// Example struct for a Subject object just to get us started (C++ CODE MUST BE CHANGED)
public class Subject { //public class Subject because it will be used in other classes
    private String name;
    private ArrayList<String> tasks;
    private int hoursStudied;
    // int grade; // Uncomment if needed later

    // Constructor to initialize name, task and hoursStudied
 public Subject(String name, int hoursStudied) {
    this.name = name;
    this.tasks = new ArrayList<>();
    this.hoursStudied = hoursStudied;
}

// Getters and setters will go here
}