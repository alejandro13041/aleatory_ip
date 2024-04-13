#ifndef COUNT_H
#define COUNT_H
#include "components.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

static uint32_t c1,c2,c3,c4,c5;

void printCounters(void);
void resetCounters(void);
void countIPc(struct INFO* info);
void countIPm(struct INFO* info);
void countIPb(struct INFO* info);
	
#endif