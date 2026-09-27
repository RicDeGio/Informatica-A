#include <stdio.h>
int main(){
    int somma = 0, N;
    printf("Fai ");
    scanf("%d", &N);
    for(int i=1; i<N+N; i+=2){
        somma=somma+i;
    }
    printf("%d", somma);
return 0;
}
