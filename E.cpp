#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int a,b,c;
int n;
double sum[300005];
double memo[300005];

int solve(int a){
	if(a>n+1) return n+2;
	return a;
}

int main(){
	scanf("%d %d %d %d",&n,&a,&b,&c);
	for(int i=1;i<=n;i++){
		scanf("%lf",&sum[i]);
		sum[i]+=sum[i-1];
	}
	memo[n+2]=-1LL<<60;
	for(int id=n+1;id>=1;id--){
		if(id==n+1){
			memo[id] = 0.0;
			continue;
		}
		memo[id] = memo[solve(id+a)] + (sum[solve(id+a-1)]-sum[id-1])/a;
		memo[id] = max(memo[id], memo[solve(id+b)] + (sum[solve(id+b-1)]-sum[id-1])/b);
		memo[id] = max(memo[id], memo[solve(id+c)] + (sum[solve(id+c-1)]-sum[id-1])/c);
	}
	double res = memo[1];
	if(res>=0.0)
		printf("%.2lf\n",res);
	else printf("Lo siento amigo\n");
	return 0;
}
