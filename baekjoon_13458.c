#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int N;
    long long int* student;
    long long int vice = 0;
    long long int B, C;
    
    scanf("%lld", &N);
    
    student = malloc(sizeof(long long int)*N);
    
    for (int i = 0; i < N; i++) scanf("%lld", &student[i]);
    
    scanf("%lld %lld", &B, &C);
    
    for (int i = 0; i < N; i++) {
        student[i] -= B;
        if(student[i]>0) {
            vice += (student[i]) / C;
            if (student[i] % C) vice++;
        }
    }
    
    printf("%lld", N + vice);
    
    free(student);
}
