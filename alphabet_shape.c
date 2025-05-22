#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    int value = 1;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= value; j++){
            printf("%c ", 'A'+j-1);
        }
        printf("\n");
        value++;
    }

    return 0;
}