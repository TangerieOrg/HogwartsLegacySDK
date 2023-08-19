#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "ACharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_SendAway_S_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPawnMovementComponent.hpp"
UABL_NPC_RCT_SendAway_S_C* UABL_NPC_RCT_SendAway_S_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C");
    return (UABL_NPC_RCT_SendAway_S_C*)res;
}
void UABL_NPC_RCT_SendAway_S_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_SendAway_S_C::ExecuteUbergraph_ABL_NPC_RCT_SendAway_S(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_1, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context, UClass* CallFunc_GetObjectClass_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.ExecuteUbergraph_ABL_NPC_RCT_SendAway_S"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_SendAway_S {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context_3; // 0x8
        UAblAbilityContext* K2Node_Event_Context_2; // 0x10
        UAblAbilityContext* K2Node_Event_Context_1; // 0x18
        UAblAbility* K2Node_Event_NextAbility; // 0x20
        UAblAbilityContext* K2Node_Event_Context; // 0x28
        UClass* CallFunc_GetObjectClass_ReturnValue; // 0x30
        AActor* CallFunc_GetOwner_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_ClassClass_ReturnValue; // 0x40
        char pad_41[0x7];
        AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character; // 0x48
        bool K2Node_DynamicCast_bSuccess; // 0x50
        bool CallFunc_Not_PreBool_ReturnValue; // 0x51
        char pad_52[0x6];
        UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue; // 0x58
        UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component; // 0x60
        bool K2Node_DynamicCast_bSuccess_1; // 0x68
    }; // Size: 0x69
    Params_ExecuteUbergraph_ABL_NPC_RCT_SendAway_S params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetObjectClass_ReturnValue = (UClass*)CallFunc_GetObjectClass_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_EqualEqual_ClassClass_ReturnValue = (bool)CallFunc_EqualEqual_ClassClass_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Character = (AAmbulatory_Character*)K2Node_DynamicCast_AsAmbulatory_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetMovementComponent_ReturnValue = (UPawnMovementComponent*)CallFunc_GetMovementComponent_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Movement_Component = (UAmbulatory_MovementComponent*)K2Node_DynamicCast_AsAmbulatory_Movement_Component;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_SendAway_S_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_SendAway_S_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_SendAway_S_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
