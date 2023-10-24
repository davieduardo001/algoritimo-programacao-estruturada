// opcoes
float aVista(float valor)
{
  return valor-(valor*10/100);
}

float duasVezes(float valor)
{
  return valor/2;
}

float comJurosNaPrestacao(float valor, int tempo)
{
  float juros;

  if (valor <= 100)
    return valor/tempo;
  else
  {
    juros = valor*tempo*0.03;
    return (valor+juros)/tempo;
  }
}

// selecionar valor gasto
float valorGasto()
{
  float valorGasto;

  printf("escreva um valor: ");
  scanf("%f", &valorGasto);

  return valorGasto;
}

// selecionar opcoes de pagamento
int opcoesDePagamento()
{
  int opcao;

  printf("\n--Opcoes de pagamento--\n");
  printf("1 - A vista (10%% de desconto)\n2 - Duas vezes (preco da etiqueta)\n3 ate 10 - (3%% em juros ao mes, acima de R$100,00)\n");
  printf("digite uma opcao: ");
  scanf("%i", &opcao);

  return opcao;
}

// calcula as prestacoes
float calcularPrestacao(int opcao, float valor)
{
  float prestacoes;

  switch(opcao)
  {
    case 1:
      prestacoes = aVista(valor);
    break;

    case 2:
      prestacoes = duasVezes(valor);
    break;

    case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
      prestacoes = comJurosNaPrestacao(valor, opcao);
    break;

    default:
      printf("not an option\n");
  }

  return prestacoes;
}
