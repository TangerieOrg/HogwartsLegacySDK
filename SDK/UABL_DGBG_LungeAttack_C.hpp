#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
class ABP_Dugbog_C;
#pragma pack(push, 1)
class UABL_DGBG_LungeAttack_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_DGBG_LungeAttack_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_DGBG_LungeAttack(int32_t EntryPoint, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetOwner_ReturnValue, ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xd0
#pragma pack(pop)
