#include <iostream> // responsável pela manipulação de entrada e saida de dados //
#include <stdlib.h> // responsável pelas funções de alocações em memória, conversões e controle de processos //
#include <locale.h> // responsável por exibir corretamente acentos e caracteres especias //
#include <math.h> // responsável pelas funções de conversão matemáticas //
// ACIMA AS BIBLIOTECAS RESPONSÁVEIS PELA CONVERSÃO E MANIPULAÇÃO DOS ALGORITMOS //
using namespace std;
// FUNÇÃO SEM RETORNO DO MENU DO CONVERSOR ONDE O APRESENTAMOS COM AS OPÇÕES A SEREM ESCOLHIDAS //
void menu()
{
    setlocale (LC_ALL, "Portuguese");
    cout << "              'Conversor de Bases'" << endl;
    cout << endl;
    cout << "Digite: '1' Para converter de Decimal para Binário!" << endl;
    cout << "Digite: '2' Para converter de Binário para Decimal!" << endl;
    cout << "                       OU" << endl;
    cout << "              Digite: '0' para sair!" << endl;
}

// FUNÇÃO COM RETORNO ONDE LEMOS A OPÇÃO DESEJADA PELO USUARIO E FAREMOS AS CONVERSÕES//
 char opcao_conversao()
 {

// DECLARAÇÃO DE VARIAVEIS
 int opc;
 char letra;
 cin >> (opc);
 system("clear||cls");
 // AS INTRUÇÕES QUE O PROGRAMA VAIR SEGUIR DE ACORDO COM A ESCOLHA DO USUARIO
 switch (opc)
 {
    case 1:
    {
        cout << "                  'Conversor de Bases'\n" << endl;
        cout << "Você escolheu converter de Decimal para Binário!" << endl;
        int decimal;
        char b[8]; // vetor de 8 posições
        cout << "Digite o número em Decimal:" << endl;
        cin >> ("&d", decimal);
    // ALGORITMO DE CONVERSÃO
        itoa (decimal,b,2);
        cout <<  "O resultado da conversão de decimal para binário é:" << ("%d",decimal,b) << endl;
        cout << "\n     Digite:\n'M' para voltar ao menu principal e escolher uma nova conversão\n""'X' para sair do programa" << endl;
        cin >> letra;
        system("clear||cls");
    // OPÇÕES PARA VOLTAR AO INICIO OU FINALIZAR O PROGRAMA
        switch(letra)
        {
            case 'm': case 'M':
                menu();
                opcao_conversao();
            case 'x': case 'X':
                cout << "\t         PROGRAMA FINALIZADO" << endl;
                exit(0);
        break;
        }
}
    case 2:
    {
        cout << "                  'Conversor de Bases'\n" << endl;
        cout << "Você escolheu converter de Binário para Decimal!" << endl;
        int binario, decimal=0, d;
        cout << "Digite o número em Binário:" << endl;
        cin >>("%d", binario);
    // REPETIÇÃO SEGUIDA COM ALGORITMO DE CONVERSÃO
        for(d=0; binario>0; d++)
          {
            decimal = decimal + pow(2,d) * (binario%10);
            binario = binario/10;
        }

        cout << "O resultado da conversão de binário para decimal é: " << ("%d",decimal) << endl;
        cout << "\n     Digite:\n'M' para voltar ao menu principal e escolher uma nova conversão\n""'X' para sair do programa" << endl;
        cin >> letra;
        system("clear||cls");
    // OPÇÕES PARA VOLTAR AO INICIO OU FINALIZAR O PROGRAMA
            switch(letra)
        {
            case 'm': case 'M':
                menu();
                opcao_conversao();
            case 'x': case 'X':
                cout << "\t           PROGRAMA FINALIZADO" << endl;
                exit(0);
        break;
    }
}
    case 0:
            cout << "\t         PROGRAMA FINALIZADO" << endl;
            exit(0);
            break;

// CASO SEJA DIGITADO UMA OPÇÃO QUE NÃO CONDIZ COM O MENU
    default:
        cout << "\t             OPÇÃO INVALÍDA, TENTE NOVAMENTE!\n" << endl;
        menu();
        opcao_conversao();
        return opc;

 }
}

//  FUNÇÃO DE PONTO DE PARTIDA DO PROGRAMA ONDE EXECUTAREMOS AS FUNÇÕES CRIADAS NO TOPO//
int main(){

   menu ();
   opcao_conversao();

return 0;
}
