# Day 1 – Number Analyzer (C++)

## 📌 Overview
**Number Analyzer** is a command-line application written in **C++** that accepts a list of numbers from the user and computes detailed statistical information.

The program is designed to **handle invalid inputs gracefully**, ensuring that incorrect or non-numeric values do not cause the application to crash. Any invalid input is safely ignored with a clear message to the user.

This implementation supports **both space-separated and comma-separated input**, computes **advanced statistical metrics**, and displays results in a clean, readable format.

This project is part of a **30 Days – 30 Projects** challenge focused on strengthening programming fundamentals and building industry-ready coding practices.

---

## 🎯 Problem Statement
Build a command-line application that accepts a list of numbers from the user and calculates statistical values such as minimum, maximum, sum, and average, while handling invalid inputs gracefully.

---

## 🚀 Features
- Accepts multiple numbers in a single line
- Supports **space-separated and comma-separated input**
- Safely ignores invalid or non-numeric values
- Calculates:
  - Count of valid numbers
  - Minimum value
  - Maximum value
  - Sum of numbers
  - Average (mean)
  - Median
  - Mode (supports duplicate values)
  - Range
  - Standard deviation
- Displays the **sorted list of valid numbers**
- Clean and readable console output

---

## 🛠️ Tech Stack & Concepts
- **Language:** C++
- **Libraries Used:**
  - `<iostream>`
  - `<sstream>`
  - `<vector>`
  - `<string>`
  - `<algorithm>`
  - `<cmath>`
  - `<map>`
- **Core Concepts:**
  - Standard input/output
  - STL containers (`vector`, `map`)
  - String parsing using `stringstream`
  - Exception handling (`try-catch`)
  - String-to-number conversion using `stod()`
  - Basic statistical calculations

---

## 📥 Input Format
Enter numbers separated by **spaces or commas**.

### Example Input
10 20 abc 30 -5 xyz


---

## 📤 Sample Output
⚠️ Invalid input ignored: 'abc'
⚠️ Invalid input ignored: 'xyz'

📊 Number Analysis Results

Count : 4
Minimum : -5
Maximum : 30
Sum : 55
Average : 13.75
Median  : 15
Range   : 35
Std Dev : 14.9304
Mode    : No mode
Sorted  : -5 10 20 30

---

## 🧠 Program Logic
1. Read the complete input line using `getline()`
2. Replace commas with spaces to normalize input
3. Split the input string using `stringstream`
4. Convert each token to a numeric value using `stod()`
5. Ignore invalid tokens using exception handling
6. Store valid numbers in a `vector`
7. Calculate statistical values (min, max, sum, average, median, mode, range, standard deviation)
8. Sort and display the final results in a structured format

---

## ▶️ How to Run the Program

### Compile
```bash
g++ number_analyzer.cpp -o number_analyzer

### Run
./number_analyzer

