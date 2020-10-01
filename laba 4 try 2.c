#include<stdio.h>
int main() {
	int i, n, s = 0, g = 0, a[100], b[100];
	printf("VVedite kol-vo elementov massiva bolsche 1\n");
	scanf_s("%d", &n);
	if (n > 1) {

		printf("VVedite elementy massiva\n");
		for (i = 0; i < n; i++) {
			scanf_s("%d", &a[i]);
			b[i] = a[i];
		}
		for (i = 1; i < n; i++) {

			if ((a[i] * b[i]) > s) {
				s = (a[i] * b[i - 1]);
				g = i;
			}
		}
		g++;
		printf("Nomer elementa:%d", g);
		return 0;

	}
	  else 
		printf("Vi vveli nevernoye chislo ,pozhaluysta,zanovo");
	  return 0;
	
	
}