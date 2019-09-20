#ifndef Grafo_HPP
#define Grafo_HPP

#include "Vertice.hpp"

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class Grafo{
    public:
        int numeroVertices;
        int numeroArestas;
        list<Vertice> *adjacencia;

        // Construtor
        Grafo(int numeroVertices, int numeroArestas);
};

#endif

