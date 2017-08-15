#include <stdio.h>


int main(int argc, char const *argv[])
{
	int horas, minutos;

	printf("Digite as horas: \n");
	scanf ("%d:%d", &horas, &minutos);
	if (horas > 24){
		printf("?");
	} 
	else {
		if (horas > 12){
			printf("%d:%d P.M.", horas-12, minutos);
		} else if (horas == 12 ){
			printf ("%d:%d A.M.", horas, minutos);

		} else {
			printf ("%d:%d A.M.", horas, minutos);
		}
	}
	return 0;
}