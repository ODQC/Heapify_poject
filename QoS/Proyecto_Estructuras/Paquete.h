#pragma once
#include<iostream>
#include <string>

class Paquete
{
private:
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
	int getNumPort();
	void setPriority(std::string pri);
	void setService(std::string ser);
	void setDescription(std::string des);
	void setNumPort(int port);
	~Paquete();

};

