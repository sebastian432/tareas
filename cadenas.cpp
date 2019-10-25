#include <iostream>

using namespace std;

// tamaño
int tam_cad(char *cadena){
    int tam=0;
    for(int i=0;*(cadena+i)!='\0';i++){
        tam++;
    }
return tam++;
}

int tam_rec(char *cadena){
    if (*cadena=='\0')
        return 0;
    return 1 + tam_rec(++cadena);
}

//invertir
char swap(char &x, char &y){
    char temp=x;
    x=y;
    y=temp;

}

void invertir(char *cadena){
        char *fin = cadena + tam_cad(cadena)-1;
        while(fin>cadena){
            swap(*cadena,*fin);
            fin--;
            cadena++;
        }
}

//invertir recursivo

void invertir_rec(char *cadena,int tam,int i=0){
        char *fin=cadena+tam-i;
        if(cadena<fin)
        {
            swap(*cadena,*fin);
            invertir_rec(++cadena,--tam,++i);
        }
}


//palindrome


bool palindrome(char *cadena,int tam){
            char *fin = cadena + tam ;
                while(cadena<fin)
                {
                    if(*cadena!=*fin)
                    {
                        return false;
                    }
                cadena++;
                fin--;
                tam--;
                }
                return true;
}


bool pal_rec(char *cadena,int tam,int i=0){
    char *fin = cadena + tam -i;
            if(fin<cadena)
            {
                return true;
            }
            if(*cadena!=*fin)
            {
                return false;
            }
            else
            {
                pal_rec(++cadena,--tam,++i);
            }
}
int main(){
        char cadena[]="hoiyioh";

        char cadena1[]="somos";
        int tam=tam_cad(cadena)-1;
        char *fin = cadena + tam_cad(cadena)-1;

        cout<<tam_cad(cadena)<<endl;
        cout<<tam_rec(cadena)<<endl;
        invertir(cadena);
        cout<<cadena<<endl;
        invertir_rec(cadena,tam);
        cout<<cadena<<endl;
        cout<<palindrome(cadena,tam)<<endl;

        cout<<pal_rec(cadena,tam)<<endl;


return 0;
}

