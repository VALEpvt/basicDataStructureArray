#ifndef __OPERATIONS_H_
#define __OPERATIONS_H_

#include <stdio.h>

#define ARRAY_MAX_SIZE 1024
#define OPER_SUCCESS 0
#define OPER_FAIL_ARRAY_FULL -1
#define OPER_FAIL_ARRAY_EMPTY -2
#define OPER_FAIL_ARRAY_DUP -3
#define OPER_FAIL_ARRAY_INVALID -4
#define OPER_FAIL_ARRAY_UNKNOWN_ERROR -0XFF

int add_element(int array[], int sizeOfArry, int element);
int delete_element(int array[], int sizeOfArry, int element);
int print_element(int array[], int sizeOfArry, int position);
int print_array(int array[], int sizeOfArry);

#endif


