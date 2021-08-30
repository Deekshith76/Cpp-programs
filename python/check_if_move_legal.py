'''
You are given a 0-indexed 8 x 8 grid board, where board[r][c] represents the cell (r, c) on a game board. On the board, free cells are represented by '.', white cells are represented by 'W', and black cells are represented by 'B'.

Each move in this game consists of choosing a free cell and changing it to the color you are playing as (either white or black). However, a move is only legal if, after changing it, the cell becomes the endpoint of a good line (horizontal, vertical, or diagonal).

A good line is a line of three or more cells (including the endpoints) where the endpoints of the line are one color, and the remaining cells in the middle are the opposite color (no cells in the line are free).

Given two integers rMove and cMove and a character color representing the color you are playing as (white or black), return true if changing cell (rMove, cMove) to color color is a legal move, or false if it is not legal.
'''

def checkMove(board, rMove, cMove, color): #excepts a bool
    ROWS, COLS = len(board), len(board[0])
    direction = [[1,0],[0, 1], [1, 1], [0, 0],
                 [-1, -1], [-1, 1], [1, -1], [1, 1]]
    board[rMove][cMove] = color
    
    def legal(row, col, color, direc):
        dr, dc = direc
        length = 1
        row, col = row + dr, col + dc
        
        while (0 <= row < ROWS and 0 <= col < COLS):
            length += 1
            if board[row][col] == '.': return False
            if board[row][col] == color: return length >= 3
            
            row, col = row + dr, col + dc
            
        return False
        
    for d in direction:
        if legal(rMove, cMove, color, d): return True
    return False

board1 = [[".",".",".","B",".",".",".","."],[".",".",".","W",".",".",".","."],[".",".",".","W",".",".",".","."],[".",".",".","W",".",".",".","."],["W","B","B",".","W","W","W","B"],[".",".",".","B",".",".",".","."],[".",".",".","B",".",".",".","."],[".",".",".","W",".",".",".","."]]

rMove1, cMove1 = 4, 3
color1 = "B"
print(checkMove(board1, rMove1, cMove1, color1)) #True

board2 = [[".",".",".",".",".",".",".","."],[".","B",".",".","W",".",".","."],[".",".","W",".",".",".",".","."],[".",".",".","W","B",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".",".","B","W",".","."],[".",".",".",".",".",".","W","."],[".",".",".",".",".",".",".","B"]]

rMove2, cMove2 = 4, 4
color2 = "W"
print(checkMove(board2, rMove2, cMove2, color2)) #False