
#include<stdio.h>
#include<conio.h>

float SquareRoot(float num);
int main(void)
{
	int number;
    float square;
    printf("\nDigita el numero:\n >> ");
    scanf("%d", &number);
	
	(number < 0) ? printf("\nRaices negativas no estan definidas.") : printf("\nLa raiz de %d es: %.5f", number, square = SquareRoot(number));
    
	getch();
}

float SquareRoot(float num)
{
    float x = num;
    int i;
    
	for(i = 0; i < 20; i ++)
    	x = (((x * x) + num) / (2 * x));
    
    return x;
}
