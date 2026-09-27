#include <stdio.h>
#define N 5
int main()
{
    int V[N], t;
    for (int i = 0; i < N; i++){
        printf("Valore in posizione %d: ", i);
        scanf("%d", &V[i]);
    }
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1 - i; j++){
            if(V[j]>V[j+1]){
            t = V[j+1];
            V[j+1]=V[j];
            V[j]=t;
        }}
    }
    for (int i = 0; i < N; i++){
        printf("Valore in posizione %d: %d \n", i, V[i]);
    }
 
    return 0;
}
