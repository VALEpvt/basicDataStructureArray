#include "operations.h"

int add_element(int array[], int sizeOfArray, int element);
int print_array(int array[], int sizeOfArray);

int main(){

				int array[1024] = {0, 12, 14, 15, 13, 18};
				int sizeOfArray = 6;
				int element = -10;
				int i = 0;
				int out =		add_element(array, sizeOfArray, element);
				print_array(array, sizeOfArray);


}

int add_element(int array[], int sizeOfArray, int element)
{

				int i = 0;

				/*checking sizeof an array is 0*/
				if(sizeOfArray < 1) {
								return -2;
				} 

				/*ckecking sizeof an array is above Array MAX size*/
				if (sizeOfArray > 1024) {
								return -4;
				}

				/*cheking the element value is Zero*/
				if(element == 0) {

								return 0xFF;
				}


				/*Cheking the inserted element already existing in Array */
				for(i = 0; i < sizeOfArray ; i++){
								if(element == array[i])
												return -3;
				}

				/*inserting element in to Array*/
				for(i = 0; i < sizeOfArray; i++){
								if(array[i] == 0){
												array[i] = element;
												return 0;
												break;
								}
				}
				/*Return statement when Array is full*/
				return -1;
}

int print_array(int array[], int sizeOfArray)
{
				int i = 0;
				/*checking sizeof an array is 0*/
				if(sizeOfArray < 1) {
								return -2;
				}

				for(i = 0; i < sizeOfArray; i++){
								printf(" %d\n", array[i]);
				}

				return 0;
}



