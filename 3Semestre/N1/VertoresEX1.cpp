#include <stdio.h>

main (){

    int i;
    float v1[5];


    for (i = 0; i <= 4; i++){

        scanf("%d", v1[i]);

    }

    for (i = 0; i <= 4; i++){

        printf("v1[%d] = %.2f \n", i, v1[i]);
    }
}