#include<iostream>

using namespace std;

int main()
{
	int h = 0, e = 0, t;
	cout<<"Ingrese las horas que trabajo el empleado: ";
	cin>>h;
	cout<<endl;
	
	if (h > 8)
	{
		e = h - 8;
		int te = (25000 * e);
		t = 80000 + te;
		
		cout<<"El trabajador gano "<<t<<endl<<endl;
		
		if (te > 80000)
			cout<<"El trabajador gano mas por horas extras que por horario normal."<<endl;
		else
			cout<<"El trabajador gano "<<te<<" en horas extras."<<endl;
			
	}
	else
	{
		t = 10000 * h;
		cout<<"El trabajador gano "<<t<<" sin ninguna hora extra."<<endl<<endl;
	}
	
	system("pause");
}
