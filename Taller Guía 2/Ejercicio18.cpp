#include<iostream>

using namespace std;

int main()
{
	int n, res;
	
	cout<<"Ingrese el valor de N: ";
	cin>>n;
	res = n;
	
	for (int i = 1; i < n; i++)
		res *= i;
	
	cout<<"El factorial de "<<n<<" es: "<<res<<endl;
	
	system("pause");
}
