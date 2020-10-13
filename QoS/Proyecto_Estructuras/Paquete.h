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
	std::string id;
	std::string prioroty;
	std::string service;
	std::string description;
	int numPort;
public:
	Paquete(std::string pri, std::string serv, std::string des, int port);
	Paquete();
	std::string getPriority();
	std::string getService();
	std::string getDescription();
	std::string getId();
	int getNumPort();
	void setPriority(std::string pri);
	void setService(std::string ser);
	void setDescription(std::string des);
	void setNumPort(int port);
	void setId(std::string idP);
	std::string HexNumGenerator(int length);
	std::string toStringPaquete();
	~Paquete();

};

