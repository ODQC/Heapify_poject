#include "Paquete.h"

Paquete::Paquete(std::string pri, std::string serv, std::string des, int port)
{
	id = HexNumGenerator(6);
	prioroty = pri;
	service = serv;
	description = des;
	numPort = port;


}

Paquete::Paquete()
{
	id = "";
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

std::string Paquete::getId()
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

void Paquete::setId(std::string idP)
{
	id = idP;
}


std::string Paquete::HexNumGenerator(int length)
{
	char* str = (char*)malloc(25);
	srand(time(0));
	//hexadecimal characters
	char hex_characters[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	int i;
	for (i = 0; i < length; i++)
	{
		str[i] = hex_characters[rand() % 16];
	}
	str[length] = '\0';
	return str;
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
