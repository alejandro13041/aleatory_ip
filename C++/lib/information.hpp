#pragma once
#include <cstdint>
#include <vector>
#include "components.hpp"
#include <iostream>
#include <iomanip>
#include "color.hpp"

namespace Information{

	void print(std::vector<information>& info){

		for (int i = 0; i < (int) info.size(); ++i){

			std::cout
			 <<"["<<i+1<<"]"
		  	 <<"["<<info[i].IPc<<"]"
		  	 <<"["<<info[i].IPm<<"]"
		   	 <<"["<<info[i].IPb<<"]"
		  	 <<"["<<info[i].IPd<<"]"
		  	 <<"["<<info[i].IPf<<"]"
			 <<"["<<info[i].IPs<<"]"
			 <<'\n';

		 }

 	 }

 	void memory(std::vector<information>& info){

		//template color(hConsole,14);
 		std::cout<<"=================================="<<'\n';
		std::cout<<"[memory] size vector:"<<info.size()<<'\n';
		std::cout<<"[memory] capacity vector:"<<info.capacity()<<'\n';
		std::cout<<"=================================="<<'\n';
			
  	 }	

	void memoryBits(std::vector<information>& info){

		std::cout<<"=================================="<<'\n';
		std::cout<<"[IPs] info:"<<std::setw(10)<<(sizeof(info[0].IPs)*8)<<" bits"<<'\n';
		std::cout<<"[IPc] info:"<<std::setw(10)<<(sizeof(info[0].IPc)*8)<<" bits"<<'\n';
		std::cout<<"[IPm] info:"<<std::setw(10)<<(sizeof(info[0].IPm)*8)<<" bits"<<'\n';
		std::cout<<"[IPn] info:"<<std::setw(10)<<(sizeof(info[0].IPn)*8)<<" bits"<<'\n';
		std::cout<<"[IPb] info:"<<std::setw(10)<<(sizeof(info[0].IPb)*8)<<" bits"<<'\n';
		std::cout<<"[IPd] info:"<<std::setw(10)<<(sizeof(info[0].IPd)*8)<<" bits"<<'\n';
		std::cout<<"=================================="<<'\n';

	 }

	void memoryBytes(std::vector<information>& info){

		std::cout<<"=================================="<<'\n';
		std::cout<<"[IPs] info:"<<std::setw(10)<<(sizeof(info[0].IPs)*info.size())<<" bytes"<<'\n';
		std::cout<<"[IPc] info:"<<std::setw(10)<<(sizeof(info[0].IPc)*info.size())<<" bytes"<<'\n';
		std::cout<<"[IPm] info:"<<std::setw(10)<<(sizeof(info[0].IPm)*info.size())<<" bytes"<<'\n';
		std::cout<<"[IPn] info:"<<std::setw(10)<<(sizeof(info[0].IPn)*info.size())<<" bytes"<<'\n';
		std::cout<<"[IPb] info:"<<std::setw(10)<<(sizeof(info[0].IPb)*info.size())<<" bytes"<<'\n';
		std::cout<<"[IPd] info:"<<std::setw(10)<<(sizeof(info[0].IPd)*info.size())<<" bytes"<<'\n';
		std::cout<<"=================================="<<'\n';

	 } 

	namespace total{

		void memoryBits(std::vector<information>& info){

			std::cout<<"=================================="<<'\n';
			std::cout<<"[IPs] total:"<<std::setw(10)<<(sizeof(info[0].IPs)*8* info.size())<<" bits"<<'\n';
			std::cout<<"[IPc] total:"<<std::setw(10)<<(sizeof(info[0].IPc)*8* info.size())<<" bits"<<'\n';
			std::cout<<"[IPm] total:"<<std::setw(10)<<(sizeof(info[0].IPm)*8* info.size())<<" bits"<<'\n';
			std::cout<<"[IPn] total:"<<std::setw(10)<<(sizeof(info[0].IPn)*8* info.size())<<" bits"<<'\n';
			std::cout<<"[IPb] total:"<<std::setw(10)<<(sizeof(info[0].IPb)*8* info.size())<<" bits"<<'\n';
			std::cout<<"[IPd] total:"<<std::setw(10)<<(sizeof(info[0].IPd)*8* info.size())<<" bits"<<'\n';
			std::cout<<"=================================="<<'\n';
		
		 }

		void memoryBytes(std::vector<information>& info){

			std::cout<<"=================================="<<'\n';
			std::cout<<"[IPs] total:"<<std::setw(10)<<sizeof(info[0].IPs)<<" bytes"<<'\n';
			std::cout<<"[IPc] total:"<<std::setw(10)<<sizeof(info[0].IPc)<<" bytes"<<'\n';
			std::cout<<"[IPm] total:"<<std::setw(10)<<sizeof(info[0].IPm)<<" bytes"<<'\n';
			std::cout<<"[IPn] total:"<<std::setw(10)<<sizeof(info[0].IPn)<<" bytes"<<'\n';
			std::cout<<"[IPb] total:"<<std::setw(10)<<sizeof(info[0].IPb)<<" bytes"<<'\n';
			std::cout<<"[IPd] total:"<<std::setw(10)<<sizeof(info[0].IPd)<<" bytes"<<'\n';
			std::cout<<"=================================="<<'\n';


		 } 

	 } 

 }		

