#include<stdio.h>
#include<conio.h>
int main()
{
	float desvr,porvr,vr,desvt,por,vt,valdepe,depe,sal,inss,irrf,fgts,sald;
  
	printf("Digite o Salario:");
	scanf("%f",&sal);
  
	printf("Digite o numero de dependentes:");
	scanf("%f",&depe);
  
	printf("Vale Transporte:");
	scanf("%f",&vt);
  
	printf("Vale Refeicao:");
	scanf("%f",&vr);
  
	porvr=sal*0.2;
	por=sal*0.06;
  
if(vr<porvr){
	desvr=vr;
	printf("Vale Refeicao=%.2f\n",desvr);}
else{
	desvr=porvr;
	printf("Vale Refeicao=%.2f\n",desvr);}
  
if (vt<por){
	printf("Vale Transporte=%.2f\n",vt);
	desvt=vt;}
else{
	printf("Vale Transporte=%.2f\n",por);
	desvt=por;}
	valdepe=depe*189.59;
  
if(sal<0)//início inss
		printf("Salario invalido");
	else if(sal<1100)
		inss=sal*0.075;
	else if(sal<=2203.48)
		inss=sal*0.09;
	else if(sal<=3305.22)
		inss=sal*0.12;
	else if(sal<=6433.57)
		inss=sal*0.14;
	else
		inss=751.97;//fim inss
  
if(sal<0)//início irrf
		printf("Salario invalido");
else if(sal<1903.98)
		irrf=0-valdepe;
else if(sal<2826.65)
		irrf=(sal*(0.075)-142.8)-valdepe;
else if(sal<3751.05)
		irrf=(sal*(0.15)-354.8)-valdepe;
else if(sal<4664.68)
		irrf=(sal*(0.225)-636.13)-valdepe;
else
		irrf=(sal*(0.275)-869.36)-valdepe;//fim irrf
  
fgts=sal*0.08;
printf("Base de calculo FGTS=%.2f\n",fgts);
printf("IRRF=%.2f\n",irrf);
printf("INSS=%.2f\n",inss);
sald=sal-inss-irrf-desvt-desvr;
printf("Salario Descontado=%.2f\n",sald);
return 0;
}
