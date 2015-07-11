#include <stdio.h>
#include <ctype.h>

using namespace std;

char cad[4];

int solve(){
	int res=0;
	if(isdigit(cad[1])) res += cad[1]-48;
	else res+= 10 + cad[1]-'A';
	if(isdigit(cad[0])) res += (cad[0]-48)<<4;
	else res+=(10+cad[0]-'A')<<4;
	return res;
}

int main(){
	unsigned int a;
	char b;
	int cont=0;
	while(scanf("%c",&b)!=EOF){
		if(b=='\n'){
			printf("\n");
			continue;
		}
		if(!isdigit(b) && b!='A' && b!='B' && b!='C' && b!='D' && b!='E' && b!='F') continue;
		cad[cont++]=b;
		if(cont==2){
			printf("%c",solve());
			cad[0]=cad[1]='\0';
			cont=0;
		}
	}
	return 0;
}
