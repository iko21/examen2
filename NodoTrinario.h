#ifndef NODOTRINARIO_H
#define NODOTRINARIO_H


class NodoTrinario
{
    public:


        NodoTrinario*hijo_izq;
        NodoTrinario*hijo_der;
        NodoTrinario*hijo_medio;
        int num;

        void imprimir();


        NodoTrinario();
        virtual ~NodoTrinario();
    protected:
    private:
};

#endif // NODOTRINARIO_H
