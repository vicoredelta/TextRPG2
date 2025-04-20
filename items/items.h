#ifndef ITEMS_H_
#define ITEMS_H_

#include <string>

class Item
{
  public:
  virtual std::string GetName();
  virtual std::string GetDescription();
};

class ManaPotion : public Item
{
  public:
  ManaPotion();
  std::string GetName();
  std::string GetDescription();

  private:
  const std::string description = "Restores up to 20 mana";
  const std::string name = "Mana Potion";
};

class HealingPotion : public Item
{
  public:
  HealingPotion();
  std::string GetName();
  std::string GetDescription();

  private:
  const std::string name = "Healing Potion";
  const std::string description = "Restores up to 20 health";
};

#endif /* ITEMS_H_ */