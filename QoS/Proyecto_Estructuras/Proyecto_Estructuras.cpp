// Proyecto_Estructuras.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "nodo.h"
#include "lista.h"
#include"Paquete.h"
#include"CodeGenerator.h"
#include <string>
#include <iostream>


lista* listaPk = new lista;

int prio;
std::string nomSer, opc, desc, port;
bool resp = true;
bool resp1 = true;
int main()
{
	int idP;
	idP = NumGeneratorByRange(99999, 10000);
	int opc;
	Paquete* pk1 = new Paquete(idP, 4, "Microsoft Teams", "Servicio de video llamadas", "3478");
	listaPk->Insertar(pk1);
	idP++;
	Paquete* pk2 = new Paquete(idP, 2, "HTTPS", "Servicios web", "443");
	listaPk->Insertar(pk2);
	idP++;
	Paquete* pk3 = new Paquete(idP, 3, "SSH", "SSH remote control", "22");
	listaPk->Insertar(pk3);
	idP++;
	Paquete* pk4 = new Paquete(idP, 3, "VPN", "Tunel de conexion VPN ", "1194");
	listaPk->Insertar(pk4);
	idP++;
	Paquete* pk5 = new Paquete(idP, 1, "Spotify", "Servicio de streaming de Musica", "4070");
	listaPk->Insertar(pk5);
	idP++;
	Paquete* pk6 = new Paquete(idP, 4, "Cisco Webex", "Servicio de video llamadas", "5004");
	listaPk->Insertar(pk6);
	idP++;
	Paquete* pk7 = new Paquete(idP, 1, "Imap", "Servicio de correo electronico", " 220");
	listaPk->Insertar(pk7);
	idP++;
	Paquete* pk8 = new Paquete(idP, 3, "Microsoft-SQL-Server", "Servicio conexion a SQL", "1433");
	listaPk->Insertar(pk8);
	idP++;
	Paquete* pk9 = new Paquete(idP, 1, "time", "Servicio de sincronizacion de fecha y hora", "3481");
	listaPk->Insertar(pk9);
	idP++;
	Paquete* pk10 = new Paquete(idP, 2, "Minecraft", "Puerto por defecto usado por servidores del juego", "25565");
	listaPk->Insertar(pk10);
	Paquete* pkN = new Paquete;

	while (resp) {
		system("cls");
		std::cout << "----------Bienvenido a *Quality of Service System*-------------" << endl;
		std::cout << "[1] Crear nueva solicitud de envio de paquete----------" << endl;
		std::cout << "[2] Imprimir lista con prioridad-----------------------" << endl;
		std::cout << "[3] Eliminar primero del heap-----------------------" << endl;
		std::cout << "[4] Salir----------------------------------------------" << endl;
		std::cin >> opc;


		if (opc == 1) {
			std::cout << "\tCrear solicitud de paquete" << endl;
			bool val1 = true;
			while (val1)
			{
				std::string opc;
				system("cls");
				std::cout << "Agregar una prioridad a la solicitud: " << endl;
				std::cout << "Indique el banco al que pertenece la cuenta:" << std::endl;
				std::cout << "\t1-Baja\n";
				std::cout << "\t2-Media\n";
				std::cout << "\t3-Alta\n";
				std::cout << "\t4-Muy Alta\n";
				std::cin >> opc;
				prio = opc == "1" ? prio = 1 : opc == "2" ? prio = 2 : opc == "3" ? prio = 3 : opc == "4" ? prio == 4 : prio = 0;
				val1 = (prio == 0) ? val1 = true : val1 = false;
			}
			std::cout << "Agregar un nombre a la solicitud" << endl;
			std::cin >> nomSer;
			std::cout << "Agregar una descripcion a la solicitud" << endl;
			std::cin >> desc;
			std::cout << "Agregar un puerto a la solicitud" << endl;
			std::cin >> port;
			idP++;
			Paquete* pkN = new Paquete(idP, prio, nomSer, desc, port);
			listaPk->Insertar(pkN);
			std::cout << "\t Verificacion de datos de nuevo paquete" << endl;
			std::cout << pkN->toStringPaquete() << std::endl;
			system("pause");

			resp = true;
		}
		else if (opc == 2) {
			std::cout << "\tLa cola de prioridad procesara los paquetes UDP/TCP segun su nivel de prioridad " << endl;
			std::cout << "\tLa prioridad de los paquetes va de 1 a 4  donde 1 es baja, 2 media, 3 alta, 4 muy alta" << endl;
			std::cout << "\tImprimiendo lista de menor a mayor prioridad\n" << endl;
			system("pause");
			listaPk->Mostrar(0);
			system("pause");
			system("cls");
			resp = true;
		}
		else if (opc == 3) {
			listaPk->pop();
			listaPk->Mostrar(0);
			system("pause");
			system("cls");
			resp = true;
		}
		else if (opc == 4) {
			std::cout << "Gracias por utilizar el sistema" << endl;
			system("pause");
			resp = false;
			break;
		}
	}



}

