//Solucion de 25 pts
#include <stdio.h>
#include <algorithm>
#define lli long long int

using namespace std;

int n;

int main(){
	scanf("%d",&n);
	lli x=-1,y=-1,a=-1,b=-1;
	lli x1=1<<30,y1=1<<30;
	for(int i=0;i<n;i++){
		scanf("%lld %lld",&a,&b);
		x=max(x,a);
		y=max(y,b);
		x1=min(x1,a);
		y1=min(y1,b);
	}
	printf("%lf %lf\n",(double)(x-x1)*(y-y1),(double)(x-x1)*(y-y1));
	return 0;
}
