#include <stdio.h>

int main(int argc, char *argv[]) {
	int lato;
	printf("inserire lato: ");
	scanf("%d", &lato);
	for(int i = 0; i < lato; i++){
		for(int j = 0; j < lato ; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0; i < lato; i++){
		for(int j = 0; j < lato ; j++){
			if(i == 0 || j == 0 || i == lato-1 || j == lato -1){
				printf("* ");
			}
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
