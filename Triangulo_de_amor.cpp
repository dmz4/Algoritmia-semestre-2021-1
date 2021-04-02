#include <bits/stdc++.h>

/*
Link del problema: https://omegaup.com/arena/problem/Triangulo-de-amor/#problems

Resuelto el dia 31/03/2021 por el profe Carlos

*/


using namespace std;

int main(){
	
	int n=0;
	cin>>n;
	int a[n];
	
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=1; i<=n; i++)
	{
		if(a[a[a[i]]]==i)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	
	return 0;
}
