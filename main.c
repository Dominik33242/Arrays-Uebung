#include <stdio.h>

int main(void)
{
    float noten [10];
    float summe=0;
    float durchschnitt;


    for(int i = 0; i < 10; i++) {
        printf ("Bitte geben Sie die %d. Note ein.\n", i + 1);
        scanf("%f", &noten[i]);
        summe = summe + noten[i];
    }

    durchschnitt = summe / 10;
    printf ("Durchschnitt = %.2f\n", durchschnitt);


    for(int i = 0; i <10; i++) {
        printf("%d. Note: %f\n", i+1, noten[i]);
    }





    return 0;
}
