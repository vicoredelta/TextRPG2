#ifndef ACTOR_H_
#define ACTOR_H_

#include <string>
#include <list>
#include "../items/items.h"
#include "attributes.h"

class Actor
{
  public:
  Actor(std::string name);
  std::string GetName();
  Attributes GetAttributes();
  std::list<Item> GetInventory();

  private:
  std::string name;
  Attributes attributes;
  std::list<Item> inventory;
};


#endif /* ACTOR_H_ */