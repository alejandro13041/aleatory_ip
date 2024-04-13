/*

	Update: change function to convert parameters
	Update: change function to load map
	Update: create a global map for functions
	Update: change total function to print map 
 */

#include "headers/country.h"

#define size_file_line 80

void printMap(void){

	for (int id = 0; id < 172; id++){

	  //printf("%s%s\r\n",codeCountry[id].code,codeCountry[id].country);
	 }
 }

struct MAP* loadmap(struct MAP* map,struct INFO* info){  

	for (int i = 0; i < size_map; i++){
	 	
		for(int j = 0; j < size_list; j++){

			if(strcmp(map[i].code, info[j].code) != 0){ //si el primer elemento es diferente al 

				realloc(map+1);
				strcpy(dest[].code,source[j].code);

			 }else{



			 }
		 }
	 } 
 }
void init(void){

	struct MAP* codeCountry = malloc(1);	

 	if (codeCountry == NULL){

 		printf("[ERROR] can not assing memory\r\n");
 		exit(0);	

 	 }

 	codeCountry = loadmap(codeCountry);

	printf("[code - country] size bytes: %lld\r\n",sizeof(codeCountry));
	
 }
