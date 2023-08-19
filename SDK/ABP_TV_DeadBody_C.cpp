#include "ABP_TV_DeadBody_C.hpp"
#include "AWorldObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UObject.hpp"
#include "UStaticMeshComponent.hpp"
ABP_TV_DeadBody_C* ABP_TV_DeadBody_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/MissionObjects/Blueprints/BP_TV_DeadBody.BP_TV_DeadBody_C");
    return (ABP_TV_DeadBody_C*)res;
}
void ABP_TV_DeadBody_C::ExecuteUbergraph_BP_TV_DeadBody(int32_t EntryPoint) {}
void ABP_TV_DeadBody_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/MissionObjects/Blueprints/BP_TV_DeadBody.BP_TV_DeadBody_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_TV_DeadBody_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/MissionObjects/Blueprints/BP_TV_DeadBody.BP_TV_DeadBody_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
