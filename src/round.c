#include "round.h"

long int roundInteger(double number)
{
	long int roundNumber;
	
	roundNumber = (int) number;
	number -= roundNumber;
	if(number > 0.5)
		roundNumber++;
	
	return roundNumber;
}
double myRound(double number,const unsigned short int precision)
{
	unsigned short int coefficient, lastNumber;
	
	if(isValidRange(precision))
		return number;
	
	coefficient = defineCoefficient(precision);
	number *= coefficient*10;	
	
	lastNumber = (unsigned short int) number % 10;	
	number = (long int) (number/10);
	
	if(lastNumber > 5)
		number++;	
	
	number /= coefficient;	
	
	return number;
}
static unsigned short int defineCoefficient(const unsigned short int precision)
{
	int i, coefficient;
	
	for(i=1, coefficient=10; i < precision; i++)
		coefficient *=10;
		
	return coefficient;
}
static unsigned short int isValidRange(const unsigned short int number)
{	
	return (number < 1 || number > 5 );
}
