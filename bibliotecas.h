#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <iterator>
#include <array>
using namespace std;

void aleatory_port(long ip,long PTs[]){

 		
		 
	 unsigned int n = 0;
 
	 for( int i = 0; i < ip; ++i){

	  n++;

		  if( n == 10){

				PTs[i] = 23;
				n = 0;

		   }else{

		   PTs[i] = 80;
			 
		   }
	 
	 }

  cout<<"complete aleatory port";
	cout<<".";
	Sleep(1000);
	cout<<".";
	Sleep(1000);
	cout<<"."<<endl; 
	cout<<endl; 
  
 }
void clasification_counter_ip(long iph,string IPch[]){

 unsigned long i1 = 0;
 unsigned long i2 = 0;
 unsigned long i3 = 0;
 unsigned long i4 = 0;
 unsigned long i5 = 0;

 for (int i = 0; i < iph; ++i){

	if(IPch[i] =="A"){

	 i1++;

	 }else if (IPch[i] =="B"){

	 i2++;

	 }else if (IPch[i] =="C"){

	 i3++;

	 }else if (IPch[i] =="D"){

	 i4++;

	 }else if (IPch[i] =="E"){

	 i5++;

	 } 
	 else{

	 continue;

	 }
	
 }

 cout<<"complete";
 cout<<".";
 Sleep(1000);
 cout<<".";
 Sleep(1000);
 cout<<"."<<endl;  
 cout<<endl;

 cout<<"[A]:"<<i1<<endl;
 cout<<"[B]:"<<i2<<endl;
 cout<<"[C]:"<<i3<<endl;
 cout<<"[D]:"<<i4<<endl;
 cout<<"[E]:"<<i5<<endl;

 }
void aleatory_ip(long ip,string IPs[],string IPc[]){

 volatile int n1[ip];
 volatile int n2[ip];
 volatile int n3[ip];
 volatile int n4[ip];

 int j  = 0;
 int k  = 0;

 string IPa[ip]; 

	for (int i = 0; i < ip; ++i){  

		n1[i] = 0 + rand() % 255;
		n2[i] = 0 + rand() % 255;
		n3[i] = 0 + rand() % 255;
		n4[i] = 0 + rand() % 255;

	 }    
	for (int i = 0; i < ip; ++i){       
	 
	 IPs[i] = to_string(n1[i]) + '.' +
					  to_string(n2[i]) + '.' + 
					  to_string(n3[i]) + '.' + 
					  to_string(n4[i]) ;

	 }
	for (int i = 0; i <ip; ++i){

	 (n1[i]>=0   and n1[i]<=127) ? IPc[i]="A":IPc[i]=IPc[i];
	 (n1[i]>=128 and n1[i]<=191) ? IPc[i]="B":IPc[i]=IPc[i];
	 (n1[i]>=192 and n1[i]<=233) ? IPc[i]="C":IPc[i]=IPc[i];
	 (n1[i]>=224 and n1[i]<=239) ? IPc[i]="D":IPc[i]=IPc[i];
	 (n1[i]>=240 and n1[i]<=255) ? IPc[i]="E":IPc[i]=IPc[i];
						
	 }         
	for (int i = 0; i < ip; ++i){

			if (IPs[i] =="127.0.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="0.0.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="3.0.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="15.0.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="56.0.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="10.0.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="192.168.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="172.16.0.0")
		 {
			 continue;
		 }
		 else if (IPs[i] =="100.64.0.0")
		 {
			 continue;
		 }
		 else{ 

			 IPa[j] = IPs[i];
			 j++;

		 }
	 }
	for (int i = 0; i < ip; ++i){

		IPs[i] = IPa[i];

	 }

	j = 0;
	k = 0;

	for(int i = 0; i < ip; i++){

		for(j = i + 1; j < ip; j++){

			if(IPs[i] == IPs[j]){

					 k = j;

					 while(k < ip -1){

							IPs[k] = IPs[k+1]; 

							++k;
					}

					--ip;
					--j;

			
				}

			}

	 }
 
	cout<<"complete aleatory ip";
	cout<<".";
	Sleep(1000);
	cout<<".";
	Sleep(1000);
	cout<<"."<<endl; 
	cout<<endl; 
			
 }
