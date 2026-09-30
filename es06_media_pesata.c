#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, cfu, voto, sum = 0;
	float media = 0.0;
	printf("inserire numero di voti: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i ++){
		printf("\ninserire voto: ");
		scanf("%d", &voto);
		printf("\ninserire cfu: ");
		scanf("%d", &cfu);
		sum+=cfu;
		media += voto*cfu;
	}
	media = (media/sum);
	printf("%f", media);
	return 0;
}
