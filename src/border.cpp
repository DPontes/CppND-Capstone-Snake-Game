#include "border.h"
#include "SDL.h"

void Border::insertBorder() {

    SDL_Point point;

    // fill in the whole first row
    for (i = 0; i < grid_width; i++)
    {
        point.x = i;
        point.y = 0;
        borderLine.push_back(point);    // should probably be emplace_back, and borderLine should be a pointer(?)
    }

    // fill the sidelines of the border
    for ( int i = 1; i < grid_height - 1; i++)
    {
        point.x = 0;
        point.y = i;
        borderLine.push_back(point);
        point.x = grid_width;
        point.y = i;
        borderLine.push_back(point);
    }

    // fill in the whole last row
    for (i = 0; i < grid_width; i++)
    {
        point.x = i;
        point.y = grid_height;
        borderLine.push_back(point);
    }
}

std::vector<SDL_Point> Border :: getBorder() {
    return borderLine;
}

bool Border :: isBorderCell(int x, int y) {
    for (auto const &point : borderLine)
    {
        if(x == point.x && y == point.y)
        {
            return true;
        }
    }
    return false;
}
