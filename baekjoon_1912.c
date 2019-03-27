#include <stdio.h>
#include <stdlib.h>

int main() {
    long int n, temp=0, max=-1000;
    int* num;
    
    scanf("%ld", &n);
    num = (int*)malloc(sizeof(int)*n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &num[i]);
        temp += num[i];
        
        if(temp>max) max=temp;
        if(temp<0) temp=0;
    }
    
    printf("%ld", max);
    
    free(num);
}
