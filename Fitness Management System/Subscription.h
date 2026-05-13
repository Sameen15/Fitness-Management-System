#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include<iostream>
#include<string>

using namespace std;

class Subscription {

private:

    int subId;
    int userId;
    string type;
    string status;

public:

    Subscription();

    bool activate();
    bool checkStatus();
    void renew();
    void save();
    void load();

    void setUserId(int);
};

#endif