# Algoritmos
* O objetivo é aprender a lógica.
* Organizar em sequências de passos:
	* Resolver um problema
	* Aprender a fazer um passo a passo (ou seja, um algoritmo)
* Aprender a olhar um problema e aplicar as estruturas de desenvolvimento de software
* Organização de pensamentos de forma lógica
* Um programados faz: 60% aplicar lógica de programação, 20% aplicação de algoritmos, 20% testes, compilação, etc.

> *Acha um problema -> entende o problema (logica de programacao) -> descreve em passos (criar o algoritmo)*

## Algorimos sao feitos passo a passo
* de modo a fazer um problema ser quebrado em varios outros menores, deixando mais facil a sua leitura e desenvolvimento
	1. Passo: declaracao de variaveis
	2. Passo: recebimento de dados
	3. Passo: processamento
	4. Passo: retorno

## Operadores
* *Aritmeticos:*
	* \+ (soma), - (subtração), / (divisão), * (multiplicação), entre outros
* *Relacionais/comparadores:*
	* if(), else, else if()
	* **obs: o operador de "=" eh de atribuição não de igualdade.**
  * ==, \<, >, >=, <=, !=...

## Variaveis
* É a possibilidade de adicionar na mem. RAM, um espaço para ser adicionado um *nome* a esse espaço (apenas 1 único dado na variável dentro de um espaço de memória)
* As variáveis são alocadas dentro da memória de curto prazo e volátil do computador
* *ALOCAÇÃO DE MEMÓRIA:*
	* Estatica com tipos primitivos (numeric, char, boolean...)
	* *Homogênea com arrays ou matrizes (nem os tipos, nem o tamanho do vetor podem ser alterados):*
	 * *Dinamica (ponteiros, aponta para um endereço de memória de uma outra variável):*
		 * **ainda não vimos e eh um cadin complexo**
* *REAPROVEITAMENTO DE CÓDIGO: (funções, otimizações do programadores):*
	* Funções, pré definidas, ou de bibliotecas incluídas na linguagem
		* *ex de funcoes:* main(), println(), scanf()...
		* *ex de bibliotecas (libs):* stdio.h, cgit.h, libusb.h…
	 
  * Que nós mesmos fazemos e importamos

---

### Conceitos de variaveis:
> Esse espaço de mem. esta reservado para meu programa.
* Nome
* Endereco de mem.
* Conteudo
> FUNCIONAMENTO DE UMA VARIAVEL:
> Ao criar uma variavel irá *criar um espaço de memória* na mem. Ram e vai *dar nome a ela*.
> Quando se trata de C, você precisa *falar qual é o "tipo" da variavel*, podendo ser alguns dos tipos primitivos, como veremos mais para frente.
> Ao fazer isso, *você conseguira* ter acesso ao conteúdo *daquela variável (chamando o nome dela apenas)*, e vai *poder alocar "coisas" dentro daquele espaço de memória (colocando um & na frente do nome da memoria)*

--- 

### Tipos primitivos
* INT 
	* tipo inteiro
	* 4 bytes de mem
* DOUBLE 
	* ponto flutuante de alta precisao
	* *usar quando for altamente preciso* 
	* 8 bytes de mem
* FLOAT
	* ponto flutuante
	* *quando nn for necessaria a alta precisao :3* 
	* 4 bytes de mem
* CHAR 
	* character
* BOOLEAN 
	* 0 ou 1

### Especificadores de formato
> utilizado para chamadas de outubro ou input, para saber oq vai ser recebido ou "cuspido" na tela

* %i => inteiro
* %d => decimal
* %f => float
* %lf => long float (double)
* %s => string
* %c => char

## Variaveis tipo texto (string)
* Na criacao de variaveis tipo texto, faz-se um vetor de characteres 
* cada digito do teclado sera um character dentro do vetor/*array*
`char vetor[5]`
* ao criar um vetor se faz alocacao de espacos de memoria em sequencia
`char nome[70]` => na criacao de nome geralmente se utiliza 70 char's por padrão
* Considera-se o limite 255
* Se aloca sempre um a mais para o charactere `\0`
* *obs: cpf's deveriam ser alocados em string, pois pode-se iniciar com 0*

>OBS: o nome do vetor (da array) ja aponta para o endereco dele (pois aponta para o primeiro endereco alocado do vetor)

## Sobrecarga de funcao
> UMA funcao dentro da biblioteca com mesmos nomes recebendo um ou mais parametros (pode receber mais de um parametro funcionando de formas diferentes a depender da quantidade e tipo do parametro passado)

## Recebimento de strings
>Ao enviar dados pelo teclado e apertar enter, ele vai receber o ultimo item do buffer do teclado, para isso deve-se usar o `fflush()` para fazer a limpeza do buffer
>Ou seja, sempre apos receber textos deve-se escreve-se utilizar:
`fflush(stdin);`
`__fpurge(stdin)` (dependendo do OS pode dar erro)

*  com scanf (precisa usar regex):
`scanf("%[^\n]", nomeDaVariavel);`
* fgets (mais elegante e melhor utilizado)
`fgets(nomeDaVariavel, tamanhoDaVariavel, STDIN);`
## Requisitos de software
* Eh o que o software precisa fazer
* O problema que o software resolve

## Operadores aritimeticos
* Fazer calculos e jogar dentro de uma variavel
`+ - * / % **` soma, subtracao, multiplicacao, divisao, resto da divisao, potenciacao
> Levar em conta a **ordem de precedencia**
1. ()
2. **
3. \* /
4. \+ -
> Necessita-se da horizontalizacao da expressao matematica

## Operadores relacionais
-> utiliza-se uma expressao se eh verdadeira ou falsa, 0(verdadeiro) ou 1 (falso)
* == (igual)
* < (menor que)
* \> (maior que)
* \>= (maior ou igual)
* <= (menor ou igual)
* != (diferente)

> em C a variavel do tipo booleano nao existe, ou seja, deve ser passada como o resultado de uma expressao relacional


```c 
x = 11;
y = 11;
res = (x == y);
res (0 ou 1); //vai receber dependendo do resultado da operacao
```

## Estrutura de condicionais/seleção
> else ira funcionar como um default

> retorna uma parte do codigo, ou a outra, a depender do resultado ser verdadeira ou falsa

```c 
    if(2>2) {
      //se retornar 0, ou verdadeira, ira executar esse code block
    } else if () {
      // same as the top one
    } else {
      // se em uma das condicoes acima for satisfeita ira cair nesse code block
    }
```
## Operadores Logicos
> considerados operadores conectivos. representam o recurso q nos permite criar expressoes logicas maiores a partir da juncao de duas ou mais expressoes. Para isso, aplicamos as operacoes logicas: 
* E (&&)
* OU (||)
* nao (!)

```c
  //no E todos devem ser verdadeiras
  (v) && (v) = v
  (v) && (f) = f
  //no OU apenas uma eh necessaria ser verdadeira, soh vai ser false se todas forem falsas
  (v) || (v) = v
  (v) || (f) = v
  (f) || (v) = v
  (f) || (f) = f
  //Nega a afirmacao
  (!v) = f
  (!f) = v
```

## Operadores de incremento e decremento
> ++, -- (incrementa 1 ao numero e decrementa 1 ao numero)