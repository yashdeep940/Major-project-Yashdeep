#ifndef FITNESS_H
#define FITNESS_H

#include <stdio.h>
#include <string.h>

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

#endif
