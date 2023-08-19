#pragma once
#include <cstdint>
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
class ABP_Enemy_Character_C;
#pragma pack(push, 1)
class UABL_DGBG_TongueWhipAttack_Backup_C : public UAblAbility {
public:
    static UABL_DGBG_TongueWhipAttack_Backup_C* StaticClass();
    bool CustomCanBranchTo0(UAblAbilityContext* Context, AActor* CallFunc_GetOwner_ReturnValue, ABP_Enemy_Character_C* K2Node_DynamicCast_AsBP_Enemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_WasAttackParried_ReturnValue);
}; // Size: 0xc8
#pragma pack(pop)
