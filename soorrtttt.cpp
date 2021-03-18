#include <stdio.h>

int main (){
	int a[5]={2,4,9,8,7};
	int temp;
	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			if (a[j] < a[i])     //<> only this can change ascending into descending
			{
		
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	printf("descending:\n");
	for (int i=0; i<5; i++)
        printf("%d\n", a[i]);
	
	}
	
	
	

	
