#include<iostream>

using namespace std;

int main()
{
	int n, r = 2;
	
	cout<<"Ingrese el valor de N: ";
	cin>>n;
	
	for (int i = 1; i < n; i++)
		r *= 2;
	
	cout<<"2^"<<n<<" es: "<<r;
}
