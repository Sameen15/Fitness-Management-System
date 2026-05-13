#ifndef EXERCISE_H
#define EXERCISE_H
#include<iostream>
#include<string>
using namespace std;

class Exercise {
private:
    int exId;
    string name;
    int sets;
    int reps;

public:
    Exercise();
    void perform();
    void save();
};
#endif
#pragma once
