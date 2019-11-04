#include <iostream>
#include "Estudiante.h"
#include "Curso.h"

using namespace std;

int main()
{
    Estudiante e1("sebastian","paz","14523");
    Estudiante e2("diego","cardenas","36178");

    e1.Obtener_nombre();
    e1.Obtener_apellido();
    e1.Obtener_codigo();

    e2.Obtener_nombre();
    e2.Obtener_apellido();
    e2.Obtener_codigo();


    Curso c1(28,"Lucas","22154");
    c1.Obtener_nombre();
    c1.Obtener_codigo();
    c1.Obtener_cantidadAlumnos();
    c1.Incrementa_Nestudiantes();

    Curso c2=c1;
    c2.Obtener_nombre();
    c2.Obtener_codigo();
    c2.Obtener_cantidadAlumnos();
    c2.Incrementa_Nestudiantes();
}

//Estudiante.h
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

using namespace std;

class Estudiante
{
    public:
            string nombre;
            string apellido;
            string codigo;
            Estudiante(string,string,string);

            void Obtener_nombre();
            void Obtener_apellido();
            void Obtener_codigo();
};

#endif // ESTUDIANTE_H



//Estudiante.cpp
#include "Estudiante.h"
#include <iostream>
using namespace std;


Estudiante::Estudiante(string _nombre,string _apellido,string _codigo)
{
    nombre=_nombre;
    apellido=_apellido;
    codigo=_codigo;
}


void Estudiante::Obtener_nombre()
{
    cout<<"El nombre del estudiante es: "<<nombre<<endl;
}

void Estudiante::Obtener_apellido()
{
    cout<<"El apellido del estudiante es: "<<apellido<<endl;
}

void Estudiante::Obtener_codigo()
{
    cout<<"El codigo del estudiante es: "<<codigo<<endl;
    cout<<endl;
}


//Curso.h
#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include "Estudiante.h"

using namespace std;

class Curso
{
    private:
            int cantidadAlumnos;
            int aumento_cantidad;
    public:
            string nombre;
            string codigo;
            Curso(int,string,string);
            Curso(const Curso& C);
            void Obtener_nombre();
            void Obtener_codigo();
            void Obtener_cantidadAlumnos();
            void Incrementa_Nestudiantes();
};

#endif // CURSO_H


//Curso.cpp
#include "Curso.h"
#include "Estudiante.h"
#include <iostream>
using namespace std;

Curso::Curso(int _cantidadAlumnos,string _nombre,string _codigo)
{
    cout<<"normal"<<endl;
    cantidadAlumnos=_cantidadAlumnos;
    nombre=_nombre;
    codigo=_codigo;
}

Curso::Curso(const Curso& C)
{
    cout<<"copia"<<endl;
    cantidadAlumnos=C.cantidadAlumnos;
    nombre=C.nombre;
    codigo=C.codigo;
}

void Curso::Obtener_nombre()
{
    cout<<"El alumno se llama: "<<nombre<<endl;
}

void Curso::Obtener_codigo()
{
    cout<<"El codigo del alumno es: "<<codigo<<endl;
}

void Curso::Obtener_cantidadAlumnos()
{

    cout<<"hay "<<cantidadAlumnos<<" alumnos en total. "<<endl;
}

void Curso::Incrementa_Nestudiantes()
{
    aumento_cantidad=cantidadAlumnos+1;
    cout<<"El numero de alumnos mas 1 es: "<<aumento_cantidad<<endl;
    cout<<endl;
}
