#include <stdio.h>

int main() {
    char string_number_1[4], string_number_2[4];
    char temp;
    int number_1, number_2;

    scanf("%s %s", string_number_1, string_number_2);
    
    temp = string_number_1[0];
    string_number_1[0] = string_number_1[2];
    string_number_1[2] = temp;

    temp = string_number_2[0];
    string_number_2[0] = string_number_2[2];
    string_number_2[2] = temp;

    for (int idx = 0; idx < 3; idx++) {
        if (string_number_1[idx] > string_number_2[idx]) {
            printf("%s", string_number_1);
            break;
        }
        else if (string_number_1[idx] < string_number_2[idx]) {
            printf("%s", string_number_2);
            break;
        }
    }

    return 0;
}
