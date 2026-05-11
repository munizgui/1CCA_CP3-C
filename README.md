# 1CCA_CP3-C- 1CCAiXA
Gustavo Russo Balizardo RM: 569283
Guilherme Lopes Muniz RM: 569521
Fernando Lembo RM: 570228
Ryan Barreto RM: 574126

Descrição do Sistema
O ATM FIAP é uma aplicação de console desenvolvida em linguagem C que simula as operações básicas de um terminal bancário. O sistema foi projetado com foco em modularização, utilizando funções específicas para cada operação financeira, o que facilita a manutenção e futura expansão do código (como a adição de bancos de dados ou persistência em arquivos).

A arquitetura do software baseia-se em um Loop Principal (do-while) que mantém o sistema ativo, interagindo com o usuário através de um Menu Visual e processando comandos via Estruturas de Decisão (switch-case).

Funcionalidades Implementadas
O sistema contempla as operações essenciais de um fluxo bancário:

Consulta de Saldo: Exibe o valor disponível na conta em tempo real com formatação monetária (%.2f).

Realização de Depósito: Permite a entrada de valores positivos, atualizando o montante principal instantaneamente.

Realização de Saque: Implementa lógica de validação de fundos (o saque só ocorre se houver saldo suficiente) e proteção contra valores negativos ou nulos.

Interface de Usuário (UX):

Limpeza automática de tela para manter o console organizado.

Pausas para leitura de mensagens de confirmação.

Tratamento de buffer para evitar erros ao ler dados do teclado.

Encerramento Seguro: Opção para finalizar a sessão e sair do programa de forma controlada.

Instruções de Compilação e Execução
Como o código utiliza exclusivamente a biblioteca padrão stdio.h, ele é altamente portátil e pode ser compilado em qualquer ambiente (Windows, Linux ou macOS).

Pré-requisitos
Certifique-se de ter um compilador C instalado (como o GCC através do MinGW no Windows, ou nativo no Linux/Mac).

Compilação
Abra o seu terminal ou prompt de comando na pasta onde o arquivo .c está salvo e execute o seguinte comando:

Bash

gcc nome_do_arquivo.c -o atm_fiap
nome_do_arquivo.c: O nome que você deu ao arquivo.

-o atm_fiap: Define o nome do executável gerado.

Execução
Após compilar, execute o programa com o comando abaixo:

No Windows:

Bash

atm_fiap.exe

Participação do grupo através do histórico de commits:

cálculo do saque
RyanBarreto


adicionando Saque
RyanBarreto


Realizar Depósito
Fernandolembo


Consultar Saldo
Fernandolembo


função de exibição menu
gurusso


criação das funções do menu
gurusso


Adicionando Sistema de Repetição
munizgui


Adicionando Menus
munizgui


adicionado nome do projeto e dos integrantes
gurusso

