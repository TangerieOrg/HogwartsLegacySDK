#include "AActor.hpp"
#include "AVegetationInteractionArbitror.hpp"
#include "UMaterialParameterCollection.hpp"
AVegetationInteractionArbitror* AVegetationInteractionArbitror::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionArbitror");
    return (AVegetationInteractionArbitror*)res;
}
