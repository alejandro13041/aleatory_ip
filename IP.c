/*

	IPg: tested
	IPs: do not work
 	IPc: tested
	IPm: do not work
	IPb: tested
	IPn: tested

	Update: Change function IPd of 
	section because is more algorithm for
	database 

 */

#include "headers/IP.h"

#define size_line 78

/* tested */
void IPg(struct INFO* info,int size){  

	//Genarete aleatory seed
	srand(time(NULL)); 

	for (int id = 0; id < size; id++){

		info[id].ip.octet_1 = (rand() % 256);
		info[id].ip.octet_2 = (rand() % 256);
		info[id].ip.octet_3 = (rand() % 256);
		info[id].ip.octet_4 = (rand() % 256);

	 }	
 }

/*

	Maybe the reason because this function do not work
	is for strcpy function 

	do not pass test

 */
void IPs(struct INFO* info,int size){ 	
    
	for (int id = 0; id < size; id++){  		 
				
		strcat(info[id].IPs,(const char*)&info[id].ip.octet_1);
		strcat(info[id].IPs,".");
		strcat(info[id].IPs,(const char*)&info[id].ip.octet_2);
		strcat(info[id].IPs,".");
		strcat(info[id].IPs,(const char*)&info[id].ip.octet_3);
		strcat(info[id].IPs,".");
		strcat(info[id].IPs,(const char*)&info[id].ip.octet_4);

	 }  
 }

void IPc(struct INFO* info,int size){ /* tested */ 

	for (int id = 0; id < size; id++){

		switch (info[id].ip.octet_1){

         case   0 ... 127: info[id].IPc = 'A'; break;
         case 128 ... 191: info[id].IPc = 'B'; break;
         case 192 ... 223: info[id].IPc = 'C'; break;
         case 224 ... 239: info[id].IPc = 'D'; break;
         case 240 ... 255: info[id].IPc = 'E'; break;
         default: printf("[main]: (error IPc function)\n"); 

       }
	 }
 }

/*

	may be the reason because this function do not work
	is for strcpy function 

 */

void IPm(struct INFO* info,int size){ /* tested */	 

	for (int id = 0; id < size; id++){

		switch(info[id].IPc) {

         case 'A': strcpy(info[id].IPm,"255.0.0.0");       break;
         case 'B': strcpy(info[id].IPm,"255.255.0.0");     break;
         case 'C': strcpy(info[id].IPm,"255.255.255.0");   break;
         case 'D': strcpy(info[id].IPm,"255.255.255.255"); break;
         case 'E': strcpy(info[id].IPm,"255.255.255.255"); break;
         default: printf("[main]: (error IPm function)\r\n"); break;

       }
	 } 
 }
void IPb(struct INFO* info,int size){ /* tested */

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

void IPn(struct INFO* info,int size){ /* tested */
	
	for (int id = 0; id < size; id++){

		info[id].IPn = (16777216 * info[id].ip.octet_1) + (65536 * info[id].ip.octet_2) + (256 * info[id].ip.octet_3) + info[id].ip.octet_4;

    }     
 } 
