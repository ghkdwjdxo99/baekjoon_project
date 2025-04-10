#include <stdio.h>

int main(){
    int N, M;
    int i, j;
    int temp;
    int basket[101];
    
    for(int idx = 0; idx < 101; idx++)
        basket[idx] = idx;
    
    scanf("%d %d", &N, &M);
    
    for(int cnt = 1; cnt <= M; cnt++){
        scanf("%d %d", &i, &j);
        while(i < j){
            temp = basket[i];
            basket[i] = basket[j];
            basket[j] = temp;
            i++;
            j--;
        }
    }
    
    for(int idx = 1; idx <= N; idx++)
        printf("%d ", basket[idx]);
    
    return 0;
}