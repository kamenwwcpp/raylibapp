#pragma once

#include "commands.h"
#include "robot.h"
#include <string>
#include <vector>

struct Vec2 {
  int x, y;
};

struct Trap {
  int x, y;
  std::string type;
};

class Level {
public:
  static Level loadFromFile(const std::string &path);

  std::string name;
  int width, height;

  Vec2 startPos;
  Direction startDir;
  Vec2 exitPos;

  std::vector<Vec2> walls;
  std::vector<Vec2> keys;
  std::vector<Trap> traps;

  std::vector<CommandType> availableCommands;
  int stackLimit;
};
