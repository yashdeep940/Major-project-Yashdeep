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

    logData[count].calories = calculateCalories(logData[count].steps, logData[count].duration);

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

int main() {
    int choice;

    while (1) {
        printf("\n=== Fitness Tracker Menu ===\n");
        printf("1. Add Activity\n");
        printf("2. View All Activities\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addActivity();
                break;
            case 2:
                viewActivities();
                break;
            case 0:
                printf("Exiting... Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    printf("made by yashdeep \n");
    printf("sap id 590023466 \n");
}
