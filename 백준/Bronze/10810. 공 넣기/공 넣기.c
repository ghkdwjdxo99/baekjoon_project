#include <stdio.h>

int main() {
	int N, M;
	int i, j, k;
	int basket[101] = { 0, };
	scanf("%d %d", &N, &M);

	for (int cnt = 1; cnt <= M; cnt++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int basket_input_idx = i; basket_input_idx <= j; basket_input_idx++)
			basket[basket_input_idx] = k;
	}
	for (int idx = 1; idx <= N; idx++)
		printf("%d ", basket[idx]);

	return 0;
}