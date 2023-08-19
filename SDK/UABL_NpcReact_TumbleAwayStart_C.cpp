#include "AActor.hpp"
#include "ACharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NpcReact_TumbleAwayStart_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UAnimInstance.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UFunction.hpp"
void UABL_NpcReact_TumbleAwayStart_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_TumbleAwayStart.ABL_NpcReact_TumbleAwayStart_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
UABL_NpcReact_TumbleAwayStart_C* UABL_NpcReact_TumbleAwayStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_TumbleAwayStart.ABL_NpcReact_TumbleAwayStart_C");
    return (UABL_NpcReact_TumbleAwayStart_C*)res;
}
void UABL_NpcReact_TumbleAwayStart_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_TumbleAwayStart.ABL_NpcReact_TumbleAwayStart_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NpcReact_TumbleAwayStart_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_TumbleAwayStart.ABL_NpcReact_TumbleAwayStart_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NpcReact_TumbleAwayStart_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_TumbleAwayStart.ABL_NpcReact_TumbleAwayStart_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NpcReact_TumbleAwayStart_C::ExecuteUbergraph_ABL_NpcReact_TumbleAwayStart(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, UAblAbilityContext* K2Node_Event_Context_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, AActor* CallFunc_GetSelfActor_ReturnValue_1, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_2, ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_3, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue_2, AActor* CallFunc_GetSelfActor_ReturnValue_3, ACharacter* K2Node_DynamicCast_AsCharacter_2, bool K2Node_DynamicCast_bSuccess_4, ACharacter* K2Node_DynamicCast_AsCharacter_3, bool K2Node_DynamicCast_bSuccess_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_TumbleAwayStart.ABL_NpcReact_TumbleAwayStart_C.ExecuteUbergraph_ABL_NpcReact_TumbleAwayStart"));
    struct Params_ExecuteUbergraph_ABL_NpcReact_TumbleAwayStart {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context_3; // 0x8
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x10
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x18
        UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        ACharacter* K2Node_DynamicCast_AsCharacter; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        char pad_39[0x7];
        UAblAbilityContext* K2Node_Event_Context_2; // 0x40
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1; // 0x48
        AActor* CallFunc_GetSelfActor_ReturnValue_1; // 0x50
        UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance_1; // 0x58
        bool K2Node_DynamicCast_bSuccess_2; // 0x60
        char pad_61[0x7];
        ACharacter* K2Node_DynamicCast_AsCharacter_1; // 0x68
        bool K2Node_DynamicCast_bSuccess_3; // 0x70
        char pad_71[0x7];
        UAblAbilityContext* K2Node_Event_Context_1; // 0x78
        UAblAbilityContext* K2Node_Event_Context; // 0x80
        UAblAbility* K2Node_Event_NextAbility; // 0x88
        AActor* CallFunc_GetSelfActor_ReturnValue_2; // 0x90
        AActor* CallFunc_GetSelfActor_ReturnValue_3; // 0x98
        ACharacter* K2Node_DynamicCast_AsCharacter_2; // 0xa0
        bool K2Node_DynamicCast_bSuccess_4; // 0xa8
        char pad_a9[0x7];
        ACharacter* K2Node_DynamicCast_AsCharacter_3; // 0xb0
        bool K2Node_DynamicCast_bSuccess_5; // 0xb8
    }; // Size: 0xb9
    Params_ExecuteUbergraph_ABL_NpcReact_TumbleAwayStart params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Anim_Instance = (UBiped_AnimInstance*)K2Node_DynamicCast_AsBiped_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsCharacter = (ACharacter*)K2Node_DynamicCast_AsCharacter;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.CallFunc_GetAnimInstance_ReturnValue_1 = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue_1;
    params.CallFunc_GetSelfActor_ReturnValue_1 = (AActor*)CallFunc_GetSelfActor_ReturnValue_1;
    params.K2Node_DynamicCast_AsBiped_Anim_Instance_1 = (UBiped_AnimInstance*)K2Node_DynamicCast_AsBiped_Anim_Instance_1;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.K2Node_DynamicCast_AsCharacter_1 = (ACharacter*)K2Node_DynamicCast_AsCharacter_1;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetSelfActor_ReturnValue_2 = (AActor*)CallFunc_GetSelfActor_ReturnValue_2;
    params.CallFunc_GetSelfActor_ReturnValue_3 = (AActor*)CallFunc_GetSelfActor_ReturnValue_3;
    params.K2Node_DynamicCast_AsCharacter_2 = (ACharacter*)K2Node_DynamicCast_AsCharacter_2;
    params.K2Node_DynamicCast_bSuccess_4 = (bool)K2Node_DynamicCast_bSuccess_4;
    params.K2Node_DynamicCast_AsCharacter_3 = (ACharacter*)K2Node_DynamicCast_AsCharacter_3;
    params.K2Node_DynamicCast_bSuccess_5 = (bool)K2Node_DynamicCast_bSuccess_5;
    ProcessEvent(func, &params);
}
