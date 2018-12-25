#include <stdio.h>
#include <cs50.h>

int invalid(int n);

void pyramid(int n);


int main(void){
	printf("Give me a int number between 0 and 23\n");
	
	int n;	

	do{
		n = get_int("Number: \n");
	}
	while(invalid(n));

	pyramid(n);
}


int invalid(int n){
	if(n < 0 || n > 23){
		//printf("Number given is invalid\n");
		return 1;
	}
	else{
		//printf("Ok!\n");
		return 0;
	}
}


void pyramid(int n){
	for(int j = 1; j <= n; j++){

		// left pyramid spaces
		for(int k = n; k > j; k--){	
			printf(" ");
		}

		// left pyramid hashes
		for(int l = 0; l < j; l++){	
			printf("#");
		}

		printf("  "); //gap

		// right pyramid hashes
		for(int m = 0; m < j; m++){	
			printf("#");
		}

	printf("\n");
	}
}





