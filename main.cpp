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
    cin >> numeroPessoasEquipe;
    cin >> relacoesDiretas;
    cin >> numeroInstrucoes;

    //cout << numeroPessoasEquipe << relacoesDiretas << numeroInstrucoes;

    // Inicializo meu Grafo
    Grafo *grafo = new Grafo(numeroPessoasEquipe, relacoesDiretas);
    cout <<"Grafo: "<< grafo->numeroArestas << grafo->numeroVertices<<endl;

    //Vertice *Icaro = new Vertice(1,22);
    //cout <<"Aresta"<< Icaro->id << Icaro->idade;
    
    //Atribuo as idades para cada um dos vertices do meu Grafo
    for(int i = 0; i<numeroPessoasEquipe; i++){
        int idadeTemp;
        cin >> idadeTemp;
        grafo->adicionarInfoVertice(i,idadeTemp);
    }
    
    // Sintaxe chata de c++

    return 0;
}

// REFS

