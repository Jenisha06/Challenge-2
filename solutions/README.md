repository structure-
├── inputs/
│   ├── grid.txt
│   ├── directions.txt
│   ├── input2.txt
│   └── states.txt
│
├── solutions/
│   ├── problem1.cpp
│   ├── problem2.cpp
│   ├── problem3.cpp
│   └── final_key.txt

Problem 1 — Grid Transform
Goal:
Rotate each row of the grid based on instructions, then take the middle row and compute the ASCII sum of its characters.
My Approach:
-Read grid.txt into a vector of strings.
-Read directions.txt to get rotation operations (L/R with step count).
-Rotate each row accordingly.
-Extract the middle row using index = floor(n/2).
-Sum ASCII values of all characters -> Clue 1.


Problem 2 — Multi-Pass String Process 
Goal:
Apply the following sequence of transformations on the input string:
Reverse the string
Remove every 3rd character (k = 3)
Shift each character by +2 ASCII
Count vowels (a, e, i, o, u, both cases)
The final vowel count → Clue 2.
My Approach:
-Read the full string from input2.txt.
-Reverse using std::reverse.
-Remove characters at indices 2, 5, 8… (1-based positions 3, 6, 9…).
-Apply ASCII shift using char(c + 2).
-Count vowels using a helper function -> Clue 2.



Problem 3 — State Sequence Simulation 
Goal:
Simulate transitions through a 4-state system based on number type:
Even numbers: advance by 1 state
Prime numbers: take a special direct transition
Odd composite: do not advance
Count how many numbers finish at final state (state 3) → Clue 3.
My Approach:
-Read all values from states.txt.
-Classify each number as even, prime, or odd composite.
-Apply the respective state transition rule.
-Count how many end in the terminal state -> Clue 3