#include<iostream>

using namespace std;

float calculateHigherNote(int a, int b, int c);

int main()
{
	float a, b, c;
	
	cout<<"Ingrese la primera nota: ";
	cin>>a;
	cout<<"Ingrese la segunda nota: ";
	cin>>b;
	cout<<"Ingrese la tercera nota: ";
	cin>>c;
	cout<<"La nota mayor es: "<<calculateHigherNote(a, b, c)<<endl;
}

float calculateHigherNote(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	
	if (b > a && b > c)
		return b;
		
	return c;
}
