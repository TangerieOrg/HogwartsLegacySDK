#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Enemy_Spawn_Death_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
UABL_Enemy_Spawn_Death_C* UABL_Enemy_Spawn_Death_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_Death.ABL_Enemy_Spawn_Death_C");
    return (UABL_Enemy_Spawn_Death_C*)res;
}
void UABL_Enemy_Spawn_Death_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_Death.ABL_Enemy_Spawn_Death_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Enemy_Spawn_Death_C::ExecuteUbergraph_ABL_Enemy_Spawn_Death(int32_t EntryPoint, FHitResult CallFunc_MakeHitResult_ReturnValue, UAblAbilityContext* K2Node_Event_Context, TArray<UInteractionArchitectAsset*>& K2Node_MakeArray_Array, AActor* CallFunc_GetSelfActor_ReturnValue, bool CallFunc_Kill_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_Death.ABL_Enemy_Spawn_Death_C.ExecuteUbergraph_ABL_Enemy_Spawn_Death"));
    struct Params_ExecuteUbergraph_ABL_Enemy_Spawn_Death {
        int32_t EntryPoint; // 0x0
        FHitResult CallFunc_MakeHitResult_ReturnValue; // 0x4
        char pad_8c[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x90
        TArray<UInteractionArchitectAsset*> K2Node_MakeArray_Array; // 0x98
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0xa8
        bool CallFunc_Kill_ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_ExecuteUbergraph_ABL_Enemy_Spawn_Death params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeHitResult_ReturnValue = (FHitResult)CallFunc_MakeHitResult_ReturnValue;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_MakeArray_Array = (TArray<UInteractionArchitectAsset*>)K2Node_MakeArray_Array;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_Kill_ReturnValue = (bool)CallFunc_Kill_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
