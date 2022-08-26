#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, media=0.0;
	printf("primeira nota:");
	scanf("%f", &n1);
	printf("Segunda nota:");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	printf("A media e: %f",media);
	
	
	if(media>=7)
		printf("aprovado\n");
	else
		if(media<=5);
			printf("reprovado\n");
	return 0;

}
