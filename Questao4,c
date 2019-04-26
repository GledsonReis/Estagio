#include <stdio.h>
#define n 8

void BubbleSort(int *a){
	int i,trocado;
	do{
		trocado = 0;
		for(i = 0; i <= n-2; i++){
			if(a[i] > a[i + 1]){
				int x =  a[i+1];
				a[i+1] = a[i];
				a[i] = x;
				trocado = 1;
			}
		}
	}while(trocado);
}

int main(){
	
	int a[n] = {5,3,2,4,7,1,0,6};
	
	BubbleSort(a);
	
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
		if((i%10==0)&&(i!=0)){
			printf("\n");
		}
	}
	
	return 0;
}
