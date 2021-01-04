#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

#define TAM 150

struct planta
{
	long codigo;
	string nombre;
	long codpost;
	char protegida;
	string orientacion;
	short hojas1;
	short hojas2;
	short hojas3;
	float altura1;
	float altura2;
	float altura3;
};

short menu ();
char menu_7 ();
bool leer (planta vector[TAM], int &x);
void mostrar_1 (planta vector[TAM], int x);
void nueva_planta(planta vector[TAM], int &x);
void borrar (planta vector [TAM], int &x);
void modificar (planta vector[TAM], int x);
void mostplan (planta vector[TAM], int x);
void guardar (planta vector[TAM], int x);

short menu ()
{
	short x;
	
	do
	{
		cout << "Elige una opción del menu: " << endl << "0) Salir " << endl << "1) Mostrar datos de todas las plantas " << endl << "2) Introducir datos de una nueva planta " << endl << "3) Borrar datos de una planta " << endl << "4) Modificar datos de una planta " << endl << "5) Datos de la planta con nombre... " << endl << "6) Guardar datos en el fichero " << endl << "7) Estadísticas ";
		
		cout << endl;
		
		cin >> x;
	}
	while (x < 0 || x > 7);
	
	return x;		
}

char menu_7 ()
{
	char a;
	
	do
	{
		cout << "Elige la estadística que deseas consultar: " << endl << "a) Datos de las plantas que en el nombre contengan las palabras... " << endl << "b) Top-3 de plantas con más hojas en la 3a recogida " << endl << "c) Top-3 de plantas que más han crecido " << endl << "d) Media del crecimiento en altura de las plantas orientadas a… " << endl << "e) Código postal con mayor número de plantas " << endl << "f) Muertes que estaban protegidas y muertes que no " << endl;
		
		cin >> a;
	}
	while (a != 'a' && a != 'b' && a != 'c' && a != 'd' && a != 'e' && a != 'f');
	
	return a;
}

bool leer (planta vector[TAM], int &x)
{
	bool error = false;
	ifstream f;
	
	x = 0;
		
	f.open ("plantas.txt");
			
	if (!f)
		error = true;
	else 
	{
		while (!f.eof ())
		{			
			f >> vector[x].codigo;
			f.ignore();	
			getline (f, vector[x].nombre);
			f >> vector[x].codpost;
			f.ignore();	
			f >> vector[x].protegida;
			f.ignore();
			getline (f, vector[x].orientacion);
			f >> vector[x].hojas1;
			f.ignore();
			f >> vector[x].hojas2;
			f.ignore();
			f >> vector[x].hojas3;
			f >> vector[x].altura1;
			f.ignore();
			f >> vector[x].altura2;
			f.ignore();
			f >> vector[x].altura3;	
			x++;
		}
		
		f.close ();
		
	}
	return error;
}

void mostrar_1 (planta vector[TAM], int x)
{
	int j;
	
	for (j = 0; j < x; j++)
	{
		cout << vector[j].codigo << "	";
		cout << vector[j].nombre << endl;
		cout << vector[j].codpost << "	";
		cout << vector[j].protegida << "	";
		cout << vector[j].orientacion << endl;
		cout << vector[j].hojas1 << "	";
		cout << vector[j].hojas2 << "	";
		cout << vector[j].hojas3 << endl;
		
		if (vector[j].altura1 > -1)
		{
			cout.precision(1);
			cout.setf(ios::fixed);
			cout << vector[j].altura1 <<"	";	
		}
		else
			cout << vector[j].altura1 <<"	";
		
		if (vector[j].altura2 > -1)
		{
			cout.precision(1);
			cout.setf(ios::fixed);
			cout << vector[j].altura2 <<"	";	
		}
		else
		{
			cout.precision(0);	
			cout << vector[j].altura2 <<"	";
		}
		
		if (vector[j].altura3 > -1)
		{
			cout.precision(1);
			cout.setf(ios::fixed);
			cout << vector[j].altura3 << endl;	
		}
		else
		{
			cout.precision(0);
			cout << vector[j].altura3 << endl;
		}
	}
	cout << endl << x << endl;	
}

