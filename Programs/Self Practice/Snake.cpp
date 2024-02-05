#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

const int HEIGHT = 20;
const int WIDTH = 40;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };

class Snake {
private:
  int x, y;
  Direction dir;

public:
  Snake() {
    x = WIDTH / 2;
    y = HEIGHT / 2;
    dir = STOP;
  }

  void move() {
    switch (dir) {
      case LEFT:
        x--;
        break;
      case RIGHT:
        x++;
        break;
      case UP:
        y--;
        break;
      case DOWN:
        y++;
        break;
      default:
        break;
    }
  }

  void changeDirection(Direction d) {
    dir = d;
  }

  int getX() { return x; }
  int getY() { return y; }
};

int main() {
  Snake snake;
  bool gameOver = false;
  char key;

  while (!gameOver) {
    // Check for user input to change direction
    if (_kbhit()) {
      key = _getch();
      switch (key) {
        case 'a':
          snake.changeDirection(LEFT);
          break;
        case 'd':
          snake.changeDirection(RIGHT);
          break;
        case 'w':
          snake.changeDirection(UP);
          break;
        case 's':
          snake.changeDirection(DOWN);
          break;
        default:
          break;
      }
    }

    // Move the snake
    snake.move();

    // Check for collision with walls
    if (snake.getX() <= 0 || snake.getX() >= WIDTH || snake.getY() <= 0 || snake.getY() >= HEIGHT) {
      gameOver = true;
    }

    // Draw the game board
    system("cls");  // Clear the console
    for (int i = 0; i < HEIGHT; i++) {
      for (int j = 0; j < WIDTH; j++) {
        if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1) {
          cout << "#";
        } else if (i == snake.getY() && j == snake.getX()) {
          cout << "O";
        } else {
          cout << " ";
        }
      }
      cout << endl;
    }
  }

  cout << "Game Over!" << endl;
  return 0;
}
