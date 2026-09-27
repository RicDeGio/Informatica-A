#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
   char str1[N];
   int check=0;
   printf("Inserire una stringa: ");
   scanf("%s", str1);
   int lung = strlen(str1);
   for(int i = 0; i < lung/2; i++){
       if(str1[i]!=str1[lung-1-i]){
           check=1;
       }
   }
   if(check==1){
   printf("Non palindromo");
   }
   else printf("Palindromo");
}
