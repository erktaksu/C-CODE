#include<stdio.h>

int main(){
	int vize1,vize2,final;
	float okulortalama;
	float dersort;
	printf("1.vize:");
	scanf("%d",&vize1);
	printf("2.vize:");
	scanf("%d",&vize2);
	printf("final:");
	scanf("%d",&final);
	printf("universite ort giriniz:");
	scanf("%d",&okulortalama);
	dersort= (vize1*3/10.0 +vize2*3/10.0+final*4/10.0 );
	
	
	if(dersort >=90){
		printf("harf notunuz AA \n Ders ortalamaniz : %f",dersort);
		
		
		
		
	}
	else if (dersort>=85 && dersort <90) {              //85 ten büyük veya eþitse ve 90 dan küçükse bu durumu uygula
		printf("harf notunuz BA \n Ders ortalamaniz : %f",dersort);

	}
	else if (dersort>=80 && dersort <85) {
		printf("harf notunuz BB \n Ders ortalamaniz : %f",dersort);

	}
	else if (dersort>=75 && dersort <80) {
		printf("harf notunuz CB \n Ders ortalamaniz : %f",dersort);

	}
	else if (dersort>=70 && dersort <75) {
		printf("harf notunuz CC \n Ders ortalamaniz : %f",dersort);
          if (okulortalama<2.5){
          	printf("dersi tekrar al");
		  }
	}
	else if (dersort>=65 && dersort <70) {
		printf("harf notunuz DC \n Ders ortalamaniz : %f",dersort);
         if (okulortalama<2.5){
          	printf("dersi tekrar al");
		  }
	}
		else if (dersort>=60 && dersort <65) {
		printf("harf notunuz DD \n Ders ortalamaniz : %f",dersort);
         if (okulortalama<2.5){
          	printf("dersi tekrar al");
		  }
	}
	else{
        printf("harf notunuz FF  \n Ders ortalamaniz : %f\n",dersort);	
	    printf("dersten kaldiniz");
}
	
	return 0;
}
