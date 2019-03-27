#include <stdio.h>
#include <math.h>

int change(int);

int main() {
    int num[2];
    
    for(int i=0; i<2; i++) {
        scanf("%d", &num[i]);
        num[i]=change(num[i]);
    }
    
    if(num[0]>num[1]) printf("%d", num[0]);
    else printf("%d", num[1]);
    
}

int change(int n) {
    int temp;
    int result=0;
    
    for(int i=0; i<3; i++) {
        temp=n%10;
        n=n/10;
        
        result+=temp*pow(10,2-i);
    }
    
    return result;
}
