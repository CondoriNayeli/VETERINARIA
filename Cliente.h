#pragma once
#include "ListaMascotas.h"
using namespace System;
ref class Cliente
{
public:
    String^ nombreCliente;
    String^ infoContacto;
    ListaMascotas^ listaMascotas;
    double costoTotal;
    String^ estadoPago;

    Cliente(String^ _nombreCliente, String^ _infoContacto, ListaMascotas^ _listaMascotas, double _costoTotal, String^ _estadoPago) {
        nombreCliente = _nombreCliente;
        infoContacto = _infoContacto;
        listaMascotas = _listaMascotas;
        costoTotal = _costoTotal;
        estadoPago = _estadoPago;
    }
};

