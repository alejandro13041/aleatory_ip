#include "bibliotecas.h"
#include "headers.h"

void test_case(void){
   
  int ip;
  cin>>ip;
  std::string IPc[ip]; // Arreglo Clases IP
  std::string IPs[ip]; // Arreglo Direcciones IP
  std::string IPm[ip]; // Arreglo Mascaras IP
  std::string IPb[ip]; // Arreglo Bloques IP
  std::string IPd[ip]; // Arreglo Database IP
  std::int64_t IPn[ip]; // Arreglo Numero IP
  //Funciones IP

  getAleatoryip(ip,IPs,IPc,IPn);
  getRepitedip(ip,IPs);
  getNetworkmask(ip,IPc,IPm);
  getBlockred(ip,IPc,IPb);
  getDatabase(ip,IPn,IPd);
     
  for (int i = 0; i < ip; ++i){

    std::cout
    <<"["<<i+1<<"]"
   <<"["<<IPc[i]<<"]"
   <<"["<<IPm[i]<<"]"
   <<"["<<IPb[i]<<"]"
   <<"["<<IPn[i]<<"]"
   <<"["<<IPd[i]<<"]"
   <<IPs[i]<<endl;

   }
   
  std::cout<<n;
  
 }
int main(){

 test_case();

 return 0;
 }

#include "aleatory_ip/bibliotecas.h"

void Get_arrays(){

 std::vector<int unsigned> v1(n);
 std::vector<int unsigned> v2(n);
 std::vector<std::string>  v3(n);

 unsigned int l1 = 0;
 unsigned int l2 = 0;

 char linea[100];
 char country[3];

  for (int i = 0; i < n; ++i){

    fgets(linea,100,p);
    strtok(linea,"\n");
    Get_values(linea,l1,l2,country);
    v1[i] = l1;
    v2[i] = l2;
    v3[i] = country;
   
   }

  for (int i = 0; i < n; ++i){

    std::cout<<"["<<i+1<<"]"
             <<"["<<v1[i]<<"]"
             <<"["<<v2[i]<<"]"
             <<"["<<v3[i]<<"]"<<'\n';

   }

 }
int main(){
   
  Get_arrays();

  return 0;
 }
