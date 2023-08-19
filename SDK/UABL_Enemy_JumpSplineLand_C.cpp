#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Enemy_JumpSplineLand_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblNPCAbility.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
void UABL_Enemy_JumpSplineLand_C::ExecuteUbergraph_ABL_Enemy_JumpSplineLand(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAbilityActive_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C.ExecuteUbergraph_ABL_Enemy_JumpSplineLand"));
    struct Params_ExecuteUbergraph_ABL_Enemy_JumpSplineLand {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        bool CallFunc_IsAbilityActive_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x21
    }; // Size: 0x22
    Params_ExecuteUbergraph_ABL_Enemy_JumpSplineLand params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsAbilityActive_ReturnValue = (bool)CallFunc_IsAbilityActive_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
UABL_Enemy_JumpSplineLand_C* UABL_Enemy_JumpSplineLand_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C");
    return (UABL_Enemy_JumpSplineLand_C*)res;
}
UAblAbility* UABL_Enemy_JumpSplineLand_C::OnGetBranchAbility(UAblAbilityContext* Context, FName& EventName, AActor* CallFunc_GetSelfActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C.OnGetBranchAbility"));
    struct Params_OnGetBranchAbility {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        UAblAbility* ReturnValue; // 0x10
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x18
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_OnGetBranchAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    return (UAblAbility*)params.ReturnValue;
}
void UABL_Enemy_JumpSplineLand_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Mobility/ABL_Enemy_JumpSplineLand.ABL_Enemy_JumpSplineLand_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
