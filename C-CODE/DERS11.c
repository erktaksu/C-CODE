#include<stdio.h>

int main(){
	int vize1,vize2,final;
	float dersort;
	float ortalama;
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);
    printf("Finaþ notunuzu giriniz:");
	scanf("%d",&final);
	printf("uni ortalama gir:");
	scanf("%f",&ortalama);
	dersort= (vize1+vize2+final)/3.0;
	
	if(dersort>60 ){
		printf("dersten geçtiniz.");
		


	}
	else if(dersort >50 && dersort<60){
		printf("dersten bute kaldiniz.\n");
		if (ortalama<2.6){
		printf("seneye dersi tekrar al...");
	}
	}
	
	else{
		printf("kaldiniz");
	}
	
	
	return 0;
}
