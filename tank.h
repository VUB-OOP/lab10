#define TANK_HEALTH 6000
#define TANK_MOVE_SPEED 1
#define TANK_BASE_DAMAGE 800
#define TANK_ATTACK_RANGE 2

#include "brawler.h"

class Tank : public Brawler {
public:
  Tank(std::string name);

  int totalDamage(int power_level) override;

  int superDamage() override final;
};