#include<bits/stdc++.h>
#include<string>
using namespace std;

class Figura
{
	protected:
		string color;
	public:
		Figura(string);
};
Figura::Figura(string _color)
{
	color = _color;
}
class Circulo : public Figura{
	private:
		double radio;
	public:
		Circulo(string, double);
		void calcularArea(double);
		void calcularPerimetro(double);
};
Circulo::Circulo(string _color, double _radio) : Figura(_color)
{
	radio = _radio;
}
void Circulo::calcularArea(double radio)
{
	double _area;
	_area= M_PI * pow(radio,2);

	cout<<"COLOR: "<<color<<endl;
	cout<<"AREA: "<<_area<<endl;
}
void Circulo::calcularPerimetro(double radio)
{
	double _perimetro;
	_perimetro= 2 * M_PI * radio;
	cout<<"PERIMETRO: "<<_perimetro<<endl;
}
class Rectangulo: public Figura{
	private:
		double base;
		double altura;
	public:
		Rectangulo(string, double, double);
		void calcularArea(double, double);
};
Rectangulo::Rectangulo(string _color, double _base, double _altura) : Figura(_color)
{
	base =_base;
	altura = _altura;
}
void Rectangulo::calcularArea(double base, double altura) 
{
	double _area;
	_area= base * altura;
	
	cout<<"COLOR: "<<color<<endl;
	cout<<"AREA: "<<_area<<endl;
}

class Triangulo : public Figura{
	private: 
		double base;
		double altura;
		string tipo;
	public:
		Triangulo(string, double, double, string);
		void calcularArea(double, double);
};

Triangulo::Triangulo(string _color, double _base, double _altura, string _tipo): Figura(_color)
{
	base = _base;
	altura = _altura;
	tipo = _tipo;
}

void Triangulo::calcularArea(double base, double altura)
{
	double area;
	area = (base * altura)/2;
	
	cout<<"TIPO: "<<tipo<<endl;
	cout<<"COLOR: "<<color<<endl;
	cout<<"AREA: "<<area<<endl;
}

int main()
{
	int opcion;
	bool salir=false;	
	string color1;
	Figura _figura(color1);
	do
	{
		cout<<"-----------------------------"<<endl;
		cout<<"            FIGURAS          "<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"1. Circulo "<<endl;
		cout<<"2. Rectangulo "<<endl;
		cout<<"3. Triangulo "<<endl;
		cout<<"4. Salir "<<endl;
		cout<<"Ingrese una opcion: "; cin>>opcion;
		switch(opcion)
		{
			case 1: 
			{
				cout<<"--------------------------------------"<<endl;
				cout<<"               CICRULO                "<<endl;
				cout<<"--------------------------------------"<<endl;
				double radio1;
				cout<<"Ingrese el color de la figura: "; fflush(stdin); getline(cin, color1);
				cout<<"Ingrese el radio del circulo: "; cin>>radio1;
				Circulo circulo1(color1, radio1);
				circulo1.calcularArea(radio1);
				circulo1.calcularPerimetro(radio1);	
				break;
			}
			case 2:
			{
				cout<<"-----------------------------------------"<<endl;
				cout<<"               RECTANGULO                "<<endl;
				cout<<"-----------------------------------------"<<endl;
				double base2, altura2;
				cout<<"Ingrese el color de la figura: "; fflush(stdin); getline(cin, color1);
				cout<<"Ingrese la base del rectangulo: "; cin>>base2;
				cout<<"Ingrese la altura del rectangulo: "; cin>>altura2;
				Rectangulo rectangulo2(color1, base2, altura2);
				rectangulo2.calcularArea(base2, altura2);
				break;
			}
			case 3:
			{
				cout<<"----------------------------------------"<<endl;
				cout<<"               TRIANGULO                "<<endl;
				cout<<"----------------------------------------"<<endl;
				double base3, altura3;
				string tipo3;
				cout<<"Ingrese el color de la figura: "; fflush(stdin); getline(cin, color1);
				cout<<"Ingrese la base del triangulo: "; cin>>base3;
				cout<<"Ingrese la altura del triangulo: "; cin>>altura3;
				cout<<"Ingrese el tipo de triangulo: "; fflush(stdin); getline(cin, tipo3);
				Triangulo triangulo3(color1, base3, altura3, tipo3);
				triangulo3.calcularArea(base3, altura3);
				break;
			}
			case 4:
			{
				cout << "\n______________________________________________________________________" << endl;
                cout << "\n    S A L I E N D O       D E L      P R O G R A M A  .    .   .     " << endl;
                salir = true;
                break;
			}
			default:
			{
				cout<<"error,intente con otra opcion."<<endl;
			}			
		}
		
	}
	while(!salir);	
	
	
	return 0;
}
