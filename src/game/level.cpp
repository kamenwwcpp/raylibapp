#include "level.h"
#include <fstream>
#include <nlohmann/json.hpp>

Level Level::loadFromFile(const std::string &path) {
  std::ifstream file(path);
  nlohmann::json j = nlohmann::json::parse(file);

  Level level;
  level.name = j["name"];
  level.width = j["width"];
  level.height = j["height"];

  level.startPos = {j["start"]["x"], j["start"]["y"]};
  level.startDir = directionFromString(j["start"]["dir"]);
  level.exitPos = {j["exit"]["x"], j["exit"]["y"]};

  for (auto &w : j["walls"])
    level.walls.push_back({w[0], w[1]});

  for (auto &k : j["keys"])
    level.keys.push_back({k[0], k[1]});

  for (auto &t : j["traps"])
    level.traps.push_back({t["x"], t["y"], t["type"]});

  for (auto &c : j["available_commands"])
    level.availableCommands.push_back(commandFromString(c).type);

  level.stackLimit = j["stack_limit"];
  return level;
}
