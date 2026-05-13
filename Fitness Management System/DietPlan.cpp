#include "DietPlan.h"
#include<iostream>
#include<fstream>

// Function to generate diet plan
void DietPlan::generate() {

    cout << "===== DIET PLAN =====" << endl;

    cout << "Breakfast: Eggs + Oats + Milk" << endl;
    cout << "Lunch: Chicken + Rice + Salad" << endl;
    cout << "Evening Snack: Banana + Dry Fruits" << endl;
    cout << "Dinner: Fish + Vegetables" << endl;
}

// Function to save diet plan in file
void DietPlan::save() {

    // Opening file in append mode
    ofstream f("diet.txt", ios::app);

    // Saving diet plan data
    f << "Breakfast: Eggs + Oats + Milk" << endl;
    f << "Lunch: Chicken + Rice + Salad" << endl;
    f << "Evening Snack: Banana + Dry Fruits" << endl;
    f << "Dinner: Fish + Vegetables" << endl;
    f << "=========================" << endl;

    // Closing file
    f.close();
}

// Function to display saved diet
void DietPlan::show() {

    ifstream f("diet.txt");

    string line;

    cout << "===== SAVED DIET PLAN =====" << endl;

    while (getline(f, line)) {
        cout << line << endl;
    }

    f.close();
}
