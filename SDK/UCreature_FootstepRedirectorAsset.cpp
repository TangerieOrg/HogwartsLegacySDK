#include "UClass.hpp"
#include "UCreature_FootstepRedirectorAsset.hpp"
#include "UDataAsset.hpp"
UCreature_FootstepRedirectorAsset* UCreature_FootstepRedirectorAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_FootstepRedirectorAsset");
    return (UCreature_FootstepRedirectorAsset*)res;
}
