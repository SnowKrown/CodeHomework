#include<iostream>
using namespace std;

void Ejercicio1();
void Ejercicio2();
void Ejercicio3();
void Ejercicio4();
void Ejercicio5();
void Ejercicio6();
void Ejercicio7();
void Ejercicio8();
void Ejercicio9();
void Ejercicio10();
void Ejercicio11();
void Ejercicio12();
void Ejercicio13();
void Ejercicio14();
void Ejercicio15();
void Ejercicio16();
void Ejercicio17();
void Ejercicio18();
void Ejercicio19();
void Ejercicio20();
void Ejercicio21();
void Ejercicio22();
void Ejercicio23();
void Ejercicio24();
void Ejercicio25();
void Ejercicio26();
void Ejercicio27();
void Ejercicio28();
void Siguiente(string anterior, string siguiente);

main()
{
	Siguiente("", "Area del triangulo");
	Ejercicio1();
	Siguiente("Area del triangulo", "Perimetro del trianguilo");
	Ejercicio2();
	Siguiente("Perimetro del trianguilo", "Suma tres numeros");
	Ejercicio3();
	Siguiente("Suma tres numeros", "Dias de la semana");
	Ejercicio4();
	Siguiente("Dias de la semana", "Edad de una persona");
	Ejercicio5();
	Siguiente("Edad de una persona", "Dias vividos de una persona");
	Ejercicio6();
	Siguiente("Dias vividos de una persona", "Captura de datos basicos");
	Ejercicio7();
	Siguiente("Captura de datos basicos", "Perimetro del cuadrado");
	Ejercicio8();
	Siguiente("Perimetro del cuadrado", "Suma, resta, multiplicacion, division");
	Ejercicio9();
	Siguiente("Suma, resta, multiplicacion, division", "IVA 16%");
	Ejercicio10();
	Siguiente("IVA 16%", "20% de un numero");
	Ejercicio11();
	Siguiente("20% de un numero", "Porcentaje hombres, mujeres");
	Ejercicio12();
	Siguiente("Porcentaje hombres, mujeres", "Porcentaje hombres, mujeres y ninos");
	Ejercicio13();
	Siguiente("Porcentaje hombres, mujeres y ninos", "Numero mayor");
	Ejercicio14();
	Siguiente("Numero mayor", "Sumar 10 a mayores de 20");
	Ejercicio15();
	Siguiente("Numero mayor", "Sumar 15 a mayores de 20 y menores de 40");
	Ejercicio16();
	Siguiente("Sumar 15 a mayores de 20 y menores de 40", "Nota del estudiante");
	Ejercicio17();
	Siguiente("Nota del estudiante.", "Numeros iguales o diferentes");
	Ejercicio18();
	Siguiente("Numeros iguales o diferentes", "Fotocopias con descuento");
	Ejercicio19();
	Siguiente("Fotocopias con descuento", "Numeros del 1 al 100 con su cuadrado");
	Ejercicio20();
	Siguiente("Numeros del 1 al 100 con su cuadrado", "Numeros del 1 al 1000 pares e impares");
	Ejercicio21();
	Siguiente("Numeros del 1 al 1000 pares e impares", "Numeros pares hasta el 50");
	Ejercicio22();
	Siguiente("Numeros pares hasta el 50", "Numeros Fibonnacci hasta el 100");
	Ejercicio23();
	Siguiente("Numeros Fibonnacci hasta el 100", "Numeros de 1 a N con factorial");
	Ejercicio24();
	Siguiente("Numeros de 1 a N con factoria", "Factorial de N");
	Ejercicio25();
	Siguiente("Factorial de N", "Numero mayor de 20 leidos.");
	Ejercicio26();
	Siguiente("Numero mayor de 20 leidos.", "2 elevado a la N");
	Ejercicio27();
	Siguiente("2 elevado a la N", "X elevado a la Y");
	Ejercicio28();
	Siguiente("X elevado a la Y", "");
	system("pause");
}

void Ejercicio1()
{
	float b, a;
	
	cout<<"Ingrese la base: ";
	cin>>b;
	
	cout<<"Ingrese la altura: ";
	cin>>a;
	
	cout<<"El area del triangulo es: "<<((b * a) / 2)<<endl;
}

