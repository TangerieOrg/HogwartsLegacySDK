#include "EFootprintTypes.hpp"
#include "FVector2D.hpp"
#include "UFootPlantEffects.hpp"
#include "UPhoenixFootPlantEffects.hpp"
UPhoenixFootPlantEffects* UPhoenixFootPlantEffects::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixFootPlantEffects");
    return (UPhoenixFootPlantEffects*)res;
}
