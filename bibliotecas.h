
/*

	UPDATE: change local variable
	UPDATE: change format to concat in IPs.
	

 */

#include "headers/components.h"
#include "headers/IP.h"

void GeneratorOctets(struct IP* IP){

	for (int id = 0; id < size; id++){

		IP[id].o1 = (rand() % 255);
		IP[id].o2 = (rand() % 255);
		IP[id].o3 = (rand() % 255);
		IP[id].o4 = (rand() % 255);

	 }	
 }
void IPs(struct Info* info){	
    	
	for (int id = 0; id < size; id++){  		 
		
		/* this is a bat format to concat */

		info[id].IPs  = (

		   atof(IP.o1) + "." +
	     	atof(IP.o2) + "." +
	     	atof(IP.o3) + "." +
        	atof(IP.o4)

		 );		
	 }  
 }
void IPc(struct Info* info){

	for (int id = 0; id < size; id++){

		switch (IP[id].o1){

         case   0 ... 127: info[id].IPc = 'A'; break;
         case 128 ... 191: info[id].IPc = 'B'; break;
         case 192 ... 223: info[id].IPc = 'C'; break;
         case 224 ... 239: info[id].IPc = 'D'; break;
         case 240 ... 255: info[id].IPc = 'E'; break;
         default: printf("[main]: (error IPc function)\n"); 

       }
	 }
 }
void IPm(struct Info* info){

	for (int id = 0; id < size; id++){

		switch (info[id].IPc) {

         case 'A': strcpy(info[id].IPm,"255.0.0.0");       break;
         case 'B': strcpy(info[id].IPm,"255.255.0.0");     break;
         case 'C': strcpy(info[id].IPm,"255.255.255.0");   break;
         case 'D': strcpy(info[id].IPm,"255.255.255.255"); break;
         case 'E': strcpy(info[id].IPm,"255.255.255.255"); break;
         default: printf("[main]: (error IPm function)\r\n"); break;

       }
	 } 
 }
void IPb(struct Info* info){	

   for (int id = 0; id < size; id++){

		switch (info[id].IPc) {

         case 'A': info[id].IPb = 8 ; break;
         case 'B': info[id].IPb = 16; break;
         case 'C': info[id].IPb = 24; break;
         case 'D': info[id].IPb = 32; break;
         case 'E': info[id].IPb = 32; break;
         default: printf("[main]: (error IPb function)\n"); break;

       }
	 }
 } 
void IPn(struct Info* info){
	
	for (int id = 0; id < size; id++){

		info[id].IPn = (

		   (16777216 * IP[id].o1) + 
		   (65536    * IP[id].o2) + 
		   (256      * IP[id].o3) + 
		               IP[id].o4);

     }     
 } 	

/*mejorar algoritmo con busqueda binaria*/
void IPd(struct Info* info){

	for (int i = 0; i < infoSize; i++){

		for (int j = 0; j < dbSize; j++){

			if(info[i].IPn >= db[j].lrange && info[i].IPn <= db[j].urange){ 
				
				info[i].IPd = db[j].country;				
	 		 }	
		 }
	 } 
 } 
