#include "bibliotecas.h"
using namespace std;
void test_case(){

   system("color 6");
   long IP;
   cin>>IP;
   string IPS[IP];
   string IPC[IP];
   aleatory_ip(IP,IPS,IPC);

   for (int i = 0; i < IP; ++i){

      cout<<"["<<i+1<<"]"<<"["<<IPC[i]<<"]:"<<IPS[i]<<endl;
      Sleep(500);

    }

    clasification_counter_ip(IP,IPC);
    IPS.fill("");
    IPC.fill("");
 }
int main(){




 test_case();



 return 0;
 }

