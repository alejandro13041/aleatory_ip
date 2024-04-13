#pragma once
#include "bibliotecas.hpp"
#include "components.hpp" 
#include "count.hpp"

void call_IP(std::vector<information>& info,std::vector<database>& db){

	IP::IPs(info);
	IP::IPc(info);
	IP::IPm(info);
	IP::IPb(info);
	IP::IPn(info);
	IP::IPd(info,db);

 } 
void count_IP(std::vector<information>& info){
	
	count::countIPc(info);
	count::countIPm(info);
	count::countIPb(info);

 }