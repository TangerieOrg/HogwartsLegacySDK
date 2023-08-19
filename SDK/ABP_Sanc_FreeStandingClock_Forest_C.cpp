#include "ABP_Sanc_FreeStandingClock_Forest_C.hpp"
#include "ABP_Sanc_FreeStandingClock_Parent_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_Sanc_FreeStandingClock_Forest_C* ABP_Sanc_FreeStandingClock_Forest_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Forest.BP_Sanc_FreeStandingClock_Forest_C");
    return (ABP_Sanc_FreeStandingClock_Forest_C*)res;
}
void ABP_Sanc_FreeStandingClock_Forest_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Forest.BP_Sanc_FreeStandingClock_Forest_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FreeStandingClock_Forest_C::ExecuteUbergraph_BP_Sanc_FreeStandingClock_Forest(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Forest.BP_Sanc_FreeStandingClock_Forest_C.ExecuteUbergraph_BP_Sanc_FreeStandingClock_Forest"));
    struct Params_ExecuteUbergraph_BP_Sanc_FreeStandingClock_Forest {
        int32_t EntryPoint; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_BP_Sanc_FreeStandingClock_Forest params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
