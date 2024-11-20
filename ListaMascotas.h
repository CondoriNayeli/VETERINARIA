#pragma once
#include "Mascota.h"
using namespace System;
ref class ListaMascotas
{
private:
    Mascota^ primero;
    Mascota^ ultimo;

public:
    ListaMascotas() {
        primero = nullptr;
        ultimo = nullptr;
    }

    void agregarMascota(String^ nombre, String^ tipo, int edad) {
        Mascota^ nuevaMascota = gcnew Mascota(nombre, tipo, edad);
        if (ultimo == nullptr) {
            primero = ultimo = nuevaMascota;
        }
        else {
            ultimo->siguiente = nuevaMascota;
            ultimo = nuevaMascota;
        }
    }

    Mascota^ getPrimero() {
        return primero;
    }
};

