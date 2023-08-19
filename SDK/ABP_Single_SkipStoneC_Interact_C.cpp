#include "AActor.hpp"
#include "ABP_Single_SkipStoneC_Interact_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Single_SkipStoneC_Interact_C* ABP_Single_SkipStoneC_Interact_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Interaction/BP_Support/BP_Single_SkipStoneC_Interact.BP_Single_SkipStoneC_Interact_C");
    return (ABP_Single_SkipStoneC_Interact_C*)res;
}
