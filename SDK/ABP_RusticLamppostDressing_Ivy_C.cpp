#include "AActor.hpp"
#include "ABP_RusticLamppostDressing_Ivy_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_RusticLamppostDressing_Ivy_C* ABP_RusticLamppostDressing_Ivy_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/RusticLamppostDressingBPs/BP_RusticLamppostDressing_Ivy.BP_RusticLamppostDressing_Ivy_C");
    return (ABP_RusticLamppostDressing_Ivy_C*)res;
}
