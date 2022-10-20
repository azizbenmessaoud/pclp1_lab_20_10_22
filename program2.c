#include <stdio.h>
#include <stdlib.h>

int main() {
    // dec and reading (of) vars
    int t1, t2; // we suppose t1 is coming always after t2 
    printf("insert time 1 and time 2 respectively seperated with a space following the patter : hhmmss hhmmss\n");
    scanf("%d %d", &t1, &t2);

    // seperate hours from minutes
    div_t div_output;
    div_output = div(t1, 10000);
    int h1 = div_output.quot;
    int m1 = div(div_output.rem, 100).quot;
    int s1 = div(div_output.rem, 100).rem;

    div_output = div(t2, 10000);
    int h2 = div_output.quot;
    int m2 = div(div_output.rem, 100).quot;
    int s2 = div(div_output.rem, 100).rem;

    // condition when h1 is less than h2 but bigger than h2 in time for example (h1 1 and h2 23)
    if (h1 < h2) h1 += 24;

    // convert hours and minutes in seconds
    t1 = h1*3600 + m1*60 + s1;
    t2 = h2*3600 + m2*60 + s2;

    int time_scope = t1 - t2;

    // display result in hhmmss format
    printf("time difference between %dh %dm %ds and %dh %dm %d s is %dh %dm %ds .\n", 
        h1, m1, s1, h2, m2, s2,
        div(time_scope, 3600).quot, // hours
        div(div(time_scope, 3600).rem, 60).quot, //minutes 
        div(div(time_scope, 3600).rem, 60).rem // seconds .
    );


    return 0;
}