#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	
    char nome[100];
	int anoatual, anonascimento, idade;
	int dia, mes;
	
setlocale (LC_ALL, "Portuguese");

	printf("Digite seu nome: ");
	scanf("%[^\n]", nome);
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anonascimento);
	
	printf("Digite seu m�s de nascimento (1-12): ");
	scanf("%d", &mes);
	
	printf("Digite seu dia de nascimento: ");
	scanf("%d", &dia);
	
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoatual);
	
	idade = anoatual - anonascimento;
	system ("color 05");
	
	setlocale (LC_ALL, "Portuguese");
	printf("Ol�, %s, como vai? \n", nome);
	
	printf("Voc� tem: %d anos. \n", idade);
	
	if ((mes==3 && dia>=21) || (mes==4 && dia<=20))
	{
		printf("Seu signo � �ries: ");
	}
	if ((mes==4 && dia>=21) || (mes==5 && dia<=20 ))
	{
		printf("Seu signo �: Touro.");
	}
	if ((mes==5 && dia>=21) || (mes==6 && dia<=20))
	{
		printf("Seu signo �: G�meos.");
	}
	if ((mes==6 && dia>=21) || (mes==7 && dia<=22))
	{
		printf("Seu signo �: C�ncer.");
	}
	if ((mes==7 && dia>=23) || (mes==8 && dia<=22))
	{
		printf("Seu signo �: Le�o.");
	}
	if ((mes==8 && dia>=23) || (mes==9 && dia<=22))
	{
		printf("Seu signo �: Virgem. ");
	}
	if ((mes==9 && dia>=23) || (mes==10 && dia))
	{
		printf("Seu signo �: Libra.");
	}
	if ((mes==10 && dia>=23) || (mes==11 && dia<=21))
	{
		printf("Seu signo �: Escorpi�o.");
	}
	if ((mes==11 && dia>=22) || (mes==12 && dia<=21))
	{
		printf("Seu signo �: Sagit�rio.");
	}
	if ((mes==12 && dia>=22) || (mes==1 && dia<=20))
	{
    	printf("Seu signo �: Capric�rnio.");
	}
	if ((mes==1 && dia>=21) || (mes==2 && dia<=18))
	{
		printf("Seu signo �: Aqu�rio.");
	}
	if ((mes==2 && dia>=19) || (mes==3 && dia<=20))
	{
		printf("Seu signo �: Peixes.");
	}
	
	
	
	
	
	return 0;
}