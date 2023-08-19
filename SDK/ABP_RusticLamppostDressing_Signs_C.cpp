#include "AActor.hpp"
#include "ABP_RusticLamppostDressing_Signs_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_RusticLamppostDressing_Signs_C* ABP_RusticLamppostDressing_Signs_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/RusticLamppostDressingBPs/BP_RusticLamppostDressing_Signs.BP_RusticLamppostDressing_Signs_C");
    return (ABP_RusticLamppostDressing_Signs_C*)res;
}
