# Tetris

[Toc]

## Project Objective: 
>> Apply the knowledge learned from the course of data structures and implement a fun T.

## Project Description 
>> Tetris is a tile-matching puzzle game. Given an initially empty 𝑚 ∗ 𝑛 game matrix, a sequence of blocks falls down the playing matrix and stop when the bottom touches either the ground or other resting blocks. If these resting blocks form a solid horizontal line without gaps then the line disappears and any blocks above it fall down to fill the space. Any solid horizontal line should disappear after each block adjustment. The game terminates either if any block exceeds matrix vertical boundary after all solid horizontal lines are removed or the input sequence of blocks is exhausted. 


>> Blocks are game pieces with geometric shapes composed of four square blocks each. Use thefollowing symbols for the sequence of falling blocks in your prepared test case.
 
![](https://i.imgur.com/OgcgPSo.png)

>> Note that the reference point of each block is defined as the lower left corner of the enclosing bounding box of the block cells (colored blue). For instance, the reference point of T1 block is as indicated below.

![](https://i.imgur.com/S16adHB.png)

## Test Case
>> Every student has to design and submit a test case prepared as a text file, named “tetris.data”. The first line of the file contains two numbers, specifying the number of rows (m) and the number of columns(n) of the game matrix. The last line should always contain the keyword “End”. In between, each line shall first have the selected block symbol and the starting column the lower left corner of the corresponding block to fall on. Note that the row and column all start from index 1.


![](https://i.imgur.com/kfd5DwU.png)

>> This case describes a game matrix of 10 rows and 5 columns. 

* Valid Test Case
>> The matrix size should be no more than 40*15 and the number of blocks to fall should be less than 1000. If any part of the falling block exceeds the game matrix horizontal boundary is deemed illegal.

## Output file
>> Output the final content of the game matrix into a file named “tetris.final” from the top row to the bottom row. Use “1” to indicate the matrix cell is occupied, and “0” otherwise. Do not leave a single space between matrix cells.

>> The final output of the last example:

![](https://i.imgur.com/12Gq0jD.png)



---
-----

## Program description

* program flow chart

![](https://i.imgur.com/9cVW3wn.png)


* Detailed description

1. *Struct*
>> The program I have a block class、 a board class and an atom struct。
Every tetris belongs to class block, and we know each tetris include four “block”. I named each block “atom”. An atom records its position with row and column.

>> Second, board class is a map to store and show the tetrises. There are “add” and “erase” method to practice game rule.

2. *How it works*
>> **Block calss** : First, we input what tetris we want. I take some skills that I don’t want my program existing if-else everywhere, so I transfer character to ACSII to make a switching to let program know what kind of tetris.
>> 
>> Second, I allocate memory to each “**block**”. The point is left and low block, other three blocks reference point position. When everything is alredy for initializing, we can enter the game!
>> **Board class** :This board we have “**row**” to record whether it can erase or not, “**flag**” is to report the highest block position in its colume, “**col**” let we know all blocks status.
>> 
>> First, we need to know where this tetris will seat, “**distance**” record how many steps the tetirs will drop. And when it drop, “**row”** and “**flag**” will update status.
>> 
>> Second, we drop the blocks one-by-one. When this blocks can full the row, we replace the row status from it’s upper row. “**flag**” will to find next where the highest block is, and “distance” will incerase when we erase a row.
>> 
>> Third, if the highest blocks over the length, we regard this block is broken, and we need to end the game. 



