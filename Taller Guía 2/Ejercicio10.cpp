#include<iostream>

using namespace std;

string getRomanNumber(int num);

int main()
{
	int dec;
	
	while (dec < 1 || dec > 99)
	{
		cout<<"Ingrese el numero decimal: ";
		cin>>dec;
		
		if (dec > 0 && dec < 100)
			cout<<"El numero "<<dec<<" es "<<getRomanNumber(dec)<<" en romano."<<endl;
		else
			cout<<"Debe ingresar un numero entre 1 y 99"<<endl<<endl;
	}
}

string getRomanNumber(int num)
{
	string res = "";
    
    switch (num / 10)
	{
        case 1: res += "X"; break;
        case 2: res += "XX"; break;
        case 3: res += "XXX"; break;
        case 4: res += "XL"; break;
        case 5: res += "L"; break;
        case 6: res += "LX"; break;
        case 7: res += "LXX"; break;
        case 8: res += "LXXX"; break;
        case 9: res += "XC"; break;
    }
    
    switch ((num % 10) / 1)
	{
        case 1: res += "I"; break;
        case 2: res += "II"; break;
        case 3: res += "III"; break;
        case 4: res += "IV"; break;
        case 5: res += "V"; break;
        case 6: res += "VI"; break;
        case 7: res += "VII"; break;
        case 8: res += "VIII"; break;
        case 9: res += "IX"; break;
    }
	
	return res;
}
