#include <stdio.h>
#include "isort.h"
#define SIZE 50 

int main(){
	int arr[SIZE] ={0};
	int *curr = arr; 
//copy the array from txt 				
	for(int i = 0 ; i < SIZE ; i ++ ){
		scanf("%d",(curr++));
	}
	
	
	insertion_sort( arr , SIZE);
	print( arr);
}

