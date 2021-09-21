#include <windows.h> 
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <time.h>
using namespace std;
void class_ip(long ip,string IPc[],string IPs[],string  p1[],string  p2[],string  p3[],string  p4[],string  p5[]){

 unsigned int i1 = 0;
 unsigned int i2 = 0;
 unsigned int i3 = 0;
 unsigned int i4 = 0;
 unsigned int i5 = 0;
 
 for (int i = 0; i < ip; ++i){

   if (IPc[i] == "A"){

        p1[i1] = IPs[i];
        i1++;   

      }
   else if (IPc[i]=="B"){

        p2[i2] = IPs[i];   
        i2++;
      }
   else if (IPc[i]=="C"){

        p3[i3] = IPs[i];   
        i3++;
      }
   else if (IPc[i]=="D"){

        p4[i4] = IPs[i];   
        i4++;
      }
   else if (IPc[i]=="E"){

        p5[i5] = IPs[i];   
        i5++;

      }else{

      continue;

     }
     
   }

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

                  if (IPs[i] =="127.0.0.0"){

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
                 else if (IPs[i] =="181.49.43.206")
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

            j = 0;
            k = 0;


      system("color 6");
      cout<<"complete";
      Sleep(1000);  
      cout<<".";     
      Sleep(1000);  
      cout<<".";
      Sleep(1000);  
      cout<<"."<<endl;      
 }
void test_case(){

   unsigned long IP = 0;
   unsigned long K  = 0;

   cin>>IP;

   string P1[IP];
   string P2[IP];
   string P3[IP];
   string P4[IP];
   string P5[IP];

   string IPS[IP];
   string IPC[IP];
  
   aleatory_ip(IP,IPS,IPC);
    
   for (unsigned long i = 0; i < IP; ++i){

     cout<<"["<<i+1<<"]"<<"["<<IPC[i]<<"]"<<IPS[i]<<endl;
     Sleep(500);
     }
     system("cls");
     for (unsigned long i = 0; i < IP; ++i)
     {
       K = sizeof(IPS[i]);
     }

    class_ip(IP,IPC,IPS,P1,P2,P3,P4,P5);

    for (unsigned long i = 0; i < IP; ++i){

      cout<<"[A]"<<"["<<P1[i]<<"]"<<"[B]"<<"["<<P2[i]<<"]"<<"[C]"<<"["<<P3[i]<<"]"<<"[D]"<<"["<<P4[i]<<"]"<<"[E]"<<"["<<P5[i]<<"]"<<endl;
      Sleep(500);
     }

     cout<<"[server]:"<<K;
 }
