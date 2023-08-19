#include "AActor.hpp"
#include "ABP_Dungeonlantern_C.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UPointLightComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Dungeonlantern_C* ABP_Dungeonlantern_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/Dungeons/Blueprints/BP_Dungeonlantern.BP_Dungeonlantern_C");
    return (ABP_Dungeonlantern_C*)res;
}
