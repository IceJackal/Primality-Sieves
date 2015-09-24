#include<stdio.h>
#include<stdlib.h>

int main(){
    int max = 0;
    int x;
    int i;
    int j;

    printf("How high do you want the primes to go? ");
    fflush(stdin);
    scanf("%d", &max);

    int primes[max];
    primes[0] = 0;
    primes[1] = 0;
    for (x=2; x<=max; x++)
    {
        primes[x] = 1;
    }


    for (i=2; i<=max; i++)
    {
        if (primes[i] == 1)
        {
            for (j = i*2; j <= max; j += i)
            {
                primes[j] = 0;
            }
        }

    }


    for (x=0; x<=max; x++){
        if (primes[x] == 1)
        {
            printf("%d\n", primes[x]);
        }
    }

    system("pause");

    }
