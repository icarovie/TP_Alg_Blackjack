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
    cout <<"Grafo | N Vertices: "<< grafo->numeroVertices <<"|   N Arestas: "<< grafo->numeroArestas <<endl;

    
    //Atribuo as idades para cada um dos vertices do meu Grafo
    for(int i = 0; i < numeroPessoasEquipe; i++){
        int idadeTemp;
        cin >> idadeTemp;
        grafo->adicionarVertice(i,idadeTemp);
    }

    grafo->imprimeGrafo();
    
    // Sintaxe chata de c++

    return 0;
}

// REFS

