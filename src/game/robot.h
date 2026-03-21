#pragma once

#include "commands.h"
#include <string>

enum class Direction { UP, DOWN, LEFT, RIGHT };

Direction directionFromString(const std::string &s);

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
