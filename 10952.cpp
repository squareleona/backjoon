#include <stdio.h>


int main(){
	int a,b,c;
	int max = 0;
	scanf("%d %d \n %d",&a,&b,&c);
	max = b+c;
	if (max>60){
	a = a+1;
	max = max-60;
}
	printf("%d %d",a,max);
	return 0;
}

