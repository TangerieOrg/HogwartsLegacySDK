#include "FVegetationInteractionVelocityTracker.hpp"
#include "UVegetationInteractionComponent.hpp"
#include "UVegetationInteractionComponentBiped.hpp"
UVegetationInteractionComponentBiped* UVegetationInteractionComponentBiped::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionComponentBiped");
    return (UVegetationInteractionComponentBiped*)res;
}
