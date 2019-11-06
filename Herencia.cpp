#include <iostream>
using namespace std;

class Shooter
{
        protected:
                string armas;
                string personajes;
        public:
                Shooter();
                Shooter(string _armas, string _personajes)
                {
                    armas=_armas;
                    personajes=_personajes;
                }
                string getArmas()
                {
                    return armas;
                }
                string getPersonajes()
                {
                    return personajes;
                }
};




class Callofduty:public Shooter
{
    protected:
            string saga;
    public:
            Callofduty(string armas_,string personajes_,string saga_):
            Shooter(armas_ ,personajes_), saga(saga_){}
            string getSaga()
            {
                return saga;
            }
};

class Ghost:public Callofduty
{
    private:
            string modo;
    public:
            Ghost(string armas_,string personajes_,string saga_,string modo_):
            Callofduty(armas_,personajes_,saga_),modo(modo_){}
            string getModo()
            {
                return modo;
            }

};

class Battelfield:public Shooter
{
    private:
            string mapa;
    public:
            Battelfield(string armas_,string personajes_,string mapa_):
            Shooter(armas_,personajes_),mapa( mapa_){}
            string getMapa()
            {
                return mapa;
            }
};

int main()
{
    Shooter p1("mp7","Soap");
        cout<<p1.getArmas()<<endl;
        cout<<p1.getPersonajes()<<endl<<endl;


        cout<<"....puntero...."<<endl;
        Shooter *ptr1=&p1;
        cout<<ptr1->getArmas()<<endl;
        cout<<ptr1->getPersonajes()<<endl<<endl;


    Callofduty p2("AN-94","Makarov","Black ops");
        cout<<p2.getArmas()<<endl;
        cout<<p2.getPersonajes()<<endl;
        cout<<p2.getSaga()<<endl<<endl;

        cout<<"....puntero...."<<endl;
        Callofduty *ptr2=&p2;
        cout<<ptr2->getArmas()<<endl;
        cout<<ptr2->getPersonajes()<<endl;
        cout<<ptr2->getSaga()<<endl<<endl;


    Battelfield p3("AK-47","Rider","Desierto");
        cout<<p3.getArmas()<<endl;
        cout<<p3.getPersonajes()<<endl;
        cout<<p3.getMapa()<<endl<<endl;

        cout<<"....puntero...."<<endl;
        Battelfield *ptr3=&p3;
        cout<<ptr3->getArmas()<<endl;
        cout<<ptr3->getPersonajes()<<endl;
        cout<<ptr3->getMapa()<<endl<<endl;

    Ghost p4("AK-12","Ghost","Saga Ghost","campania");
        cout<<p4.getArmas()<<endl;
        cout<<p4.getPersonajes()<<endl;
        cout<<p4.getSaga()<<endl;
        cout<<p4.getModo()<<endl;

        cout<<"....puntero...."<<endl;
        Ghost *ptr4=&p4;
        cout<<ptr4->getArmas()<<endl;
        cout<<ptr4->getPersonajes()<<endl;
        cout<<ptr4->getSaga()<<endl;
        cout<<ptr4->getModo()<<endl;

    return 0;
}

