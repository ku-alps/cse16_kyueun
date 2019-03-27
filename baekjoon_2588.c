#include <stdio.h>
#include <math.h>

int main() {
    int fi, se;
    int re[3];
    
    scanf("%d", &fi);
    scanf("%d", &se);
  
    for(int i=0; i<3; i++) {
        re[i]=se%(int)pow(10, i+1);
        se-=re[i];
        re[i]*=fi;
    }
    
    for(int i=0; i<3; i++) printf("%d\n", re[i]/(int)pow(10,i));
    
    printf("%d", re[0]+re[1]+re[2]);
}
