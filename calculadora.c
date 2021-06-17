#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,soma,sub,mult,div;
	printf("\tCalculadora \n");// \t é o tab
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	soma=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	
	printf("A soma e: %d\n", soma);
	printf("A subtracao e: %d\n", sub);
	printf("A multiplicacao e: %d\n", mult);
	printf("A divisao e: %d\n", div);
	
	return 0;
}
