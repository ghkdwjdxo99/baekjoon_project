#include <stdio.h>

int main(void)
{
	char string[101];
	int cnt = 0;
	scanf("%s", string);

	int i = 0;
	while (string[i] != '\0') {
		if (string[i] == 'c' && (string[i + 1] == '=' || string[i + 1] == '-')) {
			i += 2;
			cnt++;
		}
		else if (string[i] == 'd' && string[i + 1] == 'z' && string[i + 2] == '=') {
			i += 3;
			cnt++;
		}
		else if (string[i] == 'd' && string[i + 1] == '-') {
			i += 2;
			cnt++;
		}
		else if (string[i] == 'l' && string[i + 1] == 'j') {
			i += 2;
			cnt++;
		}
		else if (string[i] == 'n' && string[i + 1] == 'j') {
			i += 2;
			cnt++;
		}
		else if (string[i] == 's' && string[i + 1] == '=') {
			i += 2;
			cnt++;
		}
		else if (string[i] == 'z' && string[i + 1] == '=') {
			i += 2;
			cnt++;
		}
		else {
			i++;
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}