#include <iostream>
#include "Vertice.hpp"

using namespace std;

#include "Vertice.hpp"
#include "Grafo.hpp"

int main(){
    int numeroPessoasEquipe;
    int relacoesDiretas;
    int numeroInstrucoes;
    int idadeTemp;

    // Entrada de Numero de Pessoas, Relações diretas e numero de Instrucões
    cin >> numeroPessoasEquipe;
    cin >> relacoesDiretas;
    cin >> numeroInstrucoes;

    cout << numeroPessoasEquipe << relacoesDiretas << numeroInstrucoes;

    // Inicializo meu Grafo
    Grafo grafo[numeroPessoasEquipe];
    
    // Atribuo as idades para cada um dos vertices do meu Grafo
    for(int i = 0; i<5; i++){
        cin >> idadeTemp;
        grafo->adjacencia[i] = Vertice(i,idadeTemp);
    }
    
    // Sintaxe chata de c++

    return 0;
}

// REFS

