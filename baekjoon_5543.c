#include <stdio.h>

int main() {
    int burger;
    int drink;
    int cheap_b = 2000;
    int cheap_d = 2000;
    
    for(int i=0; i<3; i++) {
        scanf("%d", &burger);
        if(burger<cheap_b) cheap_b=burger;
        
    }
    for(int i=0; i<2; i++) {
        scanf("%d", &drink);
        if(drink<cheap_d) cheap_d=drink;
    }
    
    printf("%d", cheap_b+cheap_d-50);
}
