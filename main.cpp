#include <iostream>
#include <vector>
#include "assassin.h"
#include "tank.h"

int main() {
  std::vector<Brawler*> brawlers;

  brawlers.push_back(new Assassin("Fang"));
  brawlers.push_back(new Tank("Rosa"));
  brawlers.push_back(new Assassin("Crow"));
  brawlers.push_back(new Tank("Bull"));

  for (Brawler* brawler : brawlers) {
    brawler->info();
    std::cout << "Total Damage: " << brawler->totalDamage(3) << std::endl;
    std::cout << "Super Damage: " << brawler->superDamage() << std::endl;
    std::cout << std::endl;
  }

  return 0;
}
