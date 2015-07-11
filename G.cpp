//Solucion de 76 pts
#include <stdio.h>

using namespace std;

char cad[20005];
char cad2[20005];
int num[200005];
int n,a,k;

int main(){
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		num[a] = i;
	}
	scanf("\n%s\n%s",cad,cad2);
	for(int i=1;i<=n;i++)
		printf("%d ",num[i]);
	printf("\n");
	printf("%s\n",cad);
	return 0;
}
