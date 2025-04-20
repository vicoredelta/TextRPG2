#ifndef ATTRIBUTES_H_
#define ATTRIBUTES_H_

enum class Attribute
{
  kLevel,
  kExperience,
  kStrength,
  kIntelligence,
  kMaxHealth,
  kCurrentHealth,
  kMaxMana,
  kCurrentMana
};

enum class LevelUpOccured
{
  kYes,
  kNo,
};

class Attributes
{
  public:
  Attributes();
  LevelUpOccured AddExperience(unsigned int experience);
  int GetAttribute(Attribute attribute);
  
  private:
  int GetExperienceForNextLevel();
  int level;
  int experience;
  int strength;
  int intelligence;
  int max_health;
  int current_health;
  int max_mana;
  int current_mana;
};

#endif /* ATTRIBUTES_H_ */