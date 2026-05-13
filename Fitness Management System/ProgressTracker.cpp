#include "ProgressTracker.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Function to add progress record
void ProgressTracker::addRecord() {

    // Opening file in append mode
    ofstream f("progress.txt", ios::app);

    int id;
    float weight;

    cout << "\n===== TRACK PROGRESS =====" << endl;

    cout << "Enter User ID: ";
    cin >> id;

    cout << "Enter Current Weight: ";
    cin >> weight;

    // Saving progress data
    f << id << " " << weight << endl;

    cout << "\nProgress Saved Successfully" << endl;

    // Closing file
    f.close();
}

// Function to display progress history
void ProgressTracker::show() {

    // Opening progress file
    ifstream f("progress.txt");

    string line;

    cout << "\n===== PROGRESS HISTORY =====" << endl;

    // Reading complete file
    while (getline(f, line)) {

        cout << line << endl;
    }

    // Closing file
    f.close();
}