# Push_Swap

![Reprenstative image algorithym](https://imgs.search.brave.com/pkI6wUFhhwYofXAwwU4AP9NT5IAyYFUQTnHUAjX_ufI/rs:fit:860:0:0:0/g:ce/aHR0cHM6Ly90aHVt/YnMuZHJlYW1zdGlt/ZS5jb20vYi9jb25j/ZXB0by1kZS10ZWNu/b2xvZyVDMyVBRGEt/aW5ub3ZhZG9yYS1j/b24tZXNjcml0dXJh/LW1hbnVhbC1zb2Jy/ZS1lbC10ZWNsYWRv/LXktYWxnb3JpdG1v/LXN1cGVycG9zaWNp/JUMzJUIzbi1kYXRv/cy1wYXJhLWlkZWFz/LWVtcHJlc2FyaWFs/ZXMtMzg2OTAwODc0/LmpwZw)

## 📑 Table of Contents

### I. 🚀 [Introduction](#introduction) <br>
### II. 🛠️ [Allowed operations](#allowed-operations) <br>
### III 📖 [How it works](#how-it-works)<br>
### IV 🔢 [Usage Example](#usage-example) <br>
### V 🧩 [Algorithms & Optimization](#algorithms&optimization) <br>
### VI ⚙️ [Instalation & Compilation](#instalation&configuration) <br>
### VII ✅ [Checker & Validation](#checker&validation) <br>
### VIII 🌟 [Why Push Swap Matters](#why-push-swap-matters)<br>
<br>

## 🚀 Introduction

<strong>Push Swap</strong> is a fun jet challenging project where you must <strong>sort integers</strong> only a small <br> set of stack operations. The twist? You must do it using the <strong> minimum number of moves</strong> possible. 🔥
<br> <br>
At the start you get:<br>
- 📂 Stack A → contains all the numbers (unsorted)<br>
- 📂 Stack B → starts empty, used only as temporary storage

👉 The program doesn't return the sorted list itself. Instead, it prints the <strong>exacet sequence of operations</strong> needed to sort it.<br>

## 🛠️ Allowed operations
<br>
- ♻️ sa / sb / ss → swap the first two elements<br>
- ⏫ pa / pb → push the first element from one stack to the other<br>
- 🔄 ra / rb / rr → rotate stack upwards (first element goes to last)<br>
- 🔽 rra / rrb / rrr → reverse rotate stack downwards (last element goes to first)<br>

## How it works

Example flow:
1. You start with all numbers in <strong> Stack A </strong> and Stack B empty
2. Use <strong>push, swap and rotate</strong> to move elements between stacks.
3. Continue until <strong>Stack A is fully sorted</strong> in ascending order ✅ and Stack B is empty again.

## 🧩 Algorithyms & Optimization

To sort efficiently, you'll need to know algorihms and <strong>Big-O complexity:</strong>

- ⚡ O(1) Constant time → instant operations like accessing an array index

- 📈 O(n) Linear → e.g., scanning through a list

- 📉 O(log n) Logarithmic → e.g., binary search

- 🌀 O(n²) Quadratic → e.g., bubble sort

## Turkish Algorithm
One optimized strategy:<br>
1. Move elements from A ➝ B while keeping B in <strong>descending order</strong>.
2. Assign each node in A <strong>target node</strong> in B.
3. Calculate the <strong>cheapest cost</strong> (operations needed on both stacks).
4. Push the cheapest element.
5. Finally, when A is empty push everighing back <strong>B ➝ A = 🎉 Sorted!</strong>

## ⚙️ Compilation
1 First Execute `make` to compile the program


## ✅ Checker
Test 
