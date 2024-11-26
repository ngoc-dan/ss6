#include <stdio.h>
int main(){
	int sum;
	for(int n=1;n<=9;n++){
	for(int i=1;i<=10;i++){
		sum=n*i;
		printf("%dx%d=%d \n",n,i,sum);
	}
}

	return 0;
}
