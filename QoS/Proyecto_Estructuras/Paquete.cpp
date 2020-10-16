#include "Paquete.h"

Paquete::Paquete(std::string pri, std::string serv, std::string des, int port)
{
	id =  NumGeneratorByRange(9999, 1000);
	prioroty = pri;
	service = serv;
	description = des;
	numPort = port;


}

Paquete::Paquete()
{
	id = 0;
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

int Paquete::getId()
{
	return id;
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

void Paquete::setId(int idP)
{
	id = idP;
}

int  Paquete::NumGeneratorByRange(int maximum_number, int minimum_number)
{
	srand(time(0));
	const int new_number = (rand() % (maximum_number + 1 - minimum_number)) + minimum_number;
	return new_number;
}

std::string Paquete::toStringPaquete()
{
	std::stringstream x;
	x << "Id de Paquete: " << id << std::endl;
	x << "Prioridad: " << prioroty << std::endl;
	x <<"Nombre del Servicio: " << service << std::endl;
	x << "Descripcion del Servicio: " << service << std::endl;
	x << "Numero de puerto UDP-TCP: " <<numPort << std::endl;	
	return x.str();
}



Paquete::~Paquete()
{
}
