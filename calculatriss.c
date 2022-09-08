#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	
	float A;
	float B;
	float C;

	
	printf("les operateur :\n");
	
	printf("la somme ( + ) click sur 1.\n");
	printf("le moins ( - ) click sur 2.\n");
	printf("le scalaire ( * ) click sur 3.\n");
	printf("le division ( / ) click sur 4.\n");
		printf("choisis:");
	scanf("%d",&n);

	switch(n){
		case  1 :
		    printf("entrie valeur A:");
		scanf("%f",&A);
	     	printf("entrie valeur B:");
		scanf("%f",&B);
	C=A+B;
			printf("la somme:%f",C);break;
        case  2 :
		    printf("entrie valeur A:");
		scanf("%f",&A);
	     	printf("entrie valeur B:");
		scanf("%f",&B);
	C=A-B;
			printf("la somme:%f",C);break;
		case  3 :
		    printf("entrie valeur A:");
		scanf("%f",&A);
	     	printf("entrie valeur B:");
		scanf("%f",&B);
	C=A*B;
			printf("la somme:%f",C);break;
		case  4 :
		    printf("entrie valeur A:");
		scanf("%f",&A);
	     	printf("entrie valeur B:");
		scanf("%f",&B);break;
	C=A/B;
			printf("la somme:%f",C);

		
	}

return 0;
}
