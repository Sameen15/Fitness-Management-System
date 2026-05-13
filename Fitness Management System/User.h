#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>
using namespace std;

class User {

private:
    int userId;
    string name;
    string username;
    string password;
    int age;
    int feet;
    int inches;
    float height;
    float weight;

public:

    bool createAccount();
    bool login();
    void updateProfile();
    float getBMI();

    void saveHistory(string h);
    void viewHistory();

    int getId();
    float getWeight();
    float getHeight();
};

#endif