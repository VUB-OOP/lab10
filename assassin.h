#define ASSASSIN_HEALTH 3200
#define ASSASSIN_MOVE_SPEED 5
#define ASSASSIN_BASE_DAMAGE 1200
#define ASSASSIN_ATTACK_RANGE 3

#include "brawler.h"

class Assassin : public Brawler {
public:
  Assassin(std::string name);

  virtual int superDamage() override;
};
