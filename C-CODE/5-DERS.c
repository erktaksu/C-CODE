#include<stdio.h>

int main (){
	
	int x=15;
	int y=14;
	int z=5;
	//x=y+z; //ilk sa� tarafdan ba�lar i�leme
	//y=x+1; // y x e e�it olsun 1 artt�r
	//printf("%d\n",y); 
	//x=x+5; //artt�rma i�lemi
	printf("sonuc:%d\n",x);
	printf("x%d y:%d z:%d\n",--x,++y,z++); //-- 1 azalt ++ 1 artt�r z++ bu sat�rda b�yle kal di�er sat�rda 1 artt�r
	printf("x:%d y:%d z:%d\n",x,y,z);
	printf("x%d y:%d z:%d\n",x--,y--,--z);
	printf("x:%d y:%d z:%d\n",x,y,z);
	
	x = y = z+5;
	printf("x,y,z: %d",x);
	
	return 0;
}
