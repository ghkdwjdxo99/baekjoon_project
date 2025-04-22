#include <stdio.h>
#include <string.h>

int check_group_word(char str[101]) {
	// 그룹 단어인지 확인하는 함수
	int alpha[26] = { 0, };
	int idx = 0;
	char prev = str[idx];
	alpha[prev - 'a']++;

	while (str[idx] != '\0') {
		if (str[idx] != prev) {
			alpha[str[idx] - 'a']++;
			if (alpha[str[idx] - 'a'] > 1)
				return 0;
		}
		prev = str[idx];
		idx++;
	}
	return 1;
}

int main() {
	int n;
	int cnt = 0;
	char str[101];

	scanf("%d", &n);

	for (int _ = 0; _ < n; _++) {
		scanf("%s", &str);

		cnt += check_group_word(str);
	}
	printf("%d", cnt);

	return 0;
}