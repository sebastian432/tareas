
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
}
