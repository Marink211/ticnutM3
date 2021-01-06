#include <stdio.h>
#include "isort.h"
#define SIZE 50



void shift_element(int* arr , int i ){
	arr = arr + i ; 
	for(int j = 1 ; j <= i ; j++ ){
		int *temp = arr; 
		arr = arr - 1 ; 
		*temp = *(arr);
	}
		*arr =1 ; 
}


void insertion_sort(int* arr , int len){
	for(int i = 1 ; i < len ; ++i){
		int temp = *(arr+i);
		int j= 0 ; 
		for(j = i-1 ; j >= 0 && *(arr+j) > temp ; --j){
			shift_element(arr+j,1);
		}
		*(arr+j+1) =temp;
	}
}

void print (int *arr){
	int i = 0 ; 
	for( i =0 ; i < SIZE -1 ; i++){
		printf("%d," ,*(arr+i));
	}
	printf("%d\n", *(arr+i));

}

