#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
class ABP_Dugbog_C;
#pragma pack(push, 1)
class UABL_DGBG_Alert_Aggro_C : public UAblAbility {
public:
    static UABL_DGBG_Alert_Aggro_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xc8
#pragma pack(pop)
