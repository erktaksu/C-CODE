#include<stdio.h>

int main (){
	
	int x=15;
	int y=14;
	int z=5;
	//x=y+z; //ilk sað tarafdan baþlar iþleme
	//y=x+1; // y x e eþit olsun 1 arttýr
	//printf("%d\n",y); 
	//x=x+5; //arttýrma iþlemi
	printf("sonuc:%d\n",x);
	printf("x%d y:%d z:%d\n",--x,++y,z++); //-- 1 azalt ++ 1 arttýr z++ bu satýrda böyle kal diðer satýrda 1 arttýr
	printf("x:%d y:%d z:%d\n",x,y,z);
	printf("x%d y:%d z:%d\n",x--,y--,--z);
	printf("x:%d y:%d z:%d\n",x,y,z);
	
	x = y = z+5;
	printf("x,y,z: %d",x);
	
	return 0;
}
