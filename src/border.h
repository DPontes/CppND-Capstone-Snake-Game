#ifndef BORDER_H
#define BORDER_H

#include "SDL.h"
#include <vector>

class Border {
  public:
    Border();
    Border(int grid_width, int grid_height);

    ~Border();

    bool isBorderCell(int x, int y);
    std::vector<SDL_Point> borderLine;

  private:
    void insertBorder();
    int _grid_height;
    int _grid_width;
};

#endif
