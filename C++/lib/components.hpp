#pragma once 
#include <string>
#include <cstdint>

struct octets{

  uint8_t octet1;
  uint8_t octet2;
  uint8_t octet3;
  uint8_t octet4;

 };

struct database{

  uint32_t lrange;  
  uint32_t urange;
  std::string code;   
  std::string country;

 };

struct information{

  std::string IPf; // IP country
  std::string IPs; // IP addres
  std::string IPd; // IP code
  std::string IPm; // IP mask
  std::string IPb; // IP use

     
  uint32_t IPn; // IP number
  char IPc;  // IP class

  octets octets;

 }; 