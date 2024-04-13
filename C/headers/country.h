
#ifndef COUNTRY_H
#define COUNTRY_H

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "components.h"

struct MAP{

	int code;
	char country[100];

 };

void init(void);
void loadMap(void);
void printMap(void);

#endif
