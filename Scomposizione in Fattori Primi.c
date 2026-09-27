#include <stdio.h>
int main(){
    int num, divisore;
    printf("Inserire numero: ");
    scanf("%d", &num);
    printf("1");
    while(num>1){
        for(int i=2; i<=num; i++){
            while(num%i==0){
                printf(" x %d", i);
                num=num/i;
        }
    }}
}
