#ifndef GAME_H
#define GAME_H

#include <random>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "snake.h"
#include "border.h"

using vectorPoints = std::vector<SDL_Point>;
using pv_SDL = std::unique_ptr<vectorPoints>;

class Game {
 public:
  Game();
  Game(std::size_t grid_width, std::size_t grid_height);
  ~Game();

  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration);
  int GetScore() const;
  int GetSize() const;

 private:
  Border border;
  Snake snake;
  SDL_Point food;

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  int score{0};
  pv_SDL borderLine;

  void PlaceFood();
  void Update();
};

#endif
