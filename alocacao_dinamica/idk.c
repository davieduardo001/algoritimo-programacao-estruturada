#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char name[50];
    int age;
    float media;
}

int main() {

    Student *s;

    s = (Student*)malloc(sizeof(Student));

    printf("Write a name: ");
    fgets(s->name, sizeof(s->name), stdin);

    printf("Write a age: ");
    scanf("%d", &s->age);

    printf("Write the media of the sudent: ");
    scanf("%d", &s->media);
    return s;

    return 0;
}
