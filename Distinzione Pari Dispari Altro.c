// si ferma quando trova lo spazio e distingue cifre pari dispari o altro
#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    char vet[N];
    int p = 0, d = 0, a = 0;
    printf("inserire stringa: ");
    scanf("%s", vet);
    int lunvet=strlen(vet);
    char pari[lunvet], dispari[lunvet], altro[lunvet];
    for(int i = 0; i < lunvet; i++){
        if (vet[i]==' '){
            break;
        }
        if(vet[i]>=48 && vet[i]<58){
            if((vet[i] - 48)%2==0){
                pari[p]=vet[i]; 
                p++;
            }
            else{
                dispari[d]=vet[i];
                d++;
            }
        }
        else{
            altro[a]=vet[i];
            a++;
        }
    }
    printf("ecco i pari:");
    for(int i = 0; i < p; i++){
        printf(" %c", pari[i]);
    }
    printf("\necco i dispari:");
    for(int i = 0; i < d; i++){
        printf(" %c", dispari[i]);
    }
    printf("\necco tutto il resto:");
    for(int i = 0; i < a; i++){
        printf(" %c", altro[i]);
    }
    return 0;
}
