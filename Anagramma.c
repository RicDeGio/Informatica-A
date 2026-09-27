#include <stdio.h>
#include <string.h>
#define N 100
#define M 200
int main()
{
   char str1[N], str2[M];
   int check=0;
   printf("Inserire una stringa: ");
   scanf("%s", str1);
   printf("Inserire una stringa: ");
   scanf("%s", str2);
   int lun1=strlen(str1), lun2=strlen(str2);
   if(lun1!=lun2){
       printf("Non hanno gli stessi caratteri");
   }
   else{
   for(int i = 0; i < strlen(str1); i++){
       for(int j=0; j<strlen(str2); j++){
           if(str1[i]==str2[j]){
               str1[i]=' ';
               str2[j]=' ';
           }
       }
   }
   for(int i = 0; i < lun1; i++){
       if(str1[i]!=' '){
           printf("Non hanno gli stessi caratteri");
           break;
       }
       if(i==lun1-1){
           printf("Hanno gli stessi caratteri");
       }
   }
}}
//si puo anche fare facendo bubblesort dei caratteri e confrontarli 1 a 1
//si puo anche fare facendo 2 array di 26 spazi e aumento di 1 se c'è la lettera poi confronto
//si puo anche fare facendo 1 array di 26 spazi e aumento di 1 se c'è la lettera nella str1 e diminuisco di 1 se c'è la lettera nella str2 poi confronto
