Algoritmo ejercicio1
	Definir ced Como Entero;
	Definir nombre Como Caracter;
	continuar=0
	tipooperarios=0
	acumuladonetooperarios=0
	contadoroperario=0
	tipotecnico=0
	acumuladonetotecnico=0
	contadortecnicos=0
	tipoprofesional=0
	acumuladonetoprofesional=0
	contadorprofesional=0
	Mientras continuar=0 Hacer
		Escribir "Ingrese el numero de cedula";
		Leer ced;
		Escribir "Ingrese el nombre del empleado";
		Leer nombre;
		Escribir "Eliga el tipo de empleado, 1- Operario=1, 2- Tecnico=2, 3- Profesional=3";
		Leer tipo;
		Escribir "Digite la cantidad de horas laboradas";
		Leer horas;
		Escribir "Digite el precio por hora";
		Leer horaprecio;
		salario<- (horas * horaprecio)
		Si tipo=1 Entonces
			contadoroperario = contadoroperario + 1
			aumento<- (salario * 0.15)
			sueldoaumentado<- (salario + aumento)
			tipooperarios = tipooperarios + 1
			deduccion<- (sueldoaumentado / 9.17);
			neto<- (sueldoaumentado - deduccion);
			acumuladonetooperarios = acumuladonetooperarios + neto
			promediooperario<- (acumuladonetooperarios / contadoroperario)
		SiNo
			Si tipo=2 Entonces
				contadortecnicos = contadortecnicos + 1
				aumento<- (salario * 0.10)
				sueldoaumentado<- (salario + aumento)
				tipotecnico = tipotecnico + 1
				deduccion<- (sueldoaumentado / 9.17);
				neto<- (sueldoaumentado - deduccion);
				acumuladonetotecnico = acumuladonetotecnico + neto
				promediotecnico<- ( acumuladonetotecnico / contadortecnicos)
			SiNo
				Si tipo=3 Entonces
					contadorprofesional = contadorprofesional + 1
					aumento<- (salario * 0.05)
					sueldoaumentado<- (salario + aumento)
					tipoprofesional = tipoprofesional + 1
					deduccion<- (sueldoaumentado / 9.17);
					neto<- (sueldoaumentado - deduccion);
					acumuladonetoprofesional = acumuladonetoprofesional + neto
					promedioprofesional<- ( acumuladonetoprofesional / contadoroperario)
				Fin Si
			Fin Si
		Fin Si
		Escribir "Cedula:", ced;
		Escribir "Nombre del empleado:", nombre;
		Escribir "Tipo de empleado:", tipo;
		Escribir "Salario por hora:", horaprecio;
		Escribir "Cantidad de horas:", horas;
		Escribir "Salario ordinario:", salario;
		Escribir "Aumento:", aumento;
		Escribir "Salario bruto:", sueldoaumentado;
		Escribir "Deduccion CCSS:", deduccion;
		Escribir "Salario Neto:", neto;
		Escribir "¿Desea continuar?, Si=0,  No=1";
		Leer continuar;
	Fin Mientras
	Escribir "1- Cantidad de empleados de tipo operarios:", tipooperarios;
	Escribir "2- El acumulado de los salarios netos para operarios:", acumuladonetooperarios;
	Escribir "3- El promedio de salarios netos para operarios:", promediooperario;
	Escribir "4- Cantidad de empleados de tipo tecnicos:", tipotecnico;
	Escribir "5- El acumulado de los salarios netos para tecnicos:", acumuladonetotecnico;
	Escribir "6- El promedio de salarios netos para tecnicos:", promediotecnico;
	Escribir "7- Cantidad de empleados de tipo profesionales:", tipoprofesional;
	Escribir "8- El acumulado de los salarios netos para profesionales:", acumuladonetoprofesional;
	Escribir "9- El promedio de salarios netos para profesionales:", promedioprofesional;
FinAlgoritmo
