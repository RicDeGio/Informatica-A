#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n, min;
	printf("inserisci un numero: ");
	scanf("%d", &n);
	for(int i = 0; i < 2*n-1; i ++){
		for(int j = 0; j < 2*n-1; j++){
			min=i;
			if(min>j){
				min=j;
			}
			if(min>abs(2*n-2-i)) {
				min=abs(2*n-2-i);
			}
			if(min>abs(2*n-2-j)){
				min=abs(2*n-2-j);
			}
			printf("%d ", n-min);
		}
		printf("\n");
	}
	return 0;
}