#ifndef Vertice_HPP
#define Vertice_HPP

// Bibliotecas Padrão
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class Vertice{
    public:
    int id;
    int idade;
    list <Vertice> *comandados;
    list <Vertice> *comandantes;
    
    // Construtor
    Vertice(int id, int idade);

    // Adiciona Aresta no meu Grafo
    void adicionarAresta(Vertice v1, Vertice v2);
};

#endif

