#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_FreezePhysics_S_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UAble_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABL_NPC_RCT_FreezePhysics_S_C* UABL_NPC_RCT_FreezePhysics_S_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_FreezePhysics_S.ABL_NPC_RCT_FreezePhysics_S_C");
    return (UABL_NPC_RCT_FreezePhysics_S_C*)res;
}
void UABL_NPC_RCT_FreezePhysics_S_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_FreezePhysics_S.ABL_NPC_RCT_FreezePhysics_S_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_FreezePhysics_S_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_FreezePhysics_S.ABL_NPC_RCT_FreezePhysics_S_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_FreezePhysics_S_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_FreezePhysics_S.ABL_NPC_RCT_FreezePhysics_S_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_FreezePhysics_S_C::ExecuteUbergraph_ABL_NPC_RCT_FreezePhysics_S(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_1, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAblAbilityContext* K2Node_Event_Context_2, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_FreezePhysics_S.ABL_NPC_RCT_FreezePhysics_S_C.ExecuteUbergraph_ABL_NPC_RCT_FreezePhysics_S"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_FreezePhysics_S {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        UAblAbilityContext* K2Node_Event_Context_1; // 0x18
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x20
        UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue; // 0x28
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x39
        char pad_3a[0x6];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x40
        UAblAbilityContext* K2Node_Event_Context_2; // 0x48
        UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance; // 0x50
        bool K2Node_DynamicCast_bSuccess_1; // 0x58
        char pad_59[0x7];
        UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1; // 0x60
        bool CallFunc_NotEqual_ObjectObject_ReturnValue_1; // 0x68
        bool CallFunc_BooleanOR_ReturnValue; // 0x69
    }; // Size: 0x6a
    Params_ExecuteUbergraph_ABL_NPC_RCT_FreezePhysics_S params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetAbilityObjectFromClass_ReturnValue = (UAblAbility*)CallFunc_GetAbilityObjectFromClass_ReturnValue;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.K2Node_DynamicCast_AsAble_Anim_Instance = (UAble_AnimInstance*)K2Node_DynamicCast_AsAble_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetAbilityObjectFromClass_ReturnValue_1 = (UAblAbility*)CallFunc_GetAbilityObjectFromClass_ReturnValue_1;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
