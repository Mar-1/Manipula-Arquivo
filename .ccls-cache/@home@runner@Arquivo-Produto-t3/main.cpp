/*
 
 PROGRAMA PARA ABRIR UM ARQUIVO TEXTO CONTENDO VARIOS DADOS DE ALUNOS 
 (PRIMEIRO NOME E DUAS NOTAS),
 LER OS DADOS E CALCULAR A MEDIA ARITMETICA DAS DUAS NOTAS DO ALUNO,
 IMPRIMIR NOME E MEDIA NA TELA
 
 */

#include<stdio.h>  /*FILE, printf, scanf*/
#define MAX 30

struct reg
{
  int prod;
  int ano;
};

void selectionSort(int *array, int n)
{
    int temp;
    int min;

    for (int i = 0; i < n; ++i)
    {
        min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}


int main()

{
    
    FILE*  arq;         /* variavel para acessar um arquivo */
    FILE*  arqsaida;    /* variavel para manip arquivo de saida*/ 
    char nome[MAX];     /* nome do arquivo a ser aberto*/
    reg V;
  
    scanf(" %s", nome);
    
    /*abertura de um arquivo*/
    arq = fopen(nome, "r");
    
    /* verificando se arquivo foi aberto */
    if( arq == NULL )
    {
        printf("\n\n Arquivo %s nao pode ser aberto.\n\n", nome);
    }
    else
    {


        arqsaida = fopen("Prod.Ent", "a");
        if( arqsaida == NULL )
        {
            printf("\n\n Arquivo media.txt nao pode ser aberto.\n\n");
        }
        else
        {

            printf("Arquivo foi aberto!\n\n");
            
            
            
            /*leitura dos dados do arquivo*/
            fscanf(arq, " %d %d", &V.prod,&V.ano);
            
            fprintf(arqsaida,"Lista de produtos:\n");
            while( feof(arq) == 0 )    /*CHEGOU AO FINAL DO ARQUIVO??? verificando se chegou ao fim do arquivo*/
            {
              //149999
            int temp;
            int min;
            int i = 0,j;
            j=i+1;
            
            min = i;
            
            if (V.ano < V.ano)
            {
                min = j;
            }
            if (min != i)
            {
              temp = V.ano;
              V.ano = V.ano;
              V.ano = temp;
            }
            
              ++i;
              ++j;
            fprintf(arqsaida, "%d %d \n", V.ano, V.prod);
              
            
                /*leitura dos proximos dados do arquivo e armazenando no vetor V*/
            fscanf(arq, " %d %d", &V.prod,&V.ano);
              
            }
          
            fprintf(arqsaida,"\n");
  
            /*fechamento do arquivo*/
            fclose(arq);
            fclose(arqsaida);
        }// fim else arqsaida
            
    }
    printf("\n");    
    return 0;
}


     