namespace dataBase{

	void print(std::vector<database>& db){

		for (int i = 0; i < (int) db.size(); ++i){

		 	std::cout<<"[+]"<<db[i].lrange
		 			 <<"[+]"<<db[i].urange
		 			 <<"[+]"<<db[i].country<<'\n';
			
		 }
 	}
 	
	void memory(std::vector<database>& db){

		std::cout<<"=================================="<<'\n';
		std::cout<<"[memory] size vector:"<<db.size()<<'\n';
		std::cout<<"[memory] capacity vector:"<<db.capacity()<<'\n';
		std::cout<<"=================================="<<'\n';
		
	 } 

	void memoryBits(std::vector<database>& db){

		std::cout<<"====================================="<<'\n';
		std::cout<<"[IPs] database:"<<std::setw(10)<<(sizeof(db[0].lrange)*8) <<std::setw(5)<<"bits"<<'\n';
		std::cout<<"[IPc] database:"<<std::setw(10)<<(sizeof(db[0].urange)*8) <<std::setw(5)<<"bits"<<'\n';
		std::cout<<"[IPm] database:"<<std::setw(10)<<(sizeof(db[0].country)*8)<<std::setw(5)<<"bits"<<'\n';
		std::cout<<"====================================="<<'\n';		

	 }		 
    
 	void memoryBytes(std::vector<database>& db){


 		std::cout<<"====================================="<<'\n';
		std::cout<<"[IPs] database:"<<std::setw(10)<<sizeof(db[0].lrange) <<std::setw(5)<<" bytes"<<'\n';
		std::cout<<"[IPc] database:"<<std::setw(10)<<sizeof(db[0].urange) <<std::setw(5)<<" bytes"<<'\n';
		std::cout<<"[IPm] database:"<<std::setw(10)<<sizeof(db[0].country)<<std::setw(5)<<" bytes"<<'\n';
		std::cout<<"====================================="<<'\n';

 	 }

	namespace total{

		void memoryBits(std::vector<database>& db){

			std::cout<<"====================================="<<'\n';
			std::cout<<"[IPs] total:"<<std::setw(10)<<(sizeof(db[0].lrange) * db.size())<<std::setw(5)<<" bits"<<'\n';
			std::cout<<"[IPc] total:"<<std::setw(10)<<(sizeof(db[0].urange) * db.size())<<std::setw(5)<<" bits"<<'\n';
			std::cout<<"[IPm] total:"<<std::setw(10)<<(sizeof(db[0].country)* db.size())<<std::setw(5)<<" bits"<<'\n';
			std::cout<<"====================================="<<'\n';

		 }

		void memoryBytes(std::vector<database>& db){

		 	std::cout<<"====================================="<<'\n';
			std::cout<<"[IPs] total:"<<std::setw(10)<<sizeof(db[0].lrange) <<std::setw(5)<<" bytes"<<'\n';
			std::cout<<"[IPc] total:"<<std::setw(10)<<sizeof(db[0].urange) <<std::setw(5)<<" bytes"<<'\n';
			std::cout<<"[IPm] total:"<<std::setw(10)<<sizeof(db[0].country)<<std::setw(5)<<" bytes"<<'\n';
			std::cout<<"====================================="<<'\n';

		 }
		 
	 } 
 }

namespace address{

	void printAddressInfo(std::vector<information>& info){

		for (int i = 0; i < (int) info.size(); ++i){

			std::cout<<"[address "<<i<<":]"<<&info[i].IPs<<'\n';
			std::cout<<"[address "<<i<<":]"<<&info[i].IPc<<'\n';
			std::cout<<"[address "<<i<<":]"<<&info[i].IPm<<'\n';
			std::cout<<"[address "<<i<<":]"<<&info[i].IPb<<'\n';
			std::cout<<"[address "<<i<<":]"<<&info[i].IPn<<'\n';
			std::cout<<"[address "<<i<<":]"<<&info[i].IPd<<'\n';

		 }

	 }

	void printAddresDatabase(std::vector<database>& db){

		for (int i = 0; i < (int) db.size(); ++i){

			std::cout<<"[address "<<i<<":]"<<&db[i].lrange<<'\n';
			std::cout<<"[address "<<i<<":]"<<&db[i].urange<<'\n';
			std::cout<<"[address "<<i<<":]"<<&db[i].country<<'\n';

		 }

	 }

 }

namespace country{

	void printCountrys(std::vector<std::string>& country, std::vector<std::string>& code){

		for (int i = 0; i < (int) country.size() || code.size(); ++i){

			std::cout<<"["<<i+1<<"]"
					 <<"["<<code[i]<<"]"
					 <<"["<<country[i]<<"]"<<'\n';

		 }

 	 }
 	 
 } 
