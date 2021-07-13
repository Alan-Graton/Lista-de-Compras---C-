#include "namespaces/np_arquivos/leitura_gravacao.hpp"

using namespace Arquivos;

void Leitura::VisualizarLista(fstream &arquivo, string linha, string caminho, int Menu_ID){

    caminho = "../../../Lista de Compras.md";
    // Abrindo para Leitura
    arquivo.open(caminho, ios::in);
    if(arquivo.is_open())
    {
        while(getline(arquivo, linha))
        {
            cout << linha << endl;
        }
        system("PAUSE"); arquivo.close();
    }
        else
        {
            system("cls"); system("color 0C");
            cout << "[!]Erro no arquivo 'Lista de Compras.txt'[!]\n\n";
            system("PAUSE"); exit(1);
        }
    if(Menu_ID >= 1)
    {
        arquivo.open(caminho, ios::out | ios::app);
            if(!arquivo.is_open())
            {
                system("cls"); system("color 0C");
                cout << "[!]Erro no arquivo 'Lista de Compras.txt'[!]\n\n";
                system("PAUSE"); exit(1);
            }
    }
}

void Gravacao::NovaLista(fstream arquivo, string linha, string caminho){

    caminho = "../../../Lista de Compras.md";
    arquivo.open(caminho, ios::out);
    if(arquivo.is_open())
    {
        arquivo << "# Lista de Compras";
            arquivo.close();
        system("color 0A");
        cout << "[^-^]Nova Lista de Compras gerada com Sucesso[^-^]";
    }
        else
        {
            system("cls"); system("color 0C");
            cout << "[!]Erro no arquivo 'Lista de Compras.md'[!]\n\n";
            system("PAUSE"); exit(1);
        }
}