void nueva_planta (planta vector[TAM], int &x)
{
	planta p;
	int j, h;
	
	cout << "Introduzca los datos de la nueva planta: " << endl;
	
	cout << "Codigo de participante (recuerde que no puede repetirse): ";
	cin >> p.codigo;
	
	for (j = 0; j < x; j++)
	{		
		if (vector[j].codigo == p.codigo)
		{
			do
			{	
				cout << "Codigo de participante (recuerde que no puede repetirse): ";
				cin >> p.codigo;
			}
			while (vector[j].codigo == p.codigo);
		}
	}
	
	cout << "Nombre de la planta (recuerde que no puede repetirse): ";
	cin.ignore();
	getline (cin, p.nombre);
	
	for (j = 0; j < x; j++)
	{		
		if (vector[j].nombre == p.nombre)
		{
			do
			{	
				cout << "Nombre de la planta (recuerde que no puede repetirse): ";
				cin.ignore();
				getline (cin, p.nombre);
			}
			while (vector[j].nombre == p.nombre);
		}
	}

	cout << "Código postal: ";
	cin >> p.codpost;
		
	do 
	{
		cout << "¿Estaba protegida? Escriba S para SI y N para NO: ";
		cin >> p.protegida;
	}
	while (p.protegida != 'S' && p.protegida != 'N');
			
	do
	{
		cout << "Orientacion (Norte, Noreste, Este, Sureste, Sur, Suroeste, Oeste o Noroeste): ";
		cin >> p.orientacion;			
	}
	while (p.orientacion != "Norte" && p.orientacion != "Noreste" && p.orientacion != "Noroeste" && p.orientacion != "Sur" && p.orientacion != "Sureste" && p.orientacion != "Suroeste" && p.orientacion != "Este" && p.orientacion != "Oeste");
		
	do 
	{
		cout << "Introduzca el numero de hojas de la primera recogida de datos (-1 si la planta murió): ";
		cin >> p.hojas1;
	}
	while (p.hojas1 < -1);
		
	do 
	{
		cout << "Introduzca el numero de hojas de la segunda recogida de datos (-1 si la planta murió): ";
		cin >> p.hojas2;
	}
	while (p.hojas2 < -1);
		
	do 
	{
		cout << "Introduzca el numero de hojas de la tercera recogida de datos (-1 si la planta murió): ";
		cin >> p.hojas3;
	}
	while (p.hojas3 < -1);
	
	do 
	{
		cout << "Introduzca la altura de la primera recogida de datos (-1 si la planta murió): ";
		cin >> p.altura1;
	}
	while (p.altura1 < -1);
	
	do 
	{
		cout << "Introduzca la altura de la segunda recogida de datos (-1 si la planta murió): ";
		cin >> p.altura2;
	}
	while (p.altura2 < -1);
	
	do 
	{
		cout << "Introduzca la altura de la tercera recogida de datos (-1 si la planta murió): ";
		cin >> p.altura3;
	}
	while (p.altura3 < -1);

	if (p.nombre > vector[0].nombre)
	{
		for (j = 0; j < x; j++)
		{
			if (p.nombre < vector[j].nombre)
			{
				for (h = x - 1; h >= j; h--)
				{	
					vector[h + 1] = vector[h];
				}
				vector[j] = p;
				break;
			}		
		}
	}
	else
	{
		for (h = x - 1; h >= 0; h--)
		{
			vector[h + 1] = vector[h];
		}
		vector[0] = p;		
	}
	
	if (p.nombre > vector[x - 1].nombre)
	{	
		vector[x] = p ;
	}
	
	x++;		
}

void borrar (planta vector [TAM], int &x)
{
	long cod;
	int j, h;
	
	cout << "Introduzca el código de la planta que desea borrar: ";
	cin >> cod;
	
	for (j = 0; j < x; j++)
	{
		if (cod == vector[j].codigo)
		{
			for (h = j; h < (x - 1); h++)
				{	
					vector[h] = vector[h + 1];
				}
		}
	}
	
	if (vector[x - 1].codpost == 0)
		x--;
	else
		cout << "El código que ha introducido no pertenece a ninguna planta." << endl;	
}

