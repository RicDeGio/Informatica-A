#include <stdio.h>
int main(int argc, char *argv[]) {
	char c1, c2;
	printf("Inserire il primo carattere: ");
	scanf("%c", &c1);
	printf("\nInserire il secondo carattere: ");
	scanf(" %c", &c2);
	for(int i = 'a'; i <= 'z'; i++){
		if(i == c1){
			for(int j = c1 + 1; j < c2; j++){
				printf("%c ", j);
			}
		}
		else if(i == c2){
			for(int j = c2 + 1; j < c1; j++){
				printf(" %c", j);
			}
		}
	}
	return 0;
}
