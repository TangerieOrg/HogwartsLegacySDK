#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_HoverBroom_Idle_Break_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAble_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
UABL_HoverBroom_Idle_Break_C* UABL_HoverBroom_Idle_Break_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C");
    return (UABL_HoverBroom_Idle_Break_C*)res;
}
void UABL_HoverBroom_Idle_Break_C::ExecuteUbergraph_ABL_HoverBroom_Idle_Break(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C.ExecuteUbergraph_ABL_HoverBroom_Idle_Break"));
    struct Params_ExecuteUbergraph_ABL_HoverBroom_Idle_Break {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context_1; // 0x8
        UAblAbilityContext* K2Node_Event_Context; // 0x10
        UAblAbility* K2Node_Event_NextAbility; // 0x18
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x20
        AActor* CallFunc_GetSelfActor_ReturnValue_1; // 0x28
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x7];
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x48
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x50
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1; // 0x58
        UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance; // 0x60
        bool K2Node_DynamicCast_bSuccess_1; // 0x68
        char pad_69[0x7];
        UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1; // 0x70
        bool K2Node_DynamicCast_bSuccess_2; // 0x78
    }; // Size: 0x79
    Params_ExecuteUbergraph_ABL_HoverBroom_Idle_Break params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue_1 = (AActor*)CallFunc_GetSelfActor_ReturnValue_1;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_GetAnimInstance_ReturnValue_1 = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue_1;
    params.K2Node_DynamicCast_AsAble_Anim_Instance = (UAble_AnimInstance*)K2Node_DynamicCast_AsAble_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_DynamicCast_AsAble_Anim_Instance_1 = (UAble_AnimInstance*)K2Node_DynamicCast_AsAble_Anim_Instance_1;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    ProcessEvent(func, &params);
}
void UABL_HoverBroom_Idle_Break_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_HoverBroom_Idle_Break_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_Idle_Break.ABL_HoverBroom_Idle_Break_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
