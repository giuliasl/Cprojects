#include<stdio.h>
#include<conio.h>
int main()
{
	int cont=1,voto,zevento=0,ventania=0,tempestade=0,branco=0,nulo=0;
	while(cont<=10)
	{
	printf("Voto Eleitor %d:",cont);
	scanf("%d",&voto);
		if(voto==18){
		zevento++;}
		else if(voto==22){
		ventania++;}
		else if(voto==26){
		tempestade++;}
		else if(voto==0){
			branco++;}
		else{
		nulo++;}
	cont++;
}
	printf("Ze do Vento = %d\n",zevento);
	printf("Ventania = %d\n",ventania);
	printf("Tempestade = %d\n",tempestade);
	printf("Em branco = %d\n",branco);
	printf("Nulos = %d\n",nulo);
	getch();
}
