#include <stdio.h>
#include <string.h>

int main(){
    char string[16];
    int str_len;
    int minimum_time = 0;
    
    scanf("%s", string);
    str_len = strlen(string);
    for(int idx = 0; idx < str_len; idx++){
        if(string[idx] <= 'C')
            minimum_time += 3;
        else if(string[idx] <= 'F')
            minimum_time += 4;
        else if(string[idx] <= 'I')
            minimum_time += 5;
        else if(string[idx] <= 'L')
            minimum_time += 6;
        else if(string[idx] <= 'O')
            minimum_time += 7;
        else if(string[idx] <= 'S')
            minimum_time += 8;
        else if(string[idx] <= 'V')
            minimum_time += 9;
        else if(string[idx] <= 'Z')
            minimum_time += 10;
    }
    
    printf("%d\n", minimum_time);
    
    return 0;
}