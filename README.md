# 100 Doors Problem

This repository contains a C++ solution to the famous **100 Doors Problem**.

## Problem Description
Imagine there are 100 doors in a row, all initially closed. You make 100 passes by the doors, starting with the first door every time. On the first pass, you toggle every door (if the door is closed, you open it; if it is open, you close it). On the second pass, you toggle every second door. On the third pass, every third door, and so on, until you only toggle the 100th door on the last pass.

The task is to determine which doors are open after the 100th pass.

---

## Solution

This program simulates the toggling of doors using a boolean array in C++.

### Key Steps:
1. Initialize an array of 100 doors, all set to `false` (closed).
2. Iterate through 100 people, where each person toggles doors based on their number (every nth door).
3. After all passes, display the doors that remain open.

### Output
The program outputs the numbers of the doors that remain open after all 100 passes.

---

## How to Run

### Prerequisites
- A C++ compiler (e.g., g++, clang).

### Steps
1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd 100-doors-problem
