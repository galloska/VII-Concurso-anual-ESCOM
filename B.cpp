#include <stdio.h>
#define lli long long int
#define MOD 1000000007

using namespace std;

int sum;
int num[1005];
int n,k;

lli pot(lli a,lli b){
	lli res = 1;
	while(b){
		if(b&1) res= (res*a)%MOD;
		b >>= 1;
		a=(a*a)%MOD;
	}
	return res;
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	/*int aux2=0,aux=sum;
	for(int i=0;i<k;i++){
		aux2=0;
		for(int j=0;j<n;j++){
			num[j] = aux - num[j];
			aux2+=num[j];
		}
		aux=aux2;
	}
	printf("%d\n",aux%MOD);*/
	lli res = pot(n-1,k);
	printf("%lld\n",(res%MOD*sum%MOD)%MOD);
	return 0;
}
