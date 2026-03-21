#pragma once

#include "commands.h"
#include <vector>

class CommandStack {
public:
  CommandStack(int limit);
  bool push(Command cmd);
  Command pop();
  void swap(int i, int j);
  void remove(int index);

  int size() const;
  bool isFull() const;
  bool isEmpty() const;
  Command get(int index) const;

private:
  std::vector<Command> _commands;
  int _limit;
};
