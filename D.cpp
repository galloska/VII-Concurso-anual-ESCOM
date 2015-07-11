//Solucion de 50 pts
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string cad;
vector <int> s;

int main(){
	cin>>cad;
	string aux=cad;
	int cont=0;
	for(int i=0;i<cad.size();i++)
		s.push_back(cad[i]-48);
	sort(s.begin(),s.end());
	cad.clear();
	for(int i=0;i<s.size();i++) cad+=(s[i]+48);
	do{
		if(cad<=aux)
			cont++;
	}while(next_permutation(cad.begin(),cad.end()));
	printf("%d\n",cont);
	return 0;
}
