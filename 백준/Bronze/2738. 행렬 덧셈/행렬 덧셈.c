#include <stdio.h>

int main(void)
{
	int n, m;
	int arr1[100][100], arr2[100][100];

	// 입력부
	scanf("%d %d", &n, &m);

	for (int r = 0; r < n; r++)
		for (int c = 0; c < m; c++)
			scanf("%d", &arr1[r][c]);

	for (int r = 0; r < n; r++)
		for (int c = 0; c < m; c++)
			scanf("%d", &arr2[r][c]);

	// 계산부
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < m; c++) {
			printf("%d ", arr1[r][c] + arr2[r][c]);
		}
		printf("\n");
	}

	return 0;
}