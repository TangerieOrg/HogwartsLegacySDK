#include "AActor.hpp"
#include "ABP_Cloak_Prop_C.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_Cloak_Prop_C* ABP_Cloak_Prop_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_Cloak_Prop.BP_Cloak_Prop_C");
    return (ABP_Cloak_Prop_C*)res;
}
void ABP_Cloak_Prop_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_Cloak_Prop.BP_Cloak_Prop_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Cloak_Prop_C::ExecuteUbergraph_BP_Cloak_Prop(int32_t EntryPoint, bool CallFunc_ActorStartFade_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_Cloak_Prop.BP_Cloak_Prop_C.ExecuteUbergraph_BP_Cloak_Prop"));
    struct Params_ExecuteUbergraph_BP_Cloak_Prop {
        int32_t EntryPoint; // 0x0
        bool CallFunc_ActorStartFade_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_BP_Cloak_Prop params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_ActorStartFade_ReturnValue = (bool)CallFunc_ActorStartFade_ReturnValue;
    ProcessEvent(func, &params);
}
