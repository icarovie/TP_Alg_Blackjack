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
        //Vertice *vertices;
        vector <Vertice> vertices; 
        // Construtor
        Grafo(int numeroVertices, int numeroArestas);

        //Functions
        void imprimeTeste();
        void preencheDadosVertice(int id,int idade);
        void adicionarVerticeNoGrafo(int id, int idade);
        //void adicionarAresta(Vertice origem,Vertice destino);
        Vertice retornaVertice(int id);
        void imprimeGrafo();
};

#endif

