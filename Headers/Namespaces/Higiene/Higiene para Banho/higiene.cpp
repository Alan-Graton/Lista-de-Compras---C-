#include "namespaces/higiene/higiene para banho/higiene.hpp"
#include "namespaces/Struct.hpp"
#include "headers/Libs.hpp"

using namespace std;
using namespace Higiene;
using namespace Struct_Produtos;

void HigieneBanho::Menu(fstream &arquivo, string &linha){

    while(EspacoBanho > 0)
    {
        system("cls");
        for(auto x:ListaBanho)
        {
            cout << "\t\t\t\t" << x.first << ". " << x.second << endl;
        }
        cout << "\t\t\t\t6. Outros\n";
            cout << "\t\t\t\t--------------------------------------------\n";
                cout << "\t\t\t\t7. Visualizar Lista de Compras\n";
                cout << "\t\t\t\t8. Voltar para 'Higiene'\n";
                cout << "\t\t\t\t9. Voltar para o Menu Principal\n";
                cout << "\t\t\t\t10. Finalizar Lista de Compras/Sair";
        cout << "\n\nOpção: ";
        cin >> Produtos.Banho;
        IT_Banho = find(ContainerBanho.begin(), ContainerBanho.end(), Produtos.Banho);
        switch(Produtos.Banho)
        {
            case 6: // TODO: Outros
            {
                system("cls");
                cout << "Digite aqui: ";
                fflush(stdin);
                gets(Produtos.DigiteBanho);
                break;
            }

            case 7: // TODO: Visualizar Lista de Compras
            break;

            case 8: // TODO: Voltar para 'Higiene'
            break;

            case 9: // TODO: Voltar para o Menu Principal
            break;

            case 10: // TODO: Finalizar Lista de Compras/Sair
            {
                break;
            }

            default:

        }
    }
}