#include <stdio.h>
int main() {
	int a, i, j = 1, x = 0;
	for(i = 1; i <= 5; i++) {
		while(x < 5) {
			printf("%d ", j++);
			x++;
		}
		x = 0;
		printf("\n");
	}

	return 0;
}

