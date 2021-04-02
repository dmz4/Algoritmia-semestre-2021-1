#include <bits/stdc++.h>

/* 
Link del problema: https://omegaup.com/arena/problem/A-jugar-2048/#problems

Problema resuelto en la clase del dia 31/03/2021 por el profe Carlos

*/
using namespace std;

int main(){
	
	vector <int> a;
	int n=0, temp=0;
	cin>> n;
	int t=0;
	cin>> t;
	a.push_back(t);
	
	for(int i=1; i<n; i++)
	{
		cin>>temp;
		
		int j = a.size();
		a.push_back(temp);
		
		while(a[j]==a[j-1])
		{
			a[j-1]=a[j]*2;
			a.pop_back();
			j--;
		}
			
	}
	
	cout<<a.size()<<endl;
	
	for(int i=a.size()-1; i>=0; i=i-1)
	{
		cout<<a.at(i)<<endl;
	}
	
	return 0;
}
