// Proyecto_Estructuras.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "nodo.h"
#include "lista.h"
#include"Paquete.h"
#include <string>
#include <iostream>


lista* listaPk = new lista;

int prio;
std::string nomSer;
std::string desc;
int port;
bool resp = true;
int main()
{
    
    int opc;
    Paquete* pk1 = new Paquete(4,"Microsoft Teams","Servicio de video llamadas",3478);
    listaPk->Insertar(pk1);
    Paquete* pk2 = new Paquete(2, "HTTPS", "Servicios web", 443);
    listaPk->Insertar(pk2);
    Paquete* pk3 = new Paquete(3, "SSH", "SSH remote control", 22);
    listaPk->Insertar(pk3);
    Paquete* pk4 = new Paquete(3, "VPN", "Tunel de conexion VPN ", 1194);
    listaPk->Insertar(pk4);
    Paquete* pk5 = new Paquete(1, "Spotify", "Servicio de streaming de Musica", 4070);
    listaPk->Insertar(pk5);
    Paquete* pk6 = new Paquete(4, "Cisco Webex", "Servicio de video llamadas", 5004);
    listaPk->Insertar(pk6);
    Paquete* pk7 = new Paquete(1, "Imap", "Servicio de correo electronico", 220);
    listaPk->Insertar(pk7);
    Paquete* pk8 = new Paquete(3, "Microsoft-SQL-Server", "Servicio conexion a SQL", 1433);
    listaPk->Insertar(pk8);
    Paquete* pk9 = new Paquete(1, "time", "Servicio de sincronizacion de fecha y hora", 3481);
    listaPk->Insertar(pk9);
    Paquete* pk10 = new Paquete(2, "Minecraft", "Puerto por defecto usado por servidores del juego", 25565);
    listaPk->Insertar(pk10);
    
    while (resp) {
        std::cout << "----------Bienvenido a *nombregenerico xD*-------------" << endl;
        std::cout << "[1] Crear nueva solicitud de envio de paquete----------" << endl;
        std::cout << "[2] Imprimir lista con prioridad-----------------------" << endl;
        std::cout << "[3] Salir----------------------------------------------" << endl;
        std::cin >> opc;
        
        if (opc == 1) {
            std::cout << "Crear solicitud de paquete" << endl;
            std::cout << "Agregar una prioridad a la solicitud (4 alta prioridad,1 baja prioridad)" << endl;
            std::cin >> prio;
            std::cout << "Agregar un nombre a la solicitud" << endl;
            std::cin >> nomSer;
            std::cout << "Agregar una descripcion a la solicitud" << endl;
            std::cin >> desc;
            std::cout << "Agregar un puerto a la solicitud" << endl;
            std::cin >> port;
            Paquete* pkNew = new Paquete();
            

            system("pause");
        }
        if (opc == 2) {
            std::cout << "Imprimiendo lista" << endl;
            listaPk->Mostrar(1);
        }
        if (opc == 3) {
            std::cout << "Gracias por utilizar el sistema" << endl;
            resp = false;
            system("pause");
        }
		

        
        
    }
    std::cout << "Hello World!\n";
   
    

}

