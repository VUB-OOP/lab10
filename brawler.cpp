#include "brawler.h"

Brawler::Brawler(std::string name,
                 int health,
                 int movement_speed,
                 int base_damage,
                 int attack_range)
  : name(name),
    health(health),
    movementSpeed(movement_speed),
    baseDamage(base_damage),
    attackRange(attack_range) {}

void Brawler::info() {
  std::cout << "Name: " << name << std::endl;
  std::cout << "Health: " << health << std::endl;
  std::cout << "Movement Speed: " << movementSpeed << std::endl;
  std::cout << "Base Damage: " << baseDamage << std::endl;
  std::cout << "Attack Range: " << attackRange << std::endl;
}

int Brawler::totalDamage(int power_level) {
  return baseDamage * power_level;
}
