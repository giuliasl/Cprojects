#include<stdio.h>
#include<conio.h>
int main ()
{
	int n, i=1, fatorial=1;//i = numeros inteiros que serão multiplicados para chegar no valor final da fatoração, exemplo, se o N for 4, será 4*3*2= 24
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	while(i<=n){
		fatorial=fatorial * i;
		i++;
	}
	printf("%d! = %d\n", n,fatorial);
	return 0;
	
}
