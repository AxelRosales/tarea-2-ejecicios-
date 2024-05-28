Algoritmo ejercicio2
	continuar=0
	
	entradassoln=0
	acumuladodineron=0
	entradassoms=0
	acumuladodineros=0
	entradasp=0
	acumuladodinerop=0
	Mientras continuar=0 Hacer
		Escribir "Digite el numero de factura:";
		Leer factura;
		Escribir "Digite el numero de cedula del cliente";
		Leer cedula;
		Escribir "Escriba el nombre del cliente";
		Leer nombre;
		Escribir "Eliga la localidad deseada, 1- Sol Norte/Sur=1, 2- Sombra Este/Oeste=2, 3- Preferencial=3";
		Leer localidad;
		Escribir "Cuantas entradas comprara, 1- una entrada=1, 2- Dos entradas=2, 3- Tres entradas=3, 4- Cuatro entradas=4";
		Leer entradas;
		Si entradas=1 Entonces
			entradassoln = entradassoln + 1
			Si localidad=1 Entonces
				Escribir "El precio de la entrada es de 10500 colones en la localidad: Sol Norte/Sur"
				precioentrada<- 10500
				acumuladodineron = acumuladodineron + precioentrada
			SiNo
				Si localidad=2 Entonces
					Escribir "El precio de la entrada es de 20500 colones en la localidad: Sombra Este/Oeste"
					precioentrada<- 20500
					acumuladodineros = acumuladodineros + precioentrada
				SiNo
					Si localidad=3 Entonces
						Escribir "El precio de la entrada es de 25500 colones en la localidad: Preferencial"
						precioentrada<- 25500
						acumuladodinerop = acumuladodinerop + precioentrada
					Fin Si
				Fin Si
			Fin Si
		SiNo
			Si entradas=2 Entonces
				entradassoms = entradassoms + 2
				Si localidad=1 Entonces
					Escribir "El precio de las entradas es de 21000 colones en la localidad: Sol Norte/Sur"
					precioentrada<- 21000
					acumuladodineron = acumuladodineron + precioentrada
				SiNo
					Si localidad=2 Entonces
						Escribir "El precio de las entradas es de 41000 colones en la localidad: Sombra Este/Oeste";
						precioentrada<- 41000
						acumuladodineros = acumuladodineros + precioentrada
					SiNo
						Si localidad=3 Entonces
							Escribir "El precio de las entradas es de 51000 colones en la localidad: Preferencial"
							precioentrada<- 51000
							acumuladodinerop = acumuladodinerop + precioentrada
						Fin Si
					Fin Si
				Fin Si
			SiNo
				Si entradas=3 Entonces
					entradasp = entradasp + 3
					Si localidad=1 Entonces
						Escribir "El precio de las entradas es de 31500 colones en la localidad: Sol Norte/Sur"
						precioentrada<- 31500
						acumuladodineron = acumuladodineron + precioentrada
					SiNo
						Si localidad=2 Entonces
							Escribir "El precio de las entradas es de 61500 colones en la localidad: Sombra Este/Oeste"
							precioentrada<- 61500
							acumuladodineros = acumuladodineros + precioentrada
						SiNo
							Si localidad=3 Entonces
								Escribir "El precio de las entradas es de 76500 colones en la localidad: Preferencial"
								precioentrada<- 76500
								acumuladodinerop = acumuladodinerop + precioentrada
							Fin Si
						Fin Si
					Fin Si
				FinSi
			FinSi
		Fin Si
		totalpagar<- (precioentrada + 1000);
		Escribir "Numero de factura:", factura;
		Escribir "Numero de cedula:", cedula;
		Escribir "Nombre del comprador:", nombre;
		Si localida=1 Entonces
			Escribir "Localidad: Sol Norte/Sur"
		SiNo
			Si localidad=2 Entonces
				Escribir "Localidad:Sombra Este/Oeste"
			SiNo
				Si localidad=3 Entonces
					Escribir "Localidad: Preferencial"
				Fin Si
			Fin Si
		Fin Si
		Escribir "Cantidad de entradas:", entradas;
		Escribir "Subtotal:", precioentrada;
		Escribir "Cargos por servicios: 1000";
		Escribir "Total a pagar:", totalpagar;
		Escribir "¿Desea continuar?, Si=0,  No=1";
		Leer continuar;
	Fin Mientras
	Escribir "Cantidad de entradas en la localidad Sol Norte/Sur", entradassoln;
	Escribir "Acumulado de dinero en la localidad Sol Norte/Sur", acumuladodineron;
	Escribir "Cantidad de entradas en la localidad Sombra Este/Oeste", entradassoms;
	Escribir "Acumulado de dinero en la localidad Sombra Este/Oeste", acumuladodineros;
	Escribir "Cantidad de entradas en la localidad Preferencial", entradasp;
	Escribir "Acumulado de dinero en la localidad Preferencial", acumuladodinerop;
FinAlgoritmo
