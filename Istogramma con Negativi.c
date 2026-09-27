#include <stdio.h>
#define N 5
int main()
{
    int v[N];
    printf("dichiara elemento n %d: ", 1);
    scanf("%d", &v[0]);
    int max = v[0], min = v[0];
    for (int i = 1; i < N; i++){
        printf("dichiara elemento n %d: ", i+1);
        scanf("%d", &v[i]);
        if(v[i]>max){
            max=v[i];
        }
        if(v[i] < min){
            min = v[i];
        }
    }
    for(int j = max-1; j >= 0; j--){
        for(int i = 0; i < N; i++){
            if(v[i]==max){
                printf("| ");
                v[i]--;
            }
            else printf("- ");
        }
        printf("\n");
        max--;
    }
    for(int i = 0; i < N; i++){
        printf("_ ");
    }
    printf("riga dello 0 \n");
    for(int j = min+1; j <= 0; j++){
        for(int i = 0; i < N; i++){
            if(v[i]>=min && v[i]<0){
                printf("| ");
                v[i]++;
            }
            else printf("- ");
        }
        printf("\n");
        min++;
    }
 
    return 0;
}
