#pragma once 
#include "components.hpp"
#include <vector>
#include <iostream>
namespace count{

	void countIPc(std::vector<information>& info){

		//4 bytes

		unsigned int i1 = 0;
		unsigned int i2 = 0;
		unsigned int i3 = 0;
		unsigned int i4 = 0;
		unsigned int i5 = 0;

		for (int i = 0; i < (int) info.size(); ++i){

		 	if(info[i].IPc == 'A'){ i1++; }
		    if(info[i].IPc == 'B'){ i2++; }
			if(info[i].IPc == 'C'){ i3++; }
			if(info[i].IPc == 'D'){ i4++; }
			if(info[i].IPc == 'E'){ i5++; }

		 }

		std::cout<<"[A]:"<<i1<<'\n';
		std::cout<<"[B]:"<<i2<<'\n';
		std::cout<<"[C]:"<<i3<<'\n';
		std::cout<<"[D]:"<<i4<<'\n';
		std::cout<<"[E]:"<<i5<<'\n';

	 }
	void countIPm(std::vector<information>& info){

		//4 bytes 

		unsigned int m1 = 0;
		unsigned int m2 = 0;
		unsigned int m3 = 0;
		unsigned int m4 = 0;

		for (int i = 0; i < (int) info.size(); ++i){

			if(info[i].IPm == "255.0.0.0"       ){ m1++; }
		    if(info[i].IPm == "255.255.0.0"     ){ m2++; }
			if(info[i].IPm == "255.255.255.0"   ){ m3++; }
			if(info[i].IPm == "255.255.255.255" ){ m4++; }
		
		 }

		std::cout<<"[m1]:"<<m1<<'\n';
		std::cout<<"[m2]:"<<m2<<'\n';
		std::cout<<"[m3]:"<<m3<<'\n';
		std::cout<<"[m4]:"<<m4<<'\n';

	 }  
	void countIPb(std::vector<information>& info){

		//4 bytes

		unsigned int b1 = 0;
		unsigned int b2 = 0;
		unsigned int b3 = 0;
		unsigned int b4 = 0;

		for (int i = 0; i < (int) info.size(); ++i){

			if(info[i].IPb == "8" ){ b1++; }
		    if(info[i].IPb == "16"){ b2++; }
			if(info[i].IPb == "24"){ b3++; }
			if(info[i].IPb == "32"){ b4++; }
		
		 }

		std::cout<<"[b1]:"<<b1<<'\n';
		std::cout<<"[b2]:"<<b2<<'\n';
		std::cout<<"[b3]:"<<b3<<'\n';
		std::cout<<"[b4]:"<<b4<<'\n';

	 }  

 };