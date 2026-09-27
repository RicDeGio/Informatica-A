#include <stdio.h>
#define N 30
int main(){
int a = 1, b = 1, c = 1, d;    
printf("1 1 1 ");
for(int i=4; i < N; i++){
        d = a + c;
        printf("%d ", d);
        a = b; 
        b = c;
        c = d; 
}    
return 0;
}