void modificar (planta vector[TAM], int x)
{
	long cod;
	int j, h, i, t;
	string dato;
	planta p, aux, aux2;
	
	cout << "Introduzca el código de la planta que quiere modificar: ";
	cin >> cod;
	
	for (j = 0; j < x; j++)
	{
		if (cod == vector[j].codigo)
		{
			aux = vector[j];
			break;
			
		}
	}
	
	if (vector[j].nombre == vector[x].nombre)
		cout << "El código que ha introducido no pertenece a ninguna planta." << endl;
			
	if (cod == vector[j].codigo)
	{
		cout << "Elija que dato desea modificar (nombre, codpost, protegida, orientacion, hojas1, hojas2, hojas3, altura1, altura2, altura3): ";
		cin >> dato;
		cout << endl;
		
		if (dato == "nombre")
		{
			cout << "Introduzca el nuevo nombre (recuerde que no puede repetirse): ";
			cin.ignore();
			getline (cin, p.nombre);
				
			for (i = 0; i < x; i++)
			{		
				if (vector[i].nombre == p.nombre)
				{
					do
					{	
						cout << "Introduzca el nuevo nombre (recuerde que no puede repetirse): ";
						cin.ignore();
						getline (cin, p.nombre);
					}
					while (vector[i].nombre == p.nombre);
				}
			}
			vector[j].nombre = p.nombre;
			aux2 = vector[j];
				
			cout << endl << aux.nombre << endl << aux2.nombre << endl;
			if (vector[j].nombre <= vector[x - 1].nombre)
			{				
				for (t = 0; t < x; t++)
				{
					if (vector[j].nombre < vector[t].nombre)
					{
						if (aux.nombre < vector[t].nombre)
						{
							for (h = j; h < t - 1; h++)
							{									
								vector[h] = vector[h + 1];
							}	
							vector[t - 1] = aux2;
							break;	
						}												
						if (aux.nombre > vector[t].nombre)
						{							
							for (h = j; h > t; h--)						
							{
								vector[h] = vector[h - 1];
							}										
							vector[t] = aux2;
							break;																	
						}						
					}
				}
			}
			else
			{
				if (vector[j].nombre > vector[x - 1].nombre)
				{
					for (h = j; h < x; h++)
					{		
						vector[h] = vector[h + 1];
					}
					vector[x - 1] = aux2;
				}	 
			}	
		}
		else
		{
			if (dato == "codpost")
			{
				cout << "Introduzca el nuevo código postal: ";
				cin >> p.codpost;
				cout << endl << j << endl;
				vector[j].codpost = p.codpost;			
			}
			else
			{
				if (dato == "protegida")
				{
					do 
						{
							cout << "¿Estaba protegida? Escriba S para SI y N para NO: ";
							cin >> p.protegida;
							vector[j].protegida = p.protegida;
						}
						while (p.protegida != 'S' && p.protegida != 'N');
				}
				else
				{
					if (dato == "orientacion")
					{
						do
						{
						cout << "Introduzca la nueva orientacion (Norte, Noreste, Este, Sureste, Sur, Suroeste, Oeste o Noroeste): ";
						cin >> p.orientacion;
						vector[j].orientacion = p.orientacion;			
						}
						while (p.orientacion != "Norte" && p.orientacion != "Noreste" && p.orientacion != "Noroeste" && p.orientacion != "Sur" && p.orientacion != "Sureste" && p.orientacion != "Suroeste" && p.orientacion != "Este" && p.orientacion != "Oeste");
					}
					else
					{
						if (dato == "hojas1")
						{
							do 
							{
								cout << "Introduzca el numero de hojas de la primera recogida de datos (-1 si la planta murió): ";
								cin >> p.hojas1;
								vector[j].hojas1 = p.hojas1;
							}
							while (p.hojas1 < -1);
						}
						else
						{
							if (dato == "hojas2")
							{
								do 
								{
									cout << "Introduzca el numero de hojas de la segunda recogida de datos (-1 si la planta murió): ";
									cin >> p.hojas2;
									vector[j].hojas2 = p.hojas2;
								}
								while (p.hojas2 < -1);								
							}
							else
							{
								if (dato == "hojas3")
								{
									do 
									{
										cout << "Introduzca el numero de hojas de la tercera recogida de datos (-1 si la planta murió): ";
										cin >> p.hojas3;
										vector[j].hojas3 = p.hojas3;
									}
									while (p.hojas3 < -1);								
								}
								else
								{
									if (dato == "altura1")
									{
										do 
										{
											cout << "Introduzca la altura de la primera recogida de datos (-1 si la planta murió): ";
											cin >> p.altura1;
											vector[j].altura1 = p.altura1;
										}
										while (p.altura1 < -1);								
									}
									else
									{
										if (dato == "altura2")
										{
											do 
											{
												cout << "Introduzca la altura de la segunda recogida de datos (-1 si la planta murió): ";
												cin >> p.altura2;
												vector[j].altura2 = p.altura2;
											}
											while (p.altura2 < -1);								
										}	
										else
										{
											if (dato == "altura3")
											{
												do 
												{
													cout << "Introduzca la altura de la tercera recogida de datos (-1 si la planta murió): ";
													cin >> p.altura3;
													vector[j].altura2 = p.altura3;
												}
												while (p.altura2 < -1);
											}
										}
									}
								}
							}
						}
					}
				}							 
			}
		}
	}	
}

