#include<stdio.h>  //giriþ çýkýþ kütüphane
#define PI 3.14 //PI YAZDIÐIMIZDA 3.14 KOYCAK SABÝT DEÐER


int main(){
	
	//scanf printf giriþ çýkýþ
	int yaricap;
	float hacim;
	
	printf("kurenin yariçapini giriniz:");
	scanf("%d",&yaricap); //yaricapa deðer girdi
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("kurenin hacmi %.2f dir",hacim);
	
	
	
	
	return 0;
}
