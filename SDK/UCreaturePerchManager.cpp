#include "UCreaturePerchManager.hpp"
#include "UObject.hpp"
UCreaturePerchManager* UCreaturePerchManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreaturePerchManager");
    return (UCreaturePerchManager*)res;
}
