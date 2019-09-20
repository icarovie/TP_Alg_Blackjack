#include <iostream>
#include <list>

class Grafo{
    public:
        int tamanhoGrafo;
        int numeroArestasTotal;
        list <Vertice> *adjacencia;

        // Construtor
        Grafo(int tamanhoGrafo, int numeroArestasTotal);
}

