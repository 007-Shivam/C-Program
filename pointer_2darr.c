#include <stdio.h>

int main() {

	int a[2][2] = {2, 4, 6, 8};
	int *p = a[0];
	
	for (int i = 0; i < 2; i++) {
		printf("\n");
		for (int j = 0; j < 2; j++) {
			printf("%d\t", *(p + (i*2) + j));
		}
	}
return 0;	
}//POINTER 2-D ARRAY