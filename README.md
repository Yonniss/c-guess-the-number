# c-guess-the-number

A number guessing game for the terminal, written in C. Second project in a series I'm building to practice C.

The program picks a random number between 1 and 100, and you try to guess it. After each attempt it tells you whether to go higher or lower.

## Build

```
gcc -Wall -Wextra -o guess guess.c
```

## Usage

```
$ ./guess
Guess the number!
50
Try lower
25
Try higher
37
Guessed!
```

Non-numeric input is rejected with an `Invalid data!` message. Closing the input (Ctrl+D) exits the program.

## Known issues

- After invalid input, the program repeats the hint from the last valid guess.
- Input like `5abc` is read as `5`; `scanf` discards the rest of the line.

## What I practiced

- `rand()` / `srand()` / `time()` and keeping a random number in a range
- Reading input with `scanf` and checking its return value
- Handling `EOF`
- Clearing the input buffer with `getchar()`
