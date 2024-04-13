#include "headers/components.h"
#include "headers/database.h"

void IPd(struct INFO* info,struct DATABASE* db,int size){

    for (int i = 0; i < size; i++){

        for (int j = 0; j < DATABASE_SIZE; j++){

            if(info[i].IPn >= db[j].lrange && info[i].IPn <= db[j].urange){ 
                
                info[i].IPd = db[j].country;                

             }  
         }
     }
 } 

/* implement binary search */

void get_number_line(char* line,int n){

    int num_line = 1;
    FILE* pointer_file = fopen("IP2LOCATION-LITE-DB1.csv","r");

    if (pointer_file == NULL){

        printf("error: can not open file\n");
        return;
        
     }

    while(fgets(line,size_line,pointer_file)){

        if (num_line == n){
            break;
         }

        num_line++;

     }

    fclose(pointer_file);

 }

struct line get_info_line(char* line){

    line.lower_range  = strtok(file_line,",");
    line.upper_range  = strtok(NULL,",");
    line.code            = strtok(NULL,",");
    line.country         = strtok(NULL,",");

    return line;
 } 




struct line* search_database_number(uint32_t database_number){

    /* optimal if database do not change */ 

    int middle_number = DATABASE_SIZE / 2;

    char line[size_line];

    struct line middle_line, lower_line, upper_line;

    get_number_line(line,1);
    lower_line = get_info_line(line);

    get_number_line(line,DATABASE_SIZE);
    upper_line = get_info_line(line);

   while(){

    /* get middle value */

    get_number_line(line,middle_number);
    get_info_line(line);

        if (database_number >= middle_line.lower_range && database_number <= middle_line.upper_range){

            return middle_line; 

            }
        else if(database_number > middle_line.upper_range){

            upper_line = middle_line;
            middle_line = (lower_line + upper_line) / 2;

            }
        else if(database_number < middle_line.lower_range){

            lower_line = middle_line;
           middle_line = (lower_line + upper_line) / 2;

            }
        } 
 } 


int fun(char *nameArch){

    FILE* pointer_file = fopen(nameArch,"r");

    if(pointer_file == NULL){

        printf("[INFO]: can not Open file: %d\n",nameArch);
        exit(-1);

     } 

    int n = 0;
    int l = 0; 
    char c = fgetc(pointer_file);

    while(!feof(pointer_file)){

        if(c!='\n') l++;

        if(l > n) n = l;
        
        c = fgetc(pointer_file);

     }

    fclose(pointer_file);
    return n+1; 
 }

int countRows(char *nameArch){

    FILE* pointer_file = fopen(nameArch,"r");

    if(pointer_file == NULL){

        printf("[INFO]: can not Open file: %d\n",nameArch);
        exit(-1);

     } 

    int n = 0; 
    char c = fgetc(pointer_file);

    while(!feof(pointer_file)){

        if(c=='\n') n++;
        c = fgetc(pointer_file);

     }

    fclose(pointer_file);
    return n; 
 }
struct database* values(char* file_line){

    database.lrange  = strtok(file_line,",");
    database.urange  = strtok(NULL,",");
    database.code    = strtok(NULL,",");
    database.country = strtok(NULL,",");
    return database;
 } 
void loadDatabase(struct database* database){

	FILE* pointer_file = fopen(NOMBRE_ARCHIVO,"r");

    if(pointer_file == NULL){

        printf("[INFO]: can not Open file: %d\n",nameArch);
        exit(0);

     }

	char file_line[]; 
	
	printf("[DataBase] Open database.\n\r");

	for (int id = 0; id < dbSize; id++){

		fgets(file_line,79,pointer_file);
  		values(file_line);
	 }

    fclose(pointer_file); 
	printf("[INFO]: DataBase loaded.\r\n"); 	
 }