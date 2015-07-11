#include <stdio.h>
#include <vector>
#include <utility>
#define MAXN 10000000
#define pii pair<int,int>

using namespace std;


int BIT[MAXN+2];
int n;
vector <pii> w;

void update(int a){
	while(a<=MAXN){
		BIT[a]++;
		a += a&(-a);
	}
}

int query(int a){
	int res=0;
	while(a>0){
		res +=BIT[a];
		a -= a&(-a);
	}
	return res;
}

int busbin(int ini,int fin,int val){
	int med;
	while(ini<fin){
		med = (ini + fin )/2;
		int aux = query(med);
		if(aux>=val && query(med-1)<val) return med;
		else if(aux>=val) fin = med-1;
		else ini = med+1;
	}
	return ini;
}

int main(){
	int a,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		w.push_back(pii(a,b));
	}
	for(int i=0;i<n;i++){
		if(w[i].first==1) update(w[i].second);
		else{
			int id = busbin(1 , MAXN , w[i].second);
			printf("%d %d\n",id,query(id));
		}
	}
 	return 0;
}
