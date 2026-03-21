#pragma once

#include <string>

enum class CommandType { MOVE, TURN_LEFT, TURN_RIGHT, GRAB };

struct Command {
  CommandType type;
};

Command commandFromString(const std::string &s);
std::string commandToString(CommandType type);
