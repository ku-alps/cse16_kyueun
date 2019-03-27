#include <stdio.h>

int main() {
	int num, s, cnt = 0;
	
	scanf("%d", &num);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &s);
		if (s == num) cnt++;
	}

	printf("%d", cnt);
}
