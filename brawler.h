#pragma once

#include <iostream>

class Brawler {
public:
  Brawler(std::string name,
          int health,
          int movement_speed,
          int base_damage,
          int attack_range);

  void info();

  virtual int totalDamage(int power_level);

  virtual int superDamage() = 0;

protected:
  std::string name;
  int health;
  int movementSpeed;
  int baseDamage;
  int attackRange;
};