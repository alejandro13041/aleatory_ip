#include "headers/IP.h"

int main(void){

	int numIP;	
	printf("[server] digit numIP \n");
	scanf("%d",&numIP);
	printf("%d\n",numIP);

	struct INFO info[numIP];
	IPg(info,numIP);
	IPc(info,numIP);
	IPb(info,numIP);
	IPn(info,numIP);
	//IPm(info,numIP);
	//IPs(info,numIP);

	for (int id = 0; id < numIP; id++){

		printf("[%u][%d][%c][%d.%d.%d.%d]\r\n",info[id].IPn,info[id].IPb,info[id].IPc,info[id].ip.o1,info[id].ip.o2,info[id].ip.o3,info[id].ip.o4);

	 }

	
	return 0;
 }

