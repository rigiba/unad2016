#include <stdio.h>//Bilioteca que utliza la funcón fflush(stdin) que realiza 
		          //Limpieza del bufer.
#include <iostream>//Biblioteca estander de entrada y salida (cout-cin).
#include <stdlib.h>//Biblioteca para utilizar CLS liempieza de pantalla y 
				   //Systema Pause.


using namespace std;

//Definicion de variables

int p;//Numero de Personas ingresadas
int edad[3];//Vector Para almacenar 3 datos de Edad
char nom[3][40];//Vector Para Almacenar Datos Tipo Caracter

//Definicion de Funciones

int menu ()
{
	int opc;
	system ("cls");// Limpiar Pantallas
	cout<<"\n\t\tTrabajo Colaborativo No.3 Uso de Arreglos y Funciones\n";//Texto que Saldra en el Menu
	cout<<"\n\t\tRegistro de 3 Personas con Edades\n";
	cout<<"\n\n\t\tElaborado por el Grupo No.10\n";
	cout<<"\n\t\tSeleccione Una de las Opciones del Menu\n";
	cout<<"\n1- Registrar Datos\n";//Linea para Ralacionar los Menu
	cout<<"\n2- Listar Datos\n";
	cout<<"\n3- Ordenar Datos Por Edad\n";
	cout<<"\n4- Imprimir Datos de la Persona de Mayor Edad\n";
	cout<<"\n5- Imprimir Datos de la Persona de Menor Edad\n";
	cout<<"\n6- Salir\n\n";
	cin>>opc;
	while(opc<1 or opc>6)//Condicional en caso que la Opcion Digitada sea Incorrecta
	{
		cout<<"\n\n\tOpcion Incorrecta";
		cout<<"\n\nDigite la Opcion correcta \n";
		cin>>opc;	
	}
	return (opc);
}

//Funciones con uso de Arreglos




void registrar()

{
  int cont;//Variable para el contador
   
  system ("cls");//Limpio Pantalla
  cout<<"\n\n\tFuncion Elaborada por Ricardo Rodriguez\n\n";
  cout<<"\n\n\t\tCaptura de Datos (Nombre y Edad)\n\n";
  cout<<"\n\n\t\tDigite Su Edad y Nombres y Apellido\n\n";
   for(cont=0;cont<=2; cont++)	//Ciclo para controlar el arreglo y el número de datos
  {
  cout<<"Edad  "<<cont<<": ";//Aviso en Pantalla al Usuario utilizando contador
  cin>>edad[cont]; //Capturar variable edad en el arreglo
  fflush(stdin); //Realiza borrado del Bufer
  
	while ( edad[cont]<15  or edad[cont] >80 )	//Condicional para validar la edad
	{
           	   
		   cout<<"\n\n\tEdad Incorrecta\n";
		   cout<<"\n\n\tDigite Nuevamente la Edad\n\n";
		   cin>>edad[cont];
		   fflush(stdin);
		   
	 }
  cout<<"Nombre "<<cont<<": ";
  cin.getline(nom[cont],40);//Captura Cadena de caracteres usando el mismo contador
                            //para que la edad n y el nombre n coincidan. 
  
  }	
  
  system ("pause");  
  menu ();
}


void listar()

{
system ("cls");//Limpio Pantalla
  cout<<"\n\n\t\tListar\n\n";
  for (int i = 0 ; i <3 ; i++) 
  cout << "Nombre "<<nom[i] <<" edad "<<edad[i] <<"\n" <<endl;
  system ("pause");  
}


void ordenar()

{
  system ("cls");//Limpio Pantalla
  cout<<"\n\n\t\tOrdenar\n\n";
  cout<<"\n\n\t\tEsta en Proceso de Contruccion\n\n";	
  system ("pause");  
  menu ();
}

void mayore()

{
  system ("cls");//Limpio Pantalla
  cout<<"\n\n\t\tmayor\n\n";
  cout<<"\n\n\t\tEsta en Proceso de Contruccion\n\n";	
  system ("pause");  
  menu ();
}


void menore()

{
  system ("cls");//Limpio Pantalla
  cout<<"\n\n\t\tmenor\n\n";
  cout<<"\n\n\t\tEsta en Proceso de Contruccion\n\n";	
  system ("pause");  
  menu ();
}



int main()//Función Proncipal Para El Menu
{
	int opcion=0;
	do
	{
		opcion = menu ();
		switch (opcion)//Manejo de Switch para Seleccipon de Opciones
		{
		case 1: registrar();//Casos de Para cada Opción
				break;//Ejecutar Siguiente Instrucción.
		case 2: listar();
			    break;
		case 3: ordenar ();
			   break;
		case 4: mayore();
			   break;
		case 5: menore();
			   break;
		case 6: cout<<"\n\nEl Programa  A Finalizado\n";//Salir Del Programa
				break;
		} 
		
	} while (opcion!=6);//Condicional si la opción Digitada es 8 Finaliza el Programa.
		return 0;
}
