#include"operation.h"
#include<stdio.h>

int delete_element(int array[],int sizeOfArry, int element)
{
	int i=0;
	if(sizeOfArry > 1024 )
	{
		printf("size of the arrayay should be 1024\n");
		return OPER_FAIL_ARRAY_FULL;
	}
	if(element >= sizeOfArry+1 || element <=0)    
	{
		printf("Delete not possible\n");
	}
	else
	{
		for(i = element-1 ; i<sizeOfArry -1 ; i++)
		{
			array[i]= array[i+1];
		}
		printf("after deleting an element\n");
		for(i=0; i < sizeOfArry-1; i++)
		{
			printf("%d\n", array[i]);
		}        
	}    
	return OPER_SUCCESS;
}

