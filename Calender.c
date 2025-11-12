#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    char date[20];
    char time[10];
    char description[250];
} Event;

int main() {
    int choice;
    do {
        printf("\nCommunity Calendar Menu:\n");
        printf("1. Create Event\n");
        printf("2. Browse Events\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                createEvent();
                break;
            case 2:
                browseEvents();
                break;
            case 3:
                printf("Exiting calendar. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
    return 0;
}

void createEvent() {
}


void browseEvents() {

}


