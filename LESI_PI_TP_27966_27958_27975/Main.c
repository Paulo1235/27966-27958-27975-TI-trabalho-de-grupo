/*
--Trabalho de Grupo--
Bruno Dantas - a27958@alunos.ipca.pt
Diogo Abreu - a27975@alunos.ipca.pt
Paulo Gon�alves - a27966@alunos.ipca.pt
DATA : HOJE
Nutricionistas
*/

#include "Gabinete.h"

int main()
{
    printf("Hello world");
    return 0;

    Paciente p[k];


    //Pergunta 2

    char nomeArquivo[] = "DietaDetalhada.txt";
    int limiteCalorias = 2000;
    int resultado;

    // Chama a fun��o para contar pacientes que ultrapassaram o limite de calorias
    resultado = contarPacientesQueUltrapassaram(nomeArquivo, limiteCalorias);

    // Apresenta o resultado
    if (resultado != -1) {
        printf("N�mero de pacientes que ultrapassaram %d calorias: %d\n", limiteCalorias, resultado);
    }

    return 0;


    ///Pergunta 3 


    int limiteInferior = 800;
    int limiteSuperior = 2000;

    // Chama a fun��o para listar pacientes com calorias fora do intervalo
    listarPacientesForaDoIntervalo(nomeArquivo, limiteInferior, limiteSuperior);

    return 0;

    //Pergunta 4

    // Exemplo de uso da fun��o
    buscarPlanoNutricional("arquivo.txt", "NomeDoPaciente", "CafeDaManha", "2023-01-01", "2023-01-31");//Datainicio e data do fim

    return 0;

    //Pergunta 5
        // Defina o n�mero real de pacientes e dias com dados
    int numPacientes = 2;
    int numDias = 3;

    // Substitua os valores abaixo pelos dados reais das calorias consumidas por refei��o para cada paciente e dia
    int calorias[MAX_PACIENTES][MAX_DIAS] = {
        {800, 900, 700},
        {1000, 1100, 1200},
    };

    // Chame a fun��o para calcular a m�dia das calorias
    double medcal = calcularMediaCalorias(calorias, numPacientes, numDias);

    if (medcal > 0) {
        printf("M�dia de calorias consumidas por refei��o para o Paciente %d: %.2f\n", numPacientes + 1, medcal);
    }
    else {
        printf("Nenhum dado de calorias dispon�vel para o Paciente %d.\n", numPacientes + 1);
    }

    return 0;

    //Pergunta 6 

        // Defina o n�mero de pacientes (isso pode ser din�mico em um sistema real)
    int numPacientes = 3;////CONTAR AS LINHAS DOS FICHEIRO
    printf("| %-15s | %-20s | %-15s | %-12s | %-12s | %-15s | %-15s | %-20s |\n",
        "Num Paciente", "Nome", "Tipo Refeicao", "Data Inicio", "Data Fim", "Cal Minimo", "Cal Maximo", "Consumo Realizado");
    printf("|-----------------|----------------------|------------------|------------------|------------------|----------------------|----------------------|-------------------------|\n");

    // Crie um array de pacientes
    Paciente pacientes[numPacientes];

    // Popule o array com dados fict�cios (substitua isso pelos dados reais do seu sistema)

    ///ALTERAR PARA IR BUSCAR AO FICHEIRO
    pacientes[0] = (Paciente){ 1, "Paciente1", "Almoco", "01/01/2023", "01/01/2023", 500, 800, 700 };
    pacientes[1] = (Paciente){ 2, "Paciente2", "Jantar", "01/01/2023", "01/01/2023", 600, 900, 750 };
    pacientes[2] = (Paciente){ 3, "Paciente3", "Cafe da Manha", "01/01/2023", "01/01/2023", 400, 700, 500 };

    // Exiba a tabela
    exibirTabela(pacientes, numPacientes);
}