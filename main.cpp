#include <iostream>

using namespace std;


class NodoTrinario{
    public:

        NodoTrinario*hijo_izq;
        NodoTrinario*hijo_der;
        NodoTrinario*hijo_medio;
        int num;

    NodoTrinario(int num)
    {
        this->num=num;
        this->hijo_izq=NULL;
        this->hijo_der=NULL;
        this->hijo_medio=NULL;
    }


};


class ArbolTrinario{
    public:

    NodoTrinario*raiz;

    ArbolTrinario()
    {
        raiz=NULL;
    }


    void imprimir(NodoTrinario*raiz)
    {
       if( raiz==NULL)
        return;

        else
        {
            imprimir(raiz->hijo_der);
            imprimir(raiz->hijo_izq);
            imprimir(raiz->hijo_medio);
        }
        cout<<raiz->num<<endl;
    }

    bool existe(int num, NodoTrinario * raiz )
    {
       if(raiz==NULL)
       {
           return false;
       }

       if(raiz->num==num)
            return true;

            if(existe(num, raiz->hijo_der))
                return true;
            if(existe(num, raiz->hijo_izq))
                return true;
            if(existe(num, raiz->hijo_medio))
                return true;

      return false;
    }
};


int main()
{
    return 0;
}
