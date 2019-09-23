#include "Grafo.hpp"
#include "Vertice.hpp"

Grafo::Grafo(int numeroVertices, int numeroArestas){
    this->numeroVertices = numeroVertices;
    this->numeroArestas = numeroArestas;

    adjacencia = new list <Vertice>[numeroVertices];
}

void Grafo::adicionarVertice(int id, int idade){
    this->adjacencia[id].push_back(Vertice(id,idade));
}

void Grafo::imprimeGrafo(){
    for(int i=0; i < this->numeroVertices; i++){
        cout << i+1 << "-->";

        for(Vertice v : this->adjacencia[i])
            cout << "ID: "<<v.id << " | Idade: "<< v.idade;
        cout << endl;
    }
}