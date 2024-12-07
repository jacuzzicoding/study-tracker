package com.studytracker.model;

import java.util.ArrayList;
import java.util.List;

public class Subject {
    private String name;
    private long timeInSeconds;
    private List<String> tasks;

    public Subject(String name) {
        this.name = name;
        this.timeInSeconds = 0;
        this.tasks = new ArrayList<>();
    }

    // Getters and setters
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public long getTimeInSeconds() { return timeInSeconds; }
    public void setTimeInSeconds(long timeInSeconds) { this.timeInSeconds = timeInSeconds; }
    public List<String> getTasks() { return tasks; }
    public void setTasks(List<String> tasks) { this.tasks = tasks; }
    public void addTask(String task) { this.tasks.add(task); }
}