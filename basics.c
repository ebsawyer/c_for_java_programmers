//
// Created by Ethan Sawyer on 7/5/20.
//
//#include <stdio.h>
//
//void printStars(int n) {
//    for (int i = 1; i <= n; i++) {
//        printf("*");
//    }
//}
//
//float ftok(float degf) {
//    return 5.0 / 9.0 * (degf - 32) + 273.15;
//}
//
//// Takes two filenames as parameters and copies the
//// contents of the file with the first name into a
//// file with the second name (creating it if it doesn’t
//// exist, overwriting it if it does exist, both of
//// which are the default behavior of fopen).
//int copyfile(char *srcfilename, char *dstfilename) {
//    FILE *src = fopen(srcfilename, "r");
//    if (src == NULL) {
//        return 0;
//    }
//    FILE *dst = fopen(dstfilename, "w");
//    if (dst == NULL) {
//        return 0;
//    }
//    while (!feof(src)) {
//        char str[256];
//        if (fgets(str, 255, src) != NULL) {
//            fprintf(dst, "%s", str);
//        }
//    }
//    fclose(src);
//    fclose(dst);
//    return 1;
//}
//
//int main(int argc, char *argv[]) {
//
//    double degreesF = 212.0;
//    double kelvins = 5.0 / 9.0 * (degreesF - 32) + 273.15;
//    printf("%f degrees Fahrenheit is %f Kelvins\n", degreesF, kelvins);
//
//    if (degreesF <= 32.0) {
//        printf("That's freezing!\n");
//    } else if (degreesF >= 212.0) {
//        printf("That's boiling!\n");
//    } else {
//        printf("That's nice.\n");
//    }
//
//    int i = 1;
//    while (i <= 10) {
//        printf("%d\n", i);
//        i += 1;
//    }
//
//    for (int j = 10; j >= 1; j -= 2) {
//        printf("%d\n", j);
//    }
//
//    printStars(5);
//    printf("\n");
//
//    printf("0 degrees F is %f Kelvins\n", ftok(0.0));
//
//    int n;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    printf("You entered %d\n", n);
//
//    float f;
//    printf("Enter a floating-point number: ");
//    scanf("%f", &f);
//    printf("You entered %f\n", f);
//
//    char str[256];
//    printf("Enter a string (no more than 255 characters): ");
//    scanf("%255s", str);
//    printf("You entered \"%s\"\n", str);
//
//    //TODO: fix lines 60-64
//    printf("Enter lines of text; blank line to finish:\n");
//    do {
//        fgets(str, 255, stdin);
//        printf("%s", str);
//    } while (str[0] != '\n');
//
//}