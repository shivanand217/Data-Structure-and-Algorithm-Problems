#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin>>a>>b;
	int vla = sqrt(a);
	if(vla*(vla+1) > b) cout<<"Valera";
	else cout<<"Vladik";
}
