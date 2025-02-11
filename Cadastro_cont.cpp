#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Estrutura para armazenar as medições mensais
struct MedicaoMensal {
    int mes;
    int ano;
    double consumo; // Consumo em kWh
};

// Estrutura para armazenar as informações do contador
struct Contador {
    int numero;
    string localizacaoGeografica;
    string tipo;
    string endereco;
    string nomeProprietario;
    int numeroCasa;
    string bairro;
    vector<MedicaoMensal> medicoes;
};

// Função para adicionar um contador
void adicionarContador(vector<Contador>& contadores) {
    Contador novoContador;
    cout << "\nDigite o número do contador: ";
    cin >> novoContador.numero;
    cin.ignore();

    cout << "Digite a localização geográfica: ";
    getline(cin, novoContador.localizacaoGeografica);

    cout << "Digite o tipo do contador: ";
    getline(cin, novoContador.tipo);

    cout << "Digite o endereço: ";
    getline(cin, novoContador.endereco);

    cout << "Digite o nome do proprietário: ";
    getline(cin, novoContador.nomeProprietario);

    cout << "Digite o número da casa: ";
    cin >> novoContador.numeroCasa;
    cin.ignore();

    cout << "Digite o bairro: ";
    getline(cin, novoContador.bairro);

    contadores.push_back(novoContador);
    cout << "\nContador adicionado com sucesso!\n";
}

// Função para registrar uma medição mensal
void registrarMedicao(vector<Contador>& contadores) {
    int numeroContador;
    cout << "\nDigite o número do contador: ";
    cin >> numeroContador;

    for (auto& contador : contadores) {
        if (contador.numero == numeroContador) {
            MedicaoMensal novaMedicao;
            cout << "Digite o mês da medição (1-12): ";
            cin >> novaMedicao.mes;

            cout << "Digite o ano da medição: ";
            cin >> novaMedicao.ano;

            cout << "Digite o consumo em kWh: ";
            cin >> novaMedicao.consumo;

            contador.medicoes.push_back(novaMedicao);
            cout << "\nMedição registrada com sucesso!\n";
            return;
        }
    }

    cout << "\nContador não encontrado.\n";
}

// Função para exibir as informações de todos os contadores
void exibirContadores(const vector<Contador>& contadores) {
    for (const auto& contador : contadores) {
        cout << "\n-------------------------\n";
        cout << "Número do contador: " << contador.numero << endl;
        cout << "Localização geográfica: " << contador.localizacaoGeografica << endl;
        cout << "Tipo: " << contador.tipo << endl;
        cout << "Endereço: " << contador.endereco << endl;
        cout << "Nome do proprietário: " << contador.nomeProprietario << endl;
        cout << "Número da casa: " << contador.numeroCasa << endl;
        cout << "Bairro: " << contador.bairro << endl;

        if (!contador.medicoes.empty()) {
            cout << "Medições mensais:\n";
            for (const auto& medicao : contador.medicoes) {
                cout << "  - Mês/ano: " << medicao.mes << "/" << medicao.ano;
                cout << " | Consumo: " << medicao.consumo << " kWh\n";
            }
        } else {
            cout << "Sem medições registradas.\n";
        }
    }
}

int main() {
    vector<Contador> contadores;
    int opcao;

    do {
        cout << "\n--- Sistema de Cadastro de Contadores ---\n";
        cout << "1. Adicionar contador\n";
        cout << "2. Registrar medição mensal\n";
        cout << "3. Exibir contadores\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarContador(contadores);
                break;
            case 2:
                registrarMedicao(contadores);
                break;
            case 3:
                exibirContadores(contadores);
                break;
            case 4:
                cout << "Encerrando o sistema...\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    } while (opcao != 4);

    return 0;
}
