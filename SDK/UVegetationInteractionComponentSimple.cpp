#include "FVector.hpp"
#include "UVegetationInteractionComponent.hpp"
#include "UVegetationInteractionComponentSimple.hpp"
UVegetationInteractionComponentSimple* UVegetationInteractionComponentSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionComponentSimple");
    return (UVegetationInteractionComponentSimple*)res;
}
