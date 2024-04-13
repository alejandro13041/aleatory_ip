#ifndef COMPONENTS_H
#define COMPONENTS_H

  #include <string.h>
  #include <stdint.h>
  #include <stdlib.h>
  #include <stdio.h>

  #define DATABASE_SIZE 208648

  //char DATABASE_IP[25] = "IP2LOCATION-LITE-DB1.csv";

  struct ip{

    uint8_t octet_1; 
    uint8_t octet_2; 
    uint8_t octet_3; 
    uint8_t octet_4; 

   };

  struct line{

    char*    code;  
    char*    country; 
    int      number_line;
    uint32_t lower_range;  
    uint32_t upper_range;
       
   };
   
  struct INFO{

    struct ip ip;
    char IPs[16]; 
    char* IPd;
    char* IPm; 
    char  IPc; 
    uint8_t IPb;
    uint32_t IPn;

   }; 

#endif 