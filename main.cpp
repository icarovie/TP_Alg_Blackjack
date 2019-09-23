#include <iostream>
#include "Vertice.hpp"

using namespace std;

#include "Vertice.hpp"
#include "Grafo.hpp"

int main(){
    int numeroPessoasEquipe;
    int relacoesDiretas;
    int numeroInstrucoes;

    // Entrada de Numero de Pessoas, Relações diretas e numero de Instrucões
    cout << "Numero de Membros: ";
    cin >> numeroPessoasEquipe;
    cout << "Numero de Relacoes: ";
    cin >> relacoesDiretas;
    cout << "Numero de Instrucoes: ";
    cin >> numeroInstrucoes;

    // Inicializo meu Grafo
    Grafo *grafo = new Grafo(numeroPessoasEquipe, relacoesDiretas);
    //cout <<"Grafo | N Vertices: "<< grafo->numeroVertices <<"|   N Arestas: "<< grafo->numeroArestas <<endl;

    
    // Adiciono os vertices no meu Grafo
    for(int i = 0; i < numeroPessoasEquipe; i++){
        int idadeTemp;
        cin >> idadeTemp;
        grafo->adicionarVertice(i,idadeTemp);
    }

    for(int i = 0; i < numeroInstrucoes;i++){
        int origem, destino;
        cin >> origem;
        cin >> destino;

        Vertice v1 = grafo->retornaVertice(origem);
        Vertice v2 = grafo->retornaVertice(destino);

        grafo->adicionarAresta(v1,v2);
    }

    grafo->imprimeGrafo();
    
    // Sintaxe chata de c++

    return 0;
}

// REFS

