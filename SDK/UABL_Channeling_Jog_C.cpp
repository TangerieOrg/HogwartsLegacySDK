#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Channeling_Jog_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAble_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
UABL_Channeling_Jog_C* UABL_Channeling_Jog_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/AttackAnticipation/ABL_Channeling_Jog.ABL_Channeling_Jog_C");
    return (UABL_Channeling_Jog_C*)res;
}
void UABL_Channeling_Jog_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/PartialBody/AttackAnticipation/ABL_Channeling_Jog.ABL_Channeling_Jog_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_Channeling_Jog_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/PartialBody/AttackAnticipation/ABL_Channeling_Jog.ABL_Channeling_Jog_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Channeling_Jog_C::ExecuteUbergraph_ABL_Channeling_Jog(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/PartialBody/AttackAnticipation/ABL_Channeling_Jog.ABL_Channeling_Jog_C.ExecuteUbergraph_ABL_Channeling_Jog"));
    struct Params_ExecuteUbergraph_ABL_Channeling_Jog {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x18
        UAblAbilityContext* K2Node_Event_Context_1; // 0x20
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x28
        AActor* CallFunc_GetSelfActor_ReturnValue_1; // 0x30
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x38
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x40
        UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance; // 0x48
        bool K2Node_DynamicCast_bSuccess; // 0x50
        char pad_51[0x7];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1; // 0x58
        UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1; // 0x60
        bool K2Node_DynamicCast_bSuccess_1; // 0x68
    }; // Size: 0x69
    Params_ExecuteUbergraph_ABL_Channeling_Jog params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue_1 = (AActor*)CallFunc_GetSelfActor_ReturnValue_1;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.K2Node_DynamicCast_AsAble_Anim_Instance = (UAble_AnimInstance*)K2Node_DynamicCast_AsAble_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetAnimInstance_ReturnValue_1 = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue_1;
    params.K2Node_DynamicCast_AsAble_Anim_Instance_1 = (UAble_AnimInstance*)K2Node_DynamicCast_AsAble_Anim_Instance_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
