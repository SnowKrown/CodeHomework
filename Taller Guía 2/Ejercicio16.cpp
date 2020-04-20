#include<iostream>

using namespace std;
void printNumbers (bool drawPairs);

int main()
{
	cout<<"IMPARES:"<<endl;
	printNumbers(false);
	cout<<endl;
	cout<<"PARES:"<<endl;
	printNumbers(true);
	cout<<endl;
	system("pause");
}

void printNumbers(bool drawPairs)
{
	for(int i = 1; i < 100; i++)
	{
		bool isPair = i % 2 == 0;
		
		if (drawPairs && isPair)
			cout<<"P: "<<i<<endl;
			
		if (!drawPairs && !isPair)
			cout<<"I: "<<i<<endl;
	}
}
