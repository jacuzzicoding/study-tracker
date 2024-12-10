//
// Tracker.java (to replace tracker.cpp)
//
import java.util.ArrayList; //using an ArrayList to store the subjects since it is dynamic like the C++ vector

public class Tracker {
    //function to load the subjects from the csv file
    public void loadSubjects(ArrayList<Subject> subjects){
        System.out.println("Loading subjects..."); //load message
        //using a try catch block to catch any exceptions
        try { 
            File file = new File("subjects.txt"); //open the file
            
            // Check if file exists, if not create it
            if (!file.exists()) {
                System.out.println("Error: No Such File Exists. Creating New File");
                file.createNewFile();
                return; //return nothing if the file does not exist
            } else { //if the file exists...
                System.out.println("File found. Reading..."); //print that the file was found
                // Read the file
                Scanner scanner = new Scanner(file); //new scanner object to read the file line by line
                while (scanner.hasNext()) { //while there is another line to read...
                    String subjectName = scanner.next(); //read the subject name
                    int hours = scanner.nextInt(); //read the hours
                    subjects.add(new Subject(subjectName, hours)); //add the subject to the ArrayList, creating a new Subject object with the name and hours
                }
                scanner.close(); //once the file is read, close the scanner
            }
        } catch (Exception e) {  //catch any exceptions
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
    public void welcomeMessage(String name) {
        System.out.println("Hello " + name + "! Welcome to Sebastian and Brock's study tracker!");
    }
}