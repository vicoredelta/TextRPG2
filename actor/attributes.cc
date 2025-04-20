#include "attributes.h"
#include <cmath>

Attributes::Attributes()
{
  level = 1;
  experience = 0;
  strength = 3;
  intelligence = 3;
  max_health = 10;
  current_health = 10;
  max_mana = 10;
  current_mana = 10;
}

LevelUpOccured Attributes::AddExperience(unsigned int experience)
{
  this->experience += experience;
  LevelUpOccured occured = LevelUpOccured::kNo;

  while (GetExperienceForNextLevel() <= this->experience)
  {
    level += 1;
    occured = LevelUpOccured::kYes;
  }

  return occured;
}

int Attributes::GetExperienceForNextLevel()
{
  return int(10 * level + std::pow(level-1, 2));
}