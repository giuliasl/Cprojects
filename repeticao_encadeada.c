/*mostre os numeros divisíveis por 2 e 3 no intervalo de 1 a 6. A estrutura
WHILE irá variar de 2 a 3. Já a estrutura FOR tera uma variável de 
controle que ira variar de 1 a 6 para verificar quais numeros sao divisiveis*/
#include<stdio.h>
#include<conio.h>
int main ()
{
	int div=2,r, n;
	while(div<=3){
		for(n=1;n<=6;n++){
			r=n % div;
			if(r==0){
				printf("\nDivisivel por %d: %d", div, n);
			}
		}
	div=div+1;//ou div++
	}
	
}
