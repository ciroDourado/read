# read
Due to the complexity that writing some code that expects a string input from the user, I've made this tiny library which can be used in any case (e.g.: the programmer doesn't need to worry anymore of how many characters/bytes the user must give, neither the boring details of handling NULL or memory allocation).

With these functions, you should only expect some string (any size) or nothing, that simple.

###### obs.: if you are interested in another tool for string manipulation, check the following repository. It's about extracting a slice from a given String.

[Slice](https://github.com/ciroDourado/slice)

## Sections

1. [Applying into your code](https://github.com/ciroDourado/read#1-applying-into-your-code)
2. [How to use it](https://github.com/ciroDourado/read#2-how-to-use-it)
3. [Contribuing](https://github.com/ciroDourado/read#3-contribuing)

## 1. Applying into your code

Usar este "módulo" requer nada mais do que incluir estes arquivos no mesmo diretório de seu projeto.
Por exemplo: você está colocando seus códigos-fonte em uma pasta específica, então também inclua os códigos-fonte de ArvoreBinaria, NoArvore e Tabela da minha pasta src/.

De resto, apenas o óbvio. Para compilar todos os arquivos deste diretório, pelo terminal faça:

```
csc /out:[nome_de_seu_executavel] *.cs
```

Caso você utilize o mono, para executar o código seria simplesmente:

```
mono [nome_de_seu_executavel]
```

**[Back into sections](https://github.com/ciroDourado/read#sections)** 

## 2. How to use it

Um breve resumo:

| Método    | Parâmetro           | Retorno                                              |
|-----------|---------------------|------------------------------------------------------| 
| Inserir   | Instância de Nó*    | Nenhum                                               |
| Inserir   | Instância de Tabela | Nenhum                                               |
| EstaVazia | Nenhum              | Verdadeiro ou falso                                  |
| Contar    | Nenhum              | Número de nós existentes na árvore                   |
| Buscar    | ID do elemento      | Em caso de sucesso: instância do nó; senão: null     |
| Remover   | ID do elemento      | Em caso de sucesso: instância da tabela; senão: null |

###### * Certifique-se de que sua instância de nó contenha uma instância de Tabela.

Você pode tomar como referência o arquivo Principal.cs dentro de src/. Eu estive usando ele para testar meu código no período de desenvolvimento.
Expondo apenas obviedades aqui, toda variável/instância do tipo ArvoreBinaria deve ser inicializada com a sentença new ArvoreBinaria(), ex.:

```
var minhaArvore = new ArvoreBinaria();
```

Com isso você terá em mãos uma árvore vazia. Para inserir elementos, estão disponíveis duas funções Inserir: uma recebe como parâmetro uma instância de Tabela, e outra recebe uma instância de NoArvore. Internamente, o código de árvore insere na verdade instância de nós, as quais encapsulam instâncias de Tabela. Porém, para facilitar a vida do programador (tornando o código bem menos verboso), também é possível passar apenas a instância de Tabela, a qual será colocada dentro de um novo nó alocado.

```
var primeiroNo = new NoArvore(new Tabela(...));
minhaArvore.Inserir(primeiroNo);

// aqui seria um segundo nó
minhaArvore.Inserir(new Tabela(...));
```
Funções de contagem (usando iteração), busca e remoção seguem a mesma lógica; apenas verifique a assinatura dentro dos códigos-fonte.

**[Back into sections](https://github.com/ciroDourado/read#sections)**

## 3. Contribuing

Caso você queira fazer algum comentário, sugerir alguma mudança, elogiar ou até mesmo falar mal diretamente kkkkkk mande um e-mail para mim. Ele está como público neste meu perfil. Mas de qualquer forma, meu endereço é: `ciro dot brz at gmail dot com`; lembre-se de trocar os dots e at kkkk

Este é um código feito durante meu tempo livre - mais precisamente nas minhas férias. Como no próximo semestre da faculdade (de novo, estou escrevendo isso no dia 13 de abril de 2021) teremos uma matéria sobre estruturas de dados usando C#, estou aproveitando para aprender a linguagem antes mesmo de começarem as aulas. 

Então, já me perdoem por qualquer erro ou falha besta encontrada. C:

**[Back into sections](https://github.com/ciroDourado/read#sections)** 
