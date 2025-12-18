# 📊 Operações com Matrizes em C

Este projeto é um programa em **linguagem C** desenvolvido com o objetivo de praticar e consolidar conceitos fundamentais de programação estruturada, como:

- matrizes bidimensionais
- funções
- estruturas de repetição
- controle de fluxo com `switch`
- organização de código
- interação com o usuário via menu

O programa permite ao usuário criar uma matriz de tamanho definido e executar diversas operações sobre ela por meio de um menu interativo.

---

## 🚀 Funcionalidades

O sistema oferece as seguintes funcionalidades:

- 📌 Preenchimento da matriz:
  - Manualmente (digitando os valores)
  - Automaticamente (valores aleatórios de 0 a 9)

- 📌 Exibição da matriz gerada

- 📌 Cálculo da soma da diagonal principal (apenas para matrizes quadradas)

- 📌 Cálculo da soma da diagonal secundária (apenas para matrizes quadradas)

- 📌 Geração e exibição da matriz transposta

- 📌 Opção para exibir todos os resultados de uma vez

Tudo isso é controlado por um **menu interativo**, facilitando a navegação e o uso do programa.

---

## 🧠 Conceitos abordados

Durante o desenvolvimento deste projeto, foram trabalhados conceitos importantes, como:

- Declaração e manipulação de matrizes com tamanho definido em tempo de execução (VLA)
- Passagem de matrizes como parâmetros para funções
- Separação de responsabilidades em funções
- Uso de `rand()` e `srand()` para geração de números aleatórios
- Estrutura de decisão `switch-case`
- Estruturas de repetição `for` e `do-while`
- Validação de condições (ex.: matriz quadrada para diagonais)

---

## 🛠️ Como compilar e executar

### Compilação (usando GCC)

```bash
gcc -std=c99 main.c -o matriz
# matrizes_C_UFOP
