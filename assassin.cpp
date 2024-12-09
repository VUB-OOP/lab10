#include "assassin.h"

Assassin::Assassin(std::string name)
  : Brawler(name,
            ASSASSIN_HEALTH,
            ASSASSIN_MOVE_SPEED,
            ASSASSIN_BASE_DAMAGE,
            ASSASSIN_ATTACK_RANGE) {}

int Assassin::superDamage() {
  return baseDamage * 2;
}
