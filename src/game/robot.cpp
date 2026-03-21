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
    switch (_dir) {
    case Direction::UP:
      _y--;
      break;
    case Direction::DOWN:
      _y++;
      break;
    case Direction::LEFT:
      _x--;
      break;
    case Direction::RIGHT:
      _x++;
      break;
    }
    break;
  case CommandType::TURN_LEFT:
    switch (_dir) {
    case Direction::UP:
      _dir = Direction::LEFT;
      break;
    case Direction::LEFT:
      _dir = Direction::DOWN;
      break;
    case Direction::DOWN:
      _dir = Direction::RIGHT;
      break;
    case Direction::RIGHT:
      _dir = Direction::UP;
      break;
    }
    break;
  case CommandType::TURN_RIGHT:
    switch (_dir) {
    case Direction::UP:
      _dir = Direction::RIGHT;
      break;
    case Direction::LEFT:
      _dir = Direction::UP;
      break;
    case Direction::DOWN:
      _dir = Direction::LEFT;
      break;
    case Direction::RIGHT:
      _dir = Direction::DOWN;
      break;
    }
    break;
  case CommandType::GRAB:
    break;
  }
}

int Robot::getX() const { return _x; }
int Robot::getY() const { return _y; }
Direction Robot::getDirection() const { return _dir; }
