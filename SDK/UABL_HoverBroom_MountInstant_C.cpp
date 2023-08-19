#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_HoverBroom_MountInstant_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAble_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
void UABL_HoverBroom_MountInstant_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_MountInstant.ABL_HoverBroom_MountInstant_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
UABL_HoverBroom_MountInstant_C* UABL_HoverBroom_MountInstant_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_MountInstant.ABL_HoverBroom_MountInstant_C");
    return (UABL_HoverBroom_MountInstant_C*)res;
}
void UABL_HoverBroom_MountInstant_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_MountInstant.ABL_HoverBroom_MountInstant_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_HoverBroom_MountInstant_C::Test() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_MountInstant.ABL_HoverBroom_MountInstant_C.Test"));
    struct Params_Test {
    }; // Size: 0x0
    Params_Test params{};
    ProcessEvent(func, &params);
}
void UABL_HoverBroom_MountInstant_C::ExecuteUbergraph_ABL_HoverBroom_MountInstant(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue_1, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance, bool K2Node_DynamicCast_bSuccess, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/HoverBroom/ABL_HoverBroom_MountInstant.ABL_HoverBroom_MountInstant_C.ExecuteUbergraph_ABL_HoverBroom_MountInstant"));
    struct Params_ExecuteUbergraph_ABL_HoverBroom_MountInstant {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context_1; // 0x8
        UAblAbilityContext* K2Node_Event_Context; // 0x10
        UAblAbility* K2Node_Event_NextAbility; // 0x18
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x20
        AActor* CallFunc_GetSelfActor_ReturnValue_1; // 0x28
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x30
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x38
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x40
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1; // 0x48
        UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        char pad_59[0x7];
        UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1; // 0x60
        bool K2Node_DynamicCast_bSuccess_1; // 0x68
    }; // Size: 0x69
    Params_ExecuteUbergraph_ABL_HoverBroom_MountInstant params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue_1 = (AActor*)CallFunc_GetSelfActor_ReturnValue_1;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_GetAnimInstance_ReturnValue_1 = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue_1;
    params.K2Node_DynamicCast_AsAble_Anim_Instance = (UAble_AnimInstance*)K2Node_DynamicCast_AsAble_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsAble_Anim_Instance_1 = (UAble_AnimInstance*)K2Node_DynamicCast_AsAble_Anim_Instance_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
