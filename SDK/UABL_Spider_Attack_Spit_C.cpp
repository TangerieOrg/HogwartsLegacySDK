#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Spider_Attack_Spit_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
UABL_Spider_Attack_Spit_C* UABL_Spider_Attack_Spit_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Attacks/ABL_Spider_Attack_Spit.ABL_Spider_Attack_Spit_C");
    return (UABL_Spider_Attack_Spit_C*)res;
}
void UABL_Spider_Attack_Spit_C::ExecuteUbergraph_ABL_Spider_Attack_Spit(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Attacks/ABL_Spider_Attack_Spit.ABL_Spider_Attack_Spit_C.ExecuteUbergraph_ABL_Spider_Attack_Spit"));
    struct Params_ExecuteUbergraph_ABL_Spider_Attack_Spit {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_Spider_Attack_Spit params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
void UABL_Spider_Attack_Spit_C::OnCustomEvent0(UAblAbilityContext* Context, FName& EventName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, AActor* CallFunc_GetSelfActor_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Attacks/ABL_Spider_Attack_Spit.ABL_Spider_Attack_Spit_C.OnCustomEvent"));
    struct Params_OnCustomEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x11
        char pad_12[0x6];
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x18
        AActor* CallFunc_GetSelfActor_ReturnValue_1; // 0x20
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x28
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1; // 0x30
    }; // Size: 0x38
    Params_OnCustomEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue_1 = (AActor*)CallFunc_GetSelfActor_ReturnValue_1;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue_1 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_1;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
void UABL_Spider_Attack_Spit_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Attacks/ABL_Spider_Attack_Spit.ABL_Spider_Attack_Spit_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
