#include <stdio.h>

int rec(int n, int i) {
    if(i <= 2) 
        return i - 1;  
    return rec(n, i - 1) + n * rec(n, i - 2);
}

int main(void) {
    int n, i;
    scanf("%d %d", &n, &i);
    
    printf("%d", rec(n, i));
    return 0;
}