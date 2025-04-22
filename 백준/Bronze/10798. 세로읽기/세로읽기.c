#include <stdio.h>

int main() {
	char arr_2[5][16] = { 0, };
	for (int r = 0; r < 5; r++) {
		scanf("%s", arr_2[r]);
	}

	for (int c = 0; c < 15; c++) {
		for (int r = 0; r < 5; r++) {
			if (arr_2[r][c] != '\0') {
				printf("%c", arr_2[r][c]);
			}
		}
	}

	return 0;
}