#include "robot.h"

Direction directionFromString(const std::string &s) {
  if (s == "up")
    return Direction::UP;
  if (s == "down")
    return Direction::DOWN;
  if (s == "left")
    return Direction::LEFT;
  return Direction::RIGHT;
}

Robot::Robot(int x, int y, Direction dir) : _x(x), _y(y), _dir(dir) {}

void Robot::applyCommand(Command cmd) {
  switch (cmd.type) {
  case CommandType::MOVE:
    if (_dir == Direction::UP)
      _y--;
    if (_dir == Direction::DOWN)
      _y++;
    if (_dir == Direction::LEFT)
      _x--;
    if (_dir == Direction::RIGHT)
      _x++;
    break;
  case CommandType::TURN_LEFT:
    if (_dir == Direction::UP)
      _dir = Direction::LEFT;
    if (_dir == Direction::LEFT)
      _dir = Direction::DOWN;
    if (_dir == Direction::DOWN)
      _dir = Direction::RIGHT;
    if (_dir == Direction::RIGHT)
      _dir = Direction::UP;
    break;
  case CommandType::TURN_RIGHT:
    if (_dir == Direction::UP)
      _dir = Direction::RIGHT;
    if (_dir == Direction::LEFT)
      _dir = Direction::UP;
    if (_dir == Direction::DOWN)
      _dir = Direction::LEFT;
    if (_dir == Direction::RIGHT)
      _dir = Direction::DOWN;
    break;
  case CommandType::GRAB:
    break;
  }
}

int Robot::getX() const { return _x; }
int Robot::getY() const { return _y; }
Direction Robot::getDirection() const { return _dir; }
