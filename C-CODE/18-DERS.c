#include<stdio.h>
#include<stdbool.h> //true için kütüphaneyi ekle
int main(){
	
	//döngülerde break sonlandýrcý
	int toplam=0;
	int i;
	int sayi;
	
	for (i=0; true;  i++){
		printf("sayiyi giriniz: (cikmak için -1 basiniz.)");
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
			
		}
		toplam+=sayi;
		
	}
	printf("%d",toplam);
	
	
	
	
	
	return 0;
}
