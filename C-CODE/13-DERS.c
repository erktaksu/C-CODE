//Switch case
#include<stdio.h>

int main(){
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("islemler\n1:Para Cekme\n2=Para Yatirma \n3=Havale Yapma\n4=Bakiye Sorgulama\n5=Kart �ade\n\n\n\n\n");

    printf("islemi giriniz:");
    scanf("%d",&islem);

    switch(islem){
    	
    	case 1:     //islem 1 olunca bunu uygula
    		printf("Bakiyeniz:%d\n",bakiye);
    		printf("cekilecek tutar:");
    		scanf("%d",&tutar);
    		if(tutar>bakiye){
    			printf("yetersiz bakiye\n");		
			}
			else{
			
			
          bakiye -=tutar;     //bakiyeden tutar� ��kard�
          printf("bakiyeniz:%d",bakiye);
          
      }
    	break;  //case1 de bitir i�lemi
    	case 2:
    		printf("Bakiyeniz:%d\n",bakiye);
    		printf("yatirilacak tutar:");
    		scanf("%d",&tutar);
    		if(tutar>bakiye){
    			printf("yetersiz bakiye\n");		
			}
          bakiye +=tutar;
          printf("bakiyeniz:%d",bakiye);
    	break;
    	case 3:
    			printf("Bakiyeniz:%d\n",bakiye);
    		printf("havale yap�lacak tutar:");
    		scanf("%d",&tutar);
    		if(tutar>bakiye){
    			printf("yetersiz bakiye\n");		
			}
          bakiye -=tutar;
          printf("bakiyeniz:%d",bakiye);
    	break;
    	case 4:
    		printf("bakiyeniz:%d",bakiye);
    		break;
    
		
    	case 5:
		printf("kart iade edildi.\n");
		break;
		default: //hi�biri de�ilse bunu uygula
		printf("bilinmeyen islem");
		break;
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
