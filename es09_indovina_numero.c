#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	srand(time(0));
	int n;
	int r = rand()%10 + 1;
	printf("indovina numero da 1 a %d \n", 10);
	scanf("%d", &n);
	while(n!=r){
		if(n<r){
			printf("\nsbagliato! riprova, il numero è più grande ");
		}
		else{
			printf("\nsbagliato! riprova, il numero è più piccolo ");
		}
		scanf("%d", &n);
	}
	printf("\n congratulazioni!");
	return 0;
}
