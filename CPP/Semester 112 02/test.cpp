#include <iostream>
#include "test.h"

#define GRADE 3
#define CLASS 5

student * list[GRADE][CLASS];

void menu() {
        printf("(1) Edit\n(2) View\n(3) Remove\n(4) Exit\nChoice: ");
}

void edit() {
        int i, j;
        printf("Grade: ");
        scanf("%d", &i);
        printf("Class: ");
        scanf("%d", &j);

        if (i < 0 || i >= GRADE || j < 0 || j >= CLASS) {
                printf("Invalid Input!\n");
                return;
        }

        if (list[i][j] == NULL) {
                list[i][j] = (student *)malloc(sizeof(student));
        }

        if (list[i][j] == NULL) {
                printf("Alloc Memory Failed!\n");
                return;
        }

        printf("Name: ");
        scanf("%31s", list[i][j]->name);

        printf("Gender: ");
        scanf("%7s", list[i][j]->gender);

        printf("Age: ");
        scanf("%d", &list[i][j]->age);

        printf("\nGrade: %d Class: %d | At %p\n", i, j, list[i][j]);
        printf("Name: %s\n", list[i][j]->name);
        printf("Gender: %s\n", list[i][j]->gender);
        printf("Age: %d\n\n", list[i][j]->age);
        return;
}

void view() {
        int i, j;
        printf("Grade: ");
        scanf("%d", &i);
        printf("Class: ");
        scanf("%d", &j);

        if (i < 0 || i >= GRADE || j < 0 || j >= CLASS) {
                printf("Invalid Input!\n");
                return;
        }

        if (list[i][j] == NULL) {
                printf("No Data!\n");
                return;
        }

        printf("\nGrade: %d Class: %d | At %p\n", i, j, list[i][j]);
        printf("Name: %s\n", list[i][j]->name);
        printf("Gender: %s\n", list[i][j]->gender);
        printf("Age: %d\n\n", list[i][j]->age);
        return;
}

void remove() {
        int i, j;
        printf("Grade: ");
        scanf("%d", &i);
        printf("Class: ");
        scanf("%d", &j);

        if (i < 0 || i >= GRADE || j < 0 || j >= CLASS) {
                printf("Invalid Input!\n");
                return;
        }

        if (list[i][j] == NULL) {
                printf("No Data!\n");
                return;
        }

        free(list[i][j]);
        list[i][j] = NULL;

        printf("\nDone!\n\n");

        return;
}

int main() {
        for (int i = 0; i < GRADE; i++) {
                for (int j = 0; j < CLASS; j++) list[i][j] = NULL;
        }

        int choice = 0;
        while (1) {
                choice = 0;
                menu();
                scanf("%d", &choice);

                switch (choice) {
                        case 1:
                                edit();
                                break;
                        case 2:
                                view();
                                break;
                        case 3:
                                remove();
                                break;
                        case 4:
                                exit(0);
                        default:
                                printf("Invalid Choice!\n");
                                break;
                }
        }

        return 0;
}