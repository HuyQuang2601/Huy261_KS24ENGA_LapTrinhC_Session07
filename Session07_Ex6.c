#include <stdio.h>

int main(){
	int count=1,i=0;
	int number[5]= {3,4,7,9,2};
	for ( i= 0; i < 5; i++){
	if(number[i] %2 ==0){
		count++;
		printf("%d,", number[i]+3);
	}else{
		printf("%d,",number[i]+2);
	}
	

	}
	}


