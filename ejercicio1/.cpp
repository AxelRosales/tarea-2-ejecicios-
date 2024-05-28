// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float acumuladonetooperarios;
	float acumuladonetoprofesional;
	float acumuladonetotecnico;
	float aumento;
	int ced;
	float contadoroperario;
	float contadorprofesional;
	float contadortecnicos;
	float continuar;
	float deduccion;
	float horaprecio;
	float horas;
	float neto;
	string nombre;
	float promediooperario;
	float promedioprofesional;
	float promediotecnico;
	float salario;
	float sueldoaumentado;
	float tipo;
	float tipooperarios;
	float tipoprofesional;
	float tipotecnico;
	continuar = 0;
	tipooperarios = 0;
	acumuladonetooperarios = 0;
	contadoroperario = 0;
	tipotecnico = 0;
	acumuladonetotecnico = 0;
	contadortecnicos = 0;
	tipoprofesional = 0;
	acumuladonetoprofesional = 0;
	contadorprofesional = 0;
	while (continuar==0) {
		cout << "Ingrese el numero de cedula" << endl;
		cin >> ced;
		cout << "Ingrese el nombre del empleado" << endl;
		cin >> nombre;
		cout << "Eliga el tipo de empleado, 1- Operario=1, 2- Tecnico=2, 3- Profesional=3" << endl;
		cin >> tipo;
		cout << "Digite la cantidad de horas laboradas" << endl;
		cin >> horas;
		cout << "Digite el precio por hora" << endl;
		cin >> horaprecio;
		salario = (horas*horaprecio);
		if (tipo==1) {
			contadoroperario = contadoroperario+1;
			aumento = (salario*0.15);
			sueldoaumentado = (salario+aumento);
			tipooperarios = tipooperarios+1;
			deduccion = (sueldoaumentado/9.17);
			neto = (sueldoaumentado-deduccion);
			acumuladonetooperarios = acumuladonetooperarios+neto;
			promediooperario = (acumuladonetooperarios/contadoroperario);
		} else {
			if (tipo==2) {
				contadortecnicos = contadortecnicos+1;
				aumento = (salario*0.10);
				sueldoaumentado = (salario+aumento);
				tipotecnico = tipotecnico+1;
				deduccion = (sueldoaumentado/9.17);
				neto = (sueldoaumentado-deduccion);
				acumuladonetotecnico = acumuladonetotecnico+neto;
				promediotecnico = (acumuladonetotecnico/contadortecnicos);
			} else {
				if (tipo==3) {
					contadorprofesional = contadorprofesional+1;
					aumento = (salario*0.05);
					sueldoaumentado = (salario+aumento);
					tipoprofesional = tipoprofesional+1;
					deduccion = (sueldoaumentado/9.17);
					neto = (sueldoaumentado-deduccion);
					acumuladonetoprofesional = acumuladonetoprofesional+neto;
					promedioprofesional = (acumuladonetoprofesional/contadoroperario);
				}
			}
		}
		cout << "Cedula:" << ced << endl;
		cout << "Nombre del empleado:" << nombre << endl;
		cout << "Tipo de empleado:" << tipo << endl;
		cout << "Salario por hora:" << horaprecio << endl;
		cout << "Cantidad de horas:" << horas << endl;
		cout << "Salario ordinario:" << salario << endl;
		cout << "Aumento:" << aumento << endl;
		cout << "Salario bruto:" << sueldoaumentado << endl;
		cout << "Deduccion CCSS:" << deduccion << endl;
		cout << "Salario Neto:" << neto << endl;
		cout << "¿Desea continuar?, Si=0,  No=1" << endl;
		cin >> continuar;
	}
	cout << "1- Cantidad de empleados de tipo operarios:" << tipooperarios << endl;
	cout << "2- El acumulado de los salarios netos para operarios:" << acumuladonetooperarios << endl;
	cout << "3- El promedio de salarios netos para operarios:" << promediooperario << endl;
	cout << "4- Cantidad de empleados de tipo tecnicos:" << tipotecnico << endl;
	cout << "5- El acumulado de los salarios netos para tecnicos:" << acumuladonetotecnico << endl;
	cout << "6- El promedio de salarios netos para tecnicos:" << promediotecnico << endl;
	cout << "7- Cantidad de empleados de tipo profesionales:" << tipoprofesional << endl;
	cout << "8- El acumulado de los salarios netos para profesionales:" << acumuladonetoprofesional << endl;
	cout << "9- El promedio de salarios netos para profesionales:" << promedioprofesional << endl;
	return 0;
}

