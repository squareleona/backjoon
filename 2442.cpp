#include <stdio.h>


int main(){
	int a,b;
	scanf("%d",&a);
	for(int o = 0;o<a-1;o++){
		for(int j = 1;j<a-o;j++){
		printf(" ");
		}
		printf("\n");
	}
	for(int y= 0;y<a;y++){
		for(int i = 0;i<2*a-1;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

