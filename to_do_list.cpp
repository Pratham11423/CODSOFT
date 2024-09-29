#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the tasks
void displayTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "Your to-do list is empty!" << endl;
    } else {
        cout << "Your to-do list:" << endl;
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

// Function to add a task to the list
void addTask(vector<string>& tasks) {
    string task;
    cout << "Enter the task to add: ";
    cin.ignore();  // Clear input buffer
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully!" << endl;
}

// Function to delete a task from the list
void deleteTask(vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to delete!" << endl;
        return;
    }
    
    int taskNumber;
    cout << "Enter the task number to delete: ";
    cin >> taskNumber;
    
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task deleted successfully!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

// Function to process commands
void processCommand(const string& command, vector<string>& tasks) {
    if (command == "view") {
        displayTasks(tasks);
    } else if (command == "add") {
        addTask(tasks);
    } else if (command == "delete") {
        deleteTask(tasks);
    } else if (command == "exit") {
        cout << "Exiting the program. Goodbye!" << endl;
        exit(0);
    } else {
        cout << "Invalid command!" << endl;
    }
}

int main() {
    vector<string> tasks;
    string command;
    
    cout << "Welcome to the To-Do List Manager!\n";
    cout << "Commands: 'add', 'view', 'delete', 'exit'\n";

    while (true) {
        cout << "\nEnter a command: ";
        cin >> command;
        processCommand(command, tasks);
    }
    
    return 0;
}
