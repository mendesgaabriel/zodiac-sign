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
	
	printf("Digite seu mês de nascimento (1-12): ");
	scanf("%d", &mes);
	
	printf("Digite seu dia de nascimento: ");
	scanf("%d", &dia);
	
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoatual);
	
	idade = anoatual - anonascimento;
	system ("color 05");
	
	setlocale (LC_ALL, "Portuguese");
	printf("Olá, %s, como vai? \n", nome);
	
	printf("Você tem: %d anos. \n", idade);
	
	if ((mes==3 && dia>=21) || (mes==4 && dia<=20))
	{
		printf("Seu signo é Áries: ");
	}
	if ((mes==4 && dia>=21) || (mes==5 && dia<=20 ))
	{
		printf("Seu signo é: Touro.");
	}
	if ((mes==5 && dia>=21) || (mes==6 && dia<=20))
	{
		printf("Seu signo é: Gêmeos.");
	}
	if ((mes==6 && dia>=21) || (mes==7 && dia<=22))
	{
		printf("Seu signo é: Câncer.");
	}
	if ((mes==7 && dia>=23) || (mes==8 && dia<=22))
	{
		printf("Seu signo é: Leão.");
	}
	if ((mes==8 && dia>=23) || (mes==9 && dia<=22))
	{
		printf("Seu signo é: Virgem. ");
	}
	if ((mes==9 && dia>=23) || (mes==10 && dia))
	{
		printf("Seu signo é: Libra.");
	}
	if ((mes==10 && dia>=23) || (mes==11 && dia<=21))
	{
		printf("Seu signo é: Escorpião.");
	}
	if ((mes==11 && dia>=22) || (mes==12 && dia<=21))
	{
		printf("Seu signo é: Sagitário.");
	}
	if ((mes==12 && dia>=22) || (mes==1 && dia<=20))
	{
    	printf("Seu signo é: Capricórnio.");
	}
	if ((mes==1 && dia>=21) || (mes==2 && dia<=18))
	{
		printf("Seu signo é: Aquário.");
	}
	if ((mes==2 && dia>=19) || (mes==3 && dia<=20))
	{
		printf("Seu signo é: Peixes.");
	}
	
	
	
	
	
	return 0;
}