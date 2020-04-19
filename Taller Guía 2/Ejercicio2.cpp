#include<iostream>

using namespace std;

bool isPrimeNumber(int number);

int main()
{
	cout<<"Ingrese un numero: ";
	int number;
	cin>>number;
	
	if (isPrimeNumber(number))
		cout<<"El numero "<<number<<" es primo."<<endl;
	else
		cout<<"El numero "<<number<<" no es primo."<<endl;
	
	return 0;
}

bool isPrimeNumber(int number)
{
	bool isPrime = false;
	
	for(int i = 2; i <= (number / 2); i++)
	{  
		isPrime = number > 1 && number % i != 0;
		
		if(!isPrime)
			break; 
	}
	
	return isPrime;
}
