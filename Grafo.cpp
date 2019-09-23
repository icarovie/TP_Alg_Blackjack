#include "Grafo.hpp"
#include "Vertice.hpp"

Grafo::Grafo(int numeroVertices, int numeroArestas){
    this->numeroVertices = numeroVertices;
    this->numeroArestas = numeroArestas;

    // Declaro o numero de vertices na minha lista
    adjacencia = new list <Vertice>[numeroVertices];
}

void Grafo::adicionarInfoVertice(int id, int idade){
    this->adjacencia[id] = id;
}

//Grafo::adicionarAresta(Vertice grafoOrigem, Vertice grafoDestino){
//    grafoOrigem->comandados.push_back(grafoDestino);
//}