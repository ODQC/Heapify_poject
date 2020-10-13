// Proyecto_Estructuras.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "nodo.h"
#include "lista.h"
#include"Paquete.h"
#include <iostream>

lista* listaPk = new lista;
int main()
{
    
    Paquete pk1 = Paquete("Muy Alta","Microsoft Teams","Servicio de video llamadas",3478);
    listaPk->Insertar(pk1);
    Paquete pk2 = Paquete("Media", "HTTPS", "Servicios web", 443);
    listaPk->Insertar(pk2);
    Paquete pk3 = Paquete("Alta", "SSH", "SSH remote control", 22);
    listaPk->Insertar(pk3);
    Paquete pk4 = Paquete("Alta", "VPN", "Tunel de conexion VPN ", 1194);
    listaPk->Insertar(pk4);
    Paquete pk5 = Paquete("Baja", "Spotify", "Servicio de streaming de Musica", 4070);
    listaPk->Insertar(pk5);
    Paquete pk6 = Paquete("Muy Alta", "Cisco Webex", "Servicio de video llamadas", 5004);
    listaPk->Insertar(pk6);
    Paquete pk7 = Paquete("Baja", "Imap", "Servicio de correo electronico", 220);
    listaPk->Insertar(pk7);
    Paquete pk8 = Paquete("Alta", "Microsoft-SQL-Server", "Servicio conexion a SQL", 1433);
    listaPk->Insertar(pk8);
    Paquete pk9 = Paquete("Baja", "time", "Servicio de sincronizacion de fecha y hora", 3481);
    listaPk->Insertar(pk9);
    Paquete pk10 = Paquete("Media", "Minecraft", "Puerto por defecto usado por servidores del juego", 25565);
    listaPk->Insertar(pk10);
    listaPk->MostrarLIsta();
    std::cout << "Hello World!\n";
}

