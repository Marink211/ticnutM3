#include <stdio.h>
#include "isort.h"
#define SIZE 50 

int main(){
	int arr[SIZE] ={0};
	int *curr = arr; 
				
	for(int i = 0 ; i < SIZE ; i ++ ){
		scanf("%d",(curr++));
	}
	
	
	insertion_sort( arr , SIZE);
	print( arr);
}

