#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int N, cond = 1;
	printf("inserire N (dimensione matrice): ");
	scanf("%d", &N);
	int M[N][N];
	printf("Lo stesso numero non puo' essere ripetuto \n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j ++){
			do{	
			cond = 1;
			printf("Inserire valore nella matrice in M[%d][%d]: ", i, j);
				scanf("%d", &M[i][j]);
				for(int k = 0; k < i; k++){
					for(int l = 0; l < N /* attento che qua non è < j ma di n*/; l++){
						if(M[i][j]==M[k][l]){
							cond = 0;
						}
						if(i<k || ( i == k) && l >=j){
							break;	
						}
						
					}
				}
			}while(cond == 0);
		}
	}
	return 0;
}