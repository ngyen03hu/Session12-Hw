#include<stdio.h>

	int Max(int arr[],int size){
		int max = arr[0];
		
		for(int i=0;i<size;i++){
			if(arr[i]>max){
				max  = arr[i];
			}
		}
		return max;
	}


int main(){
	int arr[]={5,4,6,9};
	int size = sizeof(arr)/sizeof(int);
	printf("so lon nhat trong mang la : %d",Max(arr,size));
	return 0;
}
