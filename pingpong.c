#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 40
#define HEIGHT 20

int ballX, ballY;
int ballDirX = 1, ballDirY = 1;
int player1Y, player2Y;
int player1Score = 0, player2Score = 0;
char gameOver = 0;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawBoard() {
    system("cls");  // clear screen

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || i == HEIGHT - 1) {
                printf("#");  // Draw top and bottom borders
            } else if (j == 0 || j == WIDTH - 1) {
                printf("#");  // Draw left and right borders
            } else if (j == ballX && i == ballY) {
                printf("O");  // Draw the ball
            } else if (j == 1 && i == player1Y) {
                printf("|");  // Player 1's paddle
            } else if (j == WIDTH - 2 && i == player2Y) {
                printf("|");  // Player 2's paddle
            } else {
                printf(" ");  // Empty space
            }
        }
        printf("\n");
    }
    printf("Player 1 Score: %d\tPlayer 2 Score: %d\n", player1Score, player2Score);
}

void initGame() {
    ballX = WIDTH / 2;
    ballY = HEIGHT / 2;
    player1Y = HEIGHT / 2;
    player2Y = HEIGHT / 2;
}

void moveBall() {
    ballX += ballDirX;
    ballY += ballDirY;

    // Bounce off top or bottom wall
    if (ballY <= 1 || ballY >= HEIGHT - 2) {
        ballDirY *= -1;
    }

    // Bounce off player 1's paddle
    if (ballX == 2 && ballY == player1Y) {
        ballDirX *= -1;
    }

    // Bounce off player 2's paddle
    if (ballX == WIDTH - 3 && ballY == player2Y) {
        ballDirX *= -1;
    }

    // Ball out of bounds (left side)
    if (ballX <= 0) {
        player2Score++;
        initGame();
    }
}
    
