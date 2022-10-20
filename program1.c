#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //dec + read variables
    #define min(X,Y) (((X) < (Y)) ? (X) : (Y))
    #define max(X,Y) (((X) > (Y)) ? (X) : (Y)) 
    float a, b, c;
    printf("insert 3 reals following the pattern nb nb nb\n");
    scanf("%f %f %f", &a, &b, &c); 
    printf("\n%.3f, %.3f, %.3f read\n", a, b, c);

    // get min using min fun imported from the <math.h> library
    printf("min of a, b and c is %.3f\n", min(c, min(a, b)));

    // get max using max fun imported from the <math.h> library
    printf("max of a, b and c is %.3f\n", max(c, max(a, b)));

    // get arith average of a, b and c
    printf("arithmetic average of a, b and c is %.3f\n", (a+b+c)/3);

    // get geo average of a, b and c
    printf("geometric average of a, b and c is %0.3f\n", sqrt(a*b*c));

    return 0;
}