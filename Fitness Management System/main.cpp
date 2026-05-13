#include<iostream>
#include<cstdlib>

#include "User.h"
#include "Subscription.h"
#include "FitnessSystem.h"

using namespace std;

int main() {

    User u;
    Subscription s;
    FitnessSystem fs;

    int choice;

    do {

        // Clear screen
        system("cls");

        cout << "========== FITNESS MANAGEMENT SYSTEM ==========" << endl;

        cout << "1. Create Account" << endl;
        cout << "2. Login" << endl;
        cout << "3. Update Profile" << endl;
        cout << "4. Calculate BMI" << endl;
        cout << "5. Generate Workout Plan" << endl;
        cout << "6. Generate Diet Plan" << endl;
        cout << "7. Track Progress" << endl;
        cout << "8. Manage Subscription" << endl;
        cout << "9. View History" << endl;
        cout << "10. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:

            u.createAccount();
            break;

        case 2:

            u.login();
            break;

        case 3:

            u.updateProfile();
            break;

        case 4:

            u.getBMI();
            break;

        case 5:

            fs.generateWorkoutPlan(u);
            break;

        case 6:

            fs.assignDietPlan(u);
            break;

        case 7:

            fs.trackProgress(u);
            break;
        case 8:

            s.setUserId(u.getId());

            fs.manageSubscription(s);

            break;
       

        case 9:

            u.viewHistory();
            break;

        case 10:

            cout << "\nExiting Fitness Management System..." << endl;
            break;

        default:

            cout << "\nInvalid Choice" << endl;
        }

        // Pause screen before returning to menu
        if (choice != 10) {

            cout << "\n";
            system("pause");
        }

    } while (choice != 10);

    return 0;
}