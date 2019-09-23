#ifndef Grafo_HPP
#define Grafo_HPP

// Classes
#include "Vertice.hpp"

// Bibliotecas Padrão
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

        //Functions
        void adicionarVertice(int id, int idade);
        void imprimeGrafo();
};

#endif

