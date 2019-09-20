#include "Grafo.hpp"

Grafo::Grafo(int numeroVertices, int numeroArestas){
    this->numeroVertices = numeroVertices;
    this->numeroArestas = numeroArestas;

    // Declaro o numero de vertices na minha lista
    adjacencia = new list<Vertice>[numeroVertices];
}

//Grafo::adicionarAresta(Vertice grafoOrigem, Vertice grafoDestino){
//    grafoOrigem->comandados.push_back(grafoDestino);
//}