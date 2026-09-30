#include <stdio.h>

int main(int argc, char *argv[]) {
	int sum = 0, prod = 1, index, V[10];
	printf("inserire 10 numeri: ");
	for(int i = 0; i < 10; i++){
		scanf(" %d", &V[i]);
	}
	do{
		printf("inserire un indice da 0 e 9: ");
		scanf(" %d", &index);
	}while (index>9||index<0);

	for(int i =0; i < index; i++){
		sum+=V[i];
	}
	for(int i = index + 1; i < 10; i++){
		prod*=V[i];
	}
	printf("%d", sum);
	printf("\n%d", prod);
	return 0;
}
