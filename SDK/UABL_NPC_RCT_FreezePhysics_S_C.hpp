#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class UAblAbility;
class AActor;
class UAnimInstance;
class ANPC_Character;
class UAble_AnimInstance;
#pragma pack(push, 1)
class UABL_NPC_RCT_FreezePhysics_S_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_NPC_RCT_FreezePhysics_S_C* StaticClass();
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_NPC_RCT_FreezePhysics_S(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_1, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAblAbilityContext* K2Node_Event_Context_2, UAble_AnimInstance* K2Node_DynamicCast_AsAble_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
