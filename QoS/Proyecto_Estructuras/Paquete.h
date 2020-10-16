#pragma once
#include<iostream>
#include <string>
#include<sstream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ostream>


class Paquete
{
private:
	int  id;
	int prioroty;
	std::string service;
	std::string description;
	int numPort;
public:
	Paquete(int pri, std::string serv, std::string des, int port);
	Paquete();
	int getPriority();
	std::string getService();
	std::string getDescription();
	int  getId();
	int getNumPort();
	void setPriority(int pri);
	void setService(std::string ser);
	void setDescription(std::string des);
	void setNumPort(int port);
	void setId(int idP);
	int  NumGeneratorByRange(int maximum_number, int minimum_number);
	std::string toStringPaquete();
	~Paquete();

};

