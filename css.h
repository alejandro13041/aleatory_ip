#include <iostream>
using namespace std;

 //Macros #
/*

   esta es una biblioteca para funciones de tiempo


 



			*/

/*

      this is colors 

	 	  0 = Negro       8 = Gris
	    1 = Azul        9 = Azul claro
	    2 = Verde       10 = Verde claro
	    3 = Aguamarina  11 = Aguamarina claro
	    4 = Rojo        12 = Rojo claro
	    5 = Púrpura     13 = Púrpura claro
	    6 = Amarillo    14 = Amarillo claro
	    7 = Blanco      15 = Blanco brillante

	    */

#define color SetConsoleTextAttribute
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );


void set_vectores(){

 cout<<"create vectores"<<endl;
 cout<<".";
 Sleep(1000);
 cout<<".";
 Sleep(1000);
 cout<<"."<<endl;  
 cout<<endl;

 }
void set_complete(){
	
 cout<<"complete..."<<endl;
	
 };
void Set_Complete(){

 cout<<"complete";
 cout<<".";
 Sleep(1000);
 cout<<".";
 Sleep(1000);
 cout<<"."<<endl;  
 cout<<endl;

 }
void Limits(){

 cout<<"max"<<numeric_limits<int>::max()<<endl;
 cout<<"max"<<numeric_limits<int>::min()<<endl;

 } 
void recorrer_array(){

 vector<int> v = {1,2,3,4,5};

    for (int i = 0; i < (int) v.size(); ++i){

 	  cout<<v[i]<<endl;

     }
 }