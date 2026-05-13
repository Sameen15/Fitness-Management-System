#ifndef FITNESS_H
#define FITNESS_H

#include "User.h"
#include "Subscription.h"
#include "ProgressTracker.h"
#include "DietPlan.h"
#include "BaseWorkoutPlan.h"

class FitnessSystem {
public:
    BaseWorkoutPlan* generateWorkoutPlan(User&);
    float calculateBMI(User&);
    void trackProgress(User&);
    void assignDietPlan(User&);
    void manageSubscription(Subscription&);
};

#endif
#pragma once
