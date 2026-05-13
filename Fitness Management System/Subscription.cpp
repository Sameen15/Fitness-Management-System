#include "Subscription.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Constructor
Subscription::Subscription() {

    subId = 1;
    userId = 0;
    type = "";
    status = "Inactive";
}

// Function to set user ID
void Subscription::setUserId(int id) {

    userId = id;
}

// Function to activate subscription
bool Subscription::activate() {

    int choice;

    cout << "\n===== SUBSCRIPTION MENU =====" << endl;

    cout << "1. Basic" << endl;
    cout << "2. Premium" << endl;
    cout << "3. Gold" << endl;

    cout << "\nChoose Subscription: ";
    cin >> choice;

    // Basic Plan
    if (choice == 1) {

        type = "Basic";

        cout << "\nBasic Plan Features:" << endl;
        cout << "- Access to basic workouts" << endl;
        cout << "- BMI calculation" << endl;
        cout << "- Progress tracking" << endl;
    }

    // Premium Plan
    else if (choice == 2) {

        type = "Premium";

        cout << "\nPremium Plan Features:" << endl;
        cout << "- Advanced workout plans" << endl;
        cout << "- Personalized diet plan" << endl;
        cout << "- Progress tracking" << endl;
        cout << "- Subscription support" << endl;
    }

    // Gold Plan
    else if (choice == 3) {

        type = "Gold";

        cout << "\nGold Plan Features:" << endl;
        cout << "- All Premium features" << endl;
        cout << "- Personal trainer guidance" << endl;
        cout << "- Full diet management" << endl;
        cout << "- Exclusive fitness plans" << endl;
    }

    else {

        cout << "\nInvalid Choice" << endl;

        return false;
    }

    // Activating subscription
    status = "Active";

    cout << "\nSubscription Activated Successfully" << endl;

    // Saving subscription
    save();

    return true;
}

// Function to check subscription status
bool Subscription::checkStatus() {

    if (status == "Active") {

        cout << "\nSubscription Status: Active" << endl;

        return true;
    }

    cout << "\nSubscription Status: Inactive" << endl;

    return false;
}

// Function to renew subscription
void Subscription::renew() {

    status = "Active";

    cout << "\nSubscription Renewed Successfully" << endl;

    save();
}

// Function to save subscription data
void Subscription::save() {

    // Opening file
    ofstream f("subscriptions.txt", ios::app);

    // Saving subscription data
    f << subId << " "
        << userId << " "
        << type << " "
        << status << endl;

    // Closing file
    f.close();
}

// Function to display subscriptions
void Subscription::load() {

    // Opening file
    ifstream f("subscriptions.txt");

    string line;

    cout << "\n===== SUBSCRIPTIONS =====" << endl;

    // Reading complete file
    while (getline(f, line)) {

        cout << line << endl;
    }

    // Closing file
    f.close();
}