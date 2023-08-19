#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class USkeletalMeshComponent;
class AActor;
class UAnimInstance;
class UAble_AnimInstance;
#pragma pack(push, 1)
class UABL_Idle_Casual_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Idle_Casual_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_Idle_Casual(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0xd0
#pragma pack(pop)
