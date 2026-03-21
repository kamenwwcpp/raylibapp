#include "command_stack.h"
#include <cassert>
#include <utility>

CommandStack::CommandStack(int limit) : _limit(limit) {}

bool CommandStack::push(Command cmd) {
  if (isFull())
    return false;

  _commands.push_back(cmd);
  return true;
}

Command CommandStack::pop() {
  assert(!isEmpty());
  Command cmd = _commands.back();
  _commands.pop_back();
  return cmd;
}

void CommandStack::swap(int i, int j) {
  assert(i >= 0 && i < size());
  assert(j >= 0 && j < size());
  std::swap(_commands[i], _commands[j]);
}

void CommandStack::remove(int index) {
  assert(index >= 0 && index < size());
  _commands.erase(_commands.begin() + index);
}

int CommandStack::size() const { return static_cast<int>(_commands.size()); }

bool CommandStack::isFull() const { return size() >= _limit; }

bool CommandStack::isEmpty() const { return _commands.empty(); }

Command CommandStack::get(int index) const {
  assert(index >= 0 && index < size());
  return _commands[index];
}
