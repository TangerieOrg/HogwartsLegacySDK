#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class ACharacter;
class UAblAbilityContext;
class UAblAbility;
class UAnimInstance;
class AActor;
class UBiped_AnimInstance;
#pragma pack(push, 1)
class UABL_NpcReact_FallShort_L_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    ACharacter* TempCharRef; // 0xe8
    static UABL_NpcReact_FallShort_L_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_NpcReact_FallShort_L(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, UAblAbilityContext* K2Node_Event_Context_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, AActor* CallFunc_GetSelfActor_ReturnValue_1, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_2, ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_3, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue_2, AActor* CallFunc_GetSelfActor_ReturnValue_3, ACharacter* K2Node_DynamicCast_AsCharacter_2, bool K2Node_DynamicCast_bSuccess_4, ACharacter* K2Node_DynamicCast_AsCharacter_3, bool K2Node_DynamicCast_bSuccess_5);
}; // Size: 0xf0
#pragma pack(pop)
