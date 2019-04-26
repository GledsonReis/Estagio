#include <stdio.h>
#include <string.h>

int main(){
	int i,cont = 0;
	char p[] = "paralelepípedo";
	
	for(i = 0; i < strlen(p); i++){
		if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'){
			cont++;
		}
	}
	printf("Quantidade de vogais: %d", cont);
	return 0;
}