void mostplan (planta vector[TAM], int x)
{
	int j;
	string nom;
	
	cout << "Introduzca el nombre de la planta cuyos datos desea consultar: ";
	cin.ignore();
	getline (cin, nom);
	
	for (j = 0; j < x; j++)
	{
		if (vector[j].nombre == nom)
		{
		cout << vector[j].codigo << "	";
		cout << vector[j].nombre << endl;
		cout << vector[j].codpost << "	";
		cout << vector[j].protegida << "	";
		cout << vector[j].orientacion << endl;
		cout << vector[j].hojas1 << "	";
		cout << vector[j].hojas2 << "	";
		cout << vector[j].hojas3 << endl;
		
		if (vector[j].altura1 > -1)
		{
			cout.precision(1);
			cout.setf(ios::fixed);
			cout << vector[j].altura1 <<"	";	
		}
		else
			cout << vector[j].altura1 <<"	";
		
		if (vector[j].altura2 > -1)
		{
			cout.precision(1);
			cout.setf(ios::fixed);
			cout << vector[j].altura2 <<"	";	
		}
		else
		{
			cout.precision(0);	
			cout << vector[j].altura2 <<"	";
		}
		
		if (vector[j].altura3 > -1)
		{
			cout.precision(1);
			cout.setf(ios::fixed);
			cout << vector[j].altura3 << endl;	
		}
		else
		{
			cout.precision(0);
			cout << vector[j].altura3 << endl;
		}
		break;
		}
		if (j == x - 1)
			cout << "Ese nombre no pertenece a ninguna planta." << endl;
	}	
}

void guardar (planta vector[TAM], int x)
{
	ofstream f;
	int j;
	
	f.open("plantas.txt");
	
	if (!f)
		cout << "Error abriendo el fichero. " << endl;
	else
	{
		for (j = 0; j < x; j++)
		{
			f << vector[j].codigo;
			cin.ignore();	
			f << vector[j].nombre;
			f << vector[j].codpost;
			cin.ignore();	
			f << vector[j].protegida;
			cin.ignore();
			f << vector[j].orientacion;
			f << vector[j].hojas1;
			cin.ignore();
			f << vector[j].hojas2;
			cin.ignore();
			f << vector[j].hojas3;
			f << vector[j].altura1;
			cin.ignore();
			f << vector[j].altura2;
			cin.ignore();
			f << vector[j].altura3;
		}
		cout << "El archivo se ha guardado correctamente. " << endl;	
	}
	f.close ();			
}

int main ()
{
	planta vec[TAM]; //vector que almacena todas las plantas
	short opc;
	int num; //número de plantas
	
	setlocale(LC_ALL, "");
	
	do
	{
		opc = menu ();		
						
		switch (opc)
		{
			case 0:
				break;
			case 1:
				if (vec[0].codpost == 0)
				{						
					if (leer (vec, num) == true)
						cout << "Error abriendo el fichero" << endl;								
					else
						mostrar_1 (vec, num);
				}
				else
					mostrar_1 (vec, num);						
				break;
			case 2:
				if (vec[0].codpost == 0)
				{						
					if (leer (vec, num) == true)
						cout << "Error abriendo el fichero" << endl;								
					else
						nueva_planta (vec, num);
				}
				else
					nueva_planta (vec, num);
				break;	
			case 3:
				if (vec[0].codpost == 0)
				{						
					if (leer (vec, num) == true)
						cout << "Error abriendo el fichero" << endl;								
					else
						borrar (vec, num);
				}
				else
					borrar (vec, num);
				break;
			case 4:
				if (vec[0].codpost == 0)
				{						
					if (leer (vec, num) == true)
						cout << "Error abriendo el fichero" << endl;								
					else
						modificar (vec, num);
				}
				else
					modificar (vec, num);
				break;
			case 5:
				if (vec[0].codpost == 0)
				{						
					if (leer (vec, num) == true)
						cout << "Error abriendo el fichero" << endl;								
					else
						mostplan (vec, num);
				}
				else
					mostplan (vec, num);
				break;
			case 6:
				guardar (vec, num);
				break;
			case 7:
			{				
				char opc_7 = menu_7 ();
				
				switch (opc_7)
				{
					case 'a':
						cout << "//funcion a";
						break;
					case 'b':
						cout << "//funcion b";
						break;
					case 'c':
						cout << "//funcion c";
						break;
					case 'd':
						cout << "//funcion d";
						break;
					case 'e':
						cout << "//funcion e";
						break;
					case 'f':
						cout << "//funcion f";
						break;
				}
			}
		}
	}
	while (opc < 8 && opc > 0 );

	system ("pause");
	return 0;	
}

