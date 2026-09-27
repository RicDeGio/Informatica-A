#include <stdio.h>
#define N 5
int main()
{
    int posmax, max, num;
    printf("Inserire un valore: ");
    scanf("%d", &max);
    posmax=1;
    for(int i = 2; i<=N; i++){
        printf("Inserire un valore: ");
        scanf("%d", &num);
        if(num>max){
            max=num;
            posmax=i;
    }}
    printf("Il valore massimo e' %d \nLa posizione di questo valore e' %d", max, posmax);
    return 0;
}
