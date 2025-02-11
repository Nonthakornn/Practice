# Data Structure and Algorithms

## Patterns

**4 Genaral Rules for solving a pettern**
1. Always use nested loops for printing the patterns.
   - Outer loops - rows.
   - Inner loops - columns.
```
	ROW →
    ┌────────┐
    │ * * *  │
    │ * * *  │ C
    │ * * *  │ O
    │ * *  * │ L
    └────────┘
```

2. For `inner loops` , focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the require number of columns to be printed.
3. Print inside loop.
4. Observe symmetry in the pattern.

### Resources

[takeuforward](https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/)