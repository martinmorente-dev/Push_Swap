# Push_Swap
![Representative image algorithm](https://imgs.search.brave.com/pkI6wUFhhwYofXAwwU4AP9NT5IAyYFUQTnHUAjX_ufI/rs:fit:860:0:0:0/g:ce/aHR0cHM6Ly90aHVt/YnMuZHJlYW1zdGlt/ZS5jb20vYi9jb25j/ZXB0by1kZS10ZWNu/b2xvZyVDMyVBRGEt/aW5ub3ZhZG9yYS1j/b24tZXNjcml0dXJh/LW1hbnVhbC1zb2Jy/ZS1lbC10ZWNsYWRv/LXktYWxnb3JpdG1v/LXN1cGVycG9zaWNp/JUMzJUIzbi1kYXRv/cy1wYXJhLWlkZWFz/LWVtcHJlc2FyaWFs/ZXMtMzg2OTAwODc0/LmpwZw)

## Table of Contents
- ### [Introduction](#introduction)
- ### [Allowed operations](#allowed-operations)
- ### [How it works](#how-it-works)
- ### [Usage example](#usage-example)
- ### [Algorithms and optimization](#algorithms-and-optimization)
- ###  [Turkish algorithm](#turkish-algorithm)
- ### [Compilation](#compilation)
- ### [Checker](#checker)
- ### [Why push swap matters](#why-push-swap-matters)

## 🚀 Introduction
**Push Swap** is a fun yet challenging project where you must **sort integers** using only a small set of stack operations. The twist? You must do it using the **minimum number of moves** possible. 🔥

At the start you get:
- 📂 Stack A → contains all the numbers (unsorted)
- 📂 Stack B → starts empty, used only as temporary storage

👉 The program doesn't return the sorted list itself. Instead, it prints the **exact sequence of operations** needed to sort it.

## 🛠️ Allowed operations
- ♻️ sa / sb / ss → swap the first two elements
- ⏫ pa / pb → push the first element from one stack to the other
- 🔄 ra / rb / rr → rotate stack upwards (first element goes to last)
- 🔽 rra / rrb / rrr → reverse rotate stack downwards (last element goes to first)

## 📖 How it works
Example flow:
1. You start with all numbers in **Stack A** and Stack B empty.
2. Use **push, swap and rotate** to move elements between stacks.
3. Continue until **Stack A is fully sorted** in ascending order ✅ and Stack B is empty again.

## 🔢 Usage example

It will output the sequence of operations.

## 🧩 Algorithms and optimization
To sort efficiently, you'll need to know algorithms and **Big-O complexity:**
- ⚡ O(1) Constant time → instant operations like accessing an array index
- 📈 O(n) Linear → e.g., scanning through a list
- 📉 O(log n) Logarithmic → e.g., binary search
- 🌀 O(n²) Quadratic → e.g., bubble sort

## Turkish algorithm
One optimized strategy:
1. Move elements from A ➝ B while keeping B in **descending order**.
2. Assign each node in A a **target node** in B.
3. Calculate the **cheapest cost** (operations needed on both stacks).
4. Push the cheapest element.
5. When A is empty, push everything back **B ➝ A = 🎉 Sorted!**

## ⚙️ Compilation
First, execute `make`:

to compile the program.
## ✅ Checker
Test your solution with the checker:

- If everything is correct → `OK` ✅
- If not → `KO` ❌

## 🌟 Why push swap matters
- 🧠 Boosts **problem-solving skills**
- 📚 Improves understanding of **stacks, linked lists, and arrays**
- ⚡ Teaches **algorithm efficiency** and optimization

💡 _Pro tip:_ Try generating random inputs with `shuf` for stress testing:
