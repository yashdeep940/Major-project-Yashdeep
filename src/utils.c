#include <stdio.h>
#include <string.h>
#include "utils.h"

Activity logData[MAX];
int count = 0;

float calculateCalories(int steps, int duration) {
    return (steps * 0.04f) + (duration * 5.0f);
}

void addActivity() {
    if (count >= MAX) return;

    scanf("%s %s %d %d %f",
          logData[count].date,
          logData[count].type,
          &logData[count].duration,
          &logData[count].steps,
          &logData[count].distance);

    logData[count].calories = calculateCalories(
        logData[count].steps,
        logData[count].duration
    );
    count++;
}

void viewActivities() {
    if (count == 0) {
        printf("No data.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("%d) %s %s %dmin %d steps %.2fkm %.2fkcal\n",
            i + 1,
            logData[i].date,
            logData[i].type,
            logData[i].duration,
            logData[i].steps,
            logData[i].distance,
            logData[i].calories);
    }
}

void updateActivity() {
    int idx;
    scanf("%d", &idx);
    idx--;

    if (idx < 0 || idx >= count) return;

    scanf("%s %s %d %d %f",
          logData[idx].date,
          logData[idx].type,
          &logData[idx].duration,
          &logData[idx].steps,
          &logData[idx].distance);

    logData[idx].calories = calculateCalories(
        logData[idx].steps,
        logData[idx].duration
    );
}

void deleteActivity() {
    int idx;
    scanf("%d", &idx);
    idx--;

    if (idx < 0 || idx >= count) return;

    for (int i = idx; i < count - 1; i++)
        logData[i] = logData[i + 1];

    count--;
}
