#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class UAblAbility;
class AActor;
class ANPC_Character;
#pragma pack(push, 1)
class UABL_NPC_RCT_PetrifyInAir_S_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_NPC_RCT_PetrifyInAir_S_C* StaticClass();
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_NPC_RCT_PetrifyInAir_S(int32_t EntryPoint, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, AActor* CallFunc_GetSelfActor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xe8
#pragma pack(pop)
