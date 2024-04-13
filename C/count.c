/*

	Update: change code C++ for C
	Update: reduce memory reserved counters 
	Update: function to reset counters
	Update: function to print counters
	Update: change setences if for switch
	Update: change int i for int id 
	Update: change number of time two call function printf
	POSIBLE UPDATE:  

 */

#include "headers/count.h"	
#include "headers/components.h"

void resetCounters(void){

	c1 = 0;
	c2 = 0;
	c3 = 0;
	c4 = 0;
	c5 = 0;
 }
void printCounters(void){

	printf("[C1]:%d\n
		    [C2]:%d\n
		    [C3]:%d\n
		    [C4]:%d\n
		    [C5]:%d\n",c1,c2,c3,c4,c5);

  }  
void countIPc(struct INFO* info){

	resetCounters();
	
	for (int id = 0; id < size; id++){

		switch(info[id].IPc){

			case 'A': c1++; break;
			case 'B': c2++; break;
			case 'C': c3++; break;
			case 'D': c4++; break;
			case 'E': c5++; break;

		 }
	}

	printCounters(); 
 }
void countIPm(struct INFO* info){

	resetCounters();

	for (int id = 0; id < size; id++){

		if(strcmp(info[id].IPm,"255.0.0.0")) 
			c1++; 
		if(strcmp(info[id].IPm,"255.255.0.0")) 
			c2++; 
		if(strcmp(info[id].IPm,"255.255.255.0")) 
			c3++; 
		if(strcmp(info[id].IPm,"255.255.255.255")) 
			c4++; 
			
	 }

	printCounters();
 }  
void countIPb(struct INFO* info){

	resetCounters();

	for (int id = 0; id < size; id++){

		switch(info[id].IPb){

			case 8 : c1++; break;
			case 16: c2++; break;
			case 24: c3++; break;
			case 32: c4++; break;
			default: printf("ERROR\r\n");
		 }
	 }

	printCounters();
 }  