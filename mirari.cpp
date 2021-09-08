#include <windows.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <time.h>

using namespace std;

void aleatory_ip(long ip){

 volatile int n1[ip];
 volatile int n2[ip];
 volatile int n3[ip];
 volatile int n4[ip];

 int t  = 0;
 int j  = 0;
 int k  = 0;

 string IPs[ip];
 string IPc[ip];
 string IPa[ip];

  for (int i = 0; i < ip; ++i){
     
    
  	n1[i] = 0 + rand() % 255;
  	n2[i] = 0 + rand() % 255;
  	n3[i] = 0 + rand() % 255;
  	n4[i] = 0 + rand() % 255;

  }

  
            j = 0;
            k = 0;
            t = 0;

  for (int i = 0; i < ip; ++i){
  	
   IPs[i] = to_string(n1[i]) + '.' +
            to_string(n2[i]) + '.' + 
            to_string(n3[i]) + '.' + 
            to_string(n4[i]) ;
          
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
    
               IPs[i] = IPa[i];
               j++;
    
             }
    
           }


    	
     
                j = 0;

        for(int i = 0; i < ip; i++){

		  for(j = i + 1; j < ip; j++){

			if(IPs[i] == IPs[j]){
 
				 k = j;
 
				 while(k < ip){

					IPs[k] = IPs[k+1]; 
 
					++k;
				}
 
				--ip;
				--j;
 
			
			  }
 
		    }
 
	     }
 

         for (int i = 0; i < ip; ++i){

          t = sizeof(IPs[i]);

         }

          system("color 6");

         for (int i = 0; i < ip; ++i){

         	cout<<"[server:]"<<IPs[i]<<endl;

         }
        cout<<"[server:]"<<t;
	

}
void test_case(){

  long T;
  cin>>T;
  aleatory_ip(T);


 }
int main(){


 test_case();

	return 0;
}
