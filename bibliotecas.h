#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;
void class_ip(long IP_H,string IPC_H[]){
 
  volatile unsigned long I1 = 0;
  volatile unsigned long I2 = 0;
  volatile unsigned long I3 = 0;
  volatile unsigned long I4 = 0;
  volatile unsigned long I5 = 0;


  for (int i = 0; i < IP_H; ++i){

    if (IPC_H[i] == "A"){

      I1++;

     }else if (IPC_H[i] == "B"){

      I2++;

     }else if (IPC_H[i] == "C"){

      I3++;

     }
    else if (IPC_H[i] == "D"){

      I4++;

     }
    else if (IPC_H[i] == "E"){

      I5++;

     }else{

      continue;

     }

   }

   cout<<"[IPs:A]"<<I1<<"[IPs:B]"<<I2<<"[IPs:C]"<<I3<<"[IPs:D]"<<I4<<"[IPs:E]"<<I5;

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

      cout<<"complete";
      cout<<".";
      Sleep(1000);
      cout<<".";
      Sleep(1000);
      cout<<".";             
 }
void test_case(){

 system("color 6");

 long IP; 
 string IPS[IP];
 string IPC[IP];

system("time /T");
  cin>>IP;
  aleatory_ip(IP,IPS,IPC);

  for (int i = 0; i < IP; ++i){

    cout<<"["<<i+1<<"]"<<"["<<IPC[i]<<"]"<<"["<<IPS[i]<<"]"<<endl;

   }

  class_ip(IP,IPC);
  
 }
