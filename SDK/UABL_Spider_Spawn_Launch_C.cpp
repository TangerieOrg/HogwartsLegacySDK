#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "UABL_Spider_Spawn_Launch_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
void UABL_Spider_Spawn_Launch_C::OnCustomEvent0(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C.OnCustomEvent"));
    struct Params_OnCustomEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
    }; // Size: 0x10
    Params_OnCustomEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
UABL_Spider_Spawn_Launch_C* UABL_Spider_Spawn_Launch_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C");
    return (UABL_Spider_Spawn_Launch_C*)res;
}
void UABL_Spider_Spawn_Launch_C::ResetPitchAndRoll(UAblAbilityContext* Context, AActor* CallFunc_GetSelfActor_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C.ResetPitchAndRoll"));
    struct Params_ResetPitchAndRoll {
        UAblAbilityContext* Context; // 0x0
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x8
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x10
        float CallFunc_BreakRotator_Roll; // 0x1c
        float CallFunc_BreakRotator_Pitch; // 0x20
        float CallFunc_BreakRotator_Yaw; // 0x24
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x28
        bool CallFunc_K2_SetActorRotation_ReturnValue; // 0x34
    }; // Size: 0x35
    Params_ResetPitchAndRoll params{};
    params.Context = (UAblAbilityContext*)Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_K2_SetActorRotation_ReturnValue = (bool)CallFunc_K2_SetActorRotation_ReturnValue;
    ProcessEvent(func, &params);
}
void UABL_Spider_Spawn_Launch_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Spider_Spawn_Launch_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_Spider_Spawn_Launch_C::OnAbilityEnd0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Spider_Spawn_Launch_C::OnAbilityInterrupt0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Spider_Spawn_Launch_C::ExecuteUbergraph_ABL_Spider_Spawn_Launch(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Launch.ABL_Spider_Spawn_Launch_C.ExecuteUbergraph_ABL_Spider_Spawn_Launch"));
    struct Params_ExecuteUbergraph_ABL_Spider_Spawn_Launch {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context_1; // 0x8
        UAblAbilityContext* K2Node_Event_Context; // 0x10
        UAblAbility* K2Node_Event_NextAbility; // 0x18
        UAblAbilityContext* K2Node_Event_Context_2; // 0x20
        UAblAbilityContext* K2Node_Event_Context_3; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_ABL_Spider_Spawn_Launch params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    ProcessEvent(func, &params);
}
