#include <stdio.h>

int main (){
	int n[10];
	for(int j=0;j<10;j++)
	{
		
		scanf("%d \n",&n[j]);
	}
	
	for(int j=0;j<10;j++)
	{
		printf("Element[%d]=%d \n",j,n[j]);
	}
	
	
    printf("array of 2 is %d", n[2]);
    return 0;
	}

