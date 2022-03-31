#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main(void)
{
int i, *puntero;
int vt[N];
srand((int)time(NULL));
puntero=&vt[0];
for(i = 0;i<N; i++)
{
*puntero = 1 + rand()%100;
printf("[%d] ", vt[i]);
puntero++;
}    
    return 0;
}
