# Welcome To Game Day

### The Goal

Program the robot through the maze as fast as possible.

- Contacting the obstacles equals a time penalty of 2 seconds per obstacle.
- Get a top 3 score and you will be added to the leaderboard!

### How to Program

Write your code in `main.cpp` and click the download button and then the run
button to test your program. You have three functions at your disposal.

| Action   | Button                                 |
| -------- | -------------------------------------- |
| Download | ![Download Image](download-button.png) |
| Run      | ![Run Image](run-button.png)           |

Download:

## Your Functions

| Function  | Example Usage                                                | Description                                                                  |
| --------- | ------------------------------------------------------------ | ---------------------------------------------------------------------------- |
| **Drive** | `drive(4);` <br> `drive(4, 100);` <br> `drive(4, 65);`       | Drive forward a specified distance (in inches) at an _optional_ velocity (%) |
| **Turn**  | `turn(90);` <br> `turn(90, 100);`                            | Turn the robot a specified number of degrees at an _optional_ velocity (%)   |
| **Wait**  | `wait(2, sec);` <br> `wait(500, ms);` <br> `wait(3000, ms);` | Pause the program for a specified time (seconds or milliseconds)             |
