#include<iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		switch (i)
		{
			case 1: cout<<"Uno"<<endl; break;
			case 2: cout<<"Dos"<<endl; break;
			case 3: cout<<"Tres"<<endl; break;
			case 4: cout<<"Cuatro"<<endl; break;
			case 5: cout<<"Cinco"<<endl; break;
			case 6: cout<<"Seis"<<endl; break;
			case 7: cout<<"Siete"<<endl; break;
			case 8: cout<<"Ocho"<<endl; break;
			case 9: cout<<"Nueve"<<endl; break;
			default: cout<<"Diez"<<endl<<endl; break;
		}
	}
}
