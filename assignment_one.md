# A1

## Part 1: Weird Dice

We're going to be making a dice-based game, where the dice are all weird and biased (kinda like the mario party character dice)

Let's start by making a **6** sided, biased die.
Each face of the die has an assigned *probability* and a *value* to it.
For example, our die can have the following probabilities and values:

```
Face 0: 0.2 probability, 10 value
Face 1: 0.1 probability, 3 value
Face 2: 0.4 probability, 4 value
Face 3: 0.05 probability, 25 value
Face 4: 0.05 probability, 2 value
Face 5: 0.2 probability, 9 value
```

Implement the die above, and create a function that rolls the die and returns the value of the roll.

## Part 2: Some user input

We're going to let a user roll the dice we implemented above as many times as they want.

First, we will prompt the user for the number of times we want to roll the dice. Afterwards, we will print all the dice rolls and provide the sum (their score).

Finally, we will let the user decide if they want to do more rolls.

Example terminal output:
```
How many times do you want to roll the die?
9
Rolling...
10 | 4 | 4 | 4 | 25 | 4 | 9 | 3 | 10 |
Score: 73
Would you like to roll again?
Yes
How many times do you want to roll the die?
2
Rolling...
2 | 4
Score: 6
Would you like to roll again?
No
Goodbye!
```

#### Tip:

A common pattern to create prompts that allows the user to repeat the action as many times as they want looks like this:

```
while True:
    do_something;
    want_to_continue = prompt_continue;
    if not want_to_continue:
        ending_message;
        break;
```

#### Tip:

Make sure to handle events that aren't expected! For example:

```
How many times do you want to roll the die?
pussy
pussy is not a valid die roll amount. How many times do you want to roll the die?
-1
-1 is not a valid die roll amount. How many times do you want to roll the die?
...
```

## Part 3: A wild dice appeared!

We will now let the user choose between the **6** sided die, or a brand new **4** sided die.

The brand new **4** sided die will have the following probabilites and values:

```
Face 0: 0.5 probability, 7 value
Face 1: 0.1 probability, 1 value
Face 2: 0.35 probability, 4 value
Face 3: 0.05 probability, 50 value
```

After the user has picked a die, we will let the user choose how many times they want to roll their die. We will also roll the leftover die the same amount of times, and let them know what our total score was.

Example terminal output:

```
Choose your die! (A or B)
A
How many times do you want to roll the die?
9
Rolling...
A: 10 | 4 | 4 | 4 | 25 | 4 | 9 | 3 | 10 |
Score: 73
B: 7 | 7 | 7 | 1 | 4 | 7 | 4 | 7 | 4
We scored: 48
Would you like to roll again?
No
Goodbye!
```