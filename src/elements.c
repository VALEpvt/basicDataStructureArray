#include<stdio.h>
#include"operation.h"
int print_element(int array[],int sizeOfArry, int position)
{
	int i=0,j=0;
	if(sizeOfArry > 1024 )
	{
		printf("size of the array should be 1024\n");
		return OPER_FAIL_ARRAY_FULL;
	}
	for(i=0;i<sizeOfArry;i++)
	{ 
loop1:
		for( j=0;j<i;j++)
		{
			if(array[i]==0)
			{
				printf("please enter non zero number\n");
				array[i]=array_element(i); // input array element function
				goto loop1;
			}
			if(array[j]==array[i])
			{
				return OPER_FAIL_ARRAY_DUP;
			}
		}
	}
loop:
	printf("enter position of element number\n");
	if(position < 0 || position > sizeOfArry-1)
	{
		position=index_input(position);
		goto loop;
	}
	printf("%d\n",array[position]);
	return OPER_SUCCESS;
}
