#include <stdio.h>
int main(int argc, char *argv[]) {
	int n, l;
	do{
		printf("\ninserisci numero di cui vuoi la tabellina ");
		scanf("%d",&n);
		printf("\ninserisci lunghezza tabellina ");
		scanf("%d",&l);
	}while( n<0||l<0);
	for(int i = 1; i <= l; i++){
		printf("%d ", n*i);
	}
	return 0;
}
