#include "obstacle.h"
#include <math>
#include <iostream>

// Inneficient method to check if cell is occupied by obstacle
bool Obstacle::IsObstacleCell(int x, int y) {
    // to check if the head has gone against an obstacle
    // TODO: I dont think this part is needed
    if(x == static_cast<int>(head_x) && y == static_cast<int>(head_y))
        return true;

    // to check if the food is not being being placed on an obstacle
    for (auto const &item : obstacleBody) {
        if(x == item.x && y == item.y)
            return true;
    }

    return false;
}

void Obstacle::UpdateObstacleBody(SDL_Point &current_head_cell,
                                  SDL_Point &previous_head_cell) {

    // Add previous head location to vector
    obstacleBody.push_back(previous_head_cell);
    if (!growing) {
        // Remove the tail from the vector, placed after the border location
        // TODO: location in the obstacleBody vector for the begining of the snake
        // should be a pointer pointing to a const location
        obstacleBody.erase(2 * grid_height + 2 * (grid_width - 2));
    } else {
        growing = false;
        size++;
    }

    // Check if snake has not gone against any obstacle
    for (auto const &item : obstacleBody) {
        if (current_head_cell.x == item.x && current_head_cell.y == item.y)
            alive = false;
    }
}

void Snake::UpdateSnake() {
    // capture head position before updating
    SDL_Point prev_cell {
        static_cast<int>(head_x),
        static_cast<int>(head_y)
    };

    UpdateHead();

    // capture head position after updating
    SDL_Point current_cell {
        static_cast<int>(head_x),
        static_cast<int>(head_y)
    };

    // Update all of the obstacle vector items if the snake head has moved
    if ( current_cell.x != prev_cell.x || current_cell.y != prev_cell.y) {
        UpdateObstacleBody(current_cell, prev_cell);
    }
}

void Snake::UpdateHead() {
    switch(direction) {
        case Direction::kUp:
            head_y -= speed;
            break;
        case Direction::kDown:
            head_y += speed;
            break;
        case Direction::kLeft:
            head_x -= speed;
            break;
        case Direction::kRight:
            head_x += speed;
            break;
    }
}

void Snake::GrowBody() { growing = true; }

void Border::insertBorder() {
    SDL_Point point;

    // fill in the top and bottom rows
    for (size_t i = 0; i < grid_width; ++i) {
        point.x = i;
        point.y = 0;
        obstacleBody.push_back(point);
        point.x = i;
        point.y = grid_height - 1;
        obstacleBody.push_back(point);
    }

    // fill the sidelines of the border
    for (size_t = 1; i < grid_height - 1; ++i) {
        point.x = 0;
        point.y = i;
        obstacleBody.push_back(point);
        point.x = grid_width - 1;
        point.y = i;
        obstacleBody.push_back(point);
    }
}
