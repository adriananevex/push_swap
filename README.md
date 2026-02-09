*This project has been created as part of the 42 curriculum by aneves.*

# push_swap

## Description
Push_swap is a sorting program that outputs a sequence of stack operations to sort a list of integers using two stacks and a limited instruction set.

## How It Works

- You have two stacks: **stack A** and **stack B**
- Initially:
  - Stack A contains all the integers
  - Stack B is empty
- The goal is to sort stack A using only predefined operations such as swaps, pushes, rotations, and reverse rotations

Only valid instructions are printed, one per line, and no extra output is allowed.

## Instructions

### Build
```bash
make
```

### Run
```bash
./push_swap 2 1 3
```

### Test with checker
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```

## Resources
- 42 push_swap subject
- Tutorials
- Article Push Swap — A journey to find most efficient sorting algorithm


### AI Usage
- Used to review code for bugs and compliance issues.
- Used to help explain build and testing steps.
