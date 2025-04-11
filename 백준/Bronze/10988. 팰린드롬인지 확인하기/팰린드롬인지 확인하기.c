#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    int str_len;

    scanf("%s", string);
    str_len = strlen(string);

    for(int idx = 0; idx < str_len / 2; idx++){
        if(string[idx] != string[(str_len - 1) - idx]) {
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    
    return 0;
}