#include "tank.h"

Tank::Tank(std::string name)
  : Brawler(name,
            TANK_HEALTH,
            TANK_MOVE_SPEED,
            TANK_BASE_DAMAGE,
            TANK_ATTACK_RANGE) {}

int Tank::totalDamage(int power_level) {
  return baseDamage * power_level + health / 1000;
}

int Tank::superDamage() {
  return baseDamage * 2 + health / 2;
}