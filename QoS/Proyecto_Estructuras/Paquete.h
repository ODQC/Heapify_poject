#pragma once
#include<iostream>
#include <string>
#include<sstream>

class Paquete
{
private:
	int id;
	std::string prioroty;
	std::string service;
	std::string description;
	int numPort;
public:
	Paquete(int id,std::string pri, std::string serv, std::string des, int port);
	Paquete();
	std::string getPriority();
	std::string getService();
	std::string getDescription();
	int getId();
	int getNumPort();
	void setPriority(std::string pri);
	void setService(std::string ser);
	void setDescription(std::string des);
	void setNumPort(int port);
	void setId(int idP);
	std::string toStringPaquete();
	~Paquete();

};

