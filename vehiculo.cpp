#include<iostream>
#include<string>
using namespace std;
class Vehiculo
{
	protected:
		string numeroPlaca;
		string color;
		string marca;
		float velocimetro;
	public:
		Vehiculo(string, string, string, int);
		void mostrarDato();
		void cambiarVelocidad(int);
};
Vehiculo::Vehiculo(string _numeroPlaca, string _color, string _marca, int _velocimetro)
{
	numeroPlaca=_numeroPlaca;
	color=_color;
	marca=_marca;
	velocimetro=_velocimetro;
}
void Vehiculo::mostrarDato()
{
	cout<<"              MOSTRAR RESULTADOS             "<<endl;
    cout<<"---------------------------------------------"<<endl;
	cout<<"NUMERO DE PLACA: "<<numeroPlaca<<endl;
	cout<<"COLOR: "<<color<<endl;
	cout<<"MARCA: "<<marca<<endl;
	cout<<"VELOCIMETRO: "<<velocimetro<<endl;
}
void Vehiculo::cambiarVelocidad(int nuevaVelocidad)
{
	velocimetro=nuevaVelocidad;
}
class Automovil:public Vehiculo{
	protected:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		Automovil(string, string, string, int, int, int);
		void mostrarAutomovil();
		void subirPasajero(int);
		void bajarPasajero(int);
};
Automovil::Automovil(string _numeroPlaca, string _color, string _marca, int _velocimetro, int _cantidadPuertas, int _cantidadPasajeros)
    : Vehiculo(_numeroPlaca, _color, _marca, _velocimetro){
	cantidadPuertas=_cantidadPuertas;
	cantidadPasajeros=_cantidadPasajeros;
}
void Automovil::mostrarAutomovil()
{
	mostrarDato();
	cout<<"PUERTAS: "<<cantidadPuertas<<endl;
	cout<<"PASAJEROS: "<<cantidadPasajeros<<endl;
}
void Automovil::subirPasajero(int cantidad)
{
	cantidadPasajeros+=cantidad;
}
void Automovil::bajarPasajero(int cantidad)
{
	if(cantidadPasajeros>=cantidad)
	{
		cantidadPasajeros-=cantidad;
	}
	else
	{
		cout<<"no hay suficientes pasajeros para bajar"<<endl;
	}
}
class Camion:public Vehiculo{
	protected:
		float carga;
	public:
		Camion(string, string, string, int, float);
		void mostrarCamion();
		void cambiarCarga(float);
};
Camion::Camion(string _numeroPlaca, string _color, string _marca, int _velocimetro, float _carga)
    : Vehiculo(_numeroPlaca, _color, _marca, _velocimetro){
	carga=_carga;
}
void Camion::mostrarCamion()
{
	mostrarDato();
	cout<<"CARGA:"<<carga<<" toneladas"<<endl;
}
void Camion::cambiarCarga(float nuevaCarga)
{
	carga=nuevaCarga;
}
int main()
{
	string numeroPlaca, color, marca;
	int velocimetro;
	int cantidadPuertas, cantidadPasajeros;
	cout<<"--------------AUTOMOVIL--------------"<<endl;
	cout<<"INGRESAR PLACA:"; cin>>numeroPlaca;
	cout<<"INGRESAR COLOR:"; cin>>color;
	cout<<"INGRESAR MARCA:"; cin>>marca;
	cout<<"INGRESAR VELOCIMETRO:"; cin>>velocimetro;
	cout<<"INGRESAR CANTIDAD DE PUERTAS:"; cin>>cantidadPuertas;
	cout<<"INGRESAR CANTIDAD DE PASAJEROS:"; cin>>cantidadPasajeros; 
    Automovil au1(numeroPlaca, color, marca, velocimetro, cantidadPuertas, cantidadPasajeros);
    au1.mostrarAutomovil();
    int subirPasajeros;
    int bajarPasajeros;
    cout<<"INGRESE LA CANTIDAD DE PASAJEROS A SUBIR:"; cin>>subirPasajeros;
    au1.subirPasajero(subirPasajeros);
    au1.mostrarAutomovil();
    cout<<"INGRESE LA CANTIDAD DE PASAJEROS A BAJAR:"; cin>>bajarPasajeros;
    au1.bajarPasajero(bajarPasajeros);
    au1.mostrarAutomovil();
    float carga;
    cout<<"---------------CAMION---------------"<<endl;
    cout<<"INGRESAR PLACA:"; cin>>numeroPlaca;
	cout<<"INGRESAR COLOR:"; cin>>color;
	cout<<"INGRESAR MARCA:"; cin>>marca;
	cout<<"INGRESAR VELOCIMETRO:"; cin>>velocimetro;
	cout<<"INGRESE LA CARGA EN TONELADAS:"; cin>>carga;
	Camion camion1(numeroPlaca, color, marca, velocimetro, carga);
	camion1.mostrarCamion();
	float nuevacarga;
	cout<<"INGRESE LA NUEVA CARGA:"; cin>>nuevacarga;
	camion1.cambiarCarga(nuevacarga);
	camion1.mostrarCamion();
    
    return 0;
}
