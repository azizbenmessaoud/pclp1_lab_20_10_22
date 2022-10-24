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

    int array[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }

    // printing our array

    printf("our array is : \n\t");
    for (int i=0; i<N; i++) {
        printf("%d ", array[i]);
    }

    // algorithme to find the unique number 
    // not efficient , could be built using recursivity!

    bool unique = false;
    int unique_number;

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (array[i] == array[j]) {
                break;
            }
            if (j==N-1) {
                unique = true;
                unique_number = array[i];
            }
        } 
        if (unique == true) {
            printf("\n%d is unique!", unique_number);
            break;
        }
    }

    return 0;
}


