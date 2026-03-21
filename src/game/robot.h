#pragma once

#include "commands.h"

enum class Direction { UP, DOWN, LEFT, RIGHT };

class Robot {
public:
  Robot(int x, int y, Direction dir);

  void applyCommand(Command cmd);

  int getX() const;
  int getY() const;
  Direction getDirection() const;

private:
    int _x, _y;
    Direction _dir;
};
