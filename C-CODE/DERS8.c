#include<stdio.h>
#include<math.h>
/*int main(){
	
	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 tane sayi giriniz:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetik =(a+b+c+d+e)/5.0;
	printf("girdiðiniz sayilarin aritmetik ortalamasi %2.f",aritmetik);
	
	
	
	return 0;
	
}*/  //kökler ax2+bx+c
int main(){
	int a,b,c;
	float x1,x2;
	float delta;
	printf("denklemin a'sini giriniz:");
	scanf("%d",&a);
	printf("denklemin b'sini giriniz:");
	scanf("%d",&b);
	printf("denklemin c'sini giriniz:");
	scanf("%d",&c);
	
	delta = b*b-4*a*c;
	x1= (-b+(sqrt(delta)))/2*a; //sqrt karekökünü alýr
	x2= (-b-(sqrt(delta)))/2*a;
	printf("denklemin 1.koku %2.f\n , ikinci koku %2.f dir",x1,x2);
	
	
}
