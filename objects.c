//
// Created by Ethan Sawyer on 7/5/20.
//
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char *name;
    int id;
};

struct Employee *new_Employee(char *name, int id) {
    struct Employee *this = (struct Employee *) malloc(sizeof(struct Employee));
    if (this == NULL) {
        return NULL; // Out of memory...
    }
    this->name = name;
    this->id = id;
    return this;
}

int main(int argc, char *argv[]) {
    struct Employee *e = new_Employee("Alan Turing", 123);
}