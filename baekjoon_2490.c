#include <stdio.h>

int main() {
	int s;
	int one[3];
	char str[5] = { 'D','C','B','A','E'};
	

	for (int i = 0; i < 3; i++) {
		one[i] = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &s);
			if (s) one[i]++;
		}
		
	}

	for (int i = 0; i < 3; i++) printf("%c\n", str[one[i]]);
}
