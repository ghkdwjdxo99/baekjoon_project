#include <stdio.h>

int main(){
    char* string = (char *)malloc(sizeof(char) * 1000001);
    int index = 0;
    int count[26] = {0, };
    int max_index = 0;
    int max_index_count = 0;
    
    scanf("%s", string);
    
    while(1){
        if(string[index] == '\0')
            break;
        if(string[index] >= 'A' && string[index] <= 'Z'){
            count[string[index] - 'A']++;
        } else if(string[index] >= 'a' && string[index] <= 'z'){
            count[string[index] - 'a']++;
        }
        index++;
    }
    
    for(int i = 0; i < 26; i++){
        if(count[i] > count[max_index]){
            max_index = i;
            max_index_count = 1;
        }
        else if(count[i] == count[max_index])
            max_index_count++;
    }
    
    if(max_index_count > 1)
        printf("?");
    else
        printf("%c", max_index + 'A');
        
    free(string);
    
    return 0;
}