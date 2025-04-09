#include <stdio.h>

int main(){
    int byte, count;
    scanf("%d", &byte);
    count = byte / 4;
    for(int i = 0; i < count; i++)
        printf("long ");
    printf("int\n");
    return 0;
}