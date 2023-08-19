#include "UVegetationInteractionComponentBiped.hpp"
#include "UVegetationInteractionComponentCreature.hpp"
UVegetationInteractionComponentCreature* UVegetationInteractionComponentCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionComponentCreature");
    return (UVegetationInteractionComponentCreature*)res;
}
