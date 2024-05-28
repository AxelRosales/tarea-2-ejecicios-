// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
using SIN_TIPO = string;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float acumuladodineron;
	float acumuladodinerop;
	float acumuladodineros;
	SIN_TIPO cedula;
	float continuar;
	float entradas;
	float entradasp;
	float entradassoln;
	float entradassoms;
	SIN_TIPO factura;
	float localida;
	float localidad;
	SIN_TIPO nombre;
	float precioentrada;
	float totalpagar;
	continuar = 0;
	entradassoln = 0;
	acumuladodineron = 0;
	entradassoms = 0;
	acumuladodineros = 0;
	entradasp = 0;
	acumuladodinerop = 0;
	while (continuar==0) {
		cout << "Digite el numero de factura:" << endl;
		cin >> factura;
		cout << "Digite el numero de cedula del cliente" << endl;
		cin >> cedula;
		cout << "Escriba el nombre del cliente" << endl;
		cin >> nombre;
		cout << "Eliga la localidad deseada, 1- Sol Norte/Sur=1, 2- Sombra Este/Oeste=2, 3- Preferencial=3" << endl;
		cin >> localidad;
		cout << "Cuantas entradas comprara, 1- una entrada=1, 2- Dos entradas=2, 3- Tres entradas=3, 4- Cuatro entradas=4" << endl;
		cin >> entradas;
		if (entradas==1) {
			entradassoln = entradassoln+1;
			if (localidad==1) {
				cout << "El precio de la entrada es de 10500 colones en la localidad: Sol Norte/Sur" << endl;
				precioentrada = 10500;
				acumuladodineron = acumuladodineron+precioentrada;
			} else {
				if (localidad==2) {
					cout << "El precio de la entrada es de 20500 colones en la localidad: Sombra Este/Oeste" << endl;
					precioentrada = 20500;
					acumuladodineros = acumuladodineros+precioentrada;
				} else {
					if (localidad==3) {
						cout << "El precio de la entrada es de 25500 colones en la localidad: Preferencial" << endl;
						precioentrada = 25500;
						acumuladodinerop = acumuladodinerop+precioentrada;
					}
				}
			}
		} else {
			if (entradas==2) {
				entradassoms = entradassoms+2;
				if (localidad==1) {
					cout << "El precio de las entradas es de 21000 colones en la localidad: Sol Norte/Sur" << endl;
					precioentrada = 21000;
					acumuladodineron = acumuladodineron+precioentrada;
				} else {
					if (localidad==2) {
						cout << "El precio de las entradas es de 41000 colones en la localidad: Sombra Este/Oeste" << endl;
						precioentrada = 41000;
						acumuladodineros = acumuladodineros+precioentrada;
					} else {
						if (localidad==3) {
							cout << "El precio de las entradas es de 51000 colones en la localidad: Preferencial" << endl;
							precioentrada = 51000;
							acumuladodinerop = acumuladodinerop+precioentrada;
						}
					}
				}
			} else {
				if (entradas==3) {
					entradasp = entradasp+3;
					if (localidad==1) {
						cout << "El precio de las entradas es de 31500 colones en la localidad: Sol Norte/Sur" << endl;
						precioentrada = 31500;
						acumuladodineron = acumuladodineron+precioentrada;
					} else {
						if (localidad==2) {
							cout << "El precio de las entradas es de 61500 colones en la localidad: Sombra Este/Oeste" << endl;
							precioentrada = 61500;
							acumuladodineros = acumuladodineros+precioentrada;
						} else {
							if (localidad==3) {
								cout << "El precio de las entradas es de 76500 colones en la localidad: Preferencial" << endl;
								precioentrada = 76500;
								acumuladodinerop = acumuladodinerop+precioentrada;
							}
						}
					}
				}
			}
		}
		totalpagar = (precioentrada+1000);
		cout << "Numero de factura:" << factura << endl;
		cout << "Numero de cedula:" << cedula << endl;
		cout << "Nombre del comprador:" << nombre << endl;
		if (localida==1) {
			cout << "Localidad: Sol Norte/Sur" << endl;
		} else {
			if (localidad==2) {
				cout << "Localidad:Sombra Este/Oeste" << endl;
			} else {
				if (localidad==3) {
					cout << "Localidad: Preferencial" << endl;
				}
			}
		}
		cout << "Cantidad de entradas:" << entradas << endl;
		cout << "Subtotal:" << precioentrada << endl;
		cout << "Cargos por servicios: 1000" << endl;
		cout << "Total a pagar:" << totalpagar << endl;
		cout << "¿Desea continuar?, Si=0,  No=1" << endl;
		cin >> continuar;
	}
	cout << "Cantidad de entradas en la localidad Sol Norte/Sur" << entradassoln << endl;
	cout << "Acumulado de dinero en la localidad Sol Norte/Sur" << acumuladodineron << endl;
	cout << "Cantidad de entradas en la localidad Sombra Este/Oeste" << entradassoms << endl;
	cout << "Acumulado de dinero en la localidad Sombra Este/Oeste" << acumuladodineros << endl;
	cout << "Cantidad de entradas en la localidad Preferencial" << entradasp << endl;
	cout << "Acumulado de dinero en la localidad Preferencial" << acumuladodinerop << endl;
	return 0;
}

