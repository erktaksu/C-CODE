#include<stdio.h>  //giri� ��k�� k�t�phane
#define PI 3.14 //PI YAZDI�IMIZDA 3.14 KOYCAK SAB�T DE�ER


int main(){
	
	//scanf printf giri� ��k��
	int yaricap;
	float hacim;
	
	printf("kurenin yari�apini giriniz:");
	scanf("%d",&yaricap); //yaricapa de�er girdi
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("kurenin hacmi %.2f dir",hacim);
	
	
	
	
	return 0;
}
