#pragma once
#include"Cliente.h"
using namespace System;
ref class ColaClientes
{
private:
    array<Cliente^>^ items;
    int primero;
    int ultimo;

public:
    ColaClientes() {
        items = gcnew array<Cliente^>(10);
        primero = 0;
        ultimo = -1;
    }

    bool esVacia() {
        return ultimo < primero;
    }

    bool esLlena() {
        return ultimo == 9;
    }

    void anadirCliente(Cliente^ cliente) {
            items[++ultimo] = cliente; 
    }

    void atenderCliente() {
            Cliente^ cliente = items[primero++];
            delete cliente;   
    }

};


