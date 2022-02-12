#include "bibliotecas.h"
#include <iostream>
using namespace std;
void test_case(void){



   cout<<"[scanner] Create _13041"<<endl;
   system("color 1");
   long IP;
   cin>>IP;
   string IPS[IP];
   string IPC[IP];
   const char * IPM[IP];
   int IPB[IP];
   
   aleatory_ip(IP,IPS,IPC);
   clasification_network_mask(IP,IPC,IPM,IPB);

  
   for (int i = 0; i < IP; ++i){

      cout<<"["<<i+1<<"]"<<"["<<IPC[i]<<"]"<<"["<<IPM[i]<<"]"<<"["<<IPB[i]<<"]"<<IPS[i]<<endl;
      

     }
  
    clasification_counter_ip(IP,IPC);
    clasification_repited_ip(IP,IPS);
    Sleep(16000);
    
    
    
    
 }
int main(){


 


 test_case();



 return 0;
 }




