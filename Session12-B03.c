#include<stdio.h>

	long long tinhGiaithua(int n){
		if(n<0){
			printf("giai thua  khong xach dinh cho so am\n ");
			return -1;
		}
		long long giaiThua = 1;
		for(int i = 1; i<= n ;i++ ){
			giaiThua *=i;
		}
		return giaiThua;
	}

int main(){
	int number = 5;
	
	long long ketQua = tinhGiaithua(number);
	if(ketQua != -1){
		printf("giai thua cua %d la : %lld",number,ketQua);
	}
	
	return 0;
} 
