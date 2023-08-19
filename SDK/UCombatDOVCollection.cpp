#include "UCombatDOVCollection.hpp"
#include "UObject.hpp"
UCombatDOVCollection* UCombatDOVCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombatDOVCollection");
    return (UCombatDOVCollection*)res;
}
