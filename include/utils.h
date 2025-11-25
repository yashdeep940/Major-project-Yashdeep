#ifndef UTILS_H
#define UTILS_H

#define MAX 100

typedef struct {
    char date[20];
    char type[20];
    int duration;
    int steps;
    float distance;
    float calories;
} Activity;

extern Activity logData[MAX];
extern int count;

float calculateCalories(int steps, int duration);
void addActivity();
void viewActivities();
void updateActivity();
void deleteActivity();

#endif
