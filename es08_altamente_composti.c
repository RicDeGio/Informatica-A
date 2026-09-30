#include <stdio.h>

int main(int argc, char *argv[]) {
	int N, dmax = 0, d, k = 0;
	printf("scegli il numero di numeri altamente composti: ");
	scanf("%d", &N);
	for(int i = 1; k <= N; i++){
		d = 0;
		for(int j = 1; j <= i; j++){
			if(i%j==0){
				d++;
			}
		}
		if(d > dmax){
			printf("%d ", i);
			dmax=d;
			k++;
		}
	}
	return 0;
}
