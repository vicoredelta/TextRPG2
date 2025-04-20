#include "actor.h"

Actor::Actor(std::string name)
{
  this->name = name;
  attributes = Attributes();
  inventory = std::list<Item>();
}

std::string Actor::GetName()
{
  return name;
}

Attributes Actor::GetAttributes()
{
  return attributes;
}

std::list<Item> Actor::GetInventory()
{
  return inventory;
}