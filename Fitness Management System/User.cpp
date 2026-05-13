#include "User.h"
#include<iostream>
#include<fstream>

// Function to create new user account
bool User::createAccount() {

    // Opening file in append mode
    ofstream f("users.txt", ios::app);

    // Taking input from user
    cout << "Enter ID: ";
    cin >> userId;

    cin.ignore();

    cout << "Enter Full Name: ";
    getline(cin, name);

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Height (Feet): ";
    cin >> feet;

    cout << "Enter Height (Inches): ";
    cin >> inches;

    // Convert into meters
    height = ((feet * 12) + inches) * 0.0254;

    cout << "Enter Weight in KG: ";
    cin >> weight;

    // Saving user data in file
    f << userId << " " << name << " "
        << username << " " << password << " "
        << age << " " << height << " " << weight << endl;

    // Closing file
    f.close();

    // Saving history
    saveHistory("AccountCreated");

    cout << "Account Created Successfully" << endl;

    return true;
}

// Function for user login
bool User::login() {

    ifstream f("users.txt");

    string u, p;
    string fileName, fileUsername, filePassword;
    int fileId, fileAge;
    float fileHeight, fileWeight;

    cout << "Enter Username: ";
    cin >> u;

    cout << "Enter Password: ";
    cin >> p;

    // Reading complete file
    while (f >> fileId) {

        f.ignore();

        getline(f, fileName, ' ');

        f >> fileUsername    >> filePassword
            >> fileAge>> fileHeight
            >> fileWeight;

        // Checking login
        if (u == fileUsername && p == filePassword) {

            cout << "Login Successful" << endl;

            saveHistory("Login");

            f.close();

            return true;
        }
    }

    cout << "Invalid Username or Password" << endl;

    f.close();

    return false;
}
// Function to update user profile
void User::updateProfile() {

    cout << "Enter New Weight: ";
    cin >> weight;

    // Saving update history
    saveHistory("ProfileUpdated");
}

// Function to calculate BMI
float User::getBMI() {

    float bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5)
        cout << "Underweight" << endl;

    else if (bmi < 25)
        cout << "Normal Weight" << endl;

    else
        cout << "Overweight" << endl;

    return bmi;
}

// Function to save history in file
void User::saveHistory(string h) {

    // Opening history file
    ofstream f("history.txt", ios::app);

    // Saving activity
    f << userId << " " << h << endl;

    f.close();
}

// Function to display history
void User::viewHistory() {

    // Opening history file
    ifstream f("history.txt");

    string l;

    // Reading complete file
    while (getline(f, l))
        cout << l << endl;

    f.close();
}

// Getter functions
int User::getId() {
    return userId; }
float User::getWeight() {
    return weight; }
float User::getHeight() {
    return height; }
