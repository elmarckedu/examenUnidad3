#include <iostream>



using namespace std; 

int main() 

{
    double n,m,k;
	double n1,m1,k1;
	int totpiz=0;
	cout<<"comentario 1";
	cin>>n;

	cin>>m;
	
	cin>>k;
	if(0<=n && n<=100){
		n1=n*0.25;
	}
	if(0<=m && m<=100){
		m1=m*0.50;
	}
	if(0<=k && k<=100){
		k1=k*0.75;
	}
	totpiz=n1+m1+k1+1;
	cout<<totpiz;
	
	return 0;
}
