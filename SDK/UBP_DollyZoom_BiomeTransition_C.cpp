#include "UBP_DollyZoom_BiomeTransition_C.hpp"
#include "UCameraStackBehaviorDollyZoom.hpp"
UBP_DollyZoom_BiomeTransition_C* UBP_DollyZoom_BiomeTransition_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_DollyZoom_BiomeTransition.BP_DollyZoom_BiomeTransition_C");
    return (UBP_DollyZoom_BiomeTransition_C*)res;
}
