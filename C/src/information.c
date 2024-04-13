#include "headers/components.h"
#include "headers/information.h"

void print(struct INFO* info){

	for (int i = 0; i < size; i++){
	
		printf("[%d][%d][%s][%d][%s][%s]\r\n",i+1,info[i].IPc
												 ,info[i].IPm
												 ,info[i].IPb
												 ,info[i].IPd
												 ,info[i].IPs);

	 }
 }	 

void printSize(struct INFO* info,struct DATABASE* db){

	printf("[IPs] %4lld bytes\n",
			 sizeof(info[0].IPs),
		     sizeof(info[0].IPc),
		     sizeof(info[0].IPm),
		     sizeof(info[0].IPn),
		     sizeof(info[0].IPb),
		     sizeof(info[0].IPd));

	printf("[IPs] %4lld bytes\n",sizeof(db[0].lrange),
							     sizeof(db[0].lrange),
							     sizeof(db[0].lrange));

 } 
