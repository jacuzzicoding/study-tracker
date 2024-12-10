//
// Main.java (to replace main.cpp)
//

public class Main {
    public static void main(String[] args) {
        // Main program logic (STILL IN C++ NEEDS UPDATED)
     String name = ""; //initialize the name variable, empty for now
     Tracker tracker = new Tracker();  // Create instance of Tracker class
        
     // Create ArrayList to store subjects
     ArrayList<Subject> subjects = new ArrayList<>();
     
    // Welcome message - I'll need to add this method to Tracker.java
    tracker.welcomeMessage(name); //print the welcome message
    tracker.loadSubjects(subjects); //this will load the subjects from the file, using the function from Tracker.java

    // For now, let's just print what we've loaded
    // We'll add the other methods later
    for (Subject subject : subjects) {
        System.out.println(subject.getName());  // Assuming we have a getter
        for (String task : subject.getTasks()) {  // Assuming we have a getter
            System.out.print(task + " ");
        }
        System.out.println();
        
        }
    }
}