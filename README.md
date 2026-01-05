# Day 1 – Number Analyzer (C++)

## 📌 Overview
Number Analyzer is a command-line application written in **C++** that takes a list of numbers from the user and computes essential statistical values such as **minimum**, **maximum**, **sum**, and **average**.  
The application is designed to handle **invalid inputs gracefully**, ensuring the program does not crash due to incorrect user input.

This project is part of a **30 Days – 30 Projects** challenge aimed at building strong programming fundamentals and preparing for open-source contributions and technical interviews.

---

## 🎯 Problem Statement
Build a command-line application that accepts a list of numbers from the user and calculates statistical values such as minimum, maximum, sum, and average, while handling invalid inputs gracefully.

---

## 🚀 Features
- Accepts multiple numbers in a single line
- Ignores invalid or non-numeric inputs safely
- Calculates:
  - Minimum value
  - Maximum value
  - Sum of numbers
  - Average of numbers
- Clean and readable console output

---

## 🛠️ Tech Stack & Concepts
- **Language:** C++
- **Libraries Used:**
  - `<iostream>`
  - `<sstream>`
  - `<vector>`
  - `<string>`
- **Core Concepts:**
  - Standard Input/Output
  - STL (`vector`)
  - String parsing using `stringstream`
  - Exception handling (`try-catch`)
  - String-to-number conversion using `stod()`

---

## 📥 Input Format
Enter numbers separated by spaces.

### Example:
