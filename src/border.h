#ifndef BORDER_H
#define BORDER_H

#include "SDL.h"
#include <vector>

class Border {
  public:
    Border(int grid_width, int grid_height){
        this->grid_width = grid_width;
        this->grid_height = grid_height;

        insertBorder();
    }

    std::vector<SDL_Point> getBorder();
    bool isBorderCell(int x, int y);

  private:
    void insertBorder();
    std::vector<SDL_Point> borderLine;
    int grid_height;
    int grid_width;
};

#endif
