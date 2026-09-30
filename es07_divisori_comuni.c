#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1, n2, min;
	printf("inserire due numeri: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	if(n1>=n2){
		min=n2;
	}
	else{
		min = n1;
	}

	for(int i = 1; i <= min; i++){
		if(n1 % i == 0 && n2 % i == 0){
			printf("%d ", i);
		}
	}
	return 0;
}
