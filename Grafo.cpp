#include "Grafo.hpp"
#include "Vertice.hpp"

Grafo::Grafo(int numeroVertices, int numeroArestas){
    this->numeroVertices = numeroVertices;
    this->numeroArestas = numeroArestas;
}

void Grafo::adicionarVerticeNoGrafo(int id, int idade){
    vertices.push_back(Vertice(id,idade));
}

void Grafo::imprimeTeste(){
    vertices[1].adjacencia.push_back(vertices[3]);
}

/*
void Grafo::preencheDadosVertice(int id,int idade){
    this->adjacencia[id-1] = new Vertice(id,idade);
    //this->adjacencia[id-1].id = id;
    //this->adjacencia[id-1].idade = idade;
}
*/


/*
//void Grafo::adicionarAresta(Vertice origem, Vertice destino){
    //this->adjacencia[origem].comandados.push_back(destino);
//}

Vertice Grafo::retornaVertice(int id){
  //  return this->adjacencia[id];
}
*/
void Grafo::imprimeGrafo(){
    for(int i=0; i < this->numeroVertices; i++){
        Vertice v = this->vertices[i];
        cout << v.id << " " << v.idade<<endl;
        /*cout << i+1 << "-->";

        for(Vertice v : this->vertices)
            cout << "ID: "<<v.id << " | Idade: "<< v.idade;
        cout << endl;*/
    }
}
