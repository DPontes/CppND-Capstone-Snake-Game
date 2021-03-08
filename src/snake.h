#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "SDL.h"
#include "border.h"

class Snake {
 public:
  Snake();

  Snake(int grid_width, int grid_height);

  ~Snake();

  enum class Direction { kUp, kDown, kLeft, kRight };

  void Update(std::unique_ptr<std::vector<SDL_Point>> borderLine);
  void GrowBody();
  bool SnakeCell(int x, int y);

  Direction direction = Direction::kUp;

  float speed{0.1f};
  int size{1};
  bool alive{true};
  float head_x;
  float head_y;
  std::vector<SDL_Point> body;

 private:
  void UpdateHead();
  void UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell, std::unique_ptr<std::vector>> borderLine);

  bool growing{false};
  int grid_width;
  int grid_height;
  Border border;
};

#endif
