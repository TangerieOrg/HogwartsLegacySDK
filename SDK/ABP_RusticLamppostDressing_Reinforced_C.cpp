#include "AActor.hpp"
#include "ABP_RusticLamppostDressing_Reinforced_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_RusticLamppostDressing_Reinforced_C* ABP_RusticLamppostDressing_Reinforced_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/RusticLamppostDressingBPs/BP_RusticLamppostDressing_Reinforced.BP_RusticLamppostDressing_Reinforced_C");
    return (ABP_RusticLamppostDressing_Reinforced_C*)res;
}
