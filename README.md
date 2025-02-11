# Cadastro de Contadores de Energia Residenciais

Este projeto é um programa em C++ para gerenciar o cadastro e acompanhamento de contadores de energia residenciais. 
O sistema permite adicionar contadores, registrar medições mensais e visualizar as informações cadastradas.

## Funcionalidades
1. Adicionar Contador: Permite o cadastro de novos contadores de energia com informações detalhadas como localização, tipo, proprietário e endereço.
2. Registrar Medições Mensais: Permite registrar as medições mensais de consumo de energia para cada contador cadastrado.
3. Exibir Contadores: Exibe todos os contadores cadastrados junto com suas informações e medições mensais (se houver).

## Como Usar
1. Clone o repositório para sua máquina local:
git clone https://github.com/seu-usuario/cadastro-contadores.git

2. Navegue até o diretório do projeto:
cd cadastro-contadores

3. Compile o programa usando um compilador C++:
g++ -o cadastro main.cpp

4. Execute o programa:
./cadastro

## Estrutura de Dados
###Contador
Cada contador possui os seguintes atributos:
  - número: Identificação única do contador.
  - localização geográfica: Coordenadas ou descrição do loca
  - tipo: Tipo do contador (ex: digital, analógico).
  - endereço: Endereço físico onde o contador está localizado.
  - nome do proprietário: Nome do responsável pelo contador.
  - número da casa: Identificação da residência no endereço.
  - bairro: Bairro onde o contador está localizado.
  - medições: Lista de medições mensais registradas.
## Medição Mensal
Cada medição mensal possui:
  - mês: Mês da medição.
  - ano: Ano da medição.
  - consumo: Quantidade de energia consumida em kWh
## Menu do Sistema
O programa apresenta as seguintes opções ao usuário:
  - Adicionar contador: Permite adicionar novos contadores ao sistema.
  - Registrar medição mensal: Registra o consumo de energia em um mês específico.
  - Exibir contadores: Exibe todos os contadores cadastrados e suas medições.
  - Sair: Encerra o programa.
## Requisitos
  - Compilador C++ compatível com C++11 ou superior.
  - Sistema operacional Windows, Linux ou macOS.



