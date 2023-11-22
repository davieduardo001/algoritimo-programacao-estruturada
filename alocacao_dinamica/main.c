#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char name[50];
    int age;
    float media;
} Student;

Student *add() {
    Student *s;

    s = (Student*)malloc(sizeof(Student));

    printf("Write a name: ");
    fgets(s->name, sizeof(s->name), stdin);

    printf("Write a age: ");
    scanf("%d", &s->age);

    printf("Write the media of the sudent: ");
    scanf("%d", &s->media);
    return s;
}

int main() {
    Student *a;

    a = add();

    printf("Name: %s\n", a->name);
    printf("Age: %d\n", a->age);
    printf("Media: %.2f\n", a->media);


    return 0;
}
