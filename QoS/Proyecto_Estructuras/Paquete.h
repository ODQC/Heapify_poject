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
	std::string numPort;

public:
	Paquete(int id ,int pri, std::string serv, std::string des, std::string port);
	Paquete();
	int getPriority();
	std::string getService();
	std::string getDescription();
	int  getId();
	std::string getNumPort();
	void setPriority(int pri);
	void setService(std::string ser);
	void setDescription(std::string des);
	void setNumPort(std::string port);
	void setId(int idP);
	std::string toStringPaquete();
	~Paquete();

};

