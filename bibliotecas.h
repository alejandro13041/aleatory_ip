/*
 *	 @author Jose Alejandro Varon Carreño - programing
 *		Fecha de creacion: 
 *
 */

#include "headers.h"
#include "css.h"
using namespace std;

//variables globales

char NOMBRE_ARCHIVO[] = "IP2LOCATION-LITE-DB1.csv";	
 
void getAleatoryip(int ip,string *IPs,string *IPc,int64_t IPn[]){	

	vector<int unsigned> n1(ip);
 	vector<int unsigned> n2(ip);
 	vector<int unsigned> n3(ip);
 	vector<int unsigned> n4(ip);

 	/*
		Este bucle es para rellenar los 4 vectores 
		con numeros aleatorios entre 0 y 255.
 	 */
    
	for (int i = 0; i < ip; ++i){  

		n1[i] = 1 + rand() % (255 + 1 - 1);
		n2[i] = 1 + rand() % (255 + 1 - 1);
		n3[i] = 1 + rand() % (255 + 1 - 1);
		n4[i] = 1 + rand() % (255 + 1 - 1);

	 }  

	sort(n1.begin(),n1.end()); //ordenar de menor a mayor el primer vector


     /*
		Este bucle es para concatenar los 4 vectores 
		con numeros aleatorios en uno de tipo String.
     */
    
	for (int i = 0; i < ip; ++i){       
	 
		IPs[i] = to_string(n1[i]) + '.' +
				 to_string(n2[i]) + '.' + 
				 to_string(n3[i]) + '.' + 
				 to_string(n4[i]) ;

	 }

	 /*
		Este bucle es para clasificar que direccion IP a 
		que clase IP pertenece.
	 */

	for (int i = 0; i < ip; ++i){

 		if(n1[i]>=0   and n1[i]<=127){ IPc[i]='A'; }
		if(n1[i]>=128 and n1[i]<=191){ IPc[i]='B'; }
		if(n1[i]>=192 and n1[i]<=223){ IPc[i]='C'; }
		if(n1[i]>=224 and n1[i]<=239){ IPc[i]='D'; }
		if(n1[i]>=240 and n1[i]<=255){ IPc[i]='E'; }
			 
	 }

	 /*
	   	Este Bucle es para crear Numeros IP 
	   	para enviarlo a la base de datos.
	 */

	for (int i = 0; i < ip; ++i){

		IPn[i] = (16777216 * n1[i]) + 
	 		        (65536 * n2[i]) + 
	 		          (256 * n3[i]) + 
	 		                 n4[i];

     }
 }  

 /*
 	Este bucle es para crear las mascaras de red. 
 */
void getNetworkmask(int ip,string *IPc,string *IPm){

	for (int i = 0; i < ip; ++i){

		if(IPc[i] == "A"){ IPm[i] = "255.0.0.0";}
		if(IPc[i] == "B"){ IPm[i] = "255.255.0.0";}
		if(IPc[i] == "C"){ IPm[i] = "255.255.255.0";}
		if(IPc[i] == "D"){ IPm[i] = "255.255.255.255";}
		if(IPc[i] == "E"){ IPm[i] = "255.255.255.255";}
		
	 } 
 } 
 /*
	Este funcion es para crear los bloques CIDR
	de las direcciones de red por defecto.
 */ 
void getBlockred(int ip,string *IPc,string *IPb){	

   for (int i = 0; i < ip; ++i){

		if(IPc[i] == "A"){ IPb[i] =  "8";}
		if(IPc[i] == "B"){ IPb[i] = "16";}
		if(IPc[i] == "C"){ IPb[i] = "24";}
		if(IPc[i] == "D"){ IPb[i] = "32";}
		if(IPc[i] == "E"){ IPb[i] = "32";}
		
	 } 
 } 
 /*
	Esta es una funcion para contar el numero 
	de direcciones de red para cada clase.
 */
