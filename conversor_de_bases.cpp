#include <iostream>
#include <list>

using namespace std;

// Essa função converte um número decimal para binário
void decimalParaBinario(int dec){
    string bin;
    // Aqui é feito a conversão
    while (dec != 0){
        // A variável bin vai receber 0 se o resto da divisão do número decimal por dois for zero...
        // Caso contrário a variável receberá um
        bin += (dec % 2 == 0 ? "0" : "1");
        dec /= 2;
    }
    // O número binário na variável está invertido para isso tem que escrever na tela o número...
    // começando do seu último algarismo ao primeiro
    for (int i = bin.length(); i >= 0; i--){
        cout << bin[i];
    }
}

// Essa função converte um número decimal para binário
void binarioParaDecimal(){
    // Ainda em desenvolvimento
    cout << "Essa funcao convertera binario para Decimal.";
}

// Menu pricipal
int menu(){
     int escolha;
     cout << "--------------------\n";
     cout << " CONVERSOR DE BASES\n";
     cout << "--------------------\n";
     cout << "Escolha uma das opcoes:\n";
     cout << " [ 1 ] Converter de DECIMAL para BINARIO\n";
     cout << " [ 2 ] Converter de BINARIO para DECIMAL\n";
     cout << " [ 0 ] Sair do programa\n\n";
     cout << "Digite a opcao: ";
     // Aqui o programa vai receber a escolha do usuário e retornará o valor escolhido
     cin >> escolha;
     cout << endl;
     return escolha; 
}

int main(){
    bool run = true;
    int valor = 0;
    // Loop principal
    while (run){
        switch(menu()){
            // Decimal para binário
            case 1:
                cout << "Agora digite um numero DECIMAL para a conversao: ";
                cin >> valor;
                cout << "O numero " << valor << " em BINARIO fica: ";
                decimalParaBinario(valor);
                break;
            // Binário para decimal
            case 2: 
                binarioParaDecimal();
                break;
            // Sair do programa
            case 0: 
                run = false;
                break;
            // Tratamento de exceção
            default: 
                cout << "Por favor, digite uma opcao valida!";
            }
            cout << endl << endl;
        }
    // Mensagem de finalização e fim do programa
    cout << "Ate mais!";
    return 0;
}