#pragma once 
#include "components.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

namespace IP{

	void IPs(std::vector<information>& info){	
	    
		for (int i = 0; i < (int) info.size(); i++){  		 
			
			uint8_t octet1 = (rand() % 255);
			uint8_t octet2 = (rand() % 255);
			uint8_t octet3 = (rand() % 255);
			uint8_t octet4 = (rand() % 255);
			
			info[i].octets.octet1 = octet1;
			info[i].octets.octet2 = octet2;
			info[i].octets.octet3 = octet3;
			info[i].octets.octet4 = octet4;
 	 
			info[i].IPs  = (

			    std::to_string(octet1) + "." +
		     	std::to_string(octet2) + "." +
		     	std::to_string(octet3) + "." +
	        	std::to_string(octet4)

			 );		
		 }  
	 }
	void IPc(std::vector<information>& info){

	    uint8_t octet1;

		for (int i = 0; i < (int) info.size(); ++i){

			 octet1 = info[i].octets.octet1;
			 switch (octet1) {

	            case   0 ... 127: info[i].IPc = 'A'; break;
	            case 128 ... 191: info[i].IPc = 'B'; break;
	            case 192 ... 223: info[i].IPc = 'C'; break;
	            case 224 ... 239: info[i].IPc = 'D'; break;
	            case 240 ... 255: info[i].IPc = 'E'; break;
	            default: std::cout<<"[main]: (error IPc function)"<<'\n'; break;

	         }
	 			 
		 }

	 }
	void IPm(std::vector<information>& info){

		char IPc;

		for (int i = 0; i < (int) info.size(); ++i){

			IPc = info[i].IPc;

			switch (IPc) {

	            case 'A': info[i].IPm = "255.0.0.0";       break;
	            case 'B': info[i].IPm = "255.255.0.0";     break;
	            case 'C': info[i].IPm = "255.255.255.0";   break;
	            case 'D': info[i].IPm = "255.255.255.255"; break;
	            case 'E': info[i].IPm = "255.255.255.255"; break;
	            default: std::cout<<"[main]: (error IPm function)"<<'\n'; break;

	         }
		 } 
		 
	 }
	void IPb(std::vector<information>& info){	

		char IPc;	

	   for (int i = 0; i < (int) info.size(); ++i){
	 
	   		IPc = info[i].IPc;

	   		switch (IPc) {

	            case 'A': info[i].IPb = "8"; break;
	            case 'B': info[i].IPb = "16"; break;
	            case 'C': info[i].IPb = "24"; break;
	            case 'D': info[i].IPb = "32"; break;
	            case 'E': info[i].IPb = "32"; break;
	            default: std::cout<<"[main]: (error IPb function)"<<'\n'; break;

	         }

		 }

	 } 
	void IPn(std::vector<information>& info){
		
		for (int i = 0; i < (int) info.size(); ++i){

			info[i].IPn = (

			 (16777216 * info[i].octets.octet1) + 
		        (65536 * info[i].octets.octet2) + 
		 	      (256 * info[i].octets.octet3) + 
		 	             info[i].octets.octet4

		     );

	     }     
	 } 	
	void IPd(std::vector<information>& info,std::vector<database>& db){

		for (int i = 0; i < (int) info.size(); ++i){

			for (int j = 0; j < (int) db.size(); ++j){

				if(info[i].IPn >= db[j].lrange && info[i].IPn <= db[j].urange){ 
					
					info[i].IPd = db[j].code;
					info[i].IPf = db[j].country;
							
		 		 }	
			 }
		 } 
	 } 
}