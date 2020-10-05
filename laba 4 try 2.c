#include<stdio.h>
int main() {
	int i, n, s = 0, g = 0, a[100], b[100];
	printf("VVedite kol-vo elementov massiva bolsche 2\n");
	scanf_s("%d", &n);
	if (n > 1) {

		printf("VVedite elementy massiva\n");
		for (i = 0; i < n; i++) {
			scanf_s("%d", &a[i]);
			b[i] = a[i];
		}
		s = a[1] * b[0];
		for (i = 2; i < n; i++) {

			if ((a[i] * b[i - 1]) > s) {
				s = (a[i] * b[i - 1]);
				g = i;
			}
		}
		g++;
		if (s == a[1] * b[0]){
			g = 2;
		printf("Nomer elementa:%d", g);
		return 0;
	    }
		
		printf("Nomer elementa:%d", g);
		return 0;

	}
	  else 
		printf("Vi vveli nevernoye chislo ,pozhaluysta,zanovo");
	  return 0;
	
	
}
