#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int sayi, tahmin, i=1;
	srand(time(NULL));
	sayi = rand() % 100 + 1;
	
	while (1) {
		printf("Sayiyi tahmin et...");
		scanf("%d", &tahmin);
		if (sayi == tahmin) {
			printf("Tebrikler %d. tahmininizde bildiniz.",i);
			break;
		}
		else if (tahmin < sayi) {
			printf("Daha buyuk sayi giriniz:");
		}
		else {
			printf("Daha kucuk sayi giriniz...");
		}
		i++;
	}
}
