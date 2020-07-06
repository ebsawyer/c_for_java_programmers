/*
 * File: hello.c
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello world!\n");

    char **s_array = (char **) calloc(5, sizeof(char *));
    for (int i = 0; i < 5; i++) {
        s_array[i] = (char *) calloc(5, sizeof(char));
    }
}