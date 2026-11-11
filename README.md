# Coffee Tub

Coffee Tub é uma linguagem de programação experimental, inspirada em C, desenvolvida como projeto da disciplina de Compiladores. Seu compilador analisa os programas e, quando não encontra erros, gera uma representação intermediária em código de três endereços (TAC).

## Como a linguagem funciona

A sintaxe e várias construções são semelhantes às de C, mas Coffee Tub é uma linguagem própria e ainda não implementa todos os recursos de C. Uma regra importante é que **todo `if` deve ter um `else`**.

```c
int a = 5, b = 3, maior;

if (a > b) {
    maior = a;
} else {
    maior = b;
}
```

Um `if` sem `else` é inválido. As condições precisam comparar duas expressões usando um operador relacional:

`==`, `!=`, `<`, `>`, `<=` ou `>=`.

## Recursos implementados

- Tipos `int`, `float` e `char`.
- Declarações de variáveis, inclusive várias na mesma declaração, e inicialização.
- Atribuições e expressões aritméticas com `+`, `-`, `*`, `/`, parênteses e menos unário.
- Promoção de tipos de `char` para `int` e de `int` para `float`; atribuições que exigem conversão para um tipo mais estreito são rejeitadas.
- Blocos delimitados por `{` e `}`.
- Condicionais `if/else`, com `else` obrigatório, e laços `while`.
- Seleção `switch` com `case`, `default` opcional e comportamento de fall-through entre casos.
- `break` em laços `while` e em `switch`.
- Comentários de linha (`//`) e de bloco (`/* ... */`).

No `switch`, a expressão deve ser do tipo `int` ou `char`. Os valores de `case` podem ser inteiros (inclusive negativos) ou caracteres. `break` só pode ser usado dentro de um `while` ou `switch`.

## Compilar

É necessário ter GCC, Flex e Bison instalados. No terminal, execute:

```sh
cd Coffe_Tub/Source_Code
make
```

Isso gera o executável `coffeetub`.

## Executar

Passe um arquivo `.ct` como argumento:

```sh
./coffeetub 01_ok.ct
```

Também é possível fornecer o programa pela entrada padrão:

```sh
./coffeetub < 01_ok.ct
```

Em caso de sucesso, o programa exibe o código de três endereços gerado e a tabela de símbolos. Erros léxicos, sintáticos ou semânticos são informados no terminal e fazem a compilação falhar.

## Exemplos

Os programas de exemplo e casos de erro estão em [`Coffe_Tub/Source_Code`](Coffe_Tub/Source_Code). O arquivo [`01_ok.ct`](Coffe_Tub/Source_Code/01_ok.ct) demonstra declarações e expressões; [`04_if_ok.ct`](Coffe_Tub/Source_Code/04_if_ok.ct) mostra condicionais; e [`09_switch_ok.ct`](Coffe_Tub/Source_Code/09_switch_ok.ct) combina `switch`, `while` e `break`.
