#pragma once
#include "../../Libs.hpp"

using namespace std;

namespace Arquivos
{
	class Leitura
	{
		public:
			fstream arquivo;
			string linha, caminho;
			int Menu_ID;
			Leitura(fstream Teste, string linha, string caminho)
			{
				this->arquivo = Teste;
				this->linha = linha;
				this->caminho = caminho;
			}

			void VisualizarLista(fstream &arquivo, string linha, string caminho, int Menu_ID);

		virtual ~Leitura(void) = default;
	};
		class Leitura Ler;

	class Gravacao
	{
		public:
			Gravacao(void) = default;
				void setArquivo(fstream a)
				{
					arquivo = a;
				}
				fstream getArquivo()
				{
					return arquivo;
				}
				void NovaLista(fstream arquivo, string linha, string caminho);
			~Gravacao(void) = default;
		private:
			fstream arquivo;
			string linha, caminho;
	};
		class Gravacao Gravar;
}