#include<stdio.h>
void dikdortgen_cizme(int kisa,int uzun){
	int i,j;
	for(i=1;i<=uzun;i++){
		for(j=1;j<=kisa;j++){
		if(i==1||i==uzun||j==1||j==kisa){
			printf("*");
		}
		else{
			printf(" ");
		}
		}
		printf("\n");
		
	}
	}	
	
int main(){
	
	int a,b;
	
	printf("dortgenin kenar uzunluklarini giriniz: ");
	scanf("%d",&a);
	scanf("%d",&b);
	dikdortgen_cizme(a,b);
	
	
	
	return 0;
}
