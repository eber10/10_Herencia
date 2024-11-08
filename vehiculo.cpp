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
		void cambiarVelocidad(float);
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
	cout<<"numero de placa:"<<numeroPlaca<<endl;
	cout<<"color "<<color<<endl;
	cout<<"marca"<<marca<<endl;
	cout<<"velocimetro"<<velocimetro<<endl;
}
void Vehiculo::cambiarVelocidad(float nuevaVelocidad)
{
	velocimetro=nuevaVelocidad;
}
class Automovil:public Vehiculo{
	private:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		Automovil(int, int);
		void mostrarAutomovil();
		void subirPasajero(int);
		void bajarPasajero(int);
};
Automovil::Automovil(int _cantidadPuertas, int _cantidadPasajeros):Vehiculo(numeroPlaca, color, marca, velocimetro){
	cantidadPuertas=_cantidadPuertas;
	cantidadPasajeros=_cantidadPasajeros;
}
void Automovil::mostrarAutomovil()
{
	mostrarDato();
	cout<<"puertas"<<cantidadPuertas<<endl;
	cout<<"pasajeros"<<cantidadPasajeros<<endl;
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
	private:
		int carga;
	public:
		Camion(int);
		void mostrarCamion();
		void cambiarCarga(int);
};
Camion::Camion(int _carga)
{
	carga=_carga;
}
void Camion::mostrarCamion()
{
	mostrarDato();
	cout<<"carga:"<<carga<<" toneladas"<<endl;
}
void Camion::cambiarCarga(int nuevaCarga)
{
	carga=nuevaCarga;
}
int main()
{
	Automovil au1("234d", "rojo", "toyota", 160);
	au1.mostrarAutomovil();
	au1.subirPasajero(2);
	au1.mostrarAutomovil();
	return 0;
}
