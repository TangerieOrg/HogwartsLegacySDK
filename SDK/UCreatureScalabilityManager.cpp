#include "UCreatureScalabilityManager.hpp"
#include "UObject.hpp"
UCreatureScalabilityManager* UCreatureScalabilityManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureScalabilityManager");
    return (UCreatureScalabilityManager*)res;
}
