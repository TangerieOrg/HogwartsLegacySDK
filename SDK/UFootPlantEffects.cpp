#include "UDataTable.hpp"
#include "UFootPlantEffects.hpp"
#include "UObject.hpp"
#include "UParticleSystem.hpp"
UFootPlantEffects* UFootPlantEffects::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.FootPlantEffects");
    return (UFootPlantEffects*)res;
}
