



#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("Coloque o valor de a: ");
	scanf("%d", &a);
	printf("Coloque o valor de b: ");
	scanf("%d", &b);
	printf("Coloque o valor de c: ");
	scanf("%d", &c);
	printf("Coloque o valor de d: ");
	scanf("%d", &d);
	
	
	
	if(b > c && d > a && c+d > a+b && c > 0 && d > 0 && a%2==0)
	printf("Valores aceitos.");
	else
	printf("Valores nao aceitos.");
}
