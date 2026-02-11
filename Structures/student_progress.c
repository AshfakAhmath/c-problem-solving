#include <stdio.h>

struct Progress {
    int completedLessons;
    int totalLessons;
};

struct Course {
    int courseID;
    char courseName[50];
    struct Progress progress;   
};

struct Student {
    int studentID;
    char name[50];
    struct Course courses[3];   
};

int main() {

    struct Student s;
    float percent[3];
    int i, highestIndex = 0;

    
    printf("Enter Student ID: ");
    scanf("%d", &s.studentID);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    for(i = 0; i < 3; i++) {

        printf("\nCourse %d Details\n", i+1);

        printf("Course ID: ");
        scanf("%d", &s.courses[i].courseID);

        printf("Course Name: ");
        scanf(" %[^\n]", s.courses[i].courseName);

        printf("Completed Lessons: ");
        scanf("%d", &s.courses[i].progress.completedLessons);

        printf("Total Lessons: ");
        scanf("%d", &s.courses[i].progress.totalLessons);

        percent[i] = 
        ( (float)s.courses[i].progress.completedLessons 
        / s.courses[i].progress.totalLessons ) * 100;
    }

    for(i = 1; i < 3; i++) {
        if(percent[i] > percent[highestIndex]) {
            highestIndex = i;
        }
    }

    printf("\nCompletion Percentage:\n");
    for(i = 0; i < 3; i++) {
        printf("%s : %.2f%%\n", 
        s.courses[i].courseName, percent[i]);
    }

    printf("\nHighest Completion Course:\n");
    printf("%s (%.2f%%)\n", 
    s.courses[highestIndex].courseName, 
    percent[highestIndex]);

    return 0;
}