void Ejercicio2()
{
	float l, a;
	
	cout<<"Ingrese el largo: ";
	cin>>l;
	
	cout<<"Ingrese el ancho: ";
	cin>>a;
	
	cout<<"El perimetro del rectangulo es: "<<(2 * (l + a))<<endl;
	
}

void Ejercicio3()
{
	float a, b, c;
	
	cout<<"Ingresa el primer numero: ";
	cin>>a;
	
	cout<<"Ingresa el segundo numero: ";
	cin>>b;
	
	cout<<"Ingresa el tercer numero: ";
	cin>>c;
	
	cout<<"La suma de los numeros es "<<(a + b + c)<<endl;
	
}

void Ejercicio4 ()
{
	cout<<"Lunes, martes, miercoles, jueves, viernes, sabado y domingo."<<endl;
}

void Ejercicio5()
{
	int a;
	cout<<"Escriba el anio de nacimiento: ";
	cin>>a;
	cout<<"La edad de la persona en 2020 es o sera "<<(2020 - a)<<endl;
}

void Ejercicio6()
{
	cout<<"Pendiente"<<endl;
}

void Ejercicio7()
{
	string n, t, d;
	
	cout<<"Ingrese el nombre: ";
	cin>>n;
	
	cout<<"Ingrese el telefono: ";
	cin>>t;
	
	cout<<"Ingrese la direccion: ";
	cin>>d;
	
	cout<<"Datos basicos"<<endl<<"Nombre: "<<n<<endl<<"Telefono: "<<t<<endl<<"Direccion: "<<d<<endl;
}

void Ejercicio8()
{
	float l;
	
	cout<<"Ingrese la longitud del cuadrado: ";
	cin>>l;
	
	cout<<"El perimetro del cuadrado es: "<<(l * 4)<<endl;
}

void Ejercicio9()
{
	float a, b;
	
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	
	cout<<endl<<"Suma: "<<(a + b)<<endl<<"Resta: "<<(a - b)<<endl<<"Multiplicacion: "<<(a * b)<<endl<<"Division: "<<(a / b)<<endl;
}

void Ejercicio10()
{
	float v;
	
	cout<<"Ingrese el valor del articulo: ";
	cin>>v;
	
	cout<<"El articulo cuesta: "<<v<<", el iva de 16% es: "<<(v * 0.16)<<", el precio final del articulo es: "<<(v * 1.16)<<endl;
}

void Ejercicio11()
{
	float n;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
	
	cout<<"El 20% de "<<n<<" es: "<<(n * 0.2)<<endl;
}

void Ejercicio12()
{
	int h, m;
	
	cout<<"Ingrese el numero de hombres: ";
	cin>>h;
	
	cout<<"Ingrese el numero de mujeres: ";
	cin>>m;
	
	float t = (h + m);
	cout<<"El porcentaje de hombres es: "<<((h / t) * 100)<<"%, el porcentaje de mujeres es: "<<((m / t) * 100)<<"%"<<endl;
}

void Ejercicio13()
{
	int h, m, n;
	
	cout<<"Ingrese el numero de hombres: ";
	cin>>h;
	
	cout<<"Ingrese el numero de mujeres: ";
	cin>>m;
	
	cout<<"Ingrese el numero de ninos: ";
	cin>>n;
	
	float t = (h + m + n);
	cout<<"El porcentaje de hombres es: "<<((h / t) * 100)<<"%, el porcentaje de mujeres es: "<<((m / t) * 100)<<"%, el porcentaje de ninos es: "<<((n / t) * 100)<<"%"<<endl;
}

void Ejercicio14()
{
	int a, b;
	
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	
	if (a > b)
		cout<<a<<" es mayor que "<<b<<endl;
	else
		cout<<b<<" es mayor que "<<a<<endl;
}

void Ejercicio15()
{
	int n;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
	
	if (n > 20)
		n += 10;
		
	cout<<"El valor final del numero es: "<<n<<endl;
}

