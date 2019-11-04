#include <iostream>

using namespace std;

class Empleado
{
    public:
            string nombre;
            string apellido;
            double salario;


            Empleado(string,string,double);
            void Obtener_nombre();
            void Obtener_apellido();
            void Obtener_salario();

};


Empleado::Empleado(string _nombre,string _apellido,double _salario)
{
    nombre=_nombre;
    apellido=_apellido;
    salario=_salario;
}

void Empleado::Obtener_nombre()
{
    cout<<"El nombre del empleado es: "<<nombre<<endl;
}


void Empleado::Obtener_apellido()
{
    cout<<"El apellido del empleado es: "<<apellido<<endl;
}

void Empleado::Obtener_salario()
{
    double anual,reduc,anual_red;
    if (salario<=0)
    {
        salario=0;
    }
    cout<<"Tu salario es: "<<salario<<endl;
    anual=salario*12;
    cout<<"Tu salario anual es: "<<anual<<endl;


    reduc=salario-(10*salario)/100;
    cout<<"Tu salario reducido en un 10% es: "<<reduc<<endl;

    anual_red=reduc*12;
    cout<<"Tu salario anual reducido es: "<<anual_red<<endl;
    cout<<endl;
}

int main()
{
    Empleado p1("juan","perez",100);
    Empleado p2("pedro","lopez",90);

    p1.Obtener_apellido();
    p1.Obtener_nombre();
    p1.Obtener_salario();

    p2.Obtener_nombre();
    p2.Obtener_apellido();
    p2.Obtener_salario();



    return 0;
}
