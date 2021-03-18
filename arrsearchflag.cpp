#include <stdio.h>

int main (){
	int arr[10]={2,9,7,2,5,7,0,3,8,3};
	int search=5;
	int flag=0;  // this can use for 0 for yes and 1 for 2
	
	for (int i=0; i<10; i++)
	{
		if (arr[i]==search)
		{
			printf("Element found!\n");
			flag=1;
			break;
		}
	}
	if (flag==0)
	{
		printf("Not found!");
	}
	
}
