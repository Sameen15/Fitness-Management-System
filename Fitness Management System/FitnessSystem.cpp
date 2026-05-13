#include "FitnessSystem.h"
#include "BulkWorkout.h"
// Generate workout plan using base class pointer
BaseWorkoutPlan* FitnessSystem::generateWorkoutPlan(User& u) {
    // Dynamic memory allocation (Pointer)
    BaseWorkoutPlan* p = new BulkWorkout();
    // Runtime polymorphism
    p->showPlan();
    return p;
}

float FitnessSystem::calculateBMI(User& u) { return u.getBMI(); }

void FitnessSystem::trackProgress(User& u) {
    ProgressTracker p;
    p.addRecord();
    p.show();
}

void FitnessSystem::assignDietPlan(User& u) {
    DietPlan d;
    d.generate();
    d.save();
    d.show();
}

void FitnessSystem::manageSubscription(Subscription& s) {
    s.activate();
    s.load();
}
