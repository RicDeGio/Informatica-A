#include <stdio.h>
int main(){
    int cont=0;
    char c;
    printf("Inserisci parola: ");
    do{
        scanf("%c", &c);
        int val = c;
        if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u'){
            cont++;
        }
    }while((c>='A' && c<='Z' )|| (c>='a' && c<='z')); // cosi facendo se do uno spazio mi conta solo una parola se modifico e metto while (c != '\n')
printf("%d", cont);
return 0;
}
