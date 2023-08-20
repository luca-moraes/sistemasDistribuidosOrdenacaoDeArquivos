# sistemasDistribuidosOrdenacaoDeArquivos
Primeira atividade da disciplina de sistemas distribuidos, lescionada pelo professor Calebe Bianchini. A atividade consistia em um revisão básica de ordenação de vetores em conjunto com a leitura e escrita de arquivos em C.

## Funcionamento
O programa recebe um arquivo de texto na mesma pasta que ele. Nesse arquivo estão presentes as informações que serão ordenadas e escritas em um arquivo de saída. As informações no arquivo representam, em ordem, o nome, a idade e a altura de pessoas uma em sequência da outra, sendo a ordenação feita com base na altura. Um exemplo de resultado final dos arquivos pode ser visto na imagem abaixo:

![Imagem dos arquivos de saída e entrada abertos](https://github.com/luca-moraes/sistemasDistribuidosOrdenacaoDeArquivos/blob/main/images/img1.png)

## Execução
1. Para execução do arquivo, é necessario existir, no mesmo diretório que o código fonte, um arquivo chamado "infos.txt" contendo as informações desejadas, o código pode ser compilado manualmente ou a execução pode ser feita pelo script presente no repositório, assim como na imagem abaixo:

![Imagem de execução do script](https://github.com/luca-moraes/sistemasDistribuidosOrdenacaoDeArquivos/blob/main/images/img2.png)

2. Após a execução o programa será compilado e o script solicita a informação da quantidade de pessoas no arquivo, caso a informação não seja passada o código irá utilizar um tamanho de 20 pessoas como padrão, se existirem mais pessoas no arquivo ou a informação for passada de forma errada, o código pode gerar um erro. o bom funcionamento é demonstrado na imagem abaixo:

![Imagem da solicitação do número de pessoas](https://github.com/luca-moraes/sistemasDistribuidosOrdenacaoDeArquivos/blob/main/images/img3.png)

3. Por último, o script irá rodar o código compilado com todas as informações fornecidas e colocando o resultado em um arquivo de sáida como já visto acima. A execução correta pode ser vista abaixo:

![Imagem do script executado com sucesso](https://github.com/luca-moraes/sistemasDistribuidosOrdenacaoDeArquivos/blob/main/images/img4.png)
