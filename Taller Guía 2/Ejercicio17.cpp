#include<iostream>

using namespace std;

int main()
{
	double a = 0, b = 1, x = 0;
	
	for (int i = 0; i < 100; i++)
	{
		x = a;
		a = b;
		b = x + a;
		
		cout<<"F: "<<a<<endl;
	}
	
	system("pause");
}
