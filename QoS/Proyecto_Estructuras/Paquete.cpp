#include "Paquete.h"

Paquete::Paquete(std::string pri, std::string serv, std::string des, int port)
{
	prioroty = pri;
	service = serv;
	description = des;
	numPort = port;


}

Paquete::Paquete()
{
	prioroty = "";
	service = "";
	description = "";
	numPort = 0;

}

std::string Paquete::getPriority()
{
	return prioroty;
}

std::string Paquete::getService()
{
	return service;
}

std::string Paquete::getDescription()
{
	return description;
}

int Paquete::getNumPort()
{
	return numPort;
}

void Paquete::setPriority(std::string pri)
{
	prioroty = pri;
}

void Paquete::setService(std::string ser)
{
	service = ser;
}

void Paquete::setDescription(std::string des)
{
	description = des;
}

void Paquete::setNumPort(int port)
{
	numPort = port;
}

Paquete::~Paquete()
{
}
