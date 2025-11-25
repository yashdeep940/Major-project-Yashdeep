#include "fitness.h"

Activity logData[MAX];
int count = 0;

float calculateCalories(int steps, int duration) {
    return (steps * 0.04) + (duration * 5);
}

void addActivity() {
    if (count >= MAX) {
        printf("Storage full!\n");
        return;
    }

    printf("\nEnter date (DD-MM-YYYY): ");
    scanf("%s", logData[count].date);

    printf("Enter activity type (walk/run): ");
    scanf("%s", logData[count].type);

    printf("Enter duration (minutes): ");
    scanf("%d", &logData[count].duration);

    printf("Enter steps: ");
    scanf("%d", &logData[count].steps);

    printf("Enter distance (km): ");
    scanf("%f", &logData[count].distance);

    logData[count].calories = calculateCalories(logData[count].steps,
                                                logData[count].duration);

    printf("Activity added successfully!\n");
    count++;
}

void viewActivities() {
    if (count == 0) {
        printf("\nNo activities recorded yet.\n");
        return;
    }

    printf("\n--- Fitness Activity Log ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nEntry %d:\n", i + 1);
        printf("Date        : %s\n", logData[i].date);
        printf("Type        : %s\n", logData[i].type);
        printf("Duration    : %d min\n", logData[i].duration);
        printf("Steps       : %d\n", logData[i].steps);
        printf("Distance    : %.2f km\n", logData[i].distance);
        printf("Calories    : %.2f kcal\n", logData[i].calories);
    }
}
