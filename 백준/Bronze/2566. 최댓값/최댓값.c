#include <stdio.h>

int main(void)
{
	int arr[9][9];
	int max = -1;
	int max_row, max_col;
	
	for (int r = 0; r < 9; r++)
		for (int c = 0; c < 9; c++)
			scanf("%d", &arr[r][c]);

	for (int r = 0; r < 9; r++) {
		for (int c = 0; c < 9; c++) {
			if (arr[r][c] > max) {
				max = arr[r][c];
				max_row = r;
				max_col = c;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", max_row + 1, max_col + 1);

	return 0;
}