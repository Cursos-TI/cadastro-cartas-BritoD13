# 🃏 Super Trunfo em C – Desafio Final

## 📘 Descrição
Programa em **C** que compara **cartas de países** com base em seus atributos.  
O jogador escolhe **dois atributos diferentes** e o sistema calcula quem vence a rodada.

---

## ⚙️ Atributos das cartas
- Nome do país  
- População (int)  
- Área (float)  
- PIB (float)  
- Pontos turísticos (int)  
- Densidade demográfica (float → população / área)

> 🔹 Para todos os atributos, vence o **maior valor**  
> 🔹 Exceto **densidade demográfica**, onde o **menor valor vence**

---

## 🎮 Como jogar
1. Compile o programa:
   ```bash
   gcc super_trunfo_final.c -o super_trunfo
   ```
2. Execute:
   ```bash
   ./super_trunfo
   ```
3. Escolha **dois atributos diferentes** no menu.
4. O programa mostrará os valores de cada carta, os vencedores de cada atributo e o **resultado final** (ou empate).

---

## 🧩 Exemplo
```
Comparando PIB:
Brasil: 2490.00 | Argentina: 640.00 → Vencedor: Brasil

Comparando Área:
Brasil: 8515767.00 | Argentina: 2780400.00 → Vencedor: Brasil

Soma total:
Brasil: 8518257.00 | Argentina: 2781040.00
Resultado final: Brasil venceu!
```

---

## 🧠 Conceitos aplicados
- Estruturas de decisão (`if`, `else if`, `switch`)
- Operador ternário (`?:`)
- Menus interativos e dinâmicos
- Cálculos e comparações condicionais
- Tratamento de empates

---

## 👨‍💻 Autor
**Diego Brito**  
Desenvolvido como parte do desafio **Super Trunfo em C – nível avançado**.
