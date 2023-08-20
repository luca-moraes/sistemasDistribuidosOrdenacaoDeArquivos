//LUCAS MATEUS DE MORAES -> RA: 22.220.004-0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
char nome[20];
int idade;
float altura;
};

int ageComparator(const void *a, const void *b){
    float altura1 = ((struct Pessoa *)a)->altura;
    float altura2 = ((struct Pessoa *)b)->altura;

    if(altura1 > altura2){
        return 1;
    }else{
        return 0;
    }
}

int arrayFiller(struct Pessoa pessoas[], FILE *pInput){
    struct Pessoa *pessoaAtual;
    pessoaAtual = &pessoas[0];

    char buffer[20];
    int counter = 0;
    int sentinel = 0;

    while (fgets(buffer, sizeof buffer, pInput) != NULL){
        float fTemp = 0;
        int iTemp = 0;

        switch(counter){
            case 0:
                strncpy(pessoaAtual->nome, buffer, 20);
                counter++;
                break;

            case 1:
                iTemp = atoi(buffer);
                pessoaAtual->idade = iTemp;
                counter++;
                break;

            case 2:
                fTemp = atof(buffer);
                pessoaAtual->altura = fTemp;
                counter++;
                break;
        }

        if(counter == 3) {
            sentinel++;
            pessoaAtual = &pessoas[sentinel];
            counter = 0;
        }
    }

    return sentinel;
}

void fileFiller(int sentinel, struct Pessoa pessoas[], FILE *pOutput){
    struct Pessoa *pessoaAtual;

    for(int i = 0; i < sentinel; i++){
        pessoaAtual = &pessoas[i];
        char altura[20];
        char idade[20];

        sprintf(idade, "%d", pessoaAtual->idade);
        sprintf(altura, "%.2f", pessoaAtual->altura);

        fputs(pessoaAtual->nome, pOutput);
        fputs(idade, pOutput);
        fputs("\n", pOutput);
        fputs(altura, pOutput);
        fputs("\n", pOutput);
    }
}

int main(int argc, char **argv){
    int arraySize;

    if (argc < 1) {
        arraySize = 20;
    } else {
       arraySize = atoi(argv[1]);
    }

    FILE *pInput;
    pInput = fopen("infos.txt", "r");

    if (pInput == NULL){
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }

    struct Pessoa pessoas[arraySize];

    int sentinel = arrayFiller(pessoas, pInput);

    fclose(pInput);

    qsort(pessoas, sentinel, sizeof(struct Pessoa), ageComparator);

    FILE *pOutput;
    pOutput = fopen("sortedInfos.txt", "w");

    if(pOutput == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    fileFiller(sentinel, pessoas, pOutput);

    fclose(pOutput);

    return 0;
}