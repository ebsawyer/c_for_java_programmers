//
// Created by Ethan Sawyer on 7/5/20.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char *name;
    int id;
};

struct Employee *new_Employee(char *name, int id) {
    struct Employee *this = (struct Employee *) malloc(sizeof(struct Employee));
    if (this == NULL) {
        return NULL; // Out of memory...
    }
    this->name = strdup(name);
    this->id = id;
    return this;
}

char *strdup(const char *s) {
    char *t = (char *) malloc(strlen(s) + 1);
    strcpy(t, s);
    return t;
}

char *Employee_get_name(struct Employee *this) {
    return this->name;
}

int Employee_get_id(struct Employee *this) {
    return this->id;
}

void Employee_print(struct Employee *this) {
    printf("Employee[%s, %d]", this->name, this->id);
}

void Employee_free(struct Employee *this) {
    free(this->name);
    free(this);
}

int main(int argc, char *argv[]) {
    struct Employee *e = new_Employee("Alan Turing", 123);
    printf("%s\n", Employee_get_name(e));
    printf("%d\n", Employee_get_id(e));
    Employee_print(e);
    Employee_free(e);
}