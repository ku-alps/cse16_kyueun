#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, high, low;
	int* score;

	scanf("%d", &N);
	score = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++)	scanf("%d", &score[i]);

	high = score[0];
	low = score[0];

	for (int i = 1; i < N; i++) {
		if (score[i] > high) high = score[i];
		if (score[i] < low) low = score[i];
	}

	printf("%d", high-low);

	free(score);
}
