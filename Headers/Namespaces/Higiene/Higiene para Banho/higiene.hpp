#pragma once
#include "../../../Libs.hpp"

using namespace std;

namespace Higiene
{
	class HigieneBanho
	{
		public:
			int EspacoBanho = 0;
			vector<int>ContainerBanho;
				vector<int>::iterator IT_Banho;
					map<int,string>ListaBanho;
			HigieneBanho()
			{
				class HigieneBanho HG_Banho{};
				EspacoBanho = 5;
				ListaBanho[1] = "Sabão em Pedra";
				ListaBanho[2] = "Sabonete Líquido";
				ListaBanho[3] = "Shampoo | Condicionador";
				ListaBanho[4] = "Bucha para Banho";
				ListaBanho[5] = "Creme Hidratante";
			}

			void Menu(fstream &arquivo, string &linha);
			virtual ~HigieneBanho(void) = default;
	};

	class HigieneCasa
	{
		HigieneCasa()
		{
			class HigieneCasa HG_Casa{};
		};
		virtual ~HigieneCasa(void) = default;
	};

	class HigienePessoal
	{
		HigienePessoal()
		{
			class HigienePessoal HG_Pessoal{};
		}
		virtual ~HigienePessoal(void) = default;
	};
}