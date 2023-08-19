#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class UAblAbility;
class AActor;
class URagdollControlComponent;
#pragma pack(push, 1)
class UABL_NPC_RCT_Petrify_S_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_NPC_RCT_Petrify_S_C* StaticClass();
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_NPC_RCT_Petrify_S(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, URagdollControlComponent* CallFunc_GetComponentByClass_ReturnValue, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
