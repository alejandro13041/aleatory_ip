#include "bibliotecas.h"
using namespace std;
void test_case(void){



   cout<<"[scanner] Create _13041"<<endl;
   system("color 6");
   long IP;
   cin>>IP;
   string IPS[IP];
   string IPC[IP];
   long PTS[IP];
   aleatory_ip(IP,IPS,IPC);
   aleatory_port(IP,PTS);
   for (int i = 0; i < IP; ++i){

      cout<<"["<<i+1<<"]"<<"["<<IPC[i]<<"]:"<<IPS[i]<<":"<<PTS[i]<<endl;
      Sleep(500);

    }
  
    clasification_counter_ip(IP,IPC);
    Sleep(16000);
    
 }
int main(){




 test_case();



 return 0;
 }


