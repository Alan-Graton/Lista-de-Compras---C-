#include "../headers/libs.hpp"
#include "../headers/namespaces/struct.hpp"
#include "../headers/namespaces/np_arquivos/leitura_gravacao.hpp"
#include "../headers/namespaces/higiene/higiene para banho/higiene.hpp"

using namespace Struct_Produtos;
using namespace Arquivos;

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    std::fstream Lista;
    std::string Linha, Caminho;
    int Menu_ID = 0;

    Produtos.DigiteCafeDaManha = (char *) malloc(sizeof(char));
    Produtos.DigiteAlmoco = (char *) malloc(sizeof(char));
    Produtos.DigiteSobremesa = (char *) malloc(sizeof(char));

    Produtos.DigiteHigienePessoal = (char *) malloc(sizeof(char));
    Produtos.DigiteBanho = (char *) malloc(sizeof(char));
    Produtos.DigiteHigieneCasa = (char *) malloc(sizeof(char));

    Ler.VisualizarLista(Lista, Linha, Caminho, Menu_ID);
    Gravar.NovaLista(Lista, Linha, Caminho);

    return 0;
}