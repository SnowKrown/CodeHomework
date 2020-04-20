#include<iostream>

using namespace std;

int main()
{
	int max = -1;
	
	for (int i = 0; i < 20; i++)
	{
		int v;
		cout<<"Ingrese el numero "<<i + 1<<": ";
		cin>>v;
		
		if (v > max)
			max = v;
	}
	
	cout<<endl<<"El numero mayor ingresado es: "<<max<<endl;
	
	system("pause");
}
