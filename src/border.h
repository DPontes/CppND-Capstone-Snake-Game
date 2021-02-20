#ifndef BORDER_H
#define BORDER_H

#include "SDL.h"
#include <vector>

class Border {
  public:
    Border();
    Border(int grid_width, int grid_height);

    ~Border();

    std::vector<SDL_Point> getBorder();
    bool isBorderCell(int x, int y);
    std::vector<SDL_Point> borderLine;

  private:
    void insertBorder();
    int grid_height;
    int grid_width;
};

#endif
