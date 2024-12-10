#include<stdio.h>

	int kiemTraSoNguyen(int n){
		if(n<=1){
			return 0;
		}
		for(int i = 2;i*i<=n;i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
int main(){
	int so1 , so2;
	
	printf("MOI ban nhap so thu 1");
	scanf("%d",&so1);
	printf("MOI ban nhap so thu 2");
	scanf("%d",&so2);
	
	
	if(kiemTraSoNguyen(so1)){
		printf("%d la so nguyen to\n",so1);
	}else {
		printf("%d khong la so nguyen to\n",so1);
	}
		if(kiemTraSoNguyen(so2)){
		printf("%d la so nguyen to\n",so2);
	}else {
		printf("%d khong la so nguyen to\n",so2);
	}
	return 0;
}
