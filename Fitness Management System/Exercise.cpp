#include "Exercise.h"
#include<fstream>

Exercise::Exercise() {
    exId = 0;
    name = "PushUp";
    sets = 3;
    reps = 10;
}

void Exercise::perform() {
    cout << "Doing: " << name << endl;
}

void Exercise::save() {
    ofstream f("exercise.txt", ios::app);
    f << exId << " " << name << " " << sets << " " << reps << endl;
}
