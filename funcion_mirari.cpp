#include <iostream>
using namespace std;
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
      cout<<"complete..."<<endl;             
 }
int main(){
  long t;
 cin>>t;
 string MIPs[t];
 string MIPc[t];
 for (int i = 0; i < t; ++i){
     MIPs[i] = "";
     MIPc[i] = "";  
  } 
 aleatory_ip(t,MIPs,MIPc);
  for (int i = 0; i < t; ++i){
    cout<<"["<<i+1<<"]"<<"["<<MIPs[i]<<"]"<<"["<<MIPc[i]<<"]"<<endl;
  }
 return 0;
 }