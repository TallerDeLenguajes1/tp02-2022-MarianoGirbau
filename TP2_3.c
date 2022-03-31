#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7
int main(void){
    int i,j,*puntero_i,*puntero_j;
    int mt[N][M];
    srand((int)time(NULL));
    for(i = 0;i<N; i++)
    {   
        for(j = 0;j<M; j++)
        {
            *(*(mt + i) + j) = rand() % 100;

            printf("d", mt[i][j]);
        }
    printf("\n");
    }
    return 0;
}