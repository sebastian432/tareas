#include <iostream>

using namespace std;

/*
void imprimir(int *arr, int tam){
    while(tam--){
        cout << *arr <<" ";
        arr++;
    }
    cout<<endl;
}

int main(){
    int x[5] = {2,3,4,5,6};
    int tam = 5;
    imprimir(x, tam);

}

int suma(int *arr, int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma += *arr;
        *arr++;
    }
    cout<<suma<<" ";



}
int main(){
    int x[5] = {2,3,4,5,6};
    int tam = 5;
    suma(x, tam);
}



//suma los elementos desde el primero hasta el ultimo
int sumaRecursiva(int *arr, int tam){

    if (tam == 1)
        return *arr;
    return *arr + sumaRecursiva(arr+1, tam-1);//(++arr;--tam)
}

int main(){
    int x[5] = {2,3,4,5,6};
    int tam = 5;
    cout <<sumaRecursiva(x, tam)<<endl;
}


//invertir elementos

void swap(int &x; int &y){
    int temp = x;
    x = y;
    y = temp;
}

}
void swap(int *ptr1, int *ptr2){
        int temp = *ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
}
int main(){
        int a=6;
        int b=13;

        int *ptr1 = &a;
        int *ptr2 = &b;
        swap(ptr1, ptr2);
        cout<<a<<" "<<b<<endl;

}
