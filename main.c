#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n){
	
	if(n ==0)
		return 1;
	return n * factorial(n-1);
}



int main(int argc, char *argv[]) {
	int number;
	printf("ENTER THE VALUE YOU WANT TO CALCULATE\n");
	scanf("%d",&number);
	
	printf("RESULT : %d\n",factorial(number));
	
	return 0;
}
