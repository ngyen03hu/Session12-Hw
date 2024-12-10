#include<stdio.h>
	void number(int arr[],int n ){
	
		for (int i = 0;i<n;i++){
			printf("%d\n",arr[i]); 
		} 
	} 


int main(){
	int arr[]={4,5,6,2,}; 
	int n = sizeof(arr)/sizeof(int);
	number(arr,n); 
	return 0; 
} 
