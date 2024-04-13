#pragma once 
#include <iostream> 
#include "components.hpp"
#include <vector>
#include <string.h>

char NOMBRE_ARCHIVO[] = "IP2LOCATION-LITE-DB1.csv";

int countRows(char *nombreArch){
    FILE *pa = fopen(nombreArch,"r");

    
    if(pa == NULL){

        std::cout<<"Problema al abrir el archivo "<<nombreArch<<'\n';
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

const int n = countRows(NOMBRE_ARCHIVO);

void values(database& database,std::string line){

    std::string code;
	std::string lrange;
	std::string urange;
	std::string country;	

    //Line work database

    lrange = line.substr(0, line.find_first_of(','));
    line.erase(0, line.find_first_of(',') + 1);
    urange = line.substr(0, line.find_first_of(','));   
    line.erase(0, line.find_first_of(',') + 1);
    code = line.substr(0, line.find_first_of(',')); 
    line.erase(0, line.find_first_of(',') + 1); 
    country = line.substr(0, line.find_first_of('\n'));  
    line.erase(0, line.find_first_of('\n')); 
    
    database.lrange = atoi(lrange.c_str());
    database.urange = atoi(urange.c_str());
    database.code = code;
    database.country = country;
        
 }
void loadDatabase(std::vector<database>& db){

	FILE *p = fopen(NOMBRE_ARCHIVO,"r");
	std::string line;
	database data;
	char file_line[79]; 
	
	std::cout<<"Open database"<<'\n';

	for (int i = 0; i < (int) db.size(); ++i){

		fgets(file_line,79,p);
  		strtok(file_line,"\n");
  		line = std::string(file_line);
  		values(data,line);

        db[i].code    = data.code;
  		db[i].lrange  = data.lrange;
  		db[i].urange  = data.urange;
        db[i].country = data.country;		

	 }

	std::cout<<"[main]:db succesfuly"<<'\n'; 	

 }