void getCounterip(int ip,string *IPc){

 int i1 = 0;
 int i2 = 0;
 int i3 = 0;
 int i4 = 0;
 int i5 = 0;

	for (int i = 0; i < ip; ++i){

	 	if(IPc[i] =="A"){ i1++; }
	    if(IPc[i] =="B"){ i2++; }
		if(IPc[i] =="C"){ i3++; }
		if(IPc[i] =="D"){ i4++; }
		if(IPc[i] =="E"){ i5++; }

	 }

 cout<<"[A]:"<<i1<<endl;
 cout<<"[B]:"<<i2<<endl;
 cout<<"[C]:"<<i3<<endl;
 cout<<"[D]:"<<i4<<endl;
 cout<<"[E]:"<<i5<<endl;

 }
 /*
 	Esta es una funcion para eliminar las direcciones de red 
 	duplicadas por medio de un algoritmo.
 */
void getRepitedip(int ip,string *IPs){ 

	int k  = 0;    
	
	for(int i = 0; i < ip; i++){

		for(int j = i + 1; j < ip; j++){

			if(IPs[i] == IPs[j]){

				    cout<<"[scanner:] Repetided (IP)"<<endl;
					k = j;

					while(k < ip -1){

						IPs[k] = IPs[k+1]; 
						++k;	

					 }

					--ip;
					--j;

			 }
		 }
	 }  
 }	 
/*
Esta es la funcion para contar 
las filas del archivo csv.
*/
int countRows(char *nombreArch){

    FILE *pa = fopen(nombreArch,"r");

    if(pa == NULL){

        cout<<"Problema al abrir el archivo "<<nombreArch<<endl;
        exit(-1);

     } 

    int n = 0; 
    char c = fgetc(pa);

    while(!feof(pa)){

        if(c=='\n') n++;
        c = fgetc(pa);

     }

    fclose(pa);
    return n; 

 }

const int n = countRows(NOMBRE_ARCHIVO);//variables con el numero de filas
 
/*
 Esta funcion es para obtener los rangos 
 de la base de datos csv.
*/
void getValues(char* linea,int unsigned &valor1,int unsigned &valor2,char* country){

  char numero[100];
  int i = 0;
  int j = 0;

  while(linea[i] != ','){

   numero[j++] = linea[i++];
		   
   }

  numero[j] = '\0';
  valor1 = atoi(numero); 
  j = 0;
  i++;

  while(linea[i] != ','){

   numero[j++] = linea[i++];
		   
   }

  numero[j] = '\0';
  valor2 = atoi(numero); 
  j = 0;
  i++;

  while(linea[i] != ','){

	country[j++] = linea[i++];  

  } 

 } 

void getDatabase(int ip,int64_t IPn[],string *IPd){

	FILE *p = fopen(NOMBRE_ARCHIVO,"r");

	char line[100];
	char country[3];
	int unsigned lowerValue = 0;
	int unsigned higherValue = 0;	

	//Creacion De Vectores

	vector<int unsigned> v1(n);	
    vector<int unsigned> v2(n);
    vector<string> v3(n);

	for (int j = 0; j < n; ++j){

		fgets(line,100,p);
  		strtok(line,"\n");
  		getValues(line,lowerValue,higherValue,country);
  		cout<<"["<<j+1<<"]"<<"["<<lowerValue<<"]"<<"["<<higherValue<<"]"<<"["<<country<<"]"<<endl;
  		v1[j] = lowerValue;
  		v2[j] = higherValue;
  		v3[j] = country;
  		lowerValue = 0;
		higherValue = 0; 

	 }

	cout<<"Creacion Correcta..."<<endl; 

	for (int i = 0; i < ip; ++i){

		for (int j = 0; j < n; ++j){

			if(IPn[i] >= v1[j] && IPn[i]<=v2[j]){ 

				IPd[i] = v3[j];	

	 		 }

		 }
	 	
	 } 

 }
