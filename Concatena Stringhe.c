#include <stdio.h>
#define N 25
#define M 10
int main()
{
    int i, j;
    char str1[N], str2[M], str3[N+M];
    printf("Inserire una stringa: ");
    scanf("%s", str1);
    printf("Inserire una stringa: ");
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0'; i++){
     str3[i]=str1[i];   
    }
    for(j = 0; str2[j] != '\0'; j++){
     str3[i+j]=str2[j];   
    }
    str3[i+j]= '\0';
    printf("%s", str3);
    return 0;
}
