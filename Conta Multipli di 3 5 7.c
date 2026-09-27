#include <stdio.h>
int main(){
int cont=0, n;
do{
    printf("Inserisci n");
    scanf("%d", &n);
    if(n%3==0 || n%5==0 || n%7==0){
        cont++;
    }
}while(n!=-1);
printf("%d", cont);
return 0;
}
