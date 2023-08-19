#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
class ABiped_Player;
class ABP_Dugbog_C;
#pragma pack(push, 1)
class UABL_DGBG_Idle_HideA_C : public UAblAbility {
public:
    static UABL_DGBG_Idle_HideA_C* StaticClass();
    void OnCustomEvent0(UAblAbilityContext* Context, FName& EventName);
    void OnAbilityStart0(UAblAbilityContext* Context, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsStationary_ReturnValue);
}; // Size: 0xc8
#pragma pack(pop)
