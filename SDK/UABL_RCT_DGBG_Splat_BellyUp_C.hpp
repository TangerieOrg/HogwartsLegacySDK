#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
class ABP_Enemy_Character_C;
#pragma pack(push, 1)
class UABL_RCT_DGBG_Splat_BellyUp_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_RCT_DGBG_Splat_BellyUp_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_RCT_DGBG_Splat_BellyUp(int32_t EntryPoint, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetOwner_ReturnValue, ABP_Enemy_Character_C* K2Node_DynamicCast_AsBP_Enemy_Character, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xe8
#pragma pack(pop)
