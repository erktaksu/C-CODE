#include<stdio.h>
#include<stdbool.h> //true i�in k�t�phaneyi ekle
int main(){
	
	//d�ng�lerde break sonland�rc�
	int toplam=0;
	int i;
	int sayi;
	
	for (i=0; true;  i++){
		printf("sayiyi giriniz: (cikmak i�in -1 basiniz.)");
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
			
		}
		toplam+=sayi;
		
	}
	printf("%d",toplam);
	
	
	
	
	
	return 0;
}
