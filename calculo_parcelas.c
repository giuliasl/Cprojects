#include<stdio.h>
#include<conio.h>
int main()
{
	float vg;
	
	printf("Valor Gasto:");
	scanf("%f",&vg);
	
	if(vg<0)//se for menor que zero digitar valor valido
	printf("Valor invalido, Digite um valor maior que zero");
	else if(vg<100)//senao for menor que zero mas for menor que 100, de 1 a 100 parcela em 2 vezes
	printf("Compra Parcelada em 2 vezes");
	else if(vg<=300)//se nao for menor que 100 mas for menor que 300, de 100 a 300, parcela em 3 vezes 
	printf("Compra Parcelada em 3 vezes");
	else//se nao for nenhum dos valores acima, todas as condiçoes serao ignoradas, e o programa ja vai saber que é maior que 300
	printf("Compra Parcelada em 4 vezes");
	
	getch();
}
