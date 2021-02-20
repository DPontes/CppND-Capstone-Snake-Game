#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <vector>
#include "SDL.h"

class Obstacle {
 public:
  Obstacle() {};
  Obstacle(int grid_width, int grid_height) :
    _grid_width(grid_width),
    _grid_height(grid_height) {};

  std::vector<SDL_Point> obstacleBody;
  bool IsObstacleCell(int x, int y);

  int _grid_height;
  int _grid_width;

private:
  /*
    Updates the whole vector that contains the body of the border
    as well as the body of the snake;
  */
  void UpdateObstacleBody(SDL_Point &current_cell,
                          SDL_Point &previous_cell);

};


class Snake : public Obstacle {
 public:
  enum class Direction { kUp, kDown, kLeft, kRight };

  Snake(int grid_width, int grid_height) :
    Obstacle(grid_width, grid_height),
    head_x(_grid_width  / 2),
    head_y(_grid_height / 2) {}

  void UpdateSnake();

  void GrowBody();

  Direction direction = Direction::kUp;

  float speed{0.1f};
  int size{1};
  bool alive{true};
  float head_x;     // TODO: why floats? probably explained sowhere in the videos...
  float head_y;

 private:
  void UpdateHead();

  bool growing{false};
};


class Border : public Obstacle {
 public:
  Border(int grid_width, int grid_height) :
    Obstacle(grid_width, grid_height) { insertBorder(); }

 private:
  void insertBorder();
};

#endif
