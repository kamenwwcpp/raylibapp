#include "commands.h"

Command commandFromString(const std::string &s) {
  if (s == "move")
    return {CommandType::MOVE};
  if (s == "turn_left")
    return {CommandType::TURN_LEFT};
  if (s == "turn_right")
    return {CommandType::TURN_RIGHT};
  if (s == "grab")
    return {CommandType::GRAB};
  return {CommandType::MOVE};
}

std::string commandToString(CommandType type) {
  switch (type) {
  case CommandType::MOVE:
    return "move";
  case CommandType::TURN_LEFT:
    return "turn_left";
  case CommandType::TURN_RIGHT:
    return "turn_right";
  case CommandType::GRAB:
    return "grab";
  }
  return "move";
}
