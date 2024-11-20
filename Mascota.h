#pragma once
using namespace System;
ref class Mascota
{
public:
    String^ nombre;
    String^ tipo;
    int edad;
    Mascota^ siguiente;

    Mascota(String^ _nombre, String^ _tipo, int _edad) {
        nombre = _nombre;
        tipo = _tipo;
        edad = _edad;
        siguiente = nullptr;
    }
};

