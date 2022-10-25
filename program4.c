// for this exercice i understood that we have a list of numbers and that only one number does not
// repeat, we have to find it!

#include <stdio.h>
#include <stdbool.h>

int main() {

    // read N length of array
    
    int N;
    printf("insert N value : ");
    scanf("%d", &N);
    
    // reading array 
    // we suppose that all only one number does not repeat

    printf("insert %d values : \n", N+1);
    int array[N+1];
    for (int i=0; i<N+1; i++) {
        scanf("%d", &array[i]);
    }

    // printing our array

    printf("our array is : \n\t");
    for (int i=0; i<N+1; i++) {
        printf("%d ", array[i]);
    }

    int repeated_number = -1;
    int times_repeated = 0;

    for (int i=0; i<N+1; i++) {
        for (int j=0; j<N+1; j++) {
            if (array[i] == array[j]) times_repeated += 1;
        }
        if (times_repeated == 2) {
            repeated_number = array[i];
            break;
        }
        times_repeated = 0;
    }

    if (repeated_number == -1) printf("\n no number is repeated twice in the list!");
    else printf("repeated number is %d", repeated_number);

    return 0;
}


