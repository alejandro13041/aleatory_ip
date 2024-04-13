
#ifndef DATABASE_H
#define DATABASE_H

#include <string.h>
#include <stdlib.h>
#include <stdlib.h>

#define MAX_SIZE_LINE 53
#define MAX_SIZE_CODE 3

struct database{

	char code[MAX_SIZE_CODE];
	char country[MAX_SIZE_LINE];	

 }

int countRows(char*);
struct values(char*);
void loadDatabase(struct database*);

#endif
