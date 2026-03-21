#include "command_stack.h"
#include "commands.h"

CommandStack::CommandStack(int limit) : _limit(limit) {}

bool CommandStack::push(Command cmd) {
  if (isFull())
    return false;

  _commands.push_back(cmd);
  return true;
}

Command CommandStack::pop() {
  Command cmd = _commands.back();
  _commands.pop_back();
  return cmd;
}

void CommandStack::swap(int i, int j) { std::swap(_commands[i], _commands[j]); }

void CommandStack::remove(int index) {
  _commands.erase(_commands.begin() + index);
}

int CommandStack::size() const { return _commands.size(); }

bool CommandStack::isFull() const { return size() >= _limit; }

bool CommandStack::isEmpty() const { return _commands.empty(); }

Command CommandStack::get(int index) const { return _commands[index]; }
