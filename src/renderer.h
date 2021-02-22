#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "SDL.h"
#include "snake.h"
#include "border.h"

class Renderer {
 public:
  Renderer();

  Renderer(std::size_t screen_width,
           std::size_t screen_height,
           std::size_t grid_width,
           std::size_t grid_height,
           Border &border);

  ~Renderer();

  void Render(Snake const snake, SDL_Point const &food);
  void UpdateWindowTitle(int score, int fps);

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  Border border;

  std::size_t _screen_width;
  std::size_t _screen_height;
  std::size_t _grid_width;
  std::size_t _grid_height;
};

#endif
