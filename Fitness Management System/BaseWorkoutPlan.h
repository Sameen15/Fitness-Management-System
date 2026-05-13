#ifndef BASE_H
#define BASE_H
#include "Exercise.h"

class BaseWorkoutPlan {
protected:
    int planId;
    Exercise* ex;

public:
    virtual void showPlan();
    virtual ~BaseWorkoutPlan() {}
};
#endif
#pragma once