void Ejercicio16()
{
	int n;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
	
	if (n > 20 && n < 40)
		n += 15;
		
	cout<<"El valor final del numero es: "<<n<<endl;
}

void Ejercicio17()
{
	float n;
	
	cout<<"Ingrese la nota del estudiante: ";
	cin>>n;
	
	if (n >= 3)
		cout<<"Muy bien, pasaste la materia"<<endl;
	else
		cout<<"Lo siento, debes recuperar."<<endl;
}

void Ejercicio18()
{
	int a, b;
	
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	
	if (a == b)
		cout<<"Los numeros son iguales."<<endl;
	else
		cout<<"Los numeros son diferentes."<<endl;
}

void Ejercicio19()
{
	int c;
	
	cout<<"Ingrese la cantidad de copias a sacar: ";
	cin>>c;
	
	if (c >= 100 && c <= 200)
		cout<<"El total a pagar es: "<<(c * 100) - ((c * 100) * 0.12)<<"."<<endl;
	else if (c >= 201 && c <= 400)
		cout<<"El total a pagar es: "<<(c * 100) - ((c * 100) * 0.15)<<"."<<endl;
	else if (c > 400)
		cout<<"El total a pagar es: "<<(c * 100) - ((c * 100) * 0.18)<<"."<<endl;
	else
		cout<<"El total a pagar es: "<<(c * 100)<<"."<<endl;
}

void Ejercicio20()
{
	for (int i = 1; i <= 100; i++)
		cout<<i<<": "<<(i * i)<<". ";
	
	cout<<endl;
}

void Ejercicio21()
{
	for (int i = 1; i <= 1000; i++)
	{
		if ((i % 2) == 0)
			cout<<i<<" es par."<<endl;
		else
			cout<<i<<" es impar."<<endl;
	}
	
	cout<<endl;
}

void Ejercicio22()
{
	int n;
	
	cout<<"Ingrese un numero mayor a 50: ";
	cin>>n;
	
	if (n > 50)
	{
		for (int i = n; i >= 50; i--)
		{
			if ((i % 2) == 0)
				cout<<i<<". ";
		}
	}
	
	cout<<endl;
}

void Ejercicio23()
{
	int n, a = 0, b = 1;
	
    for (int i = 1; i <= 100; ++i)
    {
        if(i == 1)
        {
            cout<< " " <<a;
            continue;
        }
        
        if(i == 2)
        {
            cout<<b<<" ";
            continue;
        }
        
        n = a + b;
        a = b;
        b = n;
        cout << n << ". ";
    }
    
    cout<<endl;
}

void Ejercicio24()
{
	int n;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
	
	for (int i = 0; i <= n; i++)
	{
		int f = 1;
		
		for (int j = 1; j <= i; j++)
        	f = (f * j);
	}
	
	cout<<endl;
}

void Ejercicio25()
{
	int n, f = 1;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
		
	for (int i = 1; i <= n; i++)
    	f = (f * i);
    	
    cout<<endl;
}

void Ejercicio26()
{
	int m;
	
	for (int i = 0; i < 20; i++)
	{
		int n;
		cout<<"Ingrese un numero: ";
		cin>>n;
		
		if (n > m)
			m = n;
	}
	
	cout<<"El mayor de los numeros leidos es: "<<m<<endl;
}

void Ejercicio27()
{
	int n, r = 2;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
	
	for (int i = 0; i < n; i++)
		r *= 2;
		
	cout<<"2^"<<n<<"= "<<r<<endl;
}

void Ejercicio28()
{
	int x, y, r;
	
	cout<<"Ingrese un numero base: ";
	cin>>x;
	
	cout<<"Ingrese un numero potencia: ";
	cin>>y;
	r = x;
	
	for (int i = 0; i < x; i++)
		r *= x;
		
	cout<<x<<"^"<<y<<"= "<<r<<endl;	
}

void Siguiente(string anterior, string siguiente)
{
	if (anterior != "")
		cout<<endl<<"Termina el ejercicio "<<anterior<<endl<<endl;
	
	if (siguiente != "")
		cout<<"------------------------------------------------"<<endl<<"Inicia el ejercicio "<<siguiente<<endl<<endl;
}
