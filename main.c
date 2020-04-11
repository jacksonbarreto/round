#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "src/round.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float number=3.55682;
	int precision=2;
	setlocale(LC_ALL,"");
	
	printf("\nNúmero original: \t\t %f \nNúmero arredondado: \t\t %f",number, myRound(number,precision));
	printf("\nNúmero arredondado para Inteiro: %d\n\n", roundInteger(number));
	
	return 0;
}
