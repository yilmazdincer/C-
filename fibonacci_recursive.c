#include <stdio.h>
int fib(int n){
	if(n==0 || n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);	
}

int main(){
	int f;
	printf("Kacinci fibonacci sayisini bulmak istiyorsunuz?\n");
	scanf("%d",&f);
	printf("Sonuc : %d",fib(f));
}
