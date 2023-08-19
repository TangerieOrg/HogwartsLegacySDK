#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class USkeletalMeshComponent;
class AActor;
class UAnimInstance;
class ABiped_Player;
class UAble_AnimInstance;
#pragma pack(push, 1)
class UABL_HoverBroom_Idle_Break_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_HoverBroom_Idle_Break_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_HoverBroom_Idle_Break(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_2);
}; // Size: 0xd0
#pragma pack(pop)
