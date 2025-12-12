1. Problem 1 — Grid Transform
Read the grid from grid.txt.
Read rotation instructions from directions.txt.
Rotated each row by one position based on direction .
Identified the middle row using floor.
Computed the sum of ASCII values of characters in the middle row.
This produced Clue 1.

2. Problem 2 — Multi-Pass String Processing
Read the input string from input2.txt.
Reversed the string.
Removed every 3rd character.
Shifted the ASCII value of each remaining character by +2.
Counted the number of vowels in the final transformed string.
This produced Clue 2.

3. Problem 3 — State Sequence Simulation
Read the sequence of numbers from states.txt.
Applied the following rules:
Prime numbers transition directly to the terminal state.
Even numbers advance deterministically and eventually reach the terminal state.
Odd composite numbers follow the fallback rule and do not advance.
Counted how many values ended in the terminal state.
This produced Clue 3.

4. Final Key Construction

Converted Clue 1 into hexadecimal representation.
Repeated the string form of Clue 2 exactly Clue 3 times.
Joined them using the required separator.
Stored the result in solutions/final_key.txt.
This produced the Final